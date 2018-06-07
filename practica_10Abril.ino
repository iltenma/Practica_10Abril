#include <Ultrasonido.h>


Ultrasonido sensorUltrasonido (12, 11, 50); //trigger, echo, centimetros


int distanciaSensor = 0; //HC - SR04
int valorMaxSonar = 0; // sensor MAXSonar
int FSR = 0; // FSR

void setup() {
Serial.begin (9600);
}



void loop() {
  valorMaxSonar = analogRead (0);
  distanciaSensor = sensorUltrasonido.Distancia ();
  FSR = analogRead (1);
  Serial.print ("SensorUltra ");
 Serial.println (distanciaSensor);
   
   Serial.print ("MaxSensor ");
  Serial.println (valorMaxSonar);
  
  Serial.print ("SensorFSR ");
 Serial.println (FSR);
 
  delay (200);

  

} 
