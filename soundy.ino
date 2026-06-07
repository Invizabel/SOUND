// SPDX-FileCopyrightText: 2023 Liz Clark for Adafruit Industries
// SPDX-License-Identifier: MIT

#define PIEZO_PIN  5 // Pin connected to the piezo buzzer.

int toneFreq = 440;
int toneCount = 8;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  for (int i = 0; i < toneCount; i++)
  {
    tone(PIEZO_PIN, toneFreq);
    delay(500);
    noTone(PIEZO_PIN);
    delay(500);
  }
  
  delay(5000);
}
