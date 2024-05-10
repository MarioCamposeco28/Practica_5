/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 2 practica 5 
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 3 de mayo
*/

const int pinBuzzer = 6;

void setup()
{
}

void loop()
{
  nota(440, 500, 550); //sol
  nota(440, 500, 550); //sol
  nota(440, 500, 550); //sol
  nota(349, 350, 400); //mib
  nota(523, 150, 200); //sib
  
  nota(440, 500, 550); //sol
  nota(349, 350, 400); //mib
  nota(523, 150, 200); //sib
  nota(440, 1000, 1050); //sol
  
  nota(659, 500, 550); //RE
  nota(659, 500, 550); //RE
  nota(659, 500, 550); //RE
  nota(698, 350, 400); //MIB
  nota(523, 150, 200); //sib
  
  nota(415, 500, 550); //sol
  nota(349, 350, 400); //mib
  nota(523, 150, 200); //sib
  nota(440, 1000, 1050); //sol
  
  nota(880, 500, 550); //SOL
  nota(440, 350, 400); //sol
  nota(440, 150, 200); //sol
  nota(880, 500, 550); //SOl
  nota(830, 250, 300); //FA#
  nota(783, 250, 300); //FA
  
  nota(740, 125, 175); //MI
  nota(698, 125, 175); //RE#
  nota(740, 250, 300); //MI
  nota(455, 250, 300); //sol#
  nota(622, 500, 550); //DO#
  nota(587, 250, 300); //DO
  nota(554, 250, 300); //si
  
  nota(523, 125, 175); //sib
  nota(466, 125, 175); //la
  nota(523, 250, 300); //sib
  nota(349, 125, 175); //mib
  nota(415, 500, 550); //solb
  nota(349, 375, 425); //mib
  nota(440, 125, 175); //solb
  
  nota(523, 500, 550); //sib
  nota(440, 375, 425); //sol
  nota(523, 125, 175); //sib
  nota(659, 1000, 1050); //RE
  
  nota(880, 500, 550); //SOl
  nota(440, 350, 400); //sol
  nota(440, 150, 200); //sol
  nota(783, 500, 550); //SOl
  nota(830, 250, 300); //FA#
  nota(783, 250, 300); //FA
  
  nota(740, 125, 175); //MI
  nota(698, 125, 175); //RE#
  nota(740, 250, 300); //MI
  nota(455, 250, 300); //sol#
  nota(622, 500, 550); //DO#
  nota(587, 250, 300); //DO
  nota(554, 250, 300); //si
  
  nota(523, 125, 175); //sib
  nota(466, 125, 175); //la
  nota(523, 250, 300); //sib
  nota(349, 250, 300); //mib
  nota(415, 500, 550); //solb
  nota(349, 375, 425); //mib
  nota(523, 125, 175); //sib
  
  nota(391, 500, 550); //sol
  nota(349, 375, 425); //mib
  nota(261, 125, 175); //sib
  nota(440, 1000, 1050); //sol
}

void nota(int frecuencia, int tono, int pausa) {
  tone(pinBuzzer, frecuencia, tono);
  delay(pausa);
  noTone(pinBuzzer);
}
