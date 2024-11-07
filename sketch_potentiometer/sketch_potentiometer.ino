void setup() {
  // put your setup code here, to run once:
  pinMode(34, INPUT);
  Serial.begin(9600); // Indicates rate at which data is comminucated, also starts serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(34); //--> Shows value of voltage from voltimeter connected in pin 34
  int b = map(a, 0, 4095, 0, 255);
  Serial.println(b); //--> it will show value of voltage in serial monitor for each loop
  delay(50);  
}

//ESP32 converts 12 bits, so max value on potentiometer is 2**12 - 1 = 4095 (-1 as value starts from 0)
//analogWrite( pin, value/LOW/HIGH) 0 to 3.7V <--> 0 to 255, where 0 is 0 and 255 is 3.7
//map(value, 0, 4095, 0, 255) --> value is number we want to convert; 0, 4095 is range of voltage; 0, 255 is range of RGB Scale
