#define SPEAKER_PIN_ONE 3
#define SPEAKER_PIN_TWO 28
#include <Tone.h>

Tone tone1;
Tone tone2;

// Note frequencies in Hz, grouped by octave low to high.
// To add a note: pick the octave prefix (LOW_LOW, LOW, none, HIGH, HIGH_HIGH)
// and copy the pattern below - sharps are named NOTE_SHARP (e.g. C_SHARP).

const int LOW_LOW_C       = 65;
const int LOW_LOW_C_SHARP = 69;
const int LOW_LOW_D       = 73;
const int LOW_LOW_D_SHARP = 78;
const int LOW_LOW_E       = 82;
const int LOW_LOW_F       = 92;
const int LOW_LOW_F_SHARP = 87;
const int LOW_LOW_G       = 98;
const int LOW_LOW_G_SHARP = 103;
const int LOW_LOW_A       = 110;
const int LOW_LOW_A_SHARP = 116;
const int LOW_LOW_B       = 123;

const int LOW_C       = 131;
const int LOW_C_SHARP = 138;
const int LOW_D       = 146;
const int LOW_D_SHARP = 155;
const int LOW_E       = 165;
const int LOW_F       = 174;
const int LOW_F_SHARP = 185;
const int LOW_G       = 196;
const int LOW_G_SHARP = 207;
const int LOW_A       = 220;
const int LOW_A_SHARP = 233;
const int LOW_B       = 247;

const int C       = 261;
const int C_SHARP = 277;
const int D       = 293;
const int D_SHARP = 311;
const int E       = 329;
const int F       = 349;
const int F_SHARP = 370;
const int G       = 392;
const int G_SHARP = 415;
const int A       = 440;
const int A_SHARP = 466;
const int B       = 493;

const int HIGH_C       = 523;
const int HIGH_C_SHARP = 554;
const int HIGH_D       = 587;
const int HIGH_D_SHARP = 622;
const int HIGH_E       = 659;
const int HIGH_F       = 698;
const int HIGH_F_SHARP = 739;
const int HIGH_G       = 783;
const int HIGH_G_SHARP = 830;
const int HIGH_A       = 880;
const int HIGH_A_SHARP = 932;
const int HIGH_B       = 987;

const int HIGH_HIGH_C       = 1046;
const int HIGH_HIGH_C_SHARP = 1108;
const int HIGH_HIGH_D       = 1174;
const int HIGH_HIGH_D_SHARP = 1244;
const int HIGH_HIGH_E       = 1318;
const int HIGH_HIGH_F       = 1396;
const int HIGH_HIGH_F_SHARP = 1479;
const int HIGH_HIGH_G       = 1567;
const int HIGH_HIGH_G_SHARP = 1661;
const int HIGH_HIGH_A       = 1760;
const int HIGH_HIGH_A_SHARP = 1865;
const int HIGH_HIGH_B       = 1976;

