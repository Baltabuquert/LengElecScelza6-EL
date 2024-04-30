// Corrección Alan 30/04/2024: Bien
// Sería conveniente agregar un #define tiempo 1000

#define ROJO 13
void setup()
{
  pinMode(ROJO, OUTPUT);
}

void loop()
{
  digitalWrite(ROJO, HIGH);
  delay(1000); 
  digitalWrite(ROJO, LOW);
  delay(1000); 
}
