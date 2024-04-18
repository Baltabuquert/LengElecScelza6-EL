int  a =13;
int  b =12;
int  c =11;
int  d =10;
int  e =9;
int  f= 8;
int  g =7;

//-----------definicion de las unidades-----------//
int  a2= 6;
int  b2 =5;
int  c2= 4;
int  d2 =3;
int  e2 =2;
int  f2 =1;
int  g2 =0;

//-----------definicion de los displays-----------//
int display;

//-----------resta -2-----------//
int resta;

//-----------definicion de los leds-----------//
#define tiempo 250 //<----cambio de estado del digito
#define led1   A1
#define led2   A2
#define led3   A3
#define led4   A4
#define led5   A5

void setup() {
 pinMode(a, OUTPUT);
 pinMode(b, OUTPUT);
 pinMode(c, OUTPUT);
 pinMode(d, OUTPUT);
 pinMode(e, OUTPUT);
 pinMode(f, OUTPUT);
 pinMode(g, OUTPUT);

 pinMode(a2, OUTPUT);
 pinMode(b2, OUTPUT);
 pinMode(c2, OUTPUT);
 pinMode(d2, OUTPUT);
 pinMode(e2, OUTPUT);
 pinMode(f2, OUTPUT);
 pinMode(g2, OUTPUT);

 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
}

