// Corrección Alan 30/04/2024: Mal. No cumple la consigna. Lo vimos en clase, debería simular la suma en binario, todos los leds deben parpadear a la vez a su ritmo.

#define led1 13
#define led2 12
#define led3 10
#define led4 4
#define led5 2
void setup() 
  {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led2, HIGH);
  delay(2000);
  digitalWrite(led2, LOW);
  delay(1000);
  digitalWrite(led3, HIGH);
  delay(4000);
  digitalWrite(led3, LOW);
  delay(1000);
  digitalWrite(led4, HIGH);
  delay(8000);
  digitalWrite(led4, LOW);
  delay(1000);
  digitalWrite(led5, HIGH);
  delay(16000);
  digitalWrite(led5, LOW);
  delay(1000);
