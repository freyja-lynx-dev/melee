.include "macros.inc"

.section .text

.global it_802D6FD0
it_802D6FD0:
/* 802D6FD0 002D3BB0  7C 08 02 A6 */	mflr r0
/* 802D6FD4 002D3BB4  90 01 00 04 */	stw r0, 4(r1)
/* 802D6FD8 002D3BB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D6FDC 002D3BBC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D6FE0 002D3BC0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802D6FE4 002D3BC4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802D6FE8 002D3BC8  7C 7D 1B 78 */	mr r29, r3
/* 802D6FEC 002D3BCC  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 802D6FF0 002D3BD0  80 9F 00 C4 */	lwz r4, 0xc4(r31)
/* 802D6FF4 002D3BD4  83 C4 00 04 */	lwz r30, 4(r4)
/* 802D6FF8 002D3BD8  C0 3E 00 00 */	lfs f1, 0(r30)
/* 802D6FFC 002D3BDC  4B FA 2C E1 */	bl it_80279CDC
/* 802D7000 002D3BE0  38 7F 00 00 */	addi r3, r31, 0
/* 802D7004 002D3BE4  38 80 27 2F */	li r4, 0x272f
/* 802D7008 002D3BE8  38 A0 00 7F */	li r5, 0x7f
/* 802D700C 002D3BEC  38 C0 00 40 */	li r6, 0x40
/* 802D7010 002D3BF0  4B F9 3E 75 */	bl Item_8026AE84
/* 802D7014 002D3BF4  7F A3 EB 78 */	mr r3, r29
/* 802D7018 002D3BF8  C0 3E 00 04 */	lfs f1, 4(r30)
/* 802D701C 002D3BFC  4B F9 E1 3D */	bl it_80275158
/* 802D7020 002D3C00  88 1F 0E 34 */	lbz r0, 0xe34(r31)
/* 802D7024 002D3C04  38 60 00 00 */	li r3, 0
/* 802D7028 002D3C08  50 60 3E 30 */	rlwimi r0, r3, 7, 0x18, 0x18
/* 802D702C 002D3C0C  98 1F 0E 34 */	stb r0, 0xe34(r31)
/* 802D7030 002D3C10  7F A3 EB 78 */	mr r3, r29
/* 802D7034 002D3C14  C0 1E 00 08 */	lfs f0, 8(r30)
/* 802D7038 002D3C18  D0 1F 0E 38 */	stfs f0, 0xe38(r31)
/* 802D703C 002D3C1C  48 00 00 69 */	bl it_802D70A4
/* 802D7040 002D3C20  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D7044 002D3C24  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D7048 002D3C28  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802D704C 002D3C2C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802D7050 002D3C30  38 21 00 20 */	addi r1, r1, 0x20
/* 802D7054 002D3C34  7C 08 03 A6 */	mtlr r0
/* 802D7058 002D3C38  4E 80 00 20 */	blr

.global it_802D705C
it_802D705C:
/* 802D705C 002D3C3C  7C 08 02 A6 */	mflr r0
/* 802D7060 002D3C40  38 A0 00 00 */	li r5, 0
/* 802D7064 002D3C44  90 01 00 04 */	stw r0, 4(r1)
/* 802D7068 002D3C48  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D706C 002D3C4C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D7070 002D3C50  7C 7F 1B 78 */	mr r31, r3
/* 802D7074 002D3C54  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 802D7078 002D3C58  88 04 0D CE */	lbz r0, 0xdce(r4)
/* 802D707C 002D3C5C  50 A0 07 FE */	rlwimi r0, r5, 0, 0x1f, 0x1f
/* 802D7080 002D3C60  98 04 0D CE */	stb r0, 0xdce(r4)
/* 802D7084 002D3C64  4B F9 C3 D1 */	bl it_80273454
/* 802D7088 002D3C68  7F E3 FB 78 */	mr r3, r31
/* 802D708C 002D3C6C  48 00 01 01 */	bl it_802D718C
/* 802D7090 002D3C70  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D7094 002D3C74  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D7098 002D3C78  38 21 00 20 */	addi r1, r1, 0x20
/* 802D709C 002D3C7C  7C 08 03 A6 */	mtlr r0
/* 802D70A0 002D3C80  4E 80 00 20 */	blr

