#define ULTRASONIC_PIN  9
void setup()
{
  // Timer1, toggle OC1A (Pin 9) on compare match
  TCCR1A = _BV(COM1A0);
  TCCR1B = _BV(WGM12) | _BV(CS10);
  
  // 40 kHz output at 199 (Distance sensor); 25 kHz output at 319 (Dog trainer); 400 Hz at 19999 (Audible to humans); 20 KHz at 399 (Upper range of human hearing):
  // 26,384.615 Hz output at 302 roughly (Water Resonance Calculations) 
  OCR1A = 302;

  pinMode(ULTRASONIC_PIN, OUTPUT);
}

void loop()
{
}

// Speed of Light: 299,792,458 meters per second - https://www.space.com/speed-of-light-properties-explained.html

// Speed of Sound in Air: - 343 meters per second - https://en.wikipedia.org/wiki/Speed_of_sound

// Water Resonance: 22.235 GHz https://ntrs.nasa.gov/citations/19720031225

// 299,792,458 m / 2,450,000,000 Hz = 0.013 m wave size
// 343 m / 0.013 = 2,803.20366133 hertz
// 343 m /  26,384.615 Hz = 0.12236 m wave size
