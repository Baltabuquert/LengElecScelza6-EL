// Corrección Alan 30/04/2024: Bien
// Defnieieron boton pero no lo usaron en el loop
// falta doble if en el botón para evitar efecto mecánico, ver material de Xhendra. 

#define ROJO 10 
#define VERDE 9 
#define BOTON 12
void setup()
{
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(BOTON, INPUT);
}

void loop()
{
  if(digitalRead(12) ==HIGH){
  digitalWrite(ROJO, LOW);
  digitalWrite(VERDE, LOW);
  }else{
  digitalWrite(ROJO, HIGH);
  digitalWrite(VERDE, HIGH);
  }

}
