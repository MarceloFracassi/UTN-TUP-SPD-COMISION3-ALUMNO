// Codigo Ejemplo
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;
const int buzzerPin = 8;
const int ledPin1 = 12;
const int ledPin2 = 13;
int counter = 0;
void setup()
{
//Setup pin modes
pinMode(buzzerPin, OUTPUT);
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}

void loop()
{
//Play first section
firstSection();
//Play second section
secondSection();
//Variant 1
beep(f, 150);
beep(gS, 400);
beep(f, 250);
beep(a, 225);
beep(cH, 300);
beep(a, 175);
beep(cH, 225);
beep(eH, 250);
delay(300);
//Repeat second section
secondSection();
//Variant 2
beep(f, 450);
beep(gS, 100);
beep(f, 275);
beep(cH, 225);
beep(a, 300);
beep(f, 275);
beep(cH, 225);
beep(a, 250);
delay(250);
}

void beep(int note, int duration)
{
//Play tone on buzzerPin
tone(buzzerPin, note, duration);
//Play different LED depending on value of 'counter'
if(counter % 2 == 0)
{
digitalWrite(ledPin1, HIGH);
delay(duration);
digitalWrite(ledPin1, LOW);
} else {
digitalWrite(ledPin2, HIGH);
delay(duration);
digitalWrite(ledPin2, LOW);
}
//Stop tone on buzzerPin
noTone(buzzerPin);
delay(50);
//Increment counter
counter++;
}
void firstSection()
{
beep(a, 200);
beep(a, 200);
beep(a, 300);
beep(f, 250);
beep(cH, 350);
beep(a, 200);
beep(f, 450);
beep(cH, 250);
beep(a, 550);
delay(400);
beep(eH, 200);
beep(eH, 200);
beep(eH, 400);
beep(fH, 750);
beep(cH, 350);
beep(gS, 200);
beep(f, 750);
beep(cH, 750);
beep(a, 250);
delay(300);
}

void secondSection()
{
beep(aH, 300);
beep(a, 400);
beep(a, 250);
beep(aH, 200);
beep(gSH, 225);
beep(gH, 275);
beep(fSH, 225);
beep(fH, 325);
beep(fSH, 150);
delay(425);
beep(aS, 250);
beep(dSH, 300);
beep(dH, 725);
beep(cSH, 675);
beep(cH, 225);
beep(b, 225);
beep(cH, 750);
delay(450);
}
