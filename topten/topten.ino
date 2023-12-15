// title: TOP 10 ALBUMS 2023
// by: emma howard
// description: a lil zine that acts like a singing birthday card,
// playing snippets of my top 10 albums and blinking an LED telling you
// to reveal the next one within the zine. using ATtiny85, a piezo buzzer for lil 8-bit versions
// of the songs, and a leaf switch for card opening mechanism
// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0

int tonePin = 1;
void setup() {

}

void midi() {
  // playSong(10);
  // TODO: Blink LED
  // playSong(9);
  // TODO: Blink LED
  // playSong(8);
  // TODO: Blink LED
  // playSong(7);
  // TODO: Blink LED
  // playSong(6);
  // TODO: Blink LED
  // playSong(5);
  // TODO: Blink LED
  // playSong(4);
  // TODO: Blink LED
  // playSong(3);
  // TODO: Blink LED
  // playSong(2);
  // TODO: Blink LED
  playSong(1);
}

void playSong(int number=1) {
   switch (number) {
    case 1:
      // SONG: ANGELS IN TIBET
      tone(tonePin, 523, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 523, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 415, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(536.457796875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(536.457796875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 391, 160.044482813);
      delay(177.827203125);
      delay(179.315296875);
      tone(tonePin, 349, 320.758607813);
      delay(356.398453125);
      delay(0.744046875);
      tone(tonePin, 391, 320.758607813);
      delay(356.398453125);
      delay(0.744046875);
      tone(tonePin, 349, 320.758607813);
      delay(356.398453125);
      break;
     default:
      break;
   }
}

void blinkLED() {
  
}

void loop() {
    // Play midi
    midi();
}
