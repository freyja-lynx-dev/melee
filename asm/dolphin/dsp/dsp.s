.include "macros.inc"

.section .text  # 0x80005940 - 0x803B7240

.global DSPAddTask
DSPAddTask:
/* 803360D4 00332CB4  7C 08 02 A6 */	mflr r0
/* 803360D8 00332CB8  90 01 00 04 */	stw r0, 4(r1)
/* 803360DC 00332CBC  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 803360E0 00332CC0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 803360E4 00332CC4  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803360E8 00332CC8  7C 7E 1B 78 */	mr r30, r3
/* 803360EC 00332CCC  48 01 12 79 */	bl OSDisableInterrupts
/* 803360F0 00332CD0  3B E3 00 00 */	addi r31, r3, 0
/* 803360F4 00332CD4  38 7E 00 00 */	addi r3, r30, 0
/* 803360F8 00332CD8  48 00 08 B5 */	bl func_803369AC
/* 803360FC 00332CDC  38 00 00 00 */	li r0, 0
/* 80336100 00332CE0  90 1E 00 00 */	stw r0, 0(r30)
/* 80336104 00332CE4  38 00 00 01 */	li r0, 1
/* 80336108 00332CE8  38 7F 00 00 */	addi r3, r31, 0
/* 8033610C 00332CEC  90 1E 00 08 */	stw r0, 8(r30)
/* 80336110 00332CF0  48 01 12 7D */	bl OSRestoreInterrupts
/* 80336114 00332CF4  80 0D BB 88 */	lwz r0, __DSP_first_task@sda21(r13)
/* 80336118 00332CF8  7C 1E 00 40 */	cmplw r30, r0
/* 8033611C 00332CFC  40 82 00 0C */	bne lbl_80336128
/* 80336120 00332D00  7F C3 F3 78 */	mr r3, r30
/* 80336124 00332D04  48 00 06 FD */	bl func_80336820
lbl_80336128:
/* 80336128 00332D08  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8033612C 00332D0C  7F C3 F3 78 */	mr r3, r30
/* 80336130 00332D10  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80336134 00332D14  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80336138 00332D18  7C 08 03 A6 */	mtlr r0
/* 8033613C 00332D1C  38 21 00 18 */	addi r1, r1, 0x18
/* 80336140 00332D20  4E 80 00 20 */	blr 

.global DSPAssertTask
DSPAssertTask:
/* 80336144 00332D24  7C 08 02 A6 */	mflr r0
/* 80336148 00332D28  90 01 00 04 */	stw r0, 4(r1)
/* 8033614C 00332D2C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 80336150 00332D30  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80336154 00332D34  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80336158 00332D38  7C 7E 1B 78 */	mr r30, r3
/* 8033615C 00332D3C  48 01 12 09 */	bl OSDisableInterrupts
/* 80336160 00332D40  80 8D BB 8C */	lwz r4, __DSP_curr_task@sda21(r13)
/* 80336164 00332D44  3B E3 00 00 */	addi r31, r3, 0
/* 80336168 00332D48  7C 04 F0 40 */	cmplw r4, r30
/* 8033616C 00332D4C  40 82 00 20 */	bne lbl_8033618C
/* 80336170 00332D50  38 00 00 01 */	li r0, 1
/* 80336174 00332D54  93 CD BB 7C */	stw r30, __DSP_rude_task@sda21(r13)
/* 80336178 00332D58  7F E3 FB 78 */	mr r3, r31
/* 8033617C 00332D5C  90 0D BB 78 */	stw r0, __DSP_rude_task_pending@sda21(r13)
/* 80336180 00332D60  48 01 12 0D */	bl OSRestoreInterrupts
/* 80336184 00332D64  7F C3 F3 78 */	mr r3, r30
/* 80336188 00332D68  48 00 00 6C */	b lbl_803361F4
lbl_8033618C:
/* 8033618C 00332D6C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80336190 00332D70  80 04 00 04 */	lwz r0, 4(r4)
/* 80336194 00332D74  7C 03 00 40 */	cmplw r3, r0
/* 80336198 00332D78  40 80 00 50 */	bge lbl_803361E8
/* 8033619C 00332D7C  38 00 00 01 */	li r0, 1
/* 803361A0 00332D80  93 CD BB 7C */	stw r30, __DSP_rude_task@sda21(r13)
/* 803361A4 00332D84  90 0D BB 78 */	stw r0, __DSP_rude_task_pending@sda21(r13)
/* 803361A8 00332D88  80 04 00 00 */	lwz r0, 0(r4)
/* 803361AC 00332D8C  28 00 00 01 */	cmplwi r0, 1
/* 803361B0 00332D90  40 82 00 28 */	bne lbl_803361D8
/* 803361B4 00332D94  48 01 11 B1 */	bl OSDisableInterrupts
/* 803361B8 00332D98  3C 80 CC 00 */	lis r4, 0xCC005000@ha
/* 803361BC 00332D9C  38 A4 50 00 */	addi r5, r4, 0xCC005000@l
/* 803361C0 00332DA0  A0 84 50 0A */	lhz r4, 0x500a(r4)
/* 803361C4 00332DA4  38 00 FF 57 */	li r0, -169
/* 803361C8 00332DA8  7C 80 00 38 */	and r0, r4, r0
/* 803361CC 00332DAC  60 00 00 02 */	ori r0, r0, 2
/* 803361D0 00332DB0  B0 05 00 0A */	sth r0, 0xa(r5)
/* 803361D4 00332DB4  48 01 11 B9 */	bl OSRestoreInterrupts
lbl_803361D8:
/* 803361D8 00332DB8  7F E3 FB 78 */	mr r3, r31
/* 803361DC 00332DBC  48 01 11 B1 */	bl OSRestoreInterrupts
/* 803361E0 00332DC0  7F C3 F3 78 */	mr r3, r30
/* 803361E4 00332DC4  48 00 00 10 */	b lbl_803361F4
lbl_803361E8:
/* 803361E8 00332DC8  7F E3 FB 78 */	mr r3, r31
/* 803361EC 00332DCC  48 01 11 A1 */	bl OSRestoreInterrupts
/* 803361F0 00332DD0  38 60 00 00 */	li r3, 0
lbl_803361F4:
/* 803361F4 00332DD4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 803361F8 00332DD8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 803361FC 00332DDC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80336200 00332DE0  7C 08 03 A6 */	mtlr r0
/* 80336204 00332DE4  38 21 00 18 */	addi r1, r1, 0x18
/* 80336208 00332DE8  4E 80 00 20 */	blr 


.section .sbss

.global __DSP_init_flag
__DSP_init_flag:
	.skip 0x8
