// Libraries
#include <SPI.h>
#include <aREST.h>

// Motion sensor ID
char * xbee_id = "5h6h3s";

// Create ArduREST instance
aREST rest = aREST();

void setup() {
  
  // Start Serial
  Serial.begin(9600);
  
  // Give name and ID to device
  rest.set_id(xbee_id);
  rest.set_name("motion1");
}

void loop() {
  
  // Handle REST calls
  rest.handle(Serial);
  
}
