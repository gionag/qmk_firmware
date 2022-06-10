#include "m_star_classic.h"

#ifdef MSTAR_LED_PINS
static const pin_t led_pins[3] = MSTAR_LED_PINS;

bool led_update_kb(led_t led_state) {
	bool res = led_update_user(led_state);
	if(res) {
		writePin(led_pins[0], !led_state.num_lock);
		writePin(led_pins[1], !led_state.caps_lock);
		writePin(led_pins[2], !led_state.scroll_lock);
	}
	return res;
}

void led_init_ports() {
	setPinOutput(led_pins[0]);
	setPinOutput(led_pins[1]);
	setPinOutput(led_pins[2]);
}

#else
void led_init_ports() { }
#endif

void keyboard_pre_init_kb(void) {
	setPinOutput(MSTAR_STATUS_LED);
	writePin(MSTAR_STATUS_LED, 0);

    // How to Disable ST Link and reclaim SWDIO and SWCLK for GPIO
    // Default for F103 is AFIO_MAPR_SWJ_CFG_JTAGDISABLE
    MODIFY_REG(AFIO->MAPR, AFIO_MAPR_SWJ_CFG, AFIO_MAPR_SWJ_CFG_DISABLE);

	led_init_ports();
	keyboard_pre_init_user();
}
