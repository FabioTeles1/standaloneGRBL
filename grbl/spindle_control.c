#include "grbl.h"

void spindle_init() {
  SPINDLE_PWM_DDR |= (1<<SPINDLE_PWM_BIT);
  SPINDLE_TCCRA_REGISTER = SPINDLE_TCCRA_INIT_MASK;
  if (bit_istrue(settings.flags,BITFLAG_IS_SERVO)) {
    SPINDLE_TCCRB_REGISTER = SERVO_TCCRB_INIT_MASK;
    SPINDLE_TCCRA_REGISTER |= (1<<SPINDLE_COMB_BIT);
  } else {
    SPINDLE_TCCRB_REGISTER = SPINDLE_TCCRB_INIT_MASK;
  }
  spindle_set_speed(SPINDLE_PWM_OFF_VALUE);
}

void spindle_set_speed(uint8_t pwm_value) {
  if (bit_istrue(settings.flags,BITFLAG_IS_SERVO)) {
    if (pwm_value > SPINDLE_PWM_OFF_VALUE) {
      SPINDLE_OCR_REGISTER = settings.servo_max_pwm;
    } else {
      SPINDLE_OCR_REGISTER = settings.servo_min_pwm;
    }
  } else {

    SPINDLE_OCR_REGISTER = pwm_value;
    if (pwm_value == SPINDLE_PWM_OFF_VALUE) {
      SPINDLE_TCCRA_REGISTER &= ~(1<<SPINDLE_COMB_BIT);
    } else {
      SPINDLE_TCCRA_REGISTER |= (1<<SPINDLE_COMB_BIT);
    }
  }

  sys.spindle_speed = pwm_value;
}
