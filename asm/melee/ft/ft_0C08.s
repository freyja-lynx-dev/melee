.include "macros.inc"

.section .text

.global ftCo_800C23A0
ftCo_800C23A0:
/* 800C23A0 000BEF80  7C 08 02 A6 */	mflr r0
/* 800C23A4 000BEF84  90 01 00 04 */	stw r0, 4(r1)
/* 800C23A8 000BEF88  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800C23AC 000BEF8C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800C23B0 000BEF90  7C 7F 1B 78 */	mr r31, r3
/* 800C23B4 000BEF94  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 800C23B8 000BEF98  80 03 08 24 */	lwz r0, 0x824(r3)
/* 800C23BC 000BEF9C  54 00 04 63 */	rlwinm. r0, r0, 0, 0x11, 0x11
/* 800C23C0 000BEFA0  41 82 00 24 */	beq .L_800C23E4
/* 800C23C4 000BEFA4  7F E3 FB 78 */	mr r3, r31
/* 800C23C8 000BEFA8  4B FD 62 E9 */	bl ftCo_800986B0
/* 800C23CC 000BEFAC  2C 03 00 00 */	cmpwi r3, 0
/* 800C23D0 000BEFB0  41 82 00 14 */	beq .L_800C23E4
/* 800C23D4 000BEFB4  7F E3 FB 78 */	mr r3, r31
/* 800C23D8 000BEFB8  48 00 00 25 */	bl ftCo_800C23FC
/* 800C23DC 000BEFBC  38 60 00 01 */	li r3, 1
/* 800C23E0 000BEFC0  48 00 00 08 */	b .L_800C23E8
.L_800C23E4:
/* 800C23E4 000BEFC4  38 60 00 00 */	li r3, 0
.L_800C23E8:
/* 800C23E8 000BEFC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800C23EC 000BEFCC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800C23F0 000BEFD0  38 21 00 20 */	addi r1, r1, 0x20
/* 800C23F4 000BEFD4  7C 08 03 A6 */	mtlr r0
/* 800C23F8 000BEFD8  4E 80 00 20 */	blr

