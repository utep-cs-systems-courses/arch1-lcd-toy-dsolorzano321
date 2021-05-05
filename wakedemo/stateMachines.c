#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "buzzer.h"
//#include "switches.h"
#include "lcdutils.h"
#include "lcddraw.h"
#include "drawFunction.h"
//#include "wakedemo.h"



char music_switch;

static char state = 0;

void play_buzzer(short note){
  buzzer_set_period(2000000/note);
  //green_on = 1;
}

/*
void buzz_advance(){
  switch(state){
  case 0:
    buzz_assembly(0);
    state++;
    break;
  case 1:
    buzz_assembly(1);
    state++;
    break;
  case 2:
    buzz_assembly(2);
    state++;
    break;
  case 3:
    buzz_assembly(3);
    state++;
    break;
  default:
    state++;

  }
*/


//}

static char secState = 0;
static int secPeriod = 0;
void secBttn(){
  switch(secState){
  case 0:
    break;
  }
}



/*
static char song_state = 0;
static int period = 0;
void song(){
  //  drawShape(colors);
  switch(song_state){
  case 0:period = 500; song_state =1;red_on = 1; green_on = 0; break;
  case 1:period = 300; song_state =2;red_on = 0; green_on = 1; break;
  case 2:period = 900; song_state =3;red_on = 0; green_on = 0; break;
  case 3:period = 800; song_state =4;red_on = 0; green_on = 0; break;
  case 4:period = 700; song_state =0;red_on = 0; green_on = 0; break;
    

  }
  buzzer_set_period(period);
  led_changed = 1;
  led_update();

}
*/