.global it_802D70A4
it_802D70A4:
/* 802D70A4 002D3C84  7C 08 02 A6 */	mflr r0
/* 802D70A8 002D3C88  90 01 00 04 */	stw r0, 4(r1)
/* 802D70AC 002D3C8C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 802D70B0 002D3C90  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802D70B4 002D3C94  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802D70B8 002D3C98  7C 7E 1B 78 */	mr r30, r3
/* 802D70BC 002D3C9C  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 802D70C0 002D3CA0  7F E3 FB 78 */	mr r3, r31
/* 802D70C4 002D3CA4  4B F9 F1 F9 */	bl it_802762BC
/* 802D70C8 002D3CA8  38 7E 00 00 */	addi r3, r30, 0
/* 802D70CC 002D3CAC  38 80 00 00 */	li r4, 0
/* 802D70D0 002D3CB0  38 A0 00 02 */	li r5, 2
/* 802D70D4 002D3CB4  4B F9 1D 89 */	bl Item_80268E5C
/* 802D70D8 002D3CB8  3C 60 80 06 */	lis r3, efLib_PauseAll@ha
/* 802D70DC 002D3CBC  38 03 BA 40 */	addi r0, r3, efLib_PauseAll@l
/* 802D70E0 002D3CC0  3C 60 80 06 */	lis r3, efLib_ResumeAll@ha
/* 802D70E4 002D3CC4  90 1F 0D 28 */	stw r0, 0xd28(r31)
/* 802D70E8 002D3CC8  38 03 BA C4 */	addi r0, r3, efLib_ResumeAll@l
/* 802D70EC 002D3CCC  90 1F 0D 2C */	stw r0, 0xd2c(r31)
/* 802D70F0 002D3CD0  38 7E 00 00 */	addi r3, r30, 0
/* 802D70F4 002D3CD4  38 80 00 00 */	li r4, 0
/* 802D70F8 002D3CD8  C0 22 DB A4 */	lfs f1, it_804DD584@sda21(r2)
/* 802D70FC 002D3CDC  4B F9 C5 75 */	bl it_80273670
/* 802D7100 002D3CE0  7F C3 F3 78 */	mr r3, r30
/* 802D7104 002D3CE4  4B F9 4C B1 */	bl it_8026BDB4
/* 802D7108 002D3CE8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802D710C 002D3CEC  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 802D7110 002D3CF0  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 802D7114 002D3CF4  38 21 00 18 */	addi r1, r1, 0x18
/* 802D7118 002D3CF8  7C 08 03 A6 */	mtlr r0
/* 802D711C 002D3CFC  4E 80 00 20 */	blr

.global it_802D7120
it_802D7120:
/* 802D7120 002D3D00  7C 08 02 A6 */	mflr r0
/* 802D7124 002D3D04  90 01 00 04 */	stw r0, 4(r1)
/* 802D7128 002D3D08  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D712C 002D3D0C  4B FA 2E CD */	bl it_80279FF8
/* 802D7130 002D3D10  38 60 00 00 */	li r3, 0
/* 802D7134 002D3D14  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D7138 002D3D18  38 21 00 08 */	addi r1, r1, 8
/* 802D713C 002D3D1C  7C 08 03 A6 */	mtlr r0
/* 802D7140 002D3D20  4E 80 00 20 */	blr

.global it_802D7144
it_802D7144:
/* 802D7144 002D3D24  7C 08 02 A6 */	mflr r0
/* 802D7148 002D3D28  90 01 00 04 */	stw r0, 4(r1)
/* 802D714C 002D3D2C  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D7150 002D3D30  4B FA 2F 4D */	bl it_8027A09C
/* 802D7154 002D3D34  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D7158 002D3D38  38 21 00 08 */	addi r1, r1, 8
/* 802D715C 002D3D3C  7C 08 03 A6 */	mtlr r0
/* 802D7160 002D3D40  4E 80 00 20 */	blr

.global it_802D7164
it_802D7164:
/* 802D7164 002D3D44  7C 08 02 A6 */	mflr r0
/* 802D7168 002D3D48  3C 80 80 2D */	lis r4, it_802D705C@ha
/* 802D716C 002D3D4C  90 01 00 04 */	stw r0, 4(r1)
/* 802D7170 002D3D50  38 84 70 5C */	addi r4, r4, it_802D705C@l
/* 802D7174 002D3D54  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D7178 002D3D58  4B FA 2F A1 */	bl it_8027A118
/* 802D717C 002D3D5C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D7180 002D3D60  38 21 00 08 */	addi r1, r1, 8
/* 802D7184 002D3D64  7C 08 03 A6 */	mtlr r0
/* 802D7188 002D3D68  4E 80 00 20 */	blr

