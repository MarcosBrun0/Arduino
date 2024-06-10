#define BUTTON_PIN_2 2  // Pino do botão 1
#define BUTTON_PIN_3 3  // Pino do botão 2
#define BUTTON_PIN_4 4  // Pino do botão 3
#define BUTTON_PIN_5 5  // Pino do botão 4
#define BUZZER_PIN 6    // Pino do buzzer

void setup() {
  pinMode(BUTTON_PIN_2, INPUT_PULLUP);
  pinMode(BUTTON_PIN_3, INPUT_PULLUP);
  pinMode(BUTTON_PIN_4, INPUT_PULLUP);
  pinMode(BUTTON_PIN_5, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN_2) == LOW) {
    playTone(262); // Tocar som correspondente ao botão 1 (C4)
  } else if (digitalRead(BUTTON_PIN_3) == LOW) {
    playTone(330); // Tocar som correspondente ao botão 2 (e4)
  } else if (digitalRead(BUTTON_PIN_4) == LOW) {
    playTone(392); // Tocar som correspondente ao botão 3 (g4)
  } else if (digitalRead(BUTTON_PIN_5) == LOW) {
    playTone(523); // Tocar som correspondente ao botão 4 (g5)
  }
}

void playTone(int frequency) {
  tone(BUZZER_PIN, frequency, 200); // Toca o som com a frequência especificada por 200ms
  delay(300); // Aguarda 500ms para evitar toques consecutivos
}
