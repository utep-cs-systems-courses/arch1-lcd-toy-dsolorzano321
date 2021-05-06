	

	.arch msp430g2553
	.p2align 1,0


	.text
				;


jt:
	.word option0		;jt[0]
	.word option1		;jt[1]
	.word option2		;jt[2]


	.global buzzer_assembly

buzzer_assembly:

	;;check for state
	sub #4, r1		;s-4 does not borrow is s>3
	mov #0, 0(r1)

	cmp #3, r12
	jhs end


	add r12, r12		;r12 = 2*s
	mov jt(r12), r0		;jmp jt[s]

option0:
	
	mov #400, 0(r1)		;buzzer_set_period(500)
	mov 0(r1), r12
	call #play_buzzer
	
	jmp end


option1:
	mov #600, 0(r1)
	mov 0(r1), r12
	call #play_buzzer
	
	jmp end
 
option2:
	mov #700, 0(r1)
	mov 0(r1), r12
	call #play_buzzer
	
	jmp end
 




end:
	add #2, r1
	pop r0			;return
	

	

	

	