.global it_802D718C
it_802D718C:
/* 802D718C 002D3D6C  7C 08 02 A6 */	mflr r0
/* 802D7190 002D3D70  38 80 00 01 */	li r4, 1
/* 802D7194 002D3D74  90 01 00 04 */	stw r0, 4(r1)
/* 802D7198 002D3D78  38 A0 00 02 */	li r5, 2
/* 802D719C 002D3D7C  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 802D71A0 002D3D80  93 E1 00 14 */	stw r31, 0x14(r1)
/* 802D71A4 002D3D84  83 E3 00 2C */	lwz r31, 0x2c(r3)
/* 802D71A8 002D3D88  4B F9 1C B5 */	bl Item_80268E5C
/* 802D71AC 002D3D8C  3C 60 80 06 */	lis r3, efLib_PauseAll@ha
/* 802D71B0 002D3D90  38 03 BA 40 */	addi r0, r3, efLib_PauseAll@l
/* 802D71B4 002D3D94  3C 60 80 06 */	lis r3, efLib_ResumeAll@ha
/* 802D71B8 002D3D98  90 1F 0D 28 */	stw r0, 0xd28(r31)
/* 802D71BC 002D3D9C  38 03 BA C4 */	addi r0, r3, efLib_ResumeAll@l
/* 802D71C0 002D3DA0  90 1F 0D 2C */	stw r0, 0xd2c(r31)
/* 802D71C4 002D3DA4  38 60 00 01 */	li r3, 1
/* 802D71C8 002D3DA8  88 1F 0E 34 */	lbz r0, 0xe34(r31)
/* 802D71CC 002D3DAC  50 60 3E 30 */	rlwimi r0, r3, 7, 0x18, 0x18
/* 802D71D0 002D3DB0  98 1F 0E 34 */	stb r0, 0xe34(r31)
/* 802D71D4 002D3DB4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802D71D8 002D3DB8  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 802D71DC 002D3DBC  38 21 00 18 */	addi r1, r1, 0x18
/* 802D71E0 002D3DC0  7C 08 03 A6 */	mtlr r0
/* 802D71E4 002D3DC4  4E 80 00 20 */	blr

