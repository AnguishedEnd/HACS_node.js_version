//Required Modules
var io = require('socket.io');
var SerialPort = require('serialport').SerialPort;

//Serial setup
var portName = '/dev/ttyACM0';
var port = new SerialPort(portName, {
	baudrate: 9600
});

//Establish socket
var socket = io.listen(8080);
//io.set('log level', 1); //prints debugging code
socket.on('connection', function (client) {
	console.log('connected to client');
	
	var temp_val = '';
	port.on('data', function(data) {
		temp_val = data.toString();
		client.send(temp_val);
	});
	
	client.on('message', function (rx_message) {
		console.log(rx_message);
	});
	
	client.on('disconnect', function (client) {
		console.log('client disconnected');
	});
});
