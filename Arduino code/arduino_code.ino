#define LED1  13
#define LED2  10
#define LED3  9

void setup() {

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1,HIGH);
  delay(200);
  digitalWrite(LED2,HIGH);
  delay(200);
  digitalWrite(LED3,HIGH);
  delay(200);
  digitalWrite(LED1,LOW);
  delay(300);
  digitalWrite(LED2,LOW);
  delay(300);
  digitalWrite(LED3,LOW);
  delay(300 );
}
