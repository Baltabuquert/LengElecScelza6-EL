// Corrección Alan 30/04/2024: Bien

#include <TM1637Display.h>

#define Sumar 3
#define Reiniciar 4

int Minutos = 0;
int Segundos = 0;
int CLK = 1;
int DIO = 2;

TM1637Display display(CLK, DIO);

void setup() {
  pinMode(Sumar,INPUT);
  pinMode(Reiniciar,INPUT);

  display.setBrightness(0x0a); 


}

void loop() {

 display.showNumberDec(Minutos * 100 + Segundos);

  Segundos++;
  if (Segundos == 60) {
    Segundos = 0;
    Minutos++;
    if (Minutos == 60) {
      Minutos = 0; 
    }
  }

  delay(1000);    

  if (digitalRead(Sumar)==1){
    delay(50);

    if(digitalRead(Sumar)==1)
    {
    Minutos++;
    }
  }

  if (digitalRead(Reiniciar)==1){
    delay(50);

    if(digitalRead(Reiniciar)==1)
    {
    Minutos = 0;
    Segundos = 0;
    }
  }



}
