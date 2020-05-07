#include "LEDPattern1.h"

LEDPattern1::LEDPattern1() {
  pinMode(6, OUTPUT);
}

void LEDPattern1::process() {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  delay(100);

}
