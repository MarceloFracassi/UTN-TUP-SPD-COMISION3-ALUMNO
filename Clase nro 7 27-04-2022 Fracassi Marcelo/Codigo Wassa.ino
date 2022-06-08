// Codigo Ejemplo 
int Led_Pin = 3;
int Led_Pin1 = 5;
int Led_Pin2 = 7;
int Fot_Pin = A0; 
int sensorValue = 0; 
int outputValue = 0;  
void setup() 
{   
  Serial.begin(9600);   
 pinMode(Led_Pin, OUTPUT);
 pinMode(Led_Pin1, OUTPUT);
  pinMode(Led_Pin2, OUTPUT);
}  
void loop() 
{   
  digitalWrite(Led_Pin, HIGH);
  digitalWrite(Led_Pin1, LOW);
  digitalWrite(Led_Pin2, LOW);
  sensorValue = analogRead(Fot_Pin);   
  outputValue = map(sensorValue, 0, 1023, 0, 255);   
  analogWrite(Led_Pin, outputValue);
  analogWrite(Led_Pin1, outputValue);  
  Serial.print("Lectura: ");   
  Serial.println(sensorValue);   
  Serial.print("Mapeado: ");   
  Serial.println(outputValue);   
  delay(400);   
  digitalWrite(Led_Pin, LOW);
  digitalWrite(Led_Pin2, HIGH);
  digitalWrite(Led_Pin1, HIGH);  
  delay(400); 
}  
