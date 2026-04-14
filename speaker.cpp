/* 
 * Project speaker
 * Author: Ronald Romo
 * Date: 4/14/2026
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"
#include "application.h"

SYSTEM_MODE(SEMI_AUTOMATIC);
// The Photon has 9 PWM pins: D0, D1, D2, D3, A4, A5, A7, RX and TX.
//
// EXAMPLE USAGE
// Plays a melody - Connect small speaker to speakerPin
int speakerPin = A4;

// Notes defined in microseconds (Period/2) 
// from note C to B, Octaves 3 through 7
int notes[] = 
{0,
/* C,  C#,   D,  D#,   E,   F,  F#,   G,  G#,   A,  A#,   B */
3817,3597,3401,3205,3030,2857,2703,2551,2404,2273,2146,2024,   // 3 (1-12)
1908,1805,1701,1608,1515,1433,1351,1276,1205,1136,1073,1012,   // 4 (13-24)
 956, 903, 852, 804, 759, 716, 676, 638, 602, 568, 536, 506,   // 5 (25-37)
 478, 451, 426, 402, 379, 358, 338, 319, 301, 284, 268, 253,   // 6 (38-50)
 239, 226, 213, 201, 190, 179, 169, 159, 151, 142, 134, 127 }; // 7 (51-62)

#define NOTE_G3  2551
#define NOTE_G4  1276
#define NOTE_C5  956
#define NOTE_E5  759
#define NOTE_G5  638
#define RELEASE  20
#define BPM      100

// notes in the melody:
int melody[] = {NOTE_E5,NOTE_E5,0,NOTE_E5,0,NOTE_C5,NOTE_E5,0,NOTE_G5,0,0,NOTE_G4};

// note durations: 4 = quarter note, 2 = half note, etc.:
int noteDurations[] = {4,4,4,4,4,4,4,4,4,2,4,4};

void setup() {
  
}
void loop() {
  //   for (int thisNote = 0; thisNote < 12; thisNote++) {

  //   // to calculate the note duration, take one second
  //   // divided by the note type.
  //   // e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
  //   int noteDuration = 60*1000/BPM/noteDurations[thisNote];
  //   tone(speakerPin, (melody[thisNote]!=0)?(500000/melody[thisNote]):0,noteDuration-RELEASE);

  //   // blocking delay needed because tone() does not block
  //   delay(noteDuration);
  // }
  tone(speakerPin,550,2703);
}