.global ftCo_800C23FC
ftCo_800C23FC:
/* 800C23FC 000BEFDC  7C 08 02 A6 */	mflr r0
/* 800C2400 000BEFE0  90 01 00 04 */	stw r0, 4(r1)
/* 800C2404 000BEFE4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 800C2408 000BEFE8  DB E1 00 38 */	stfd f31, 0x38(r1)
/* 800C240C 000BEFEC  93 E1 00 34 */	stw r31, 0x34(r1)
/* 800C2410 000BEFF0  93 C1 00 30 */	stw r30, 0x30(r1)
/* 800C2414 000BEFF4  7C 7E 1B 78 */	mr r30, r3
/* 800C2418 000BEFF8  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 800C241C 000BEFFC  4B FB BE E1 */	bl ftCommon_8007E2FC
/* 800C2420 000BF000  38 00 00 00 */	li r0, 0
/* 800C2424 000BF004  90 1F 22 10 */	stw r0, 0x2210(r31)
/* 800C2428 000BF008  7F C3 F3 78 */	mr r3, r30
/* 800C242C 000BF00C  38 81 00 20 */	addi r4, r1, 0x20
/* 800C2430 000BF010  C0 22 92 A0 */	lfs f1, ftCo_804D8C80@sda21(r2)
/* 800C2434 000BF014  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 800C2438 000BF018  C0 1F 07 98 */	lfs f0, 0x798(r31)
/* 800C243C 000BF01C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 800C2440 000BF020  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 800C2444 000BF024  48 02 FA D9 */	bl ftKb_SpecialN_800F1F1C
/* 800C2448 000BF028  C0 22 92 A0 */	lfs f1, ftCo_804D8C80@sda21(r2)
/* 800C244C 000BF02C  7F C3 F3 78 */	mr r3, r30
/* 800C2450 000BF030  C0 42 92 A4 */	lfs f2, ftCo_804D8C84@sda21(r2)
/* 800C2454 000BF034  38 80 00 CC */	li r4, 0xcc
/* 800C2458 000BF038  FC 60 08 90 */	fmr f3, f1
/* 800C245C 000BF03C  38 A0 00 00 */	li r5, 0
/* 800C2460 000BF040  38 C0 00 00 */	li r6, 0
/* 800C2464 000BF044  4B FA 6F 49 */	bl Fighter_ChangeMotionState
/* 800C2468 000BF048  C0 5F 00 B4 */	lfs f2, 0xb4(r31)
/* 800C246C 000BF04C  7F C3 F3 78 */	mr r3, r30
/* 800C2470 000BF050  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 800C2474 000BF054  39 01 00 14 */	addi r8, r1, 0x14
/* 800C2478 000BF058  C0 1F 00 B0 */	lfs f0, 0xb0(r31)
/* 800C247C 000BF05C  EF E2 08 2A */	fadds f31, f2, f1
/* 800C2480 000BF060  4C C6 31 82 */	crclr 6
/* 800C2484 000BF064  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 800C2488 000BF068  38 A0 00 02 */	li r5, 2
/* 800C248C 000BF06C  38 C0 04 1D */	li r6, 0x41d
/* 800C2490 000BF070  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 800C2494 000BF074  38 E0 00 00 */	li r7, 0
/* 800C2498 000BF078  C0 1F 00 B8 */	lfs f0, 0xb8(r31)
/* 800C249C 000BF07C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 800C24A0 000BF080  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 800C24A4 000BF084  38 84 06 0C */	addi r4, r4, 0x60c
/* 800C24A8 000BF088  4B FA 52 49 */	bl efAsync_Spawn
/* 800C24AC 000BF08C  C0 1F 06 90 */	lfs f0, 0x690(r31)
/* 800C24B0 000BF090  7F C3 F3 78 */	mr r3, r30
/* 800C24B4 000BF094  EC 1F 00 2A */	fadds f0, f31, f0
/* 800C24B8 000BF098  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 800C24BC 000BF09C  4B FC E0 B9 */	bl ftCo_80090574
/* 800C24C0 000BF0A0  80 9F 01 0C */	lwz r4, 0x10c(r31)
/* 800C24C4 000BF0A4  38 7F 00 00 */	addi r3, r31, 0
/* 800C24C8 000BF0A8  38 A0 00 7F */	li r5, 0x7f
/* 800C24CC 000BF0AC  80 84 00 4C */	lwz r4, 0x4c(r4)
/* 800C24D0 000BF0B0  38 C0 00 40 */	li r6, 0x40
/* 800C24D4 000BF0B4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 800C24D8 000BF0B8  4B FC 5D 01 */	bl ft_800881D8
/* 800C24DC 000BF0BC  38 7F 00 00 */	addi r3, r31, 0
/* 800C24E0 000BF0C0  38 80 00 03 */	li r4, 3
/* 800C24E4 000BF0C4  38 A0 00 7F */	li r5, 0x7f
/* 800C24E8 000BF0C8  38 C0 00 40 */	li r6, 0x40
/* 800C24EC 000BF0CC  4B FC 5C 5D */	bl ft_80088148
/* 800C24F0 000BF0D0  38 7F 00 00 */	addi r3, r31, 0
/* 800C24F4 000BF0D4  38 80 00 0C */	li r4, 0xc
/* 800C24F8 000BF0D8  38 A0 00 00 */	li r5, 0
/* 800C24FC 000BF0DC  4B FB C6 B1 */	bl ftCommon_8007EBAC
/* 800C2500 000BF0E0  38 7F 00 00 */	addi r3, r31, 0
/* 800C2504 000BF0E4  38 80 00 78 */	li r4, 0x78
/* 800C2508 000BF0E8  38 A0 00 00 */	li r5, 0
/* 800C250C 000BF0EC  4B FF DA C5 */	bl ftCo_800BFFD0
/* 800C2510 000BF0F0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 800C2514 000BF0F4  CB E1 00 38 */	lfd f31, 0x38(r1)
/* 800C2518 000BF0F8  83 E1 00 34 */	lwz r31, 0x34(r1)
/* 800C251C 000BF0FC  83 C1 00 30 */	lwz r30, 0x30(r1)
/* 800C2520 000BF100  38 21 00 40 */	addi r1, r1, 0x40
/* 800C2524 000BF104  7C 08 03 A6 */	mtlr r0
/* 800C2528 000BF108  4E 80 00 20 */	blr

