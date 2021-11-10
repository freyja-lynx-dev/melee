.include "macros.inc"

.section .text  # 0x80005940 - 0x803B7240

.global InitMetroTRK
InitMetroTRK:
/* 8032A628 00327208  38 21 FF FC */	addi r1, r1, -4
/* 8032A62C 0032720C  90 61 00 00 */	stw r3, 0(r1)
/* 8032A630 00327210  3C 60 80 4A */	lis r3, lbl_804A4C98@h
/* 8032A634 00327214  60 63 4C 98 */	ori r3, r3, lbl_804A4C98@l
/* 8032A638 00327218  BC 03 00 00 */	stmw r0, 0(r3)
/* 8032A63C 0032721C  80 81 00 00 */	lwz r4, 0(r1)
/* 8032A640 00327220  38 21 00 04 */	addi r1, r1, 4
/* 8032A644 00327224  90 23 00 04 */	stw r1, 4(r3)
/* 8032A648 00327228  90 83 00 0C */	stw r4, 0xc(r3)
/* 8032A64C 0032722C  7C 88 02 A6 */	mflr r4
/* 8032A650 00327230  90 83 00 84 */	stw r4, 0x84(r3)
/* 8032A654 00327234  90 83 00 80 */	stw r4, 0x80(r3)
/* 8032A658 00327238  7C 80 00 26 */	mfcr r4
/* 8032A65C 0032723C  90 83 00 88 */	stw r4, 0x88(r3)
/* 8032A660 00327240  7C 80 00 A6 */	mfmsr r4
/* 8032A664 00327244  60 83 80 00 */	ori r3, r4, 0x8000
/* 8032A668 00327248  68 63 80 00 */	xori r3, r3, 0x8000
/* 8032A66C 0032724C  7C 60 01 24 */	mtmsr r3
/* 8032A670 00327250  7C 9B 03 A6 */	mtspr 0x1b, r4
/* 8032A674 00327254  48 00 01 F5 */	bl TRKSaveExtended1Block
/* 8032A678 00327258  3C 60 80 4A */	lis r3, lbl_804A4C98@h
/* 8032A67C 0032725C  60 63 4C 98 */	ori r3, r3, lbl_804A4C98@l
/* 8032A680 00327260  B8 03 00 00 */	.4byte 0xB8030000  /* illegal lmw r0, 0(r3) */
/* 8032A684 00327264  38 00 00 00 */	li r0, 0
/* 8032A688 00327268  7C 12 FB A6 */	mtspr 0x3f2, r0
/* 8032A68C 0032726C  7C 15 FB A6 */	mtspr 0x3f5, r0
/* 8032A690 00327270  3C 20 80 4F */	lis r1, _db_stack_addr@h
/* 8032A694 00327274  60 21 0C 00 */	ori r1, r1, _db_stack_addr@l
/* 8032A698 00327278  7C A3 2B 78 */	mr r3, r5
/* 8032A69C 0032727C  48 00 06 4D */	bl InitMetroTRKCommTable
/* 8032A6A0 00327280  2C 03 00 01 */	cmpwi r3, 1
/* 8032A6A4 00327284  40 82 00 14 */	bne lbl_8032A6B8
/* 8032A6A8 00327288  80 83 00 84 */	lwz r4, 0x84(r3)
/* 8032A6AC 0032728C  7C 88 03 A6 */	mtlr r4
/* 8032A6B0 00327290  B8 03 00 00 */	.4byte 0xB8030000  /* illegal lmw r0, 0(r3) */
/* 8032A6B4 00327294  4E 80 00 20 */	blr 
lbl_8032A6B8:
/* 8032A6B8 00327298  48 00 05 28 */	b TRK_main

.global EnableMetroTRKInterrupts
EnableMetroTRKInterrupts:
/* 8032A6BC 0032729C  7C 08 02 A6 */	mflr r0
/* 8032A6C0 003272A0  90 01 00 04 */	stw r0, 4(r1)
/* 8032A6C4 003272A4  94 21 FF F8 */	stwu r1, -8(r1)
/* 8032A6C8 003272A8  48 00 07 4D */	bl EnableEXI2Interrupts
/* 8032A6CC 003272AC  38 21 00 08 */	addi r1, r1, 8
/* 8032A6D0 003272B0  80 01 00 04 */	lwz r0, 4(r1)
/* 8032A6D4 003272B4  7C 08 03 A6 */	mtlr r0
/* 8032A6D8 003272B8  4E 80 00 20 */	blr 

