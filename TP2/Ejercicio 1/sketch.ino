int  a = 13;
int  b = 12;
int  c = 11;
int  d = 10;
int  e = 9;
int  f = 8;
int  g = 7;
int  boton_1 = 6;
int  boton_2 = 5;
int  display = 0;

void setup() {

  for(int i=13;i<=7;i++){
  pinMode(i, OUTPUT);
}
  pinMode(boton_1, INPUT);
  pinMode(boton_2, INPUT);
}

void loop(){

//-------->BOTONES<--------//
  if(digitalRead(boton_1)==HIGH){
  display++;
  delay(300);

}
  if(digitalRead(boton_2)==HIGH){
  display--;
  delay(300);
}

//-------->LIMITES<--------//
  if(display>9){
  display=0;
}

  if(display<0){
  display=9;
}

//-------->CONTADOR 0<--------//
  if(display==0){
  cero();

}
//-------->CONTADOR 1<--------//
  if(display==1){
  uno();

}
//-------->CONTADOR 2<--------//
  if(display==2){
  dos();

}
//-------->CONTADOR 3<--------//
  if(display==3){
  tres();

}
//-------->CONTADOR 4<--------//
  if(display==4){
  cuatro();

}
//-------->CONTADOR 5<--------//
  if(display==5){
  cinco();

}
//-------->CONTADOR 6<--------//
  if(display==6){
  seis();

}

//-------->CONTADOR 7<--------//
  if(display==7){
  siete();
}

//-------->CONTADOR 8<--------//
  if(display==8){
  ocho();
}

//-------->CONTADOR 9<--------//
  if(display==9){
  nueve();
}
}

//-------->FUNCIONES<--------//

void cero(){
apagar();
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(e,HIGH);
digitalWrite(d,HIGH);
digitalWrite(c, HIGH);
digitalWrite(f, HIGH);
}

void uno(){
apagar();
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
}

void dos(){
apagar();
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(e,HIGH);
digitalWrite(d,HIGH);
}

void tres(){
apagar();
 digitalWrite(a,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(g,HIGH);
 digitalWrite(c,HIGH);
 digitalWrite(d,HIGH);
}

void cuatro(){
 apagar();
 digitalWrite(f,HIGH);
 digitalWrite(b,HIGH);
 digitalWrite(g,HIGH);
 digitalWrite(c,HIGH);
}

void cinco(){
  apagar();
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}

void seis(){
  apagar();
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
}

void siete(){
  apagar();
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
}

void ocho(){
  apagar();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void nueve(){
  apagar();
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
}
void apagar(){
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
}