  #include <ESP32Servo.h>

int SVO = 10;
const int LIGHT = 4;
int tempL = 0;
int degree = 0;
Servo spinny;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  spinny.attach(SVO);
  pinMode(LIGHT, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  tempL = analogRead(LIGHT);
  Serial.print("This is the volt value  ");
  Serial.println(tempL);
  degree = map(tempL, 4095, 0, 22, 131);
  Serial.print("This is the degree value");
  Serial.println(degree);
  analogWrite(SVO, degree);
  delay(50);
}
