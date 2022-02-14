#include <Adafruit_Circuit_Playground.h>

int Askingquestion;
int Understand;
int Donotunderstand;

void setup() {
  
  CircuitPlayground.begin();
  Serial.begin(9600);
  pinMode(0, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);        
  pinMode(3, INPUT_PULLUP);
  


}

void loop() {


  Askingquestion = digitalRead(0);
  Serial.println(Askingquestion);

  if (Askingquestion == 0) {

    
    CircuitPlayground.setPixelColor(0, 255,   0,   0);
    
    CircuitPlayground.setPixelColor(1, 255,   128,   0);
    
    CircuitPlayground.setPixelColor(2, 255,   255,   0);
   
    CircuitPlayground.setPixelColor(3, 0,   255,   0);
    
    CircuitPlayground.setPixelColor(4, 0,   255,   255);
   
    CircuitPlayground.setPixelColor(5, 0,   128,   255);
    
    CircuitPlayground.setPixelColor(6, 127,   0,   255);
    
    CircuitPlayground.setPixelColor(7, 255,   0,   127);
   
    CircuitPlayground.setPixelColor(8, 255,   153,   255);
    
    CircuitPlayground.setPixelColor(9, 23,   255,   10);
   
  }

  Donotunderstand = digitalRead(10);
  Serial.println(Donotunderstand);
  if (Donotunderstand == 0) {

   
    CircuitPlayground.setPixelColor(0, 0,255,0);
    
    CircuitPlayground.setPixelColor(1, 0,255,0);
    
    CircuitPlayground.setPixelColor(2, 0,255,0);
   
    CircuitPlayground.setPixelColor(3, 0,255,0);
    
    CircuitPlayground.setPixelColor(4, 0,255,0);
    
    CircuitPlayground.setPixelColor(5, 0,255,0);
   
    CircuitPlayground.setPixelColor(6, 0,255,0);
    
    CircuitPlayground.setPixelColor(7, 0,255,0);
    
    CircuitPlayground.setPixelColor(8, 0,255,0);
    
    CircuitPlayground.setPixelColor(9, 0,255,0);
    

  }
  
  Understand = digitalRead(3);
  Serial.println(Understand);
  if (Understand == 0) {


    CircuitPlayground.setPixelColor(0, 0xFF0000);
    delay(50);
  
    CircuitPlayground.setPixelColor(1, 0xFF0000);
    delay(50);
   
    CircuitPlayground.setPixelColor(2, 0xFF0000);
    delay(50);
   
    CircuitPlayground.setPixelColor(3, 0xFF0000);
    delay(50);
    
    CircuitPlayground.setPixelColor(4, 0xFF0000);
    delay(50);
   
    CircuitPlayground.setPixelColor(5, 0xFF0000);
    delay(50);
 
    CircuitPlayground.setPixelColor(6, 0xFF0000);
    delay(50);
    
    CircuitPlayground.setPixelColor(7, 0xFF0000);
    delay(50);
    
    CircuitPlayground.setPixelColor(8, 0xFF0000);
    delay(50);
    
    CircuitPlayground.setPixelColor(9, 0xFF0000);
    delay(50);
   
  }
  else {
    CircuitPlayground.clearPixels();
  }
}
