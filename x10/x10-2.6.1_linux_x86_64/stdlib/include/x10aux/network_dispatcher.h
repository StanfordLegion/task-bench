/*
 *  This file is part of the X10 project (http://x10-lang.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright IBM Corporation 2006-2016.
 */

#ifndef X10AUX_NETWORK_DISPATCHER_H
#define X10AUX_NETWORK_DISPATCHER_H

#include <x10aux/config.h>
#include <x10aux/network.h>
#include <x10aux/RTT.h>
#include <x10aux/chunked_array.h>

namespace x10 { namespace lang { class Reference; } }

namespace x10aux {

    enum ClosureKind {
        CLOSURE_KIND_ASYNC_CLOSURE = 1,    // a closure whose body should be enqueued for latter execution as an Activity
        CLOSURE_KIND_REMOTE_INVOCATION = 2 // a closure whose body should be directly within network's receive_async
    };

    /*
     * General architecture.
     *
     * During C++ static initialization, the NetworkDispatcher accumulates
     * functions (remote asyncs, puts, gets)that need to be registered
     * with the x10rt layer. Once the program is running and x10rt is ready
     * to be initialized, it registers all of the accumulated functions.
     *
     * It also maintains a mapping from the message ids assigned by x10rt
     * to the network ids it assigned as functions were registered.
     * This mapping can be used to go back and forth between x10rt msg_ids
     * and NetworkDispatcher network ids (nids)
     */
    class NetworkDispatcher {
      protected:
        static NetworkDispatcher *it;

        struct AsyncData {
            Deserializer deser;
            CUDAPre cuda_pre;
            CUDAPost cuda_post;
            const char *cubin;
            const char *kernel;
            ClosureKind closure_kind;
        };
        struct PutData {
            Notifier put_notifier;
            Notifier cuda_put_notifier;
        };
        struct GetData {
            Notifier get_notifier;
            Notifier cuda_get_notifier;
        };

        enum Tag { INVALID = 0, ASYNC, PUT, GET };
        
    public:
        struct Data {
            union {
                AsyncData async;
                PutData put;
                GetData get;
            };
            Tag tag;
            x10aux::msg_type mt;
        };

      protected:
        // primary data entry, indexed by nid
        chunked_array<Data> data;

        // mapping from mt to nid (indexed by mt, data is nid>
        chunked_array<serialization_id_t> mt_to_nid;
        
        // next available nid 
        size_t next_id; 

      public:
        NetworkDispatcher () : data(true), mt_to_nid(true), next_id(1) { }

        static void registerHandlers(void);
        void registerHandlers_(void);

        /*
         * Valid for all types of messages
         */
        static inline x10aux::msg_type getMsgType(serialization_id_t id) {
            return it->getMsgType_(id);
        }
        x10aux::msg_type getMsgType_(serialization_id_t id);

        static inline serialization_id_t getNetworkId(x10aux::msg_type id) {
            return it->getNetworkId_(id);
        }
        serialization_id_t getNetworkId_(x10aux::msg_type id);


        /*
         * Valid for Async
         */
        
        static serialization_id_t addNetworkDeserializer (Deserializer deser, ClosureKind kind,
                                                          CUDAPre cuda_pre = NULL,
                                                          CUDAPost cuda_post = NULL,
                                                          const char *cubin = NULL,
                                                          const char *kernel = NULL);
        serialization_id_t addNetworkDeserializer_ (Deserializer deser, ClosureKind kind,
                                                    CUDAPre cuda_pre = NULL,
                                                    CUDAPost cuda_post = NULL,
                                                    const char *cubin = NULL,
                                                    const char *kernel = NULL);

        static inline CUDAPre getCUDAPre(serialization_id_t id) {
            return it->getCUDAPre_(id);
        }
        CUDAPre getCUDAPre_(serialization_id_t id);

        static inline CUDAPost getCUDAPost(serialization_id_t id) {
            return it->getCUDAPost_(id);
        }
        CUDAPost getCUDAPost_(serialization_id_t id);

        static x10aux::ClosureKind getClosureKind(serialization_id_t id) {
            return it->getClosureKind_(id);
        }
        x10aux::ClosureKind getClosureKind_(serialization_id_t id);

        static inline ::x10::lang::Reference* create(deserialization_buffer &buf, serialization_id_t id) {
            return it->create_(buf, id);
        }
        ::x10::lang::Reference* create_(deserialization_buffer &buf, serialization_id_t id);


        /*
         * Valid for Put
         */
        
        static serialization_id_t addPutFunctions(Notifier notifier, Notifier cuda_notifier);
        serialization_id_t addPutFunctions_(Notifier notifier, Notifier cuda_notifier);

        static inline Notifier getPutNotifier(serialization_id_t id) {
            return it->getPutNotifier_(id);
        }
        Notifier getPutNotifier_(serialization_id_t id);

        static inline Notifier getCUDAPutNotifier(serialization_id_t id) {
            return it->getCUDAPutNotifier_(id);
        }
        Notifier getCUDAPutNotifier_(serialization_id_t id);


        /*
         * Valid for Get
         */

        static serialization_id_t addGetFunctions(Notifier notifier, Notifier cuda_notifier);
        serialization_id_t addGetFunctions_(Notifier notifier,Notifier cuda_notifier);

        static inline Notifier getGetNotifier(serialization_id_t id) {
            return it->getGetNotifier_(id);
        }
        Notifier getGetNotifier_(serialization_id_t id);

        static inline Notifier getCUDAGetNotifier(serialization_id_t id) {
            return it->getCUDAGetNotifier_(id);
        }
        Notifier getCUDAGetNotifier_(serialization_id_t id);
    };
}

#endif
// vim:tabstop=4:shiftwidth=4:expandtab
