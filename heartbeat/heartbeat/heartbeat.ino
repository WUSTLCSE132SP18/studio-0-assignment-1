void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
int x=0;
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(x);
Serial.println(" seconds have elapsed.");
delay(1000);
x=x+1000;
}
