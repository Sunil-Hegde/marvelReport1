#include <Arduino.h>

#define LED_ON          HIGH
#define LED_OFF         LOW
#define NUM_LEDS        4
#define NUM_BUTTONS     4
#define FLASH_DELAY     500
#define GAME_OVER_FLASHES 5

const int ledPins[NUM_LEDS] = {14, 4, 5, 18};
const int buttonPins[NUM_BUTTONS] = {15, 16, 17, 19};

void setup() {
    for (int i = 0; i < NUM_LEDS; i++) {
        pinMode(ledPins[i], OUTPUT);
        digitalWrite(ledPins[i], LED_OFF);
    }

    for (int i = 0; i < NUM_BUTTONS; i++) {
        pinMode(buttonPins[i], INPUT_PULLUP);
    }

    randomSeed(analogRead(0));
}

void led_on(int ledPin) {
    digitalWrite(ledPin, LED_ON);
}

void led_off(int ledPin) {
    digitalWrite(ledPin, LED_OFF);
}

void flash_led(int ledPin) {
    led_on(ledPin);
    delay(FLASH_DELAY);
    led_off(ledPin);
    delay(FLASH_DELAY);
}

int random_number(int min, int max) {
    return min + (rand() % (max - min + 1));
}

void generate_sequence(int sequence[], int length) {
    for (int i = 0; i < length; i++) {
        sequence[i] = random_number(0, NUM_LEDS - 1);
    }
}

int wait_for_button_press() {
    int buttonPressed = -1;
    while (buttonPressed == -1) {
        for (int i = 0; i < NUM_BUTTONS; i++) {
            if (digitalRead(buttonPins[i]) == LOW) {
                buttonPressed = i;
                break;
            }
        }
        delay(10);
    }
    return buttonPressed;
}

void play_simon_says() {
    int sequence[10];
    int sequenceLength = 1;
    int inputSeq[10];

    while (true) {
        generate_sequence(sequence, sequenceLength);
        for (int i = 0; i < sequenceLength; i++) {
            flash_led(ledPins[sequence[i]]);
        }
        for (int i = 0; i < sequenceLength; i++) {
            inputSeq[i] = wait_for_button_press();
            delay(FLASH_DELAY); 
        }
        bool correctInput = true;
        for (int i = 0; i < sequenceLength; i++) {
            if (inputSeq[i] != sequence[i]) {
                correctInput = false;
                break;
            }
        }
        if (!correctInput) {
            for (int i = 0; i < GAME_OVER_FLASHES; i++) {
                for (int j = 0; j < NUM_LEDS; j++) {
                    led_on(ledPins[j]);
                }
                delay(FLASH_DELAY);
                for (int j = 0; j < NUM_LEDS; j++) {
                    led_off(ledPins[j]);
                }
                delay(FLASH_DELAY);
            }
            sequenceLength = 1;
        } else {
            sequenceLength++;
        }
    }
}

void loop() {
    play_simon_says();
}

