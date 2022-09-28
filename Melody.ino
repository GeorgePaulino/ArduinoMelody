/**
 * Author: George P.
 * Github: https://github.com/GeorgePaulino
 * Created: 07.05.2022
 * 
 * License: MIT
 **/

#include "Notes.h"
#include "Leds.h"

/* Pick a melody from 'Melodies' folder and import to play. */
#include "Melodies/Megalovania.h"

/* Define here the port of the buzzer wich will play the music. */
int buzzer = 13; // Put here the buzzer port.

/* Some predefinitions to melodies with time 4/4 or 3/4. */
#define BPM44 144 // In BPM.
#define BPM34 108
int const TIME = BPM44; // Put here the BPM predefinition.

int semibreve = (60000 * 4) / TIME; // Semibreve duration

int melodySize = sizeof(melody)/sizeof(melody[0]);

void setup()
{
  setLedNotes(melody, melodySize); // Set notes for each led.
  
  int d = 0;
  for(int i = 0; i < melodySize; i++) // Play the melody.
  {
    d = (semibreve / abs(duration[i])) * (duration[i] < 0 ? 1.5 : 1);
    tone(buzzer, melody[i], d * 0.9);
    highLed(melody[i]);
    delay(d);
    noTone(buzzer);
    lowLeds();
  }
}

void loop(){}
