SOLAS Match Worker Daemon
============================

## What is this?

This is the back end to the SOLAS Match web application. It is used
to process things asynchronously. It connects to the same MySQL DB 
as the main web application and communicates asynchronously using
RabbitMQ. This is an AMQP based message queueing architecture for
cross platform IPC. Once the worker daemon has been started it
connects to the RabbitMQ server mentioned in the conf file and starts
processing any messages found. It is massively parralelised with each
consumer running on a different thread. Once a message has been 
consumed a new thread is launched into a locally managed threadpool
to handle the message while the original thread goes back to polling
RabbitMQ.

# License notice

This software is licensed under the terms of the GNU LESSER GENERAL PUBLIC LICENSE
                        Version 3, 29 June 2007
For full terms see License.txt or http://www.gnu.org/licenses/lgpl-3.0.txt

## System Requirements

The SOLAS Match Worker Daemon was built using Qt 4.8 on Ubuntu 12.04
but it should work on a cross platform environment.

# Contact

Contact:

    Reinhard Schäler <reinhard.schaler@ul.ie>
  
Coded by:
    
    David O Carroll <david.ocarroll@ul.ie>

# Installation

A number of external libraries are required to run this daemon:

## Dependencies

The RabbitMQ C library can be found at:

    https://github.com/alanxz/rabbitmq-c

Follow the instruction in the README file to install.

A wrapper for the RabbitMQ C library can be found at:

    https://github.com/akalend/amqpcpp

The tested version is at commit b5d00628c80e3c4c0c8d6d0e8b272510138a42fd

Follow the instructions in the README to compile.

Once compiled move the library file (.a) to /usr/local/lib

Move the header files (found in ./include/) to /usr/local/include

To install Qxt run: sudo apt-get install libqxt-dev

To install ctemplate run:
* sudo apt-get install libctemplate-dev libctemplate0

To install protobufs:
* Run sudo apt-get install libprotobuf7 protobuf-compiler protobuf-c-compiler libprotobuf-dev

To install QMySQL driver:
sudo apt-get install libqt4-sql-mysql

## Configuration File

* Edit ./conf.ini with your details.
* The database section specifies MySQL DB connection settings
* Enter your MySQL connection settings here.
* The messaging section contains RabbitMQ related connection settings
* Enter your RabbitMQ details here
* The site section is currently unused
* Copy ./conf.ini to /etc/SOLAS-Match/conf.ini
* Also symbolically link the templates directory to /etc/SOLAS-Match/templates

## Logs

By default the output will be sent to stdout. It is possible to specify a file in conf.ini 
where all output will be written. Specify the path to the file under site.log. Make sure 
the file specified is writable, otherwise output will continue to be printed to stdout.

## Compiling and installing

* To edit the source code open the project file ./SOLASMatchWorkerDaemon.pro
in QtCreator.
* Run the project to compile and start it. 
