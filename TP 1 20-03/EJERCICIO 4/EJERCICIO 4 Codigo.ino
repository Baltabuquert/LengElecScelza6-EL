// Corrección Alan 30/04/2024: Bien
// sería bueno tener defines para los tiempos.


#define ROJO 13
#define AMARILLO 12
#define VERDE 11
#define ALTO 10
#define PASE 9
void setup()
{
  pinMode(ROJO, OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(ALTO, OUTPUT);
  pinMode(PASE, OUTPUT);
}

void loop()
{
  digitalWrite(ROJO, HIGH);
  digitalWrite(PASE, HIGH);
  delay(3000);
  digitalWrite(ROJO, LOW);
  digitalWrite(PASE, LOW);
  digitalWrite(AMARILLO, HIGH);
  digitalWrite(ALTO, HIGH);
  delay(1000);
  digitalWrite(AMARILLO, LOW);
  digitalWrite(VERDE, HIGH);
  delay(3000);
  digitalWrite(VERDE, LOW);
  digitalWrite(ALTO, LOW);
 
  }
