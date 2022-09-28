/**
 * Author: George P.
 * Github: https://github.com/GeorgePaulino
 * Created: 07.05.2022
 * 
 * License: MIT
 **/

#include "Libs/Dictionary/Dictionary.h"

Dictionary &ledNotes = *(new Dictionary()); // Dictionary of notes, return led port.

int leds[] = {5, 2, 3, 6, 4, 7}; // Ports of the leds.
int ledSize = sizeof(leds) / sizeof(leds[0]);

void setLedNotes(int *melody, int s)
{
  
  for(int i = 0; i < ledSize; i++) // All ports of leds as OUTPUT.
    pinMode(leds[i], OUTPUT);
    
  for(int i = 0; i < s; i++) // Set for each note in the music a led port.
  {
    if(melody[i] == 0) continue;
    String sMelody = String(melody[i]);
    if(!ledNotes(sMelody))
      ledNotes(sMelody, String(leds[(ledNotes.count() % ledSize)]));
  }
}

void highLed(int note) { digitalWrite(ledNotes[String(note)].toInt(), HIGH); } // High the led of the specified note.

void lowLeds() // Low all leds.
{
  for(int i = 0; i<ledSize; i++)
  {
    digitalWrite(leds[i], LOW);
  }
}
