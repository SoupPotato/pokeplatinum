	.include "macros/function.inc"
	.include "include/unk_020CCC20.inc"

	

	.text


	arm_func_start sub_020CCC20
sub_020CCC20: ; 0x020CCC20
	stmfd sp!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, lr}
	mov sb, r0
	ldr r7, [sb, #0x2c]
	ldr r0, _020CCE08 ; =0x02000BFC
	ldr r4, [sb, #0x34]
	ldr sl, [sb, #0x30]
	mov r5, #0x100
	bl sub_02000B9C
	cmp r7, #0xb
	bne _020CCC54
	bl sub_020CCEF8
	mov r5, r0
	b _020CCC64
_020CCC54:
	cmp r7, #0xf
	ldreq r0, _020CCE0C ; =0x021CEE20
	ldreq r0, [r0]
	ldreq r5, [r0, #0x20]
_020CCC64:
	add r6, sb, #0x120
	mov fp, #9
_020CCC6C:
	ldr r8, [sb, #0x24]
	ldr r0, [sb]
	cmp r5, r8
	movlo r8, r5
	str r8, [r0, #0x14]
	ldr r0, [sb, #0x114]
	tst r0, #0x40
	beq _020CCCA8
	ldr r0, [sb, #0x114]
	mov r1, #7
	bic r0, r0, #0x40
	str r0, [sb, #0x114]
	ldr r0, [sb]
	str r1, [r0, #0]
	b _020CCDB4
_020CCCA8:
	cmp r4, #3
	addls pc, pc, r4, lsl #2
	b _020CCD38
_020CCCB4: ; jump table
	b _020CCCC4 ; case 0
	b _020CCCE8 ; case 1
	b _020CCCE8 ; case 2
	b _020CCD20 ; case 3
_020CCCC4:
	mov r0, r6
	mov r1, r8
	bl sub_020C2C1C
	ldr r1, [sb, #0x1c]
	ldr r0, [sb]
	str r1, [r0, #0xc]
	ldr r0, [sb]
	str r6, [r0, #0x10]
	b _020CCD38
_020CCCE8:
	ldr r0, [sb, #0x1c]
	mov r1, r6
	mov r2, r8
	bl sub_020C4DB0
	mov r0, r6
	mov r1, r8
	bl sub_020C2C54
	bl sub_020C2C78
	ldr r0, [sb]
	str r6, [r0, #0xc]
	ldr r1, [sb, #0x20]
	ldr r0, [sb]
	str r1, [r0, #0x10]
	b _020CCD38
_020CCD20:
	ldr r1, [sb, #0x1c]
	ldr r0, [sb]
	str r1, [r0, #0xc]
	ldr r1, [sb, #0x20]
	ldr r0, [sb]
	str r1, [r0, #0x10]
_020CCD38:
	mov r0, sb
	mov r1, r7
	mov r2, sl
	bl sub_020CD7F8
	cmp r0, #0
	beq _020CCDB4
	cmp r4, #2
	bne _020CCD74
	mov r0, sb
	mov r1, fp
	mov r2, #1
	bl sub_020CD7F8
	cmp r0, #0
	beq _020CCDB4
	b _020CCD8C
_020CCD74:
	cmp r4, #0
	bne _020CCD8C
	ldr r1, [sb, #0x20]
	mov r0, r6
	mov r2, r8
	bl sub_020C4DB0
_020CCD8C:
	ldr r0, [sb, #0x1c]
	add r0, r0, r8
	str r0, [sb, #0x1c]
	ldr r0, [sb, #0x20]
	add r0, r0, r8
	str r0, [sb, #0x20]
	ldr r0, [sb, #0x24]
	subs r0, r0, r8
	str r0, [sb, #0x24]
	bne _020CCC6C
_020CCDB4:
	ldr r6, [sb, #0x38]
	ldr r5, [sb, #0x3c]
	bl sub_020C3D98
	ldr r1, [sb, #0x114]
	mov r4, r0
	bic r0, r1, #0x4c
	str r0, [sb, #0x114]
	add r0, sb, #0x10c
	bl sub_020C2268
	ldr r0, [sb, #0x114]
	tst r0, #0x10
	beq _020CCDEC
	add r0, sb, #0x44
	bl sub_020C22D0
_020CCDEC:
	mov r0, r4
	bl sub_020C3DAC
	cmp r6, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, pc}
	mov r0, r5
	blx r6
	ldmia sp!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, pc}
	; .align 2, 0
_020CCE08: .word 0x02000BFC
_020CCE0C: .word 0x021CEE20
	arm_func_end sub_020CCC20

	arm_func_start sub_020CCE10
sub_020CCE10: ; 0x020CCE10
	stmfd sp!, {r3, r4, r5, r6, r7, r8, sb, lr}
	mov sb, r0
	ldr r4, _020CCEE8 ; =0x021CEE20
	ldr r0, _020CCEEC ; =0x02000BFC
	mov r8, r1
	mov r7, r2
	mov r6, r3
	bl sub_02000B9C
	bl sub_020C3D98
	ldr r1, [r4, #0x114]
	mov r5, r0
	tst r1, #4
	beq _020CCE58
_020CCE44:
	add r0, r4, #0x10c
	bl sub_020C2218
	ldr r0, [r4, #0x114]
	tst r0, #4
	bne _020CCE44
_020CCE58:
	ldr r0, [r4, #0x114]
	ldr r1, [sp, #0x20]
	orr r2, r0, #4
	mov r0, r5
	str r2, [r4, #0x114]
	str r6, [r4, #0x38]
	str r1, [r4, #0x3c]
	bl sub_020C3DAC
	ldr r3, [sp, #0x28]
	ldr r2, [sp, #0x2c]
	ldr r1, [sp, #0x30]
	ldr r0, [sp, #0x24]
	str sb, [r4, #0x1c]
	str r8, [r4, #0x20]
	str r7, [r4, #0x24]
	str r3, [r4, #0x2c]
	str r2, [r4, #0x30]
	str r1, [r4, #0x34]
	cmp r0, #0
	beq _020CCEB8
	ldr r0, _020CCEF0 ; =sub_020CCC20
	bl sub_020CC544
	mov r0, #1
	ldmia sp!, {r3, r4, r5, r6, r7, r8, sb, pc}
_020CCEB8:
	ldr r0, _020CCEF4 ; =0x021CCC80
	ldr r1, _020CCEE8 ; =0x021CEE20
	ldr r2, [r0, #4]
	mov r0, r4
	str r2, [r1, #0x104]
	bl sub_020CCC20
	ldr r0, [r4, #0]
	ldr r0, [r0, #0]
	cmp r0, #0
	moveq r0, #1
	movne r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, r8, sb, pc}
	; .align 2, 0
_020CCEE8: .word 0x021CEE20
_020CCEEC: .word 0x02000BFC
_020CCEF0: .word sub_020CCC20
_020CCEF4: .word 0x021CCC80
	arm_func_end sub_020CCE10

	arm_func_start sub_020CCEF8
sub_020CCEF8: ; 0x020CCEF8
	ldr r0, _020CCF08 ; =0x021CEE20
	ldr r0, [r0, #0]
	ldr r0, [r0, #0x1c]
	bx lr
	; .align 2, 0
_020CCF08: .word 0x021CEE20
	arm_func_end sub_020CCEF8

	arm_func_start sub_020CCF0C
sub_020CCF0C: ; 0x020CCF0C
	stmfd sp!, {r3, r4, r5, r6, r7, lr}
	mov r6, r0
	ldr r0, _020CD038 ; =0x02000BFC
	ldr r4, _020CD03C ; =0x021CEE20
	bl sub_02000B9C
	cmp r6, #0
	bne _020CCF2C
	bl sub_020C42A8
_020CCF2C:
	bl sub_020CC7B0
	bl sub_020C3D98
	ldr r1, [r4, #0x114]
	mov r5, r0
	tst r1, #4
	beq _020CCF58
_020CCF44:
	add r0, r4, #0x10c
	bl sub_020C2218
	ldr r0, [r4, #0x114]
	tst r0, #4
	bne _020CCF44
_020CCF58:
	ldr r0, [r4, #0x114]
	mov r1, #0
	orr r2, r0, #4
	mov r0, r5
	str r2, [r4, #0x114]
	str r1, [r4, #0x38]
	str r1, [r4, #0x3c]
	bl sub_020C3DAC
	mov r0, r6
	bl sub_020CC8D8
	ldr r0, _020CD040 ; =0x021CCC80
	ldr r1, _020CD03C ; =0x021CEE20
	ldr r2, [r0, #4]
	mov r0, r4
	str r2, [r1, #0x104]
	mov r1, #2
	mov r2, #1
	bl sub_020CD7F8
	ldr r0, [r4, #0]
	mov r1, #0
	str r1, [r0, #0xc]
	ldr r0, [r4, #0]
	add r1, r4, #0x120
	str r1, [r0, #0x10]
	ldr r1, [r4, #0]
	mov r2, #1
	mov r0, r4
	str r2, [r1, #0x14]
	mov r1, #6
	bl sub_020CD7F8
	ldr r7, [r4, #0x38]
	ldr r6, [r4, #0x3c]
	bl sub_020C3D98
	mov r5, r0
	ldr r1, [r4, #0x114]
	add r0, r4, #0x10c
	bic r1, r1, #0x4c
	str r1, [r4, #0x114]
	bl sub_020C2268
	ldr r0, [r4, #0x114]
	tst r0, #0x10
	beq _020CD008
	add r0, r4, #0x44
	bl sub_020C22D0
_020CD008:
	mov r0, r5
	bl sub_020C3DAC
	cmp r7, #0
	beq _020CD020
	mov r0, r6
	blx r7
_020CD020:
	ldr r0, [r4, #0]
	ldr r0, [r0, #0]
	cmp r0, #0
	moveq r0, #1
	movne r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
	; .align 2, 0
_020CD038: .word 0x02000BFC
_020CD03C: .word 0x021CEE20
_020CD040: .word 0x021CCC80
	arm_func_end sub_020CCF0C

	arm_func_start sub_020CD044
sub_020CD044: ; 0x020CD044
	ldr ip, _020CD04C ; =sub_020CC7D8
	bx ip
	; .align 2, 0
_020CD04C: .word sub_020CC7D8
	arm_func_end sub_020CD044

	arm_func_start sub_020CD050
sub_020CD050: ; 0x020CD050
	ldr ip, _020CD058 ; =sub_020CC824
	bx ip
	; .align 2, 0
_020CD058: .word sub_020CC824
	arm_func_end sub_020CD050

	arm_func_start sub_020CD05C
sub_020CD05C: ; 0x020CD05C
	stmfd sp!, {r3, lr}
	bl sub_020C3D98
	ldr r1, _020CD07C ; =0x021CEE20
	ldr r2, [r1, #0x114]
	orr r2, r2, #0x40
	str r2, [r1, #0x114]
	bl sub_020C3DAC
	ldmia sp!, {r3, pc}
	; .align 2, 0
_020CD07C: .word 0x021CEE20
	arm_func_end sub_020CD05C