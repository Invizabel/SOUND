// SPDX-FileCopyrightText: 2023 Liz Clark for Adafruit Industries
// SPDX-License-Identifier: MIT

// Use D10 for CrunchLabs Arduino Kits
#define PIEZO_PIN  10 // Pin connected to the piezo buzzer.

int toneFreq = 40000;
int toneCount = 255;

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