void loop(){
//----------- ascenso del display-----------//
for(display=0;display<=99;display++){

if(display==0){
  cero();
  cero_2();
  led_4();
  led_5();
  apagar();
}

if(display==1){
  uno_2();
  cero();
  led_2();
  apagar();
}

if(display==2){
  dos_2();
  cero();
  led_1();
  apagar();
}

if(display==3){
  tres_2();
  cero();
  led_2();
  apagar();
}

if(display==4){
  cuatro_2();
  cero();
  led_1();
  apagar();
}

if(display==5){
  cinco_2();
  cero();
  led_2();
  apagar();
}

if(display==6){
  seis_2();
  cero();
  led_1();
  apagar();
  }

if(display==7){
  siete_2();
  cero();
  led_2();
  led_3();
  apagar();

}

if(display==8){
  ocho_2();
  cero();
  led_1();
  apagar();

}

if(display==9){
  nueve_2();
  cero();
  led_2();
  apagar();
}

if(display==10){
  cero_2();
  uno();
  led_1();
  led_4();
  apagar();
}

if(display==11){
  uno_2();
  uno();
  led_2();
  apagar();
}

if(display==12){
  dos_2();
  uno();
  led_1();
  apagar();
}

if(display==13){
  tres_2();
  uno();
  led_2();
  apagar();
}

if(display==14){
  cuatro_2();
  uno();
  led_1();
  led_3();
  apagar();
}

if(display==15){
  cinco_2();
  uno();
  led_2();
  apagar();
}

if(display==16){
  seis_2();
  uno();
  led_1();
  apagar();
}

if(display==17){
  siete_2();
  uno();
  led_2();
  apagar();
}

if(display==18){
  ocho_2();
  uno();
  led_1();
  apagar();
}

if(display==19){
  nueve_2();
  uno();
  led_2();
  apagar();
}

if(display==20){
  cero_2();
  dos();
  led_1();
  led_4();
  apagar();
}

if(display==21){
  uno_2();
  dos();
  led_2();
  led_3();
  apagar();
}

if(display==22){
  dos_2();
  dos();
  led_1();
  apagar();
}

if(display==23){
  tres_2();
  dos();
  led_2();
  apagar();
}

if(display==24){
  cuatro_2();
  dos();
  led_1();
  apagar();
}

if(display==25){
  cinco_2();
  dos();
  led_2();
  apagar();
}

if(display==26){
  seis_2();
  dos();
  led_1();
  apagar();
}

if(display==27){
  siete_2();
  dos();
  led_2();
  apagar();
}

if(display==28){
  ocho_2();
  dos();
  led_2();
  led_3();
  apagar();
}

if(display==29){
  nueve_2();
  dos();
  led_2();
  apagar();
}

if(display==30){
  cero_2();
  tres();
  led_1();
  led_4();
  apagar();
}

if(display==31){
  uno_2();
  tres();
  led_2();
  apagar();
}

if(display==32){
  dos_2();
  tres();
  led_1();
  apagar();
}

if(display==33){
  tres_2();
  tres();
  led_2();
  apagar();
}

if(display==34){
  cuatro_2();
  tres();
  led_1();
  apagar();
}

if(display==35){
  cinco_2();
  tres();
  led_2();
  led_3();
  apagar();
}

if(display==36){
  seis_2();
  tres();
  led_1();
  apagar();
}

if(display==37){
  siete_2();
  tres();
  led_2();
  apagar();
}

if(display==38){
  ocho_2();
  tres();
  led_1();
  apagar();
}

if(display==39){
  nueve_2();
  tres();
  led_2();
  apagar();
}

if(display==40){
  cero_2();
  cuatro();
  led_1();
  led_4();
  apagar();
}

if(display==41){
  uno_2();
  cuatro();
  led_2();
  apagar();
}

if(display==42){
  dos_2();
  cuatro();
  led_1();
  led_3();
  apagar();
}

if(display==43){
  tres_2();
  cuatro();
  led_2();
  apagar();
}

if(display==44){
  cuatro_2();
  cuatro();
  led_1();
  apagar();
}

if(display==45){
  cinco_2();
  cuatro();
  led_2();
  apagar();
}

if(display==46){
  seis_2();
  cuatro();
  led_1();
  apagar();
}

if(display==47){
  siete_2();
  cuatro();
  led_2();
  apagar();
}

if(display==48){
  ocho_2();
  cuatro();
  led_1();
  apagar();
}

if(display==49){
  nueve_2();
  cuatro();
  led_2();
  led_3();
  apagar();
}

if(display==50){
  cero_2();
  cinco();
  led_1();
  led_4();
  apagar();
}

if(display==51){
  uno_2();
  cinco();
  led_2();
  apagar();
}

if(display==52){
  dos_2();
  cinco();
  led_1();
  apagar();
}

if(display==53){
  tres_2();
  cinco();
  led_2();
  apagar();
}

if(display==54){
  cuatro_2();
  cinco();
  led_1();
  apagar();
}

if(display==55){
  cinco_2();
  cinco();
  led_2();
  apagar();
}

if(display==56){
  seis_2();
  cinco();
  led_1();
  led_3();
  apagar();
}

if(display==57){
  siete_2();
  cinco();
  led_2();
  apagar();
}

if(display==58){
  ocho_2();
  cinco();
  led_1();
  apagar();
}

if(display==59){
  nueve_2();
  cinco();
  led_2();
  apagar();
}

if(display==60){
  cero_2();
  seis();
  led_1();
  led_4();
  apagar();
}

if(display==61){
  uno_2();
  seis();
  led_2();
  apagar();
}

if(display==62){
  dos_2();
  seis();
  led_1();
  apagar();
}

if(display==63){
  tres_2();
  seis();
  led_2();
  led_3();
  apagar();
}

if(display==64){
  cuatro_2();
  seis();
  led_1();
  apagar();
}

if(display==65){
  cinco_2();
  seis();
  led_2();
  apagar();
}

if(display==66){
  seis_2();
  seis();
  led_1();
  apagar();
}

if(display==67){
  siete_2();
  seis();
  led_2();
  apagar();
}

if(display==68){
  ocho_2();
  seis();
  led_1();
  apagar();
}

if(display==69){
  nueve_2();
  seis();
  led_2();
  apagar();
}

if(display==70){
  cero_2();
  siete();
  led_1();
  led_3();
  led_4();
  apagar();
}

if(display==71){
  uno_2();
  siete();
  led_2();
  apagar();
}

if(display==72){
  dos_2();
  siete();
  led_1();
  apagar();
}

if(display==73){
  tres_2();
  siete();
  led_2();
  apagar();
}

if(display==74){
  cuatro_2();
  siete();
  led_1();
  apagar();
}

if(display==75){
  cinco_2();
  siete();
  led_2();
  apagar();
}

if(display==76){
  seis_2();
  siete();
  led_1();
  apagar();
}

if(display==77){
  siete_2();
  siete();
  led_2();
  led_3();
  apagar();
}

if(display==78){
  ocho_2();
  siete();
  led_1();
  apagar();
}

if(display==79){
  nueve_2();
  siete();
  led_2();
  apagar();
}

if(display==80){
  cero_2();
  ocho();
  led_1();
  led_4();
  apagar();
}

if(display==81){
  uno_2();
  ocho();
  led_2();
  apagar();
}

if(display==82){
  dos_2();
  ocho();
  led_1();
  apagar();
}

if(display==83){
  tres_2();
  ocho();
  led_2();
  apagar();
}

if(display==84){
  cuatro_2();
  ocho();
  led_1();
  led_3();
  apagar();
}

if(display==85){
  cinco_2();
  ocho();
  led_2();
  apagar();
}

if(display==86){
  seis_2();
  ocho();
  led_1();
  apagar();
}

if(display==87){
  siete_2();
  ocho();
  led_2();
  apagar();
}

if(display==88){
  ocho_2();
  ocho();
  led_1();
  apagar();
}

if(display==89){
  nueve_2();
  ocho();
  led_2();
  apagar();
}

if(display==90){
  cero_2();
  nueve();
  led_1();
  led_4();
  apagar();
}

if(display==91){
  uno_2();
  nueve();
  led_2();
  led_3();
  apagar();
}

if(display==92){
  dos_2();
  nueve();
  led_1();
  apagar();
}

if(display==93){
  tres_2();
  nueve();
  led_2();
  apagar();
}

if(display==94){
  cuatro_2();
  nueve();
  led_1();
  apagar();
}

if(display==95){
  cinco_2();
  nueve();
  led_2();
  apagar();
}

if(display==96){
  seis_2();
  nueve();
  led_1();
  apagar();
}

if(display==97){
  siete_2();
  nueve();
  led_2();
  apagar();
}

if(display==98){
  ocho_2();
  nueve();
  led_1();
  led_3();
  apagar();
}

if(display==99){
  nueve_2();
  nueve();
  led_2();
  led_5();
  apagar();
}
delay(150); //<-------tiempo de cambio de estado (digito)
}


//----------- descenso del display -2 -----------//
for(resta=99;resta>=0;resta--){
resta=resta-1;
  if(resta==0){
  cero();
  cero_2();
  led_5();
  led_4();
  apagar();
}

if(resta==1){
  uno_2();
  cero();
  led_2();
  apagar();
}

if(resta==2){
  dos_2();
  cero();
  led_1();
  apagar();
}

if(resta==3){
  tres_2();
  cero();
  led_2();
  apagar();
}

if(resta==4){
  cuatro_2();
  cero();
  led_1();
  apagar();
}

if(resta==5){
  cinco_2();
  cero();
  led_2();
  apagar();
}

if(resta==6){
  seis_2();
  cero();
  led_1();
  apagar();
  }

if(resta==7){
  siete_2();
  cero();
  led_2();
  led_3();
  apagar();

}

if(resta==8){
  ocho_2();
  cero();
  led_1();
  apagar();

}

if(resta==9){
  nueve_2();
  cero();
  led_2();
  apagar();
}

if(resta==10){
  cero_2();
  uno();
  led_1();
  led_4();
  apagar();
}

if(resta==11){
  uno_2();
  uno();
  led_2();
  apagar();
}

if(resta==12){
  dos_2();
  uno();
  led_1();
  apagar();
}

if(resta==13){
  tres_2();
  uno();
  led_2();
  apagar();
}

if(resta==14){
  cuatro_2();
  uno();
  led_1();
  led_3();
  apagar();
}

if(resta==15){
  cinco_2();
  uno();
  led_2();
  apagar();
}

if(resta==16){
  seis_2();
  uno();
  led_1();
  apagar();
}

if(resta==17){
  siete_2();
  uno();
  led_2();
  apagar();
}

if(resta==18){
  ocho_2();
  uno();
  led_1();
  apagar();
}

if(resta==19){
  nueve_2();
  uno();
  led_2();
  apagar();
}

if(resta==20){
  cero_2();
  dos();
  led_1();
  led_4();
  apagar();
}

if(resta==21){
  uno_2();
  dos();
  led_2();
  led_3();
  apagar();
}

if(resta==22){
  dos_2();
  dos();
  led_1();
  apagar();
}

if(resta==23){
  tres_2();
  dos();
  led_2();
  apagar();
}

if(resta==24){
  cuatro_2();
  dos();
  led_1();
  apagar();
}

if(resta==25){
  cinco_2();
  dos();
  led_2();
  apagar();
}

if(resta==26){
  seis_2();
  dos();
  led_1();
  apagar();
}

if(resta==27){
  siete_2();
  dos();
  led_2();
  apagar();
}

if(resta==28){
  ocho_2();
  dos();
  led_1();
  led_3();
  apagar();
}

if(resta==29){
  nueve_2();
  dos();
  led_2();
  apagar();
}

if(resta==30){
  cero_2();
  tres();
  led_1();
  led_4();
  apagar();
}

if(resta==31){
  uno_2();
  tres();
  led_2();
  apagar();
}

if(resta==32){
  dos_2();
  tres();
  led_1();
  apagar();
}

if(resta==33){
  tres_2();
  tres();
  led_2();
  apagar();
}

if(resta==34){
  cuatro_2();
  tres();
  led_1();
  apagar();
}

if(resta==35){
  cinco_2();
  tres();
  led_2();
  led_3();
  apagar();
}

if(resta==36){
  seis_2();
  tres();
  led_1();
  apagar();
}

if(resta==37){
  siete_2();
  tres();
  led_2();
  apagar();
}

if(resta==38){
  ocho_2();
  tres();
  led_1();
  apagar();
}

if(resta==39){
  nueve_2();
  tres();
  led_2();
  apagar();
}

if(resta==40){
  cero_2();
  cuatro();
  led_1();
  led_4();
  apagar();
}

if(resta==41){
  uno_2();
  cuatro();
  led_2();
  apagar();
}

if(resta==42){
  dos_2();
  cuatro();
  led_1();
  led_3();
  apagar();
}

if(resta==43){
  tres_2();
  cuatro();
  led_2();
  apagar();
}

if(resta==44){
  cuatro_2();
  cuatro();
  led_1();
  apagar();
}

if(resta==45){
  cinco_2();
  cuatro();
  led_2();
  apagar();
}

if(resta==46){
  seis_2();
  cuatro();
  led_1();
  apagar();
}

if(resta==47){
  siete_2();
  cuatro();
  led_2();
  apagar();
}

if(resta==48){
  ocho_2();
  cuatro();
  led_1();
  apagar();
}

if(resta==49){
  nueve_2();
  cuatro();
  led_2();
  led_3();
  apagar();
}

if(resta==50){
  cero_2();
  cinco();
  led_1();
  led_4();
  apagar();
}

if(resta==51){
  uno_2();
  cinco();
  led_2();
  apagar();
}

if(resta==52){
  dos_2();
  cinco();
  led_1();
  apagar();
}

if(resta==53){
  tres_2();
  cinco();
  led_2();
  apagar();
}

if(resta==54){
  cuatro_2();
  cinco();
  led_1();
  apagar();
}

if(resta==55){
  cinco_2();
  cinco();
  led_2();
  apagar();
}

if(resta==56){
  seis_2();
  cinco();
  led_1();
  led_3();
  apagar();
}

if(resta==57){
  siete_2();
  cinco();
  led_2();
  apagar();
}

if(resta==58){
  ocho_2();
  cinco();
  led_1();
  apagar();
}

if(resta==59){
  nueve_2();
  cinco();
  led_2();
  apagar();
}

if(resta==60){
  cero_2();
  seis();
  led_1();
  led_4();
  apagar();
}

if(resta==61){
  uno_2();
  seis();
  led_2();
  apagar();
}

if(resta==62){
  dos_2();
  seis();
  led_1();
  apagar();
}

if(resta==63){
  tres_2();
  seis();
  led_3();
  led_2();
  apagar();
}

if(resta==64){
  cuatro_2();
  seis();
  led_1();
  apagar();
}

if(resta==65){
  cinco_2();
  seis();
  led_2();
  apagar();
}

if(resta==66){
  seis_2();
  seis();
  led_1();
  apagar();
}

if(resta==67){
  siete_2();
  seis();
  led_2();
  apagar();
}

if(resta==68){
  ocho_2();
  seis();
  led_1();
  apagar();
}

if(resta==69){
  nueve_2();
  seis();
  led_2();
  apagar();
}

if(resta==70){
  cero_2();
  siete();
  led_1();
  led_3();
  led_4();
  apagar();
}

if(resta==71){
  uno_2();
  siete();
  led_2();
  apagar();
}

if(resta==72){
  dos_2();
  siete();
  led_1();
  apagar();
}

if(resta==73){
  tres_2();
  siete();
  led_2();
  apagar();
}

if(resta==74){
  cuatro_2();
  siete();
  led_1();
  apagar();
}

if(resta==75){
  cinco_2();
  siete();
  led_2();
  apagar();
}

if(resta==76){
  seis_2();
  siete();
  led_1();
  apagar();
}

if(resta==77){
  siete_2();
  siete();
  led_2();
  led_3();
  apagar();
}

if(resta==78){
  ocho_2();
  siete();
  led_1();
  apagar();
}

if(resta==79){
  nueve_2();
  siete();
  led_2();
  apagar();
}

if(resta==80){
  cero_2();
  ocho();
  led_1();
  led_4();
  apagar();
}

if(resta==81){
  uno_2();
  ocho();
  led_2();
  apagar();
}

if(resta==82){
  dos_2();
  ocho();
  led_1();
  apagar();
}

if(resta==83){
  tres_2();
  ocho();
  led_2();
  apagar();
}

if(resta==84){
  cuatro_2();
  ocho();
  led_1();
  led_3();
  apagar();
}

if(resta==85){
  cinco_2();
  ocho();
  led_2();
  apagar();
}

if(resta==86){
  seis_2();
  ocho();
  led_1();
  apagar();
}

if(resta==87){
  siete_2();
  ocho();
  led_2();
  apagar();
}

if(resta==88){
  ocho_2();
  ocho();
  led_1();
  apagar();
}

if(resta==89){
  nueve_2();
  ocho();
  led_2();
  apagar();
}

if(resta==90){
  cero_2();
  nueve();
  led_1();
  led_4();
  apagar();
}

if(resta==91){
  uno_2();
  nueve();
  led_2();
  apagar();
}

if(resta==92){
  dos_2();
  nueve();
  led_1();
  led_3();
  apagar();
}

if(resta==93){
  tres_2();
  nueve();
  led_2();
  apagar();
}

if(resta==94){
  cuatro_2();
  nueve();
  led_1();
  apagar();
}

if(resta==95){
  cinco_2();
  nueve();
  led_2();
  apagar();
}

if(resta==96){
  seis_2();
  nueve();
  led_1();
  apagar();
}

if(resta==97){
  siete_2();
  nueve();
  led_2();
  apagar();
}

if(resta==98){
  ocho_2();
  nueve();
  led_1();
  led_3();
  apagar();
}

if(resta==99){
  nueve_2();
  nueve();
  led_5();
  led_2();
  apagar();
}
 delay(150); //<-------tiempo de cambio de estado (digito)
}
}

   //------------------- funciones-------------------//