.global TRKTargetTranslate
TRKTargetTranslate:
/* 8032A6DC 003272BC  3C 80 80 4A */	lis r4, lbl_804A50C8@ha
/* 8032A6E0 003272C0  38 84 50 C8 */	addi r4, r4, lbl_804A50C8@l
/* 8032A6E4 003272C4  80 84 00 00 */	lwz r4, 0(r4)
/* 8032A6E8 003272C8  7C 03 20 40 */	cmplw r3, r4
/* 8032A6EC 003272CC  41 80 00 2C */	blt lbl_8032A718
/* 8032A6F0 003272D0  38 04 40 00 */	addi r0, r4, 0x4000
/* 8032A6F4 003272D4  7C 03 00 40 */	cmplw r3, r0
/* 8032A6F8 003272D8  40 80 00 20 */	bge lbl_8032A718
/* 8032A6FC 003272DC  3C 80 80 4A */	lis r4, lbl_804A4C98@ha
/* 8032A700 003272E0  38 84 4C 98 */	addi r4, r4, lbl_804A4C98@l
/* 8032A704 003272E4  80 04 02 38 */	lwz r0, 0x238(r4)
/* 8032A708 003272E8  54 00 07 BE */	clrlwi r0, r0, 0x1e
/* 8032A70C 003272EC  28 00 00 00 */	cmplwi r0, 0
/* 8032A710 003272F0  41 82 00 08 */	beq lbl_8032A718
/* 8032A714 003272F4  48 00 00 0C */	b lbl_8032A720
lbl_8032A718:
/* 8032A718 003272F8  54 60 00 BE */	clrlwi r0, r3, 2
/* 8032A71C 003272FC  64 03 80 00 */	oris r3, r0, 0x8000
lbl_8032A720:
/* 8032A720 00327300  4E 80 00 20 */	blr 

.global TRK_copy_vector
TRK_copy_vector:
/* 8032A724 00327304  7C 08 02 A6 */	mflr r0
/* 8032A728 00327308  90 01 00 04 */	stw r0, 4(r1)
/* 8032A72C 0032730C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032A730 00327310  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032A734 00327314  93 C1 00 08 */	stw r30, 8(r1)
/* 8032A738 00327318  7C 7E 1B 78 */	mr r30, r3
/* 8032A73C 0032731C  7F C3 F3 78 */	mr r3, r30
/* 8032A740 00327320  4B FF FF 9D */	bl TRKTargetTranslate
/* 8032A744 00327324  3C 80 80 00 */	lis r4, gTRKInterruptVectorTable@ha
/* 8032A748 00327328  38 04 32 98 */	addi r0, r4, gTRKInterruptVectorTable@l
/* 8032A74C 0032732C  7C 7F 1B 78 */	mr r31, r3
/* 8032A750 00327330  7C 80 F2 14 */	add r4, r0, r30
/* 8032A754 00327334  7F E3 FB 78 */	mr r3, r31
/* 8032A758 00327338  38 A0 01 00 */	li r5, 0x100
/* 8032A75C 0032733C  4B CD 8A E9 */	bl TRK_memcpy
/* 8032A760 00327340  7F E3 FB 78 */	mr r3, r31
/* 8032A764 00327344  38 80 01 00 */	li r4, 0x100
/* 8032A768 00327348  4B FF E7 E9 */	bl TRK_flush_cache
/* 8032A76C 0032734C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032A770 00327350  83 C1 00 08 */	lwz r30, 8(r1)
/* 8032A774 00327354  38 21 00 10 */	addi r1, r1, 0x10
/* 8032A778 00327358  80 01 00 04 */	lwz r0, 4(r1)
/* 8032A77C 0032735C  7C 08 03 A6 */	mtlr r0
/* 8032A780 00327360  4E 80 00 20 */	blr 

