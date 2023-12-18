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
     case 7:
      // RALPHIE
      tone(tonePin, 174, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 261, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 391, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 261, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 391, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 311, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 174, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 261, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 391, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 311, 426.5625);
      delay(473.958333333);
      delay(26.0416666667);
      tone(tonePin, 174, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 261, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 391, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 261, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 391, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 311, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 174, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 261, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 391, 141.5625);
      delay(157.291666667);
      delay(9.375);
      tone(tonePin, 311, 426.5625);
      delay(473.958333333);
      break;
     case 8:
      // SAMPHA
      tone(tonePin, 207, 163.54919375);
      delay(181.721326389);
      delay(0.760340277778);
      tone(tonePin, 233, 163.54919375);
      delay(181.721326389);
      delay(365.723673611);
      tone(tonePin, 233, 163.54919375);
      delay(181.721326389);
      delay(0.760340277778);
      tone(tonePin, 261, 163.54919375);
      delay(181.721326389);
      delay(365.723673611);
      tone(tonePin, 261, 163.54919375);
      delay(181.721326389);
      delay(0.760340277778);
      tone(tonePin, 311, 163.54919375);
      delay(181.721326389);
      delay(365.723673611);
      tone(tonePin, 349, 163.54919375);
      delay(181.721326389);
      delay(0.760340277778);
      tone(tonePin, 415, 245.66594375);
      delay(272.962159722);
      delay(0.760340277778);
      tone(tonePin, 349, 81.43244375);
      delay(90.4804930556);
      delay(0.760340277778);
      tone(tonePin, 311, 81.43244375);
      delay(90.4804930556);
      delay(0.760340277778);
      tone(tonePin, 261, 81.43244375);
      delay(90.4804930556);
      delay(0.760340277778);
      tone(tonePin, 233, 163.54919375);
      delay(181.721326389);
      delay(0.760340277778);
      tone(tonePin, 261, 163.54919375);
      delay(181.721326389);
      break;
     case 9:
      // YAEJI
      tone(tonePin, 391, 231.317965625);
      delay(257.019961806);
      delay(14.7192048611);
      tone(tonePin, 349, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 329, 231.317965625);
      delay(257.019961806);
      delay(14.7192048611);
      tone(tonePin, 293, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 329, 488.111478125);
      delay(542.346086806);
      delay(1.13224652778);
      tone(tonePin, 246, 365.828853125);
      delay(406.476503472);
      delay(1.13224652778);
      tone(tonePin, 261, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 246, 732.676728125);
      delay(814.085253472);
      delay(272.871413194);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 261, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 246, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 220, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 220, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 220, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 220, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 329, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 220, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 220, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 246, 243.546228125);
      delay(270.606920139);
      break;
     case 10:
      // HONEY
      tone(tonePin, 246, 177.34375);
      delay(197.048611111);
      delay(11.2847222222);
      tone(tonePin, 246, 177.34375);
      delay(197.048611111);
      delay(11.2847222222);
      tone(tonePin, 311, 533.59375);
      delay(592.881944444);
      delay(32.1180555556);
      tone(tonePin, 311, 88.28125);
      delay(98.0902777778);
      delay(6.07638888889);
      tone(tonePin, 277, 88.28125);
      delay(98.0902777778);
      delay(6.07638888889);
      tone(tonePin, 246, 711.71875);
      delay(790.798611111);
      delay(459.201388889);
      tone(tonePin, 329, 355.46875);
      delay(394.965277778);
      delay(21.7013888889);
      tone(tonePin, 311, 177.34375);
      delay(197.048611111);
      delay(11.2847222222);
      tone(tonePin, 277, 177.34375);
      delay(197.048611111);
      delay(11.2847222222);
      tone(tonePin, 277, 711.71875);
      delay(790.798611111);
      delay(42.5347222222);
      tone(tonePin, 329, 355.46875);
      delay(394.965277778);
      delay(21.7013888889);
      tone(tonePin, 311, 533.59375);
      delay(592.881944444);
      delay(32.1180555556);
      tone(tonePin, 277, 177.34375);
      delay(197.048611111);
      delay(11.2847222222);
      tone(tonePin, 246, 711.71875);
      delay(790.798611111);
      break;
     default:
      break;
   }
}
void setup() {

}

void midi() {
   for(int i=10; i > 6; i--) {
    playSong(i);
    delay(1000);
   }
}

void blinkLED() {
  
}

void loop() {
    // Play midi
    midi();
}