.global it_802D71E8
it_802D71E8:
/* 802D71E8 002D3DC8  7C 08 02 A6 */	mflr r0
/* 802D71EC 002D3DCC  90 01 00 04 */	stw r0, 4(r1)
/* 802D71F0 002D3DD0  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 802D71F4 002D3DD4  93 E1 00 24 */	stw r31, 0x24(r1)
/* 802D71F8 002D3DD8  93 C1 00 20 */	stw r30, 0x20(r1)
/* 802D71FC 002D3DDC  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 802D7200 002D3DE0  93 81 00 18 */	stw r28, 0x18(r1)
/* 802D7204 002D3DE4  7C 7C 1B 78 */	mr r28, r3
/* 802D7208 002D3DE8  83 C3 00 2C */	lwz r30, 0x2c(r3)
/* 802D720C 002D3DEC  80 9E 00 C4 */	lwz r4, 0xc4(r30)
/* 802D7210 002D3DF0  83 A4 00 04 */	lwz r29, 4(r4)
/* 802D7214 002D3DF4  4B F9 BA 59 */	bl it_80272C6C
/* 802D7218 002D3DF8  2C 03 00 00 */	cmpwi r3, 0
/* 802D721C 002D3DFC  40 82 00 40 */	bne .L_802D725C
/* 802D7220 002D3E00  83 FC 00 2C */	lwz r31, 0x2c(r28)
/* 802D7224 002D3E04  38 7C 00 00 */	addi r3, r28, 0
/* 802D7228 002D3E08  38 80 00 01 */	li r4, 1
/* 802D722C 002D3E0C  38 A0 00 02 */	li r5, 2
/* 802D7230 002D3E10  4B F9 1C 2D */	bl Item_80268E5C
/* 802D7234 002D3E14  3C 60 80 06 */	lis r3, efLib_PauseAll@ha
/* 802D7238 002D3E18  38 03 BA 40 */	addi r0, r3, efLib_PauseAll@l
/* 802D723C 002D3E1C  3C 60 80 06 */	lis r3, efLib_ResumeAll@ha
/* 802D7240 002D3E20  90 1F 0D 28 */	stw r0, 0xd28(r31)
/* 802D7244 002D3E24  38 03 BA C4 */	addi r0, r3, efLib_ResumeAll@l
/* 802D7248 002D3E28  90 1F 0D 2C */	stw r0, 0xd2c(r31)
/* 802D724C 002D3E2C  38 60 00 01 */	li r3, 1
/* 802D7250 002D3E30  88 1F 0E 34 */	lbz r0, 0xe34(r31)
/* 802D7254 002D3E34  50 60 3E 30 */	rlwimi r0, r3, 7, 0x18, 0x18
/* 802D7258 002D3E38  98 1F 0E 34 */	stb r0, 0xe34(r31)
.L_802D725C:
/* 802D725C 002D3E3C  C0 3E 0E 38 */	lfs f1, 0xe38(r30)
/* 802D7260 002D3E40  C0 02 DB A4 */	lfs f0, it_804DD584@sda21(r2)
/* 802D7264 002D3E44  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 802D7268 002D3E48  40 82 00 1C */	bne .L_802D7284
/* 802D726C 002D3E4C  C0 1D 00 08 */	lfs f0, 8(r29)
/* 802D7270 002D3E50  38 7C 00 00 */	addi r3, r28, 0
/* 802D7274 002D3E54  38 80 00 04 */	li r4, 4
/* 802D7278 002D3E58  D0 1E 0E 38 */	stfs f0, 0xe38(r30)
/* 802D727C 002D3E5C  38 A0 27 30 */	li r5, 0x2730
/* 802D7280 002D3E60  4B F9 E0 09 */	bl it_80275288
.L_802D7284:
/* 802D7284 002D3E64  C0 1E 0E 38 */	lfs f0, 0xe38(r30)
/* 802D7288 002D3E68  C0 22 DB A0 */	lfs f1, it_804DD580@sda21(r2)
/* 802D728C 002D3E6C  EC 00 08 28 */	fsubs f0, f0, f1
/* 802D7290 002D3E70  D0 1E 0E 38 */	stfs f0, 0xe38(r30)
/* 802D7294 002D3E74  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 802D7298 002D3E78  C0 03 0D 44 */	lfs f0, 0xd44(r3)
/* 802D729C 002D3E7C  EC 00 08 28 */	fsubs f0, f0, f1
/* 802D72A0 002D3E80  D0 03 0D 44 */	stfs f0, 0xd44(r3)
/* 802D72A4 002D3E84  C0 23 0D 44 */	lfs f1, 0xd44(r3)
/* 802D72A8 002D3E88  C0 02 DB A4 */	lfs f0, it_804DD584@sda21(r2)
/* 802D72AC 002D3E8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802D72B0 002D3E90  4C 40 13 82 */	cror 2, 0, 2
/* 802D72B4 002D3E94  40 82 00 0C */	bne .L_802D72C0
/* 802D72B8 002D3E98  38 60 00 01 */	li r3, 1
/* 802D72BC 002D3E9C  48 00 00 08 */	b .L_802D72C4
.L_802D72C0:
/* 802D72C0 002D3EA0  38 60 00 00 */	li r3, 0
.L_802D72C4:
/* 802D72C4 002D3EA4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802D72C8 002D3EA8  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 802D72CC 002D3EAC  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 802D72D0 002D3EB0  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 802D72D4 002D3EB4  83 81 00 18 */	lwz r28, 0x18(r1)
/* 802D72D8 002D3EB8  38 21 00 28 */	addi r1, r1, 0x28
/* 802D72DC 002D3EBC  7C 08 03 A6 */	mtlr r0
/* 802D72E0 002D3EC0  4E 80 00 20 */	blr

.global it_802D72E4
it_802D72E4:
/* 802D72E4 002D3EC4  4E 80 00 20 */	blr

.global it_802D72E8
it_802D72E8:
/* 802D72E8 002D3EC8  7C 08 02 A6 */	mflr r0
/* 802D72EC 002D3ECC  3C 80 80 2D */	lis r4, it_802D7328@ha
/* 802D72F0 002D3ED0  90 01 00 04 */	stw r0, 4(r1)
/* 802D72F4 002D3ED4  38 84 73 28 */	addi r4, r4, it_802D7328@l
/* 802D72F8 002D3ED8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D72FC 002D3EDC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D7300 002D3EE0  3B E3 00 00 */	addi r31, r3, 0
/* 802D7304 002D3EE4  4B F9 63 29 */	bl it_8026D62C
/* 802D7308 002D3EE8  7F E3 FB 78 */	mr r3, r31
/* 802D730C 002D3EEC  4B F9 F9 AD */	bl it_80276CB8
/* 802D7310 002D3EF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D7314 002D3EF4  38 60 00 00 */	li r3, 0
/* 802D7318 002D3EF8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D731C 002D3EFC  38 21 00 20 */	addi r1, r1, 0x20
/* 802D7320 002D3F00  7C 08 03 A6 */	mtlr r0
/* 802D7324 002D3F04  4E 80 00 20 */	blr

