/* Copyright 2019 Stanford University
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
* Applies to all (int argc, char** argv) signatures
* Calculates argc from argv
*/
%typemap(in) (int argc, char **argv) {
    int i = 0;
    $1 = jenv->GetArrayLength($input);
    $2 = (char **) malloc(($1+1)*sizeof(char *));
    /* make a copy of each string */
    for (i = 0; i<$1; i++) {
        jstring j_string = (jstring)jenv->GetObjectArrayElement($input, i);
        const char * c_string = jenv->GetStringUTFChars(j_string, 0);
        $2[i] = (char*) malloc((strlen(c_string)+1)*sizeof(char));
        strcpy($2[i], c_string);
        jenv->ReleaseStringUTFChars(j_string, c_string);
        jenv->DeleteLocalRef(j_string);
    }
    $2[i] = 0;
}

%typemap(freearg) (int argc, char **argv) {
    int i;
    for (i=0; i<$1-1; i++)
        free($2[i]);
        free($2);
}

%typemap(jni) (int argc, char **argv) "jobjectArray"
%typemap(jtype) (int argc, char **argv) "String[]"
%typemap(jstype) (int argc, char **argv) "String[]"

%typemap(javain) (int argc, char **argv) "$javainput"


/*
* Copy version of byte[] => char*
*/
%typemap(jni) char *BYTE "jbyteArray"
%typemap(jtype) char *BYTE "byte[]"
%typemap(jstype) char *BYTE "byte[]"
%typemap(in) char *BYTE {
     $1 = (char *) JCALL2(GetByteArrayElements, jenv, $input, 0);
}

%typemap(argout) char *BYTE {
    JCALL3(ReleaseByteArrayElements, jenv, $input, (jbyte *) $1, 0); 
}

%typemap(javain) char *BYTE "$javainput"

%typemap(freearg) char *BYTE ""


/*
* Non-copy version of byte[] => char*
*/
%typemap(jni) char *NOCOPYBYTE "jbyteArray"
%typemap(jtype) char *NOCOPYBYTE "byte[]"
%typemap(jstype) char *NOCOPYBYTE "byte[]"
%typemap(in) char *NOCOPYBYTE {
    $1 = (char *) JCALL2(GetPrimitiveArrayCritical, jenv, $input, 0);
    if ($1 == NULL) SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException,"GetPrimitiveArrayCritical returned NULL in output_ptr typemap");
}

%typemap(argout) char *NOCOPYBYTE {
    JCALL3(ReleasePrimitiveArrayCritical, jenv, $input, (jbyte *) $1, 0); 

}

%typemap(javain) char *NOCOPYBYTE "$javainput"

%typemap(freearg) char *NOCOPYBYTE ""


/*
* size_t* => long for input_bytes
*/
%typemap(jni) size_t *LONG "jlongArray"
%typemap(jtype) size_t *LONG "long[]"
%typemap(jstype) size_t *LONG "long[]"
%typemap(in) size_t *LONG {
    $1 = (size_t *) JCALL2(GetPrimitiveArrayCritical, jenv, $input, 0);
    if ($1 == NULL) SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException,"GetPrimitiveArrayCritical returned NULL in input_bytes typemap");

}

%typemap(argout) size_t *LONG {
    JCALL3(ReleasePrimitiveArrayCritical, jenv, $input, (jbyte *) $1, 0); 
}

%typemap(javain) size_t *LONG "$javainput"

%typemap(freearg) size_t *LONG ""


/*
* Array[Array[Byte]] => char** 
* Applies to all const char** input_ptr  
*/
%typemap(in) (const char ** input_ptr) {

    int len = jenv->GetArrayLength($input);
    $1 = (char **) malloc(len * sizeof(char *));
    if ($1 == NULL) SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException,"malloc returned NULL in input_ptr typemap");
    for (int i = 0; i < len; i++) {
        jbyteArray j_bytearray = (jbyteArray)jenv->GetObjectArrayElement($input, i); 
        $1[i] = (char *) JCALL2(GetPrimitiveArrayCritical, jenv, j_bytearray, 0);
        if ($1[i] == NULL) SWIG_JavaThrowException(jenv, SWIG_JavaRuntimeException,"GetPrimitiveArrayCritical returned NULL in input_ptr typemap");
    }
}

%typemap(freearg) (const char ** input_ptr) { 
    int len = jenv->GetArrayLength($input);

    for (int i=0; i < len; i++) { /* input to getbyteArrayElements, output of get, 0*/
        jbyteArray j_bytearray = (jbyteArray)jenv->GetObjectArrayElement($input, i);
        JCALL3(ReleasePrimitiveArrayCritical, jenv, j_bytearray, (jbyte *) $1[i], 0); 
    }
    free($1);
}

%typemap(jni) (const char ** input_ptr) "jobjectArray"
%typemap(jtype) (const char ** input_ptr) "byte[][]"
%typemap(jstype) (const char ** input_ptr) "byte[][]"

%typemap(javain) (const char ** input_ptr) "$javainput"

