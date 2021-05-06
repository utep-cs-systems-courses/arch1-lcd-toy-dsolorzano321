	

	.arch msp430g2553
	.p2align 1,0



	.data			;
state:
	.word 1
jt:
	.word default		;jt[0]
	.word option1		;jt[1]
	.word option2		;jt[2]
	.word option3		;jt[3]

	.global buzzer_assembly

buzzer_assembly:

	;;check for state
	cmp #4, &state		;s-4 does not borrow is s>3
	jhs default		;jump if s > 3

	mov &state, r12
	add r12, r12		;r12 = 2*s
	mov jt(r12), r0		;jmp jt[s]

option1:
	
	mov #400, 0(r1)		;buzzer_set_period(500)
	mov 0(r1), r12
	call #buzzer_set_period
	
	jmp end


option2:
	mov #600, 0(r1)
	mov 0(r1), r12
	call #buzzer_set_period
	
	jmp end
 

option3:
	mov #500, 0(r1)
	mov 0(r1), r12
	call #buzzer_set_period
	mov #0, &state
	

default:
	add #1, &state

end:
	pop r0			;return
	

	

	

	
