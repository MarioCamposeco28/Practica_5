/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 3 practica 5 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 3 de mayo
*/
const int pinLuz = 7;
const int pinBuzzer = 6;
int pines[4] = {2, 3, 4, 5};

const int numeros[10][4] = {
  {1, 0, 0, 1},
  {0, 0, 0, 1},
  {1, 1, 1, 0},
  {0, 1, 1, 0},
  {1, 0, 1, 0},
  {0, 0, 1, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {1, 0, 0, 0},
  {0, 0, 0, 0}
};

void salidas(){
  for(int x = 0; x < 4; x++){
    pinMode(pines[x], OUTPUT);
    digitalWrite(pines[x], HIGH);
  }
}

void setup(){
  salidas();
  pinMode(pinLuz, OUTPUT);
  digitalWrite(pinLuz, HIGH);
}

void loop(){
  for(int b = 0; b < 10; b++){
    for(int c = 0; c < 4; c++){
      digitalWrite(pines[c], numeros[b][c]);
      }
    
    delay(1000);
  }
  
  for(int d = 0; d < 4; d++){
    digitalWrite(pines[d], HIGH);
  }
  
  tone(pinBuzzer, 250);
  digitalWrite(pinLuz, LOW);
  delay(3000);
  noTone(pinBuzzer);
  digitalWrite(pinLuz, HIGH);
  delay(3000);
}