.global __TRK_copy_vectors
__TRK_copy_vectors:
/* 8032A784 00327364  7C 08 02 A6 */	mflr r0
/* 8032A788 00327368  90 01 00 04 */	stw r0, 4(r1)
/* 8032A78C 0032736C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 8032A790 00327370  93 E1 00 14 */	stw r31, 0x14(r1)
/* 8032A794 00327374  93 C1 00 10 */	stw r30, 0x10(r1)
/* 8032A798 00327378  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8032A79C 0032737C  93 81 00 08 */	stw r28, 8(r1)
/* 8032A7A0 00327380  38 60 00 44 */	li r3, 0x44
/* 8032A7A4 00327384  4B FF FF 39 */	bl TRKTargetTranslate
/* 8032A7A8 00327388  3B A0 00 00 */	li r29, 0
/* 8032A7AC 0032738C  83 83 00 00 */	lwz r28, 0(r3)
/* 8032A7B0 00327390  3C 60 80 40 */	lis r3, lbl_80400878@ha
/* 8032A7B4 00327394  57 A4 10 3A */	slwi r4, r29, 2
/* 8032A7B8 00327398  38 03 08 78 */	addi r0, r3, lbl_80400878@l
/* 8032A7BC 0032739C  7F C0 22 14 */	add r30, r0, r4
/* 8032A7C0 003273A0  48 00 00 04 */	b lbl_8032A7C4
lbl_8032A7C4:
/* 8032A7C4 003273A4  3B E0 00 01 */	li r31, 1
/* 8032A7C8 003273A8  48 00 00 04 */	b lbl_8032A7CC
lbl_8032A7CC:
/* 8032A7CC 003273AC  48 00 00 04 */	b lbl_8032A7D0
lbl_8032A7D0:
/* 8032A7D0 003273B0  7F E0 E8 30 */	slw r0, r31, r29
/* 8032A7D4 003273B4  7F 80 00 38 */	and r0, r28, r0
/* 8032A7D8 003273B8  28 00 00 00 */	cmplwi r0, 0
/* 8032A7DC 003273BC  41 82 00 0C */	beq lbl_8032A7E8
/* 8032A7E0 003273C0  80 7E 00 00 */	lwz r3, 0(r30)
/* 8032A7E4 003273C4  4B FF FF 41 */	bl TRK_copy_vector
lbl_8032A7E8:
/* 8032A7E8 003273C8  3B DE 00 04 */	addi r30, r30, 4
/* 8032A7EC 003273CC  3B BD 00 01 */	addi r29, r29, 1
/* 8032A7F0 003273D0  2C 1D 00 0E */	cmpwi r29, 0xe
/* 8032A7F4 003273D4  40 81 FF DC */	ble lbl_8032A7D0
/* 8032A7F8 003273D8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 8032A7FC 003273DC  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 8032A800 003273E0  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 8032A804 003273E4  83 81 00 08 */	lwz r28, 8(r1)
/* 8032A808 003273E8  38 21 00 18 */	addi r1, r1, 0x18
/* 8032A80C 003273EC  80 01 00 04 */	lwz r0, 4(r1)
/* 8032A810 003273F0  7C 08 03 A6 */	mtlr r0
/* 8032A814 003273F4  4E 80 00 20 */	blr 

.global TRKInitializeTarget
TRKInitializeTarget:
/* 8032A818 003273F8  7C 08 02 A6 */	mflr r0
/* 8032A81C 003273FC  90 01 00 04 */	stw r0, 4(r1)
/* 8032A820 00327400  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032A824 00327404  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032A828 00327408  3C 60 80 4A */	lis r3, lbl_804A4BF0@ha
/* 8032A82C 0032740C  3B E3 4B F0 */	addi r31, r3, lbl_804A4BF0@l
/* 8032A830 00327410  38 00 00 01 */	li r0, 1
/* 8032A834 00327414  90 1F 00 98 */	stw r0, 0x98(r31)
/* 8032A838 00327418  4B FF E8 15 */	bl __TRK_get_MSR
/* 8032A83C 0032741C  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 8032A840 00327420  3C 60 80 4A */	lis r3, lbl_804A50C8@ha
/* 8032A844 00327424  38 63 50 C8 */	addi r3, r3, lbl_804A50C8@l
/* 8032A848 00327428  3C 00 E0 00 */	lis r0, 0xe000
/* 8032A84C 0032742C  90 03 00 00 */	stw r0, 0(r3)
/* 8032A850 00327430  38 60 00 00 */	li r3, 0
/* 8032A854 00327434  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032A858 00327438  38 21 00 10 */	addi r1, r1, 0x10
/* 8032A85C 0032743C  80 01 00 04 */	lwz r0, 4(r1)
/* 8032A860 00327440  7C 08 03 A6 */	mtlr r0
/* 8032A864 00327444  4E 80 00 20 */	blr 
