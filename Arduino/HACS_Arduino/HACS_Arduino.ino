/*Home Automation Control System (HACS) by COLIN LOBO
  
  WHAT YOU NEED:
  1 - 38GZ TEMPERATURE SENSOR
  
  REFERENCES:
  1. http://www.ladyada.net/learn/sensors/tmp36.html
  2. http://www.sparkfun.com/tutorial/AIK/ARDX-EG-SPAR-WEB.pdf (Page 26)
*/

//PIN ASSIGNMENTS
const int tempPin = A0; //Vout of TMP36 connected to pin A0

void setup() {
  Serial.begin(9600);
}

void loop() { 
  int temp_value = getTemp();
  Serial.print(temp_value);  
  delay(1000);
}

float getTemp() {
  int tempReading = analogRead(tempPin); //ADC reading (value between 0-1023)
  float voltage = tempReading * 5.0;
  voltage /= 1023.0; //Convert ADC reading (0-1023) to a voltage reading
  float temperature = (voltage - 0.5) * 100; //offset by 500mV to get negative temperatures. Multiply by 100 to get degC (each 10mV is 1 degC)
  return temperature;
}
