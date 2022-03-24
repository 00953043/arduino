void setup() {
  Serial.begin(9600); 
   Serial1.begin(9600);
}

void loop() {
  if (Serial.available()) {
   Serial.write(Serial.read());
  }
   if(Serial.available()){
    Serial.write(Serial.read());
  }
}
