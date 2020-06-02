#include <CapacitiveSensor.h>

#include "pitches.h"

CapacitiveSensor a = CapacitiveSensor (2,3);
CapacitiveSensor b = CapacitiveSensor (4,5);
CapacitiveSensor c = CapacitiveSensor (6,7);
CapacitiveSensor d = CapacitiveSensor (8,9);
CapacitiveSensor e = CapacitiveSensor (10,11);
CapacitiveSensor f = CapacitiveSensor (12,13);
CapacitiveSensor g = CapacitiveSensor (A3,A2);
CapacitiveSensor h = CapacitiveSensor (A1,A0);
int notas[] = { NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long SEN1 = a.capacitiveSensorRaw(20); 
  long SEN2 = b.capacitiveSensorRaw(20); 
  long SEN3 = c.capacitiveSensorRaw(20); 
  long SEN4 = d.capacitiveSensorRaw(20); 
  long SEN5 = e.capacitiveSensorRaw(20); 
  long SEN6 = f.capacitiveSensorRaw(20); 
  long SEN7 = g.capacitiveSensorRaw(20); 
  long SEN8 = h.capacitiveSensorRaw(20); 



 if(SEN1 > 10){
   tone(A4, notas[0], 100);
 }
  if(SEN2 > 10){
   tone(A4, notas[1], 100);
 }
  if(SEN3 > 10){
   tone(A4, notas[2], 100);
 }
  if(SEN4 > 10){
   tone(A4, notas[3], 100);
 }
  if(SEN5 > 10){
   tone(A4, notas[4], 100);
 }
  if(SEN6 > 10){
   tone(A4, notas[5], 100);
 }
  if(SEN7 > 10){
   tone(A4, notas[6], 100);
 }
  if(SEN8 > 10){
   tone(A4, notas[7], 100);
 }
}