//----display de las unidades----//
void cero_2(){
  apagar();
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, LOW);
}

void uno_2(){
  apagar();
  digitalWrite(a2, LOW);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, LOW);
}

void dos_2(){
  apagar();
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, LOW);
  digitalWrite(g2, HIGH);
}

void tres_2(){
  apagar();
  digitalWrite(a2, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, HIGH);
}

void cuatro_2(){
  apagar();
  digitalWrite(a2,LOW);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);
}

void cinco_2(){
  apagar();
  digitalWrite(a2,HIGH);
  digitalWrite(b2, LOW);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, LOW);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);
}

void seis_2(){
  apagar();
  digitalWrite(a2,HIGH);
  digitalWrite(b2, LOW);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);
}

void siete_2(){
  apagar();
  digitalWrite(a2,HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, LOW);
}

void ocho_2(){
  apagar();
  digitalWrite(a2,HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(e2, HIGH);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);
}

void nueve_2(){
  apagar();
  digitalWrite(a2,HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, HIGH);
  digitalWrite(g2, HIGH);
}


//----display de las unidades----//
void cero(){
  apagar();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}

void uno(){
  apagar();
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void dos(){
  apagar();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}

void tres(){
  apagar();
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}

void cuatro(){
  apagar();
  digitalWrite(a,LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void cinco(){
  apagar();
  digitalWrite(a,HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void seis(){
  apagar();
  digitalWrite(a,HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void siete(){
  apagar();
  digitalWrite(a,HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void ocho(){
  apagar();
  digitalWrite(a,HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void nueve(){
  apagar();
  digitalWrite(a,HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

//----led en par----//
void led_1(){
  apagar();
  digitalWrite(led1, HIGH);
}

//----led en impar---//
void led_2(){
  apagar();
  digitalWrite(led2, HIGH);
}

//----led en multiplo de 7----//
void led_3(){
  apagar();
  digitalWrite(led3, HIGH);
}

//----led en terminacion 0----//
void led_4(){
  apagar();
  digitalWrite(led4, HIGH);
}

//----led de los limites (0 y 99)----//
void led_5(){
  apagar();
  digitalWrite(led5, HIGH);
}

//----todo apagado----//
void apagar(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  digitalWrite(a2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(c2, LOW);
  digitalWrite(d2, LOW);
  digitalWrite(e2, LOW);
  digitalWrite(f2, LOW);
  digitalWrite(g2, LOW);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
}