.global ftCo_PassiveCeil_Anim
ftCo_PassiveCeil_Anim:
/* 800C252C 000BF10C  7C 08 02 A6 */	mflr r0
/* 800C2530 000BF110  90 01 00 04 */	stw r0, 4(r1)
/* 800C2534 000BF114  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800C2538 000BF118  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800C253C 000BF11C  7C 7F 1B 78 */	mr r31, r3
/* 800C2540 000BF120  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 800C2544 000BF124  88 64 22 10 */	lbz r3, 0x2210(r4)
/* 800C2548 000BF128  54 60 E7 FF */	rlwinm. r0, r3, 0x1c, 0x1f, 0x1f
/* 800C254C 000BF12C  41 82 00 18 */	beq .L_800C2564
/* 800C2550 000BF130  38 00 00 00 */	li r0, 0
/* 800C2554 000BF134  50 03 26 F6 */	rlwimi r3, r0, 4, 0x1b, 0x1b
/* 800C2558 000BF138  98 64 22 10 */	stb r3, 0x2210(r4)
/* 800C255C 000BF13C  38 00 00 01 */	li r0, 1
/* 800C2560 000BF140  48 00 00 08 */	b .L_800C2568
.L_800C2564:
/* 800C2564 000BF144  38 00 00 00 */	li r0, 0
.L_800C2568:
/* 800C2568 000BF148  2C 00 00 00 */	cmpwi r0, 0
/* 800C256C 000BF14C  41 82 00 14 */	beq .L_800C2580
/* 800C2570 000BF150  C0 24 06 20 */	lfs f1, 0x620(r4)
/* 800C2574 000BF154  C0 04 02 1C */	lfs f0, 0x21c(r4)
/* 800C2578 000BF158  EC 01 00 32 */	fmuls f0, f1, f0
/* 800C257C 000BF15C  D0 04 00 80 */	stfs f0, 0x80(r4)
.L_800C2580:
/* 800C2580 000BF160  7F E3 FB 78 */	mr r3, r31
/* 800C2584 000BF164  4B FA CC B5 */	bl ftAnim_IsFramesRemaining
/* 800C2588 000BF168  2C 03 00 00 */	cmpwi r3, 0
/* 800C258C 000BF16C  40 82 00 0C */	bne .L_800C2598
/* 800C2590 000BF170  7F E3 FB 78 */	mr r3, r31
/* 800C2594 000BF174  48 00 A1 9D */	bl ftCo_800CC730
.L_800C2598:
/* 800C2598 000BF178  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800C259C 000BF17C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800C25A0 000BF180  38 21 00 20 */	addi r1, r1, 0x20
/* 800C25A4 000BF184  7C 08 03 A6 */	mtlr r0
/* 800C25A8 000BF188  4E 80 00 20 */	blr

.global ftCo_PassiveCeil_IASA
ftCo_PassiveCeil_IASA:
/* 800C25AC 000BF18C  4E 80 00 20 */	blr

.global ftCo_PassiveCeil_Phys
ftCo_PassiveCeil_Phys:
/* 800C25B0 000BF190  7C 08 02 A6 */	mflr r0
/* 800C25B4 000BF194  90 01 00 04 */	stw r0, 4(r1)
/* 800C25B8 000BF198  94 21 FF F8 */	stwu r1, -8(r1)
/* 800C25BC 000BF19C  4B FC 27 F5 */	bl ft_80084DB0
/* 800C25C0 000BF1A0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800C25C4 000BF1A4  38 21 00 08 */	addi r1, r1, 8
/* 800C25C8 000BF1A8  7C 08 03 A6 */	mtlr r0
/* 800C25CC 000BF1AC  4E 80 00 20 */	blr

.global ftCo_PassiveCeil_Coll
ftCo_PassiveCeil_Coll:
/* 800C25D0 000BF1B0  7C 08 02 A6 */	mflr r0
/* 800C25D4 000BF1B4  3C 80 80 09 */	lis r4, ftCo_80096CC8@ha
/* 800C25D8 000BF1B8  90 01 00 04 */	stw r0, 4(r1)
/* 800C25DC 000BF1BC  3C A0 80 08 */	lis r5, ft_80082B1C@ha
/* 800C25E0 000BF1C0  38 84 6C C8 */	addi r4, r4, ftCo_80096CC8@l
/* 800C25E4 000BF1C4  94 21 FF F8 */	stwu r1, -8(r1)
/* 800C25E8 000BF1C8  38 A5 2B 1C */	addi r5, r5, ft_80082B1C@l
/* 800C25EC 000BF1CC  4B FC 0B E1 */	bl ft_800831CC
/* 800C25F0 000BF1D0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800C25F4 000BF1D4  38 21 00 08 */	addi r1, r1, 8
/* 800C25F8 000BF1D8  7C 08 03 A6 */	mtlr r0
/* 800C25FC 000BF1DC  4E 80 00 20 */	blr


.section .sbss
    .balign 8
.global ft_804D6580
ft_804D6580:
    .skip 0x8
.global ft_804D6588
ft_804D6588:
    .skip 0x8


.section .sdata2
    .balign 8

.global ftCo_804D8C80
ftCo_804D8C80:
    .float 0
.global ftCo_804D8C84
ftCo_804D8C84:
    .float 1
