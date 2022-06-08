// Código Ejemplo
int Led_Pin = 3;
int Led_Pin1 = 9;
int Pot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;
void setup()
{
pinMode(Led_Pin, OUTPUT);
pinMode(Led_Pin1, OUTPUT);
Test_Led();
}
void loop()
{
sensorValue = analogRead(Pot_Pin);
outputValue = map(sensorValue, 0, 1023, 255, 0);
analogWrite(Led_Pin, outputValue);
analogWrite(Led_Pin1, outputValue);
}
void Test_Led()
{
digitalWrite(Led_Pin, HIGH);
delay(500);
digitalWrite(Led_Pin, LOW);
delay(500);
digitalWrite(Led_Pin, HIGH);
delay(500);
digitalWrite(Led_Pin, LOW);
delay(500);
digitalWrite(Led_Pin, HIGH);
delay(500);
digitalWrite(Led_Pin, LOW);
}
