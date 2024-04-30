// Corrección Alan 30/04/2024: Bien
// Sería conveniente agregar un #define tiempo 2000

#define ROJO 13
#define VERDE 12
void setup()
{
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop()
{
  digitalWrite(ROJO, HIGH);
  delay(2000); 
  digitalWrite(ROJO, LOW);
  digitalWrite(VERDE, HIGH);
  delay(2000); 
  digitalWrite(VERDE, LOW);
}
