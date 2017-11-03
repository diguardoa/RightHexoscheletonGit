
int value = 0;
int toggle = 0;

void setup() {
  pinMode(13, OUTPUT);
  // put your setup code here, to run once:
 Serial.begin(115200);
}

void loop() {
  toggle = 1-toggle;
  if(toggle == 1)
    digitalWrite(13, HIGH);
  else
    digitalWrite(13,LOW);
  // put your main code here, to run repeatedly:
  value = analogRead(A9);
  Serial.println(value);
  delay(50);
}
