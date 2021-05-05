
#ifndef stateMachines_included
//#define stateMachines_included
#define stateMachines_included
static char count;

void countToThree();
void secBttn();

void play_buzzer(short note);
void state_advance();
void buzzer_state_advance();
void led_advance();
void buzz_assembly(short state);
void buzz_advance();

//void song(); 
#endif // included
