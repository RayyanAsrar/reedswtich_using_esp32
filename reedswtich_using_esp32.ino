
// #include <Wire.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SH110X.h>

// Adafruit_SH1106G display(128, 64, &Wire, -1);

// void setup() {
//   Wire.begin(8, 9);                 
//   display.begin(0x3C, true);        

//   display.clearDisplay();
//   display.setTextColor(SH110X_WHITE);
//   display.setTextSize(2);
//   display.setCursor(4, 8);
//   display.println("Hello");
//   display.display();              
// }

// void loop() {
 
// }
const int REED_PIN = 4;
const int LED_PIN  = 5;

void setup() {
  Serial.begin(115200);
  pinMode(REED_PIN, INPUT);      
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int value = digitalRead(REED_PIN);
  Serial.println(value);         
  digitalWrite(LED_PIN, value);  
  delay(200);
}