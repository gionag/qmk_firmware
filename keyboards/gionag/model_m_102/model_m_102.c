#include "model_m_102.h"

#ifdef LED_PINS
const uint32_t ledPins[] = LED_PINS;

void keyboard_pre_init_kb(void) {
  /* Setting status LEDs pins to output and +5V (off) */
  setPinOutput(ledPins[0]);
  setPinOutput(ledPins[1]);
  setPinOutput(ledPins[2]);
  writePinHigh(ledPins[0]);
  writePinHigh(ledPins[1]);
  writePinHigh(ledPins[2]);
  
  writePinLow(ledPins[0]);
  wait_ms(250);
  writePinLow(ledPins[1]);
  wait_ms(250);
  writePinLow(ledPins[2]);
  wait_ms(250);
}

bool led_update_kb(led_t led_state) {
    if(led_update_user(led_state)) {
        writePin(ledPins[0], !led_state.num_lock);
        writePin(ledPins[1], !led_state.caps_lock);
        writePin(ledPins[2], !led_state.scroll_lock);
    }
    return true;
}
#endif