.global it_802D7328
it_802D7328:
/* 802D7328 002D3F08  7C 08 02 A6 */	mflr r0
/* 802D732C 002D3F0C  38 80 00 02 */	li r4, 2
/* 802D7330 002D3F10  90 01 00 04 */	stw r0, 4(r1)
/* 802D7334 002D3F14  38 A0 00 02 */	li r5, 2
/* 802D7338 002D3F18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D733C 002D3F1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802D7340 002D3F20  3B E3 00 00 */	addi r31, r3, 0
/* 802D7344 002D3F24  4B F9 1B 19 */	bl Item_80268E5C
/* 802D7348 002D3F28  C0 22 DB A4 */	lfs f1, it_804DD584@sda21(r2)
/* 802D734C 002D3F2C  38 7F 00 00 */	addi r3, r31, 0
/* 802D7350 002D3F30  38 80 00 00 */	li r4, 0
/* 802D7354 002D3F34  4B F9 C3 1D */	bl it_80273670
/* 802D7358 002D3F38  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D735C 002D3F3C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802D7360 002D3F40  38 21 00 20 */	addi r1, r1, 0x20
/* 802D7364 002D3F44  7C 08 03 A6 */	mtlr r0
/* 802D7368 002D3F48  4E 80 00 20 */	blr

.global it_802D736C
it_802D736C:
/* 802D736C 002D3F4C  38 60 00 00 */	li r3, 0
/* 802D7370 002D3F50  4E 80 00 20 */	blr

.global it_802D7374
it_802D7374:
/* 802D7374 002D3F54  7C 08 02 A6 */	mflr r0
/* 802D7378 002D3F58  90 01 00 04 */	stw r0, 4(r1)
/* 802D737C 002D3F5C  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D7380 002D3F60  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 802D7384 002D3F64  80 84 00 CC */	lwz r4, 0xcc(r4)
/* 802D7388 002D3F68  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 802D738C 002D3F6C  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 802D7390 002D3F70  4B F9 B4 D1 */	bl it_80272860
/* 802D7394 002D3F74  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D7398 002D3F78  38 21 00 08 */	addi r1, r1, 8
/* 802D739C 002D3F7C  7C 08 03 A6 */	mtlr r0
/* 802D73A0 002D3F80  4E 80 00 20 */	blr

.global it_802D73A4
it_802D73A4:
/* 802D73A4 002D3F84  7C 08 02 A6 */	mflr r0
/* 802D73A8 002D3F88  3C 80 80 2D */	lis r4, it_802D705C@ha
/* 802D73AC 002D3F8C  90 01 00 04 */	stw r0, 4(r1)
/* 802D73B0 002D3F90  38 84 70 5C */	addi r4, r4, it_802D705C@l
/* 802D73B4 002D3F94  94 21 FF F8 */	stwu r1, -8(r1)
/* 802D73B8 002D3F98  4B F9 6D A5 */	bl it_8026E15C
/* 802D73BC 002D3F9C  38 60 00 00 */	li r3, 0
/* 802D73C0 002D3FA0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802D73C4 002D3FA4  38 21 00 08 */	addi r1, r1, 8
/* 802D73C8 002D3FA8  7C 08 03 A6 */	mtlr r0
/* 802D73CC 002D3FAC  4E 80 00 20 */	blr


.section .data
    .balign 8
.global it_803F82F0
it_803F82F0:
    .4byte 0
    .4byte it_802D7120
    .4byte it_802D7144
    .4byte it_802D7164
    .4byte 1
    .4byte it_802D71E8
    .4byte it_802D72E4
    .4byte it_802D72E8
    .4byte -1
    .4byte it_802D736C
    .4byte it_802D7374
    .4byte it_802D73A4


.section .sdata2
    .balign 8
.global it_804DD580
it_804DD580:
    .4byte 0x3F800000
.global it_804DD584
it_804DD584:
    .4byte 0x00000000