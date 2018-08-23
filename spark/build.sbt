name := "Taskbench"

version := "1.0"

scalaVersion := "2.11.8"

resolvers += Resolver.bintrayIvyRepo("com.eed3si9n", "sbt-plugins")

libraryDependencies ++= Seq(
    "org.apache.spark" %% "spark-sql" % "2.3.0" % "provided"
)

