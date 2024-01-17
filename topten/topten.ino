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

void playSong(int number=1) {
  int tonePin = 1;
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
     case 2:
      // DONNA
      tone(tonePin, 466, 481.472732813);
      delay(534.969703125);
      delay(0.744046875);
      tone(tonePin, 415, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 481.472732813);
      delay(534.969703125);
      delay(0.744046875);
      tone(tonePin, 415, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 481.472732813);
      delay(534.969703125);
      delay(0.744046875);
      tone(tonePin, 415, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 481.472732813);
      delay(534.969703125);
      delay(0.744046875);
      tone(tonePin, 415, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 481.472732813);
      delay(534.969703125);
      delay(2322.17029688);
      tone(tonePin, 466, 481.472732813);
      delay(534.969703125);
      delay(0.744046875);
      tone(tonePin, 415, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 481.472732813);
      delay(534.969703125);
      delay(0.744046875);
      tone(tonePin, 415, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 481.472732813);
      delay(534.969703125);
      delay(0.744046875);
      tone(tonePin, 415, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 415, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 481.472732813);
      delay(534.969703125);
      delay(0.744046875);
      tone(tonePin, 415, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 466, 160.044482813);
      delay(177.827203125);
      delay(0.744046875);
      tone(tonePin, 415, 802.900982812);
      delay(892.112203125);
      delay(0.744046875);
      tone(tonePin, 391, 642.186857812);
      delay(713.540953125);
      break;
     case 3:
      // KELELA
      tone(tonePin, 369, 353.592560938);
      delay(392.880623264);
      delay(0.820210069444);
      tone(tonePin, 329, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 329, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 329, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 293, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 277, 176.427185938);
      delay(196.030206597);
      delay(197.670626736);
      tone(tonePin, 369, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 329, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 329, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 329, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 329, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 293, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 293, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 277, 176.427185938);
      delay(196.030206597);
      break;
     case 4:
      // TROYE
      tone(tonePin, 440, 530.757935937);
      delay(589.731039931);
      delay(0.820210069444);
      tone(tonePin, 440, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 466, 176.427185938);
      delay(196.030206597);
      delay(197.670626736);
      tone(tonePin, 349, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 293, 83.4153640625);
      delay(92.6837378472);
      delay(5.74147048611);
      tone(tonePin, 440, 619.340623437);
      delay(688.156248264);
      delay(0.820210069444);
      tone(tonePin, 440, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 466, 176.427185938);
      delay(196.030206597);
      delay(197.670626736);
      tone(tonePin, 349, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 293, 87.8444984375);
      delay(97.6049982639);
      delay(0.820210069444);
      tone(tonePin, 440, 619.340623437);
      delay(688.156248264);
      delay(0.820210069444);
      tone(tonePin, 440, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 466, 176.427185938);
      delay(196.030206597);
      delay(197.670626736);
      tone(tonePin, 349, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 293, 87.8444984375);
      delay(97.6049982639);
      delay(0.820210069444);
      tone(tonePin, 440, 619.340623437);
      delay(688.156248264);
      delay(0.820210069444);
      tone(tonePin, 440, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 466, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 440, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 349, 176.427185938);
      delay(196.030206597);
      delay(0.820210069444);
      tone(tonePin, 293, 176.427185938);
      delay(196.030206597);
      break;
     case 5:
      // JUNGLE
      tone(tonePin, 415, 1232.23487656);
      delay(1369.14986285);
      delay(0.713470486111);
      tone(tonePin, 415, 307.577126563);
      delay(341.752362847);
      delay(0.713470486111);
      tone(tonePin, 415, 307.577126563);
      delay(341.752362847);
      delay(0.713470486111);
      tone(tonePin, 415, 153.467501563);
      delay(170.519446181);
      delay(0.713470486111);
      tone(tonePin, 554, 153.467501563);
      delay(170.519446181);
      delay(0.713470486111);
      tone(tonePin, 622, 153.467501563);
      delay(170.519446181);
      delay(0.713470486111);
      tone(tonePin, 739, 307.577126563);
      delay(341.752362847);
      delay(0.713470486111);
      tone(tonePin, 622, 461.686751563);
      delay(512.985279514);
      delay(685.645137153);
      tone(tonePin, 466, 307.577126563);
      delay(341.752362847);
      delay(0.713470486111);
      tone(tonePin, 369, 307.577126563);
      delay(341.752362847);
      delay(0.713470486111);
      tone(tonePin, 311, 307.577126563);
      delay(341.752362847);
      delay(0.713470486111);
      tone(tonePin, 466, 307.577126563);
      delay(341.752362847);
      delay(0.713470486111);
      tone(tonePin, 415, 615.796376563);
      delay(684.218196181);
      break;
     case 6:
      // CAROLINE
      tone(tonePin, 277, 101.420539062);
      delay(112.689487847);
      delay(0.946970486111);
      tone(tonePin, 246, 101.420539062);
      delay(112.689487847);
      delay(0.946970486111);
      tone(tonePin, 277, 101.420539062);
      delay(112.689487847);
      delay(0.946970486111);
      tone(tonePin, 220, 101.420539062);
      delay(112.689487847);
      delay(0.946970486111);
      tone(tonePin, 246, 305.966164063);
      delay(339.962404514);
      delay(0.946970486111);
      tone(tonePin, 246, 101.420539062);
      delay(112.689487847);
      delay(682.765720486);
      tone(tonePin, 277, 101.420539062);
      delay(112.689487847);
      delay(0.946970486111);
      tone(tonePin, 246, 101.420539062);
      delay(112.689487847);
      delay(0.946970486111);
      tone(tonePin, 277, 203.693351562);
      delay(226.325946181);
      delay(0.946970486111);
      tone(tonePin, 220, 203.693351562);
      delay(226.325946181);
      delay(0.946970486111);
      tone(tonePin, 246, 305.966164063);
      delay(339.962404514);
      delay(0.946970486111);
      tone(tonePin, 246, 101.420539062);
      delay(112.689487847);
      break;
     case 7:
      // RALPHIE
      tone(tonePin, 174, 149.0625);
      delay(165.625);
      delay(1.04166666667);
      tone(tonePin, 261, 149.0625);
      delay(165.625);
      delay(1.04166666667);
      tone(tonePin, 391, 149.0625);
      delay(165.625);
      delay(1.04166666667);
      tone(tonePin, 261, 149.0625);
      delay(165.625);
      delay(1.04166666667);
      tone(tonePin, 391, 149.0625);
      delay(165.625);
      delay(1.04166666667);
      tone(tonePin, 311, 149.0625);
      delay(165.625);
      delay(1.04166666667);
      tone(tonePin, 174, 149.0625);
      delay(165.625);
      delay(1.04166666667);
      tone(tonePin, 261, 149.0625);
      delay(165.625);
      delay(1.04166666667);
      tone(tonePin, 391, 149.0625);
      delay(165.625);
      delay(1.04166666667);
      tone(tonePin, 311, 449.0625);
      delay(498.958333333);
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
      tone(tonePin, 391, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
      tone(tonePin, 349, 121.263603125);
      delay(134.737336806);
      delay(1.13224652778);
      tone(tonePin, 329, 243.546228125);
      delay(270.606920139);
      delay(1.13224652778);
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


void blinkLED() {
  for(int i=0; i < 6; i++) {
    digitalWrite(0, HIGH);
    delay(500);
    digitalWrite(0, LOW);
    delay(500); 
  }
}

void midi() {
   for(int i=10; i > 0; i--) {
    playSong(i);
    if (i > 1) {
      blinkLED();
    }
   }
}

void setup() {
    midi();
}

void loop() {
    // Play midi
}
