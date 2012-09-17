# HACS - Home Automation Control System
====

## DESCRIPTION:
A Raspberry Pi (model B) is set up as a webserver and connected to it via USB is an
Arduino UNO. Users connect to the RPi via a web interface.
On the webpage, users can both read and control pins of the Arduino.


##REPOSITORY:

* /Arduino - Contains all source code related to the Arduino
* /RaspberryPi_Server - Contains source for everything you need to put on your web server


##WHAT YOU NEED:
* Raspberry Pi Model B
* Arduino
* Installation of Apache+PHP on the RPi
* Installation of node.js on Raspberry Pi (v0.6.19)
* Installation of npm (node packaged modules) on RPi (v1.1.4)
* Installation of node.js module socket.io on RPi (v0.9.10)
* Installation of node.js module node-serialport on RPi (v1.0.6)


##REFERENCES:
Some of the source code has been used from various other projects from around the web

Original project is here
1. http://www.codeproject.com/Articles/389676/Arduino-and-the-Web-using-NodeJS-and-SerialPort2

How to use socket.io
2. http://webdevrefinery.com/forums/topic/7871-node-how-to-use-socketio-to-push-realtime-events/
