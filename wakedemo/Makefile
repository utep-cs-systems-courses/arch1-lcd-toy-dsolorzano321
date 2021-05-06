# makfile configuration
CPU             	= msp430g2553
CFLAGS          	= -mmcu=${CPU} -Os -I../h
LDFLAGS		= -L../lib -L/opt/ti/msp430_gcc/include/ 

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-gcc -mmcu=${CPU} -c

all:wakedemo.elf

#additional rules for files
wakedemo.elf: ${COMMON_OBJECTS} wakedemo.o buzzer.o led.o jt_assembly.o wdt_handler.o switches.o main.o switches.o stateMachines.o ../lib/libTimer.a
	${CC} ${CFLAGS} ${LDFLAGS}-o $@ $^ -lLcd -lShape -lCircle -lp2sw 

load: wakedemo.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf *~


#wakedemo.o: buzzer.h switches.h stateMachines.h
wdInterruptHandler.o: stateMachines.h switches.h led.h buzzer.h
stateMachines.o: stateMachines.h led.h buzzer.h
switches.o: switches.h stateMachines.h buzzer.h led.h
p2_interrupt_handler.o: switches.h
buzzer.o: buzzer.h
led.o: led.h
