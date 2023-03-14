********************************************************
Overview
********************************************************

This is the classic Hello World application, providing a bare-bones example of 
an Arinc 653 application. 

The source of this application is located in Applications/helloWorld_app.

********************************************************
Building the system
********************************************************

To build this example, execute "make release" from a command window within this 
example's root directory.

The top-level makefile invokes the ADE configuration generator to create 
PartitionConfig.cfg in the bank directory based on the Module XML file in 
ConfigData. It then builds the application, placing the resulting executable in 
the bank directory.

********************************************************
Loading/Running the system
********************************************************

To run this example, use AAPLL to load helloworld-Bank then click start.

********************************************************
Expected Output
********************************************************

Application output may be viewed using Partition Console.

<<< Partition 1 >>>

Hello World
