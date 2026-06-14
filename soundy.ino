#define ULTRASONIC_PIN  9
void setup()
{
  // Timer1, toggle OC1A (Pin 9) on compare match
  TCCR1A = _BV(COM1A0);
  TCCR1B = _BV(WGM12) | _BV(CS10);
  
  // 40 kHz output at 199; 400 Hz at 1990:
  OCR1A = 1990;

  pinMode(ULTRASONIC_PIN, OUTPUT);
}

void loop()
{
}
