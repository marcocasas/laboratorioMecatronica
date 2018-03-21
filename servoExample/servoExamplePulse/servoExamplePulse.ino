const int pwdPin = 9;
long pulse;

void setup() {
  Serial.begin(9600); 
}

void loop()
{
  pinMode(pwdPin, INPUT);
  pulse = pulseIn(pwdPin,HIGH);
  delay(200);
}
