# HACS - Home Automation Control System
====

## DESCRIPTION:
A raspberry pi is set up as a webserver and connected to it via USB is an
Arduino UNO. Users connect to the raspberry pi via a web interface.
On the webpage users can read and set both the digital and analogue pins of the Arduino.
Initially I will display the temperature of a room to start of with. 


##REPOSITORY:

/Arduino - Contains the sketch to upload to the Arduino UNO 
/RaspberryPi_Server - Contains source for everything you need to put on your server


##WHAT YOU NEED:
Raspberry Pi Model B
Arduino Uno
Installation of Apache+PHP on the Raspberry Pi
Installation of node.js on Raspberry Pi
Installation of npm (node packaged modules) on Raspberry Pi
Installation of node.js module socket.io on Raspberry Pi


##REFERENCES:
Some of the source code has been used from various other projects from around the web

Original project is here
1. http://www.codeproject.com/Articles/389676/Arduino-and-the-Web-using-NodeJS-and-SerialPort2

How to use socket.io
2. http://webdevrefinery.com/forums/topic/7871-node-how-to-use-socketio-to-push-realtime-events/
