const int LED = 9;

int brightness = 0;   
int fadeAmount = 1;    

void setup() {
  pinMode (LED, OUTPUT);  
  
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(0);
  if(sensorValue < 600 )
  {
    
    brightness = brightness + fadeAmount;
    delay(80);
    analogWrite(LED, brightness);
  }
  else
  {
    analogWrite(LED, 0);
    brightness = 0;
  } 

  delay(10);

  Serial.println(sensorValue);
}
