#include <msp430.h>
#include "libTimer.h"
#include "switches.h"
#include "wakedemo.h"
#include "led.h"
#include "buzzer.h"

int main(void) {
  configureClocks();/* setup master oscillator, CPU & peripheral clocks */
  enableWDTInterrupts();/* enable periodic interrupt */
  led_init();
  buzzer_init();
  buzzer_set_period(0);
  switch_init();
  StartGame();
  or_sr(0x18);/* CPU off, GIE on */

}
