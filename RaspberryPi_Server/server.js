//Required Modules
var io = require('socket.io');

//Establish socket
var socket = io.listen(8080)
//io.set('log level', 1); //prints debugging code
socket.on('connection', function (client) {
	console.log('connected to client');
	
	//This is temporary until I get serial working...
	var temp_value = '50';
	setInterval(function(){
		client.send(temp_value)
	}, 2000);
	
	client.on('message', function (rx_message) {
		console.log(rx_message);
	});
	
	client.on('disconnect', function (client) {
		console.log('client disconnected');
	});
});