
#ifndef stateMachines_included
//#define stateMachines_included
#define stateMachines_included
static char count;


void play_buzzer(short note);
void state_advance();
void buzzer_state_advance();
void led_advance();
void buzz_assembly(short state);
void buzzer_assembly();
void led_assembly();
//void song(); 
#endif // included
