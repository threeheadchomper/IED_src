#define PIN_LED 7
unsigned int toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  toggle = 1;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle); // turn off LED.
  delay(1000);

  for(int i=0; i<10; i++)
  {
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED, toggle); // update LED status.
    delay(100); // wait for 100 milliseconds
  }

  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  while(1) {}
}

int toggle_state(int toggle) {
  return !toggle;
}