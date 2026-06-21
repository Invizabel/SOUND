#define ULTRASONIC_PIN  9
void setup()
{
  // Timer1, toggle OC1A (Pin 9) on compare match
  TCCR1A = _BV(COM1A0);
  TCCR1B = _BV(WGM12) | _BV(CS10);
  
  // 40 kHz output at 199 (Distance sensor); 25 kHz output at 319 (Dog trainer); 400 Hz at 19999 (Audible to humans); 20 KHz at 399 (Upper range of human hearing):
  OCR1A = 399;

  pinMode(ULTRASONIC_PIN, OUTPUT);
}

void loop()
{
}
