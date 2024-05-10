/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 1 practica 5 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 3 de mayo
*/

int pines[4] = {2, 3, 4, 5};

const int numeros[5][4] = {
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {1, 0, 1, 0},
  {1, 1, 1, 0},
  {1, 0, 0, 1}
};

void salidas(){
  for(int x = 0; x < 4; x++){
    pinMode(pines[x], OUTPUT);
    digitalWrite(pines[x], HIGH);
  }
}

void setup(){
  salidas();
  Serial.begin(9600);
  float valor_1 = 60.02;
  float resultado_1 = conversionkg(valor_1);
  Serial.println("Resultado kg a lb");
  Serial.println(resultado_1);

  float valor_2 = 71;
  float resultado_2 = conversionA(valor_2);
  Serial.println("Resultado A a uA");
  Serial.println(resultado_2);
}

float conversionkg(float valor_1){
  float resultado_1; 
  resultado_1 = valor_1*2.20462;
  return resultado_1; 
}

float conversionA(float valor_2){
  float resultado_2; 
  resultado_2 = valor_2*1000000;
  return resultado_2;
}

void loop(){
  for(int b = 0; b < 5; b++){
    for(int c = 0; c < 4; c++){
      digitalWrite(pines[c], numeros[b][c]);
    }
    
    delay(700);
  }
  
  for(int d = 0; d < 4; d++){
    digitalWrite(pines[d], HIGH);
  }
}
