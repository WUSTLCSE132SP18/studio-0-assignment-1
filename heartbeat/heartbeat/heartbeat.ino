double x=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(x);
digitalWrite(13,HIGH);
Serial.println(" seconds have elapsed.");
delay(500);
digitalWrite(13, LOW);
delay(500);
x=millis()/1000.0;
}