void setup() {
  pinMode(SPEAKER_PIN_ONE, OUTPUT);

  tone1.begin(3);
  tone2.begin(28);
  // tone1.play(C, 1000); delay(1000);
  //   tone1.play(D, 1000); delay(1000);
  //   tone1.play(E, 1000); delay(1000);
  //   tone1.play(F, 1000); delay(1000);
  //   tone1.play(G, 1000); delay(1000);
  //   tone1.play(A, 1000); delay(1000);
  //   tone1.play(B, 1000); delay(1000);
  //   tone1.play(HIGH_C, 1000); delay(1000);
 
  //   tone1.play(HIGH_C, 1000); delay(1000);
  //   tone1.play(B, 1000); delay(1000);
  //   tone1.play(A, 1000); delay(1000);
  //   tone1.play(G, 1000); delay(1000);
  //   tone1.play(F, 1000); delay(1000);
  //   tone1.play(E, 1000); delay(1000);
  //   tone1.play(D, 1000); delay(1000);
  //   tone1.play(C, 1000); delay(1000);

  tone1.play(D, 250); delay(250);
    tone1.play(D, 250); delay(250);
    tone1.play(HIGH_D, 250); delay(500);
    tone1.play(A, 500); delay(750);
    tone1.play(G_SHARP, 250); delay(500);
    tone1.play(G, 250); delay(500);
    tone1.play(F, 500); delay(500);
    tone1.play(D, 250); delay(250);
    tone1.play(F, 250); delay(250);
    tone1.play(G, 250); delay(250);

    tone1.play(C, 250); delay(250);
    tone1.play(C, 250); delay(250);
    tone1.play(HIGH_D, 250); delay(500);
    tone1.play(A, 500); delay(750);
    tone1.play(G_SHARP, 250); delay(500);
    tone1.play(G, 250); delay(500);
    tone1.play(F, 500); delay(500);
    tone1.play(D, 250); delay(250);
    tone1.play(F, 250); delay(250);
    tone1.play(G, 250); delay(250);

    tone1.play(LOW_B, 250); delay(250);
    tone1.play(LOW_B, 250); delay(250);
    tone1.play(HIGH_D, 250); delay(500);
    tone1.play(A, 500); delay(750);
    tone1.play(G_SHARP, 250); delay(500);
    tone1.play(G, 250); delay(500);
    tone1.play(F, 500); delay(500);
    tone1.play(D, 250); delay(250);
    tone1.play(F, 250); delay(250);
    tone1.play(G, 250); delay(250);

    tone1.play(LOW_A_SHARP, 250); delay(250);
    tone1.play(LOW_A_SHARP, 250); delay(250);
    tone1.play(HIGH_D, 250); delay(500);
    tone1.play(A, 500); delay(750);
    tone1.play(G_SHARP, 250); delay(500);
    tone1.play(G, 250); delay(500);
    tone1.play(F, 500); delay(500);
    tone1.play(D, 250); delay(250);
    tone1.play(F, 250); delay(250);
    tone1.play(G, 250); delay(250);

// //backing notes
tone2.play(LOW_D);
    tone1.play(D, 250); delay(250);
    tone1.play(D, 250); delay(250);
    tone1.play(HIGH_D, 250); delay(500);
    tone1.play(A, 500); delay(750);
    tone1.play(G_SHARP, 250); delay(500);
    tone1.play(G, 250); delay(500);
    tone1.play(F, 500); delay(500);
    tone1.play(D, 250); delay(250);
    tone1.play(F, 250); delay(250);
    tone1.play(G, 250); delay(250);
    tone2.stop();

tone2.play(LOW_C);
    tone1.play(C, 250); delay(250);
    tone1.play(C, 250); delay(250);
    tone1.play(HIGH_D, 250); delay(500);
    tone1.play(A, 500); delay(750);
    tone1.play(G_SHARP, 250); delay(500);
    tone1.play(G, 250); delay(500);
    tone1.play(F, 500); delay(500);
    tone1.play(D, 250); delay(250);
    tone1.play(F, 250); delay(250);
    tone1.play(G, 250); delay(250);
tone2.stop();

tone2.play(LOW_LOW_B);
    tone1.play(LOW_B, 250); delay(250);
    tone1.play(LOW_B, 250); delay(250);
    tone1.play(HIGH_D, 250); delay(500);
    tone1.play(A, 500); delay(750);
    tone1.play(G_SHARP, 250); delay(500);
    tone1.play(G, 250); delay(500);
    tone1.play(F, 500); delay(500);
    tone1.play(D, 250); delay(250);
    tone1.play(F, 250); delay(250);
    tone1.play(G, 250); delay(250);
    tone2.stop();

tone2.play(LOW_LOW_A_SHARP);
    tone1.play(LOW_A_SHARP, 250); delay(250);
    tone1.play(LOW_A_SHARP, 250); delay(250);
    tone1.play(HIGH_D, 250); delay(500);
    tone1.play(A, 500); delay(750);
    tone1.play(G_SHARP, 250); delay(500);
    tone1.play(G, 250); delay(500);
    tone1.play(F, 500); delay(500);
    tone1.play(D, 250); delay(250);
    tone1.play(F, 250); delay(250);
    tone1.play(G, 250); delay(250);
    tone2.stop();

    tone2.play(LOW_D);
    
    tone2.stop();
}


void loop() {
    
}