#ifndef GALE01_0877F8
#define GALE01_0877F8

#include "ft/forward.h"
#include <baselib/forward.h>

#include "ft/fighter.h"

extern HSD_Joint* ft_8045A1E0[6];
extern s32 ft_80459B88[FTKIND_MAX];
extern char ftMr_Init_DatFilename[];
extern char ftMr_Init_DataName[];
extern Fighter_CostumeStrings ftMr_Init_CostumeStrings[];
extern char ftMr_Init_AnimDatFilename[];

void ft_0877_SetFacingDirection(HSD_GObj*, f32 facing_dir);
s32 ft_800877F8(HSD_GObj*, s32);
s32 ft_80087818(HSD_GObj*, s32);
s32 ft_80087838(HSD_GObj*);
s32 ft_80087858(HSD_GObj*);
s32 ft_80087878(HSD_GObj*, s32);
s32 ft_800878BC(HSD_GObj*);
s32 ft_80087900(HSD_GObj*);
s32 ft_80087944(HSD_GObj*);
s32 ft_80087988(HSD_GObj*);
s32 ft_800879D8(HSD_GObj*);
s32 ft_800879F8(HSD_GObj*);
s32 ft_80087A18(HSD_GObj*);
u8 ft_80087A80(HSD_GObj*);
f32 ft_80087A8C(HSD_GObj*);
s32 ft_80087A98(HSD_GObj*);
u8 ft_80087AA4(HSD_GObj*);
u8 ft_80087AB4(HSD_GObj*);
void ft_80087AC0(HSD_GObj*, s32);
s32 ft_80087AEC(HSD_GObj*);
s32 ft_80087B34(HSD_GObj*);
void ft_80087BAC(HSD_GObj*, s32);
void ft_80087BC0(HSD_GObj*, s8);
void ft_80087BEC(HSD_GObj*, u8);
s32 ft_80087C1C(void);
s32 ft_80087C58(HSD_GObj*);
void ft_80087C64(HSD_GObj*, s32);
s32 ft_80087C70(Fighter*, s32);
s32 ft_80087D0C(Fighter*, s32);
void ft_8008805C(Fighter*, s32);
void ft_80088080(Fighter*);
void ft_800880AC(Fighter*);
void ft_800880D8(Fighter*);
void ft_80088110(Fighter*);
void ft_80088148(Fighter*, enum_t, int, int);
void ft_800881D8(Fighter*, u32, u32, u32);
void ft_80088478(Fighter*, s32, s32, s32);
void ft_80088510(Fighter*, s32, u8, u8);
void ft_80088640(Fighter*, bool, bool, bool);
void ft_80088770(Fighter*);
void ft_800887CC(Fighter*);
void ft_80088884(Fighter*);
void ft_800888E0(Fighter*);
void ft_80088A50(Fighter*);
void ft_80088C5C(HSD_GObj*);
void ft_800890BC(Fighter*);
void ft_800890D0(Fighter*, u8);
void ft_80089228(void);
void ft_800892A0(HSD_GObj*);
void ft_800892D4(Fighter*);
void ft_800895E0(Fighter*, s32);
void ft_80089824(HSD_GObj*);
void ft_80089B08(HSD_GObj*);
bool ft_8008A1FC(HSD_GObj*);
void ft_8008A2BC(HSD_GObj*);
void ft_8008A324(HSD_GObj*);
bool ft_80091A4C(HSD_GObj* gobj);
unk_t ft_80091D58(void);
unk_t ft_80092450(void);
bool ft_800925A4(HSD_GObj*);
bool ft_800925A4(HSD_GObj* gobj);
void ft_800928CC(HSD_GObj*);
void ft_800928CC(HSD_GObj* gobj);
void ft_80092BCC(HSD_GObj*);
void ft_80092BCC(HSD_GObj* gobj);
void ft_80092BE8(HSD_GObj*);
f32 ft_80092ED8(s32, void*, f32);
void ft_80093240(HSD_GObj*);
void ft_800932DC(HSD_GObj*);
s32 ft_80093694(void);
void ft_8009370C(HSD_GObj*, HSD_GObjEvent, struct _ftCommonData*);
void ft_80093BC0(HSD_GObj*);
void ft_80094138(void);
bool ft_80094790(HSD_GObj*);
void ft_80094818(HSD_GObj*, bool);
void ft_80094818(HSD_GObj* gobj, bool);
bool ft_80094EA4(HSD_GObj*);
s32 ft_8009515C(HSD_GObj*);
bool ft_80095328(HSD_GObj*, bool);
void ft_80095744(HSD_GObj*, bool);
void ft_800957F4(HSD_GObj* gobj, FtMotionId msid);
s32 ft_800964FC(Fighter*);
bool ft_80096540(HSD_GObj*);
bool ft_8009665C(ftCo_GObj* gobj);
void ft_800968C8(HSD_GObj*);
void ft_80096900(HSD_GObj*, s32, s32, bool is_interruptable, f32, f32);
void ft_800969D8(HSD_GObj*, s32, s32, s32, f32, f32, f32);
bool ft_80096CC8(HSD_GObj*);
void ft_8009750C(HSD_GObj*);
void ft_80097D40(HSD_GObj*);
void ft_80098B20(HSD_GObj*);
void ft_80098C9C(HSD_GObj*);
bool ft_8009917C(HSD_GObj*);
bool ft_80099794(HSD_GObj*);
void ft_80099D9C(HSD_GObj*);
bool ft_80099F1C(HSD_GObj*);
bool ft_8009A080(HSD_GObj*);
bool ft_8009A134(HSD_GObj*);
void ft_8009A184(HSD_GObj*, s32, u32, f32);
unk_t ft_8009A3C8(void);
void ft_8009A804(HSD_GObj*);
void ft_8009CA0C(HSD_GObj*, HSD_GObj*);
void ft_8009CF84(Fighter*);
void ft_8009DC54(Fighter*);
void ft_8009E0A8(HSD_GObj*);
void ft_8009E0D4(Fighter*);
void ft_8009E7B4(Fighter*, u8*);
unk_t ft_8009EDA4(void);
bool ft_8009EF68(HSD_GObj*);
unk_t ft_8009F39C(void);
void ft_8009F4A4(void);
void ft_8009F578(Fighter*);
void ft_800A0DA4(Fighter*);
void ft_800A101C(Fighter*, s8, s8, s32);
f32 ft_800A17E4(Fighter*);
f32 ft_800A1874(Fighter*);
f32 ft_800A1904(Fighter*);
f32 ft_800A1948(Fighter*);
s32 ft_800A198C(Fighter*);
f32 ft_800A1994(Fighter*);
f32 ft_800A1A24(Fighter*);
bool ft_800A2040(Fighter*);
void ft_800B3900(HSD_GObj*);
void ft_800BC7E0(HSD_GObj*, HSD_GObj*);
void ft_800BC8D4(HSD_GObj*, HSD_GObj*);
void ft_800BC9C8(HSD_GObj*);
void ft_800BCE64(HSD_GObj*, enum_t msid);
void ft_800BCF18(HSD_GObj*, HSD_GObj*);
void ft_800BD000(HSD_GObj*, HSD_GObj*);
HSD_GObj* ft_800BE7E0(unk_t);
void ft_800BEB60(int, int, int);
void ft_800BED84(HSD_GObj*);
void ft_800BEF00(HSD_GObj*);
void ft_800BEFD0(HSD_GObj*);
void ft_800BFB4C(HSD_GObj*, s32*);
void ft_800BFD04(HSD_GObj*);
void ft_800BFFAC(Fighter*);
bool ft_800BFFD0(Fighter*, int, int);
void ft_800C0074(Fighter*);
void ft_800C0134(Fighter*);
void ft_800C0200(Fighter*, s32);
void ft_800C0358(Fighter*, Fighter*, s32);
void ft_800C0408(HSD_GObj*);
bool ft_800C0694(Fighter*);
void ft_800C06C0(void);
void ft_800C09B4(HSD_GObj*);
void ft_800C0A98(HSD_GObj*);
void ft_800C1E64(HSD_GObj* pPlayerEntityStruct, s32, s32, u8, f32);
void ft_800C2FD8(HSD_GObj*);
void ft_800C37A0(HSD_GObj*);
void ft_800C511C(HSD_GObj*);
bool ft_800C5240(HSD_GObj*);
void ft_800C5500(HSD_GObj*);
void ft_800C555C(HSD_GObj*);
void ft_800C61B0(HSD_GObj*);
unk_t ft_800C703C(void);
void ft_800C7158(HSD_GObj*);
void ft_800C7200(HSD_GObj*);
void ft_800C737C(HSD_GObj*);
void ft_800C7414(HSD_GObj*);
void ft_800C74AC(HSD_GObj*);
void ft_800C8064(void);
void ft_800C8348(HSD_GObj*, s32, s32);
void ft_800C8438(HSD_GObj*);
void ft_800C8540(HSD_GObj*);
void ft_800C884C(HSD_GObj*);
void ft_800C88A0(Fighter*);
void ft_800C88D4(HSD_GObj*, s32, bool);
void ft_800C89A0(HSD_GObj*);
void ft_800C8A64(HSD_GObj*);
bool ft_800C8B2C(Fighter*, bool, bool);
void ft_800C8C84(HSD_GObj*);
UNK_RET ft_800C8D00(HSD_GObj*);
void ft_800C8F6C(void);
void ft_800C8FC4(HSD_GObj*);
void ft_800C9034(HSD_GObj*);
bool ft_800C97A8(HSD_GObj*);
void ft_800C9840(HSD_GObj*, s32, s32, f32, f32, f32);
void ft_800C9924(HSD_GObj*);
s32 ft_800CAE80(HSD_GObj*);
void ft_800CB110(HSD_GObj*, s32, f32);
void ft_800CB438(HSD_GObj*);
void ft_800CB59C(HSD_GObj*);
bool ft_800CB870(HSD_GObj*);
UNK_RET ft_800CC6C8(UNK_PARAMS);
UNK_RET ft_800CC6C8(UNK_PARAMS);
void ft_800CC730(HSD_GObj*);
void ft_800CCAAC(HSD_GObj*);
void ft_800CCDA8(HSD_GObj*);
void ft_800CDDA0(HSD_GObj*);
void ft_800CEFE0(HSD_GObj* gobj, int);
float ft_CalcYScaledKnockback(float*, float, float, float);
UNK_RET ft_800D0EC8(UNK_PARAMS);
void ft_800D0FA0(HSD_GObj*);
void ft_800D105C(HSD_GObj*);
void ft_800D14E4(HSD_GObj*);
void ft_800D1A8C(HSD_GObj*);
void ft_800D1E80(HSD_GObj*);
void ft_800D237C(HSD_GObj*);
void ft_800D3158(HSD_GObj*);
void ft_800D4F24(HSD_GObj*, s32);
void ft_800D4FF4(HSD_GObj*);
void ft_800D5AEC(HSD_GObj*, s32, s32, s32, Fighter*, f32, f32);
void ft_800D5BF8(HSD_GObj*);
void ft_800D5CB0(HSD_GObj*, bool, float landing_lag);
void ft_800D638C(HSD_GObj*);
s32 ft_800D67C4(Fighter*);
bool ft_800D6824(HSD_GObj*);
s32 ft_800D688C(Fighter*);
bool ft_800D68C0(HSD_GObj*);
s32 ft_800D6928(Fighter*);
void ft_800D6B00(HSD_GObj*, s32);
void ft_800D6C60(HSD_GObj*, HSD_GObjEvent);
void ft_800D6C60(HSD_GObj*, HSD_GObjEvent callback);
void ft_800D71D8(HSD_GObj*);
void ft_800D94D8(HSD_GObj*);
void ft_800D9C98(HSD_GObj*);
void ft_800D9C98(HSD_GObj* gobj);
f32 ft_800DA824(Fighter*);
void ft_800DB368(Fighter*, Fighter*);
void ft_800DB464(HSD_GObj*);
void ft_800DC750(HSD_GObj*);
void ft_800DC920(HSD_GObj*, HSD_GObj*);
void ft_800DD168(HSD_GObj*);
void ft_800DE2A8(HSD_GObj*, HSD_GObj*);
void ft_800DE508(HSD_GObj*);
void ft_800DE7C0(HSD_GObj*, s32, s32);
void ft_800DEAE8(HSD_GObj* gobj, enum_t asid0, enum_t asid1);
void ft_800DEEA8(HSD_GObj*);
void ft_800DEEB8(void);
u32 ft_800DEEE8(Fighter*, Vec2*);
void ft_800DEF38(HSD_GObj*);
void ft_800DF0D0(HSD_GObj*);
bool ft_800DF478(Fighter*);
void ftCo_AirCatch_Anim(HSD_GObj*);
void ftCo_AirCatch_Coll(HSD_GObj*);
void ftCo_AirCatchHit_Anim(HSD_GObj*);
void ftCo_AirCatchHit_IASA(HSD_GObj*);
void ftCo_AirCatchHit_Phys(HSD_GObj*);
void ftCo_AirCatch_IASA(HSD_GObj*);
void ftCo_AirCatch_Phys(HSD_GObj*);
void ftCo_AppealS_Anim(HSD_GObj*);
void ftCo_AppealS_Coll(HSD_GObj*);
void ftCo_AppealS_IASA(HSD_GObj*);
void ftCo_AppealS_Phys(HSD_GObj*);
bool ftCo_Attack100_CheckInput(HSD_GObj*);
void ftCo_Attack100End_Anim(HSD_GObj*);
void ftCo_Attack100End_Anim(HSD_GObj* gobj);
void ftCo_Attack100End_Coll(HSD_GObj*);
void ftCo_Attack100End_Phys(HSD_GObj*);
void ftCo_Attack100Loop_Anim(HSD_GObj*);
void ftCo_Attack100Loop_Coll(HSD_GObj*);
void ftCo_Attack100Loop_IASA(HSD_GObj*);
void ftCo_Attack100Loop_IASA(HSD_GObj* gobj);
void ftCo_Attack100Loop_Phys(HSD_GObj*);
void ftCo_Attack100Start_Anim(HSD_GObj*);
void ftCo_Attack100Start_Coll(HSD_GObj*);
void ftCo_Attack100Start_Phys(HSD_GObj*);
bool ftCo_AttackLw4_CheckInput(HSD_GObj*);
void ftCo_AttackS42_Anim(HSD_GObj*);
void ftCo_AttackS42_Coll(HSD_GObj*);
void ftCo_AttackS42_IASA(HSD_GObj*);
void ftCo_AttackS42_Phys(HSD_GObj*);
void ftCo_Barrel_Anim(HSD_GObj*);
void ftCo_Barrel_Coll(HSD_GObj*);
void ftCo_Barrel_IASA(HSD_GObj*);
void ftCo_Barrel_Phys(HSD_GObj*);
void ftCo_BarrelWait_Anim(HSD_GObj*);
void ftCo_BarrelWait_Coll(HSD_GObj*);
void ftCo_BarrelWait_IASA(HSD_GObj*);
void ftCo_BarrelWait_Phys(HSD_GObj*);
void ftCo_BatSwing_Anim(HSD_GObj*);
void ftCo_BatSwing_Coll(HSD_GObj*);
void ftCo_BatSwing_IASA(HSD_GObj*);
void ftCo_BatSwing_Phys(HSD_GObj*);
void ftCo_Bury_Anim(HSD_GObj*);
void ftCo_Bury_Coll(HSD_GObj*);
void ftCo_Bury_IASA(HSD_GObj*);
void ftCo_BuryJump_Anim(HSD_GObj*);
void ftCo_BuryJump_Coll(HSD_GObj*);
void ftCo_BuryJump_IASA(HSD_GObj*);
void ftCo_BuryJump_Phys(HSD_GObj*);
void ftCo_Bury_Phys(HSD_GObj*);
void ftCo_BuryWait_Anim(HSD_GObj*);
void ftCo_BuryWait_Coll(HSD_GObj*);
void ftCo_BuryWait_IASA(HSD_GObj*);
void ftCo_BuryWait_Phys(HSD_GObj*);
void ftCo_CaptureCaptain_Anim(HSD_GObj*);
void ftCo_CaptureCaptain_Coll(HSD_GObj*);
void ftCo_CaptureCaptain_IASA(HSD_GObj*);
void ftCo_CaptureCaptain_Phys(HSD_GObj*);
void ftCo_CaptureCut_Anim(HSD_GObj*);
void ftCo_CaptureCut_Coll(HSD_GObj*);
void ftCo_CaptureCut_IASA(HSD_GObj*);
void ftCo_CaptureCut_Phys(HSD_GObj*);
void ftCo_CaptureDamageHi_Anim(HSD_GObj*);
void ftCo_CaptureDamageHi_Coll(HSD_GObj*);
void ftCo_CaptureDamageHi_IASA(HSD_GObj*);
void ftCo_CaptureDamageHi_Phys(HSD_GObj*);
void ftCo_CaptureDamageKoopaAir_Anim(HSD_GObj*);
void ftCo_CaptureDamageKoopaAir_Coll(HSD_GObj*);
void ftCo_CaptureDamageKoopaAir_IASA(HSD_GObj*);
void ftCo_CaptureDamageKoopaAir_Phys(HSD_GObj*);
void ftCo_CaptureDamageKoopa_Anim(HSD_GObj*);
void ftCo_CaptureDamageKoopa_Coll(HSD_GObj*);
void ftCo_CaptureDamageKoopa_IASA(HSD_GObj*);
void ftCo_CaptureDamageKoopa_Phys(HSD_GObj*);
void ftCo_CaptureDamageLw_Anim(HSD_GObj*);
void ftCo_CaptureDamageLw_Coll(HSD_GObj*);
void ftCo_CaptureDamageLw_IASA(HSD_GObj*);
void ftCo_CaptureDamageLw_Phys(HSD_GObj*);
void ftCo_CaptureJump_Anim(HSD_GObj*);
void ftCo_CaptureJump_Coll(HSD_GObj*);
void ftCo_CaptureJump_IASA(HSD_GObj*);
void ftCo_CaptureJump_Phys(HSD_GObj*);
void ftCo_CaptureKirby_Anim(HSD_GObj*);
void ftCo_CaptureKirby_Coll(HSD_GObj*);
void ftCo_CaptureKirby_IASA(HSD_GObj*);
void ftCo_CaptureKirby_Phys(HSD_GObj*);
void ftCo_CaptureKoopaAir_Anim(HSD_GObj*);
void ftCo_CaptureKoopaAir_Coll(HSD_GObj*);
void ftCo_CaptureKoopaAir_IASA(HSD_GObj*);
void ftCo_CaptureKoopaAir_Phys(HSD_GObj*);
void ftCo_CaptureKoopa_Anim(HSD_GObj*);
void ftCo_CaptureKoopa_Coll(HSD_GObj*);
void ftCo_CaptureKoopa_IASA(HSD_GObj*);
void ftCo_CaptureKoopa_Phys(HSD_GObj*);
void ftCo_CaptureLeadead_Anim(HSD_GObj*);
void ftCo_CaptureLeadead_Coll(HSD_GObj*);
void ftCo_CaptureLeadead_IASA(HSD_GObj*);
void ftCo_CaptureLeadead_Phys(HSD_GObj*);
void ftCo_CaptureLikelike_Anim(HSD_GObj*);
void ftCo_CaptureLikelike_Coll(HSD_GObj*);
void ftCo_CaptureLikelike_IASA(HSD_GObj*);
void ftCo_CaptureLikelike_Phys(HSD_GObj*);
void ftCo_CapturePulledHi_Anim(HSD_GObj*);
void ftCo_CapturePulledHi_Coll(HSD_GObj*);
void ftCo_CapturePulledHi_IASA(HSD_GObj*);
void ftCo_CapturePulledHi_Phys(HSD_GObj*);
void ftCo_CapturePulledLw_Anim(HSD_GObj*);
void ftCo_CapturePulledLw_Coll(HSD_GObj*);
void ftCo_CapturePulledLw_IASA(HSD_GObj*);
void ftCo_CapturePulledLw_Phys(HSD_GObj*);
void ftCo_CaptureWaitHi_Anim(HSD_GObj*);
void ftCo_CaptureWaitHi_Coll(HSD_GObj*);
void ftCo_CaptureWaitHi_IASA(HSD_GObj*);
void ftCo_CaptureWaitHi_Phys(HSD_GObj*);
void ftCo_CaptureWaitKirby_Anim(HSD_GObj*);
void ftCo_CaptureWaitKirby_Coll(HSD_GObj*);
void ftCo_CaptureWaitKirby_IASA(HSD_GObj*);
void ftCo_CaptureWaitKirby_Phys(HSD_GObj*);
void ftCo_CaptureWaitKoopaAir_Anim(HSD_GObj*);
void ftCo_CaptureWaitKoopaAir_Coll(HSD_GObj*);
void ftCo_CaptureWaitKoopaAir_IASA(HSD_GObj*);
void ftCo_CaptureWaitKoopaAir_Phys(HSD_GObj*);
void ftCo_CaptureWaitKoopa_Anim(HSD_GObj*);
void ftCo_CaptureWaitKoopa_Coll(HSD_GObj*);
void ftCo_CaptureWaitKoopa_IASA(HSD_GObj*);
void ftCo_CaptureWaitKoopa_Phys(HSD_GObj*);
void ftCo_CaptureWaitLw_Anim(HSD_GObj*);
void ftCo_CaptureWaitLw_Coll(HSD_GObj*);
void ftCo_CaptureWaitLw_IASA(HSD_GObj*);
void ftCo_CaptureWaitLw_Phys(HSD_GObj*);
void ftCo_CaptureYoshi_Anim(HSD_GObj*);
void ftCo_CaptureYoshi_Coll(HSD_GObj*);
void ftCo_CaptureYoshi_IASA(HSD_GObj*);
void ftCo_CaptureYoshi_Phys(HSD_GObj*);
void ftCo_Catch_Anim(HSD_GObj*);
void ftCo_CatchAttack_Anim(HSD_GObj*);
void ftCo_CatchAttack_Coll(HSD_GObj*);
void ftCo_CatchAttack_IASA(HSD_GObj*);
void ftCo_CatchAttack_Phys(HSD_GObj*);
bool ftCo_Catch_CheckInput(HSD_GObj*);
void ftCo_Catch_Coll(HSD_GObj*);
void ftCo_CatchCut_Anim(HSD_GObj*);
void ftCo_CatchCut_Coll(HSD_GObj*);
void ftCo_CatchCut_IASA(HSD_GObj*);
void ftCo_CatchCut_Phys(HSD_GObj*);
void ftCo_CatchDash_Anim(HSD_GObj*);
void ftCo_CatchDash_Coll(HSD_GObj*);
void ftCo_CatchDash_IASA(HSD_GObj*);
void ftCo_CatchDash_Phys(HSD_GObj*);
void ftCo_Catch_IASA(HSD_GObj*);
void ftCo_Catch_Phys(HSD_GObj*);
void ftCo_CatchPull_Anim(HSD_GObj*);
void ftCo_CatchPull_Coll(HSD_GObj*);
void ftCo_CatchPull_IASA(HSD_GObj*);
void ftCo_CatchPull_Phys(HSD_GObj*);
void ftCo_CatchWait_Anim(HSD_GObj*);
void ftCo_CatchWait_Coll(HSD_GObj*);
void ftCo_CatchWait_IASA(HSD_GObj*);
void ftCo_CatchWait_Phys(HSD_GObj*);
void ftCo_CliffAttack_Anim(HSD_GObj*);
void ftCo_CliffAttack_Coll(HSD_GObj*);
void ftCo_CliffAttack_IASA(HSD_GObj*);
void ftCo_CliffAttack_Phys(HSD_GObj*);
void ftCo_Cliff_Cam(HSD_GObj*);
void ftCo_CliffCatch_Anim(HSD_GObj*);
void ftCo_CliffCatch_Coll(HSD_GObj*);
void ftCo_CliffCatch_IASA(HSD_GObj*);
void ftCo_CliffCatch_Phys(HSD_GObj*);
void ftCo_CliffClimb_Anim(HSD_GObj*);
void ftCo_CliffClimb_Coll(HSD_GObj*);
void ftCo_CliffClimb_IASA(HSD_GObj*);
void ftCo_CliffClimb_Phys(HSD_GObj*);
void ftCo_CliffEscape_Anim(HSD_GObj*);
void ftCo_CliffEscape_Coll(HSD_GObj*);
void ftCo_CliffEscape_IASA(HSD_GObj*);
void ftCo_CliffEscape_Phys(HSD_GObj*);
void ftCo_CliffJump1_Anim(HSD_GObj*);
void ftCo_CliffJump1_Coll(HSD_GObj*);
void ftCo_CliffJump1_IASA(HSD_GObj*);
void ftCo_CliffJump1_Phys(HSD_GObj*);
void ftCo_CliffJump2_Anim(HSD_GObj*);
void ftCo_CliffJump2_Coll(HSD_GObj*);
void ftCo_CliffJump2_IASA(HSD_GObj*);
void ftCo_CliffJump2_Phys(HSD_GObj*);
void ftCo_CliffWait_Anim(HSD_GObj*);
void ftCo_CliffWait_Coll(HSD_GObj*);
void ftCo_CliffWait_IASA(HSD_GObj*);
void ftCo_CliffWait_Phys(HSD_GObj*);
void ftCo_Damage_Anim(HSD_GObj*);
void ftCo_DamageBind_Anim(HSD_GObj*);
void ftCo_DamageBind_Coll(HSD_GObj*);
void ftCo_DamageBind_IASA(HSD_GObj*);
void ftCo_DamageBind_Phys(HSD_GObj*);
void ftCo_Damage_Coll(HSD_GObj*);
void ftCo_DamageFall_Anim(HSD_GObj*);
void ftCo_DamageFall_Coll(HSD_GObj*);
void ftCo_DamageFall_IASA(HSD_GObj*);
void ftCo_DamageFall_Phys(HSD_GObj*);
void ftCo_DamageFly_Anim(HSD_GObj*);
void ftCo_DamageFly_Coll(HSD_GObj*);
void ftCo_DamageFly_IASA(HSD_GObj*);
void ftCo_DamageFly_Phys(HSD_GObj*);
void ftCo_DamageFlyRoll_Anim(HSD_GObj*);
void ftCo_DamageFlyRoll_Coll(HSD_GObj*);
void ftCo_DamageFlyRoll_IASA(HSD_GObj*);
void ftCo_DamageFlyRoll_Phys(HSD_GObj*);
void ftCo_Damage_IASA(HSD_GObj*);
void ftCo_DamageIce_Anim(HSD_GObj*);
void ftCo_DamageIce_Coll(HSD_GObj*);
void ftCo_DamageIce_IASA(HSD_GObj*);
void ftCo_DamageIceJump_Anim(HSD_GObj*);
void ftCo_DamageIceJump_Coll(HSD_GObj*);
void ftCo_DamageIceJump_IASA(HSD_GObj*);
void ftCo_DamageIceJump_Phys(HSD_GObj*);
void ftCo_DamageIce_Phys(HSD_GObj*);
void ftCo_Damage_Phys(HSD_GObj*);
void ftCo_DamageScrew_Anim(HSD_GObj*);
void ftCo_DamageScrew_Coll(HSD_GObj*);
void ftCo_DamageScrew_IASA(HSD_GObj*);
void ftCo_DamageScrew_Phys(HSD_GObj*);
void ftCo_DamageSong_Anim(HSD_GObj*);
void ftCo_DamageSong_Coll(HSD_GObj*);
void ftCo_DamageSong_IASA(HSD_GObj*);
void ftCo_DamageSong_Phys(HSD_GObj*);
void ftCo_DamageSongRv_Anim(HSD_GObj*);
void ftCo_DamageSongRv_Coll(HSD_GObj*);
void ftCo_DamageSongRv_IASA(HSD_GObj*);
void ftCo_DamageSongRv_Phys(HSD_GObj*);
void ftCo_DamageSongWait_Anim(HSD_GObj*);
void ftCo_DamageSongWait_Coll(HSD_GObj*);
void ftCo_DamageSongWait_IASA(HSD_GObj*);
void ftCo_DamageSongWait_Phys(HSD_GObj*);
void ftCo_Dash_Anim(HSD_GObj*);
bool ftCo_Dash_CheckInput(HSD_GObj*);
void ftCo_Dash_Coll(HSD_GObj*);
void ftCo_Dash_IASA(HSD_GObj*);
void ftCo_Dash_Phys(HSD_GObj*);
void ftCo_DeadDown_Anim(HSD_GObj*);
void ftCo_DeadDown_Cam(HSD_GObj*);
void ftCo_DeadLeft_Anim(HSD_GObj*);
void ftCo_DeadLeft_Cam(HSD_GObj*);
void ftCo_DeadRight_Anim(HSD_GObj*);
void ftCo_DeadRight_Cam(HSD_GObj*);
void ftCo_DeadUp_Anim(HSD_GObj*);
void ftCo_DeadUp_Cam(HSD_GObj*);
void ftCo_DeadUpFall_Anim(HSD_GObj*);
void ftCo_DeadUpFall_Cam(HSD_GObj*);
void ftCo_DeadUpFall_Phys(HSD_GObj*);
void ftCo_DeadUpStar_Anim(HSD_GObj*);
void ftCo_DeadUpStar_Cam(HSD_GObj*);
void ftCo_Down_Anim(HSD_GObj*);
void ftCo_DownAttack_Anim(HSD_GObj*);
void ftCo_DownAttack_Coll(HSD_GObj*);
void ftCo_DownAttack_IASA(HSD_GObj*);
void ftCo_DownAttack_Phys(HSD_GObj*);
void ftCo_DownBound_Anim(HSD_GObj*);
void ftCo_DownBound_Coll(HSD_GObj*);
void ftCo_DownBound_IASA(HSD_GObj*);
void ftCo_DownBound_Phys(HSD_GObj*);
void ftCo_Down_Coll(HSD_GObj*);
void ftCo_DownDamage_Anim(HSD_GObj*);
void ftCo_DownDamage_Coll(HSD_GObj*);
void ftCo_DownDamage_IASA(HSD_GObj*);
void ftCo_DownDamage_Phys(HSD_GObj*);
void ftCo_Down_IASA(HSD_GObj*);
void ftCo_Down_Phys(HSD_GObj*);
void ftCo_DownReflect_Anim(HSD_GObj*);
void ftCo_DownReflect_Coll(HSD_GObj*);
void ftCo_DownReflect_IASA(HSD_GObj*);
void ftCo_DownReflect_Phys(HSD_GObj*);
void ftCo_DownSpot_Anim(HSD_GObj*);
void ftCo_DownSpot_Coll(HSD_GObj*);
void ftCo_DownSpot_IASA(HSD_GObj*);
void ftCo_DownSpot_Phys(HSD_GObj*);
void ftCo_DownStand_Anim(HSD_GObj*);
void ftCo_DownStand_Coll(HSD_GObj*);
void ftCo_DownStand_IASA(HSD_GObj*);
void ftCo_DownStand_Phys(HSD_GObj*);
void ftCo_DownWait_Anim(HSD_GObj*);
void ftCo_DownWait_Coll(HSD_GObj*);
void ftCo_DownWait_IASA(HSD_GObj*);
void ftCo_DownWait_Phys(HSD_GObj*);
void ftCo_Entry_Anim(HSD_GObj*);
void ftCo_Entry_Coll(HSD_GObj*);
void ftCo_EntryEnd_Anim(HSD_GObj*);
void ftCo_EntryEnd_Coll(HSD_GObj*);
void ftCo_EntryEnd_IASA(HSD_GObj*);
void ftCo_EntryEnd_Phys(HSD_GObj*);
void ftCo_Entry_IASA(HSD_GObj*);
void ftCo_Entry_Phys(HSD_GObj*);
void ftCo_EntryStart_Anim(HSD_GObj*);
void ftCo_EntryStart_Coll(HSD_GObj*);
void ftCo_EntryStart_IASA(HSD_GObj*);
void ftCo_EntryStart_Phys(HSD_GObj*);
void ftCo_EscapeAir_Anim(HSD_GObj*);
void ftCo_EscapeAir_Coll(HSD_GObj*);
void ftCo_EscapeAir_IASA(HSD_GObj*);
void ftCo_EscapeAir_Phys(HSD_GObj*);
void ftCo_Escape_Anim(HSD_GObj*);
void ftCo_Escape_Coll(HSD_GObj*);
void ftCo_Escape_IASA(HSD_GObj*);
void ftCo_EscapeN_Anim(HSD_GObj*);
void ftCo_EscapeN_Coll(HSD_GObj*);
void ftCo_EscapeN_IASA(HSD_GObj*);
void ftCo_EscapeN_Phys(HSD_GObj*);
void ftCo_Escape_Phys(HSD_GObj*);
void ftCo_FallAerial_Anim(HSD_GObj*);
void ftCo_FallAerial_Coll(HSD_GObj*);
void ftCo_FallAerial_IASA(HSD_GObj*);
void ftCo_FallAerial_Phys(HSD_GObj*);
void ftCo_Fall_Anim(HSD_GObj*);
void ftCo_Fall_Coll(HSD_GObj*);
void ftCo_Fall_IASA(HSD_GObj*);
void ftCo_Fall_Phys(HSD_GObj*);
void ftCo_FallSpecial_Anim(HSD_GObj*);
void ftCo_FallSpecial_Coll(HSD_GObj*);
void ftCo_FallSpecial_IASA(HSD_GObj*);
void ftCo_FallSpecial_Phys(HSD_GObj*);
void ftCo_FireFlowerShootAir_Anim(HSD_GObj*);
void ftCo_FireFlowerShootAir_Coll(HSD_GObj*);
void ftCo_FireFlowerShootAir_IASA(HSD_GObj*);
void ftCo_FireFlowerShootAir_Phys(HSD_GObj*);
void ftCo_FireFlowerShoot_Anim(HSD_GObj*);
void ftCo_FireFlowerShoot_Coll(HSD_GObj*);
void ftCo_FireFlowerShoot_IASA(HSD_GObj*);
void ftCo_FireFlowerShoot_Phys(HSD_GObj*);
void ftCo_FlyReflect_Anim(HSD_GObj*);
void ftCo_FlyReflect_Coll(HSD_GObj*);
void ftCo_FlyReflect_IASA(HSD_GObj*);
void ftCo_FlyReflect_Phys(HSD_GObj*);
void ftCo_Furafura_Anim(HSD_GObj*);
void ftCo_Furafura_Coll(HSD_GObj*);
void ftCo_Furafura_IASA(HSD_GObj*);
void ftCo_Furafura_Phys(HSD_GObj*);
void ftCo_Guard_Anim(HSD_GObj*);
void ftCo_Guard_Coll(HSD_GObj*);
void ftCo_Guard_IASA(HSD_GObj*);
void ftCo_GuardOff_Anim(HSD_GObj*);
void ftCo_GuardOff_Coll(HSD_GObj*);
void ftCo_GuardOff_IASA(HSD_GObj*);
void ftCo_GuardOff_Phys(HSD_GObj*);
void ftCo_GuardOn_Anim(HSD_GObj*);
void ftCo_GuardOn_Coll(HSD_GObj*);
void ftCo_GuardOn_IASA(HSD_GObj*);
void ftCo_GuardOn_Phys(HSD_GObj*);
void ftCo_Guard_Phys(HSD_GObj*);
void ftCo_GuardReflect_Anim(HSD_GObj*);
void ftCo_GuardReflect_Coll(HSD_GObj*);
void ftCo_GuardReflect_IASA(HSD_GObj*);
void ftCo_GuardReflect_Phys(HSD_GObj*);
void ftCo_GuardSetOff_Anim(HSD_GObj*);
void ftCo_GuardSetOff_Coll(HSD_GObj*);
void ftCo_GuardSetOff_IASA(HSD_GObj*);
void ftCo_GuardSetOff_Phys(HSD_GObj*);
void ftCo_HammerFall_Anim(HSD_GObj*);
void ftCo_HammerFall_Coll(HSD_GObj*);
void ftCo_HammerFall_IASA(HSD_GObj*);
void ftCo_HammerFall_Phys(HSD_GObj*);
void ftCo_HammerJump_Anim(HSD_GObj*);
void ftCo_HammerJump_Coll(HSD_GObj*);
void ftCo_HammerJump_IASA(HSD_GObj*);
void ftCo_HammerJump_Phys(HSD_GObj*);
void ftCo_HammerKneeBend_Anim(HSD_GObj*);
void ftCo_HammerKneeBend_Coll(HSD_GObj*);
void ftCo_HammerKneeBend_IASA(HSD_GObj*);
void ftCo_HammerKneeBend_Phys(HSD_GObj*);
void ftCo_HammerLanding_Anim(HSD_GObj*);
void ftCo_HammerLanding_Coll(HSD_GObj*);
void ftCo_HammerLanding_IASA(HSD_GObj*);
void ftCo_HammerLanding_Phys(HSD_GObj*);
void ftCo_HammerTurn_Anim(HSD_GObj*);
void ftCo_HammerTurn_Coll(HSD_GObj*);
void ftCo_HammerTurn_IASA(HSD_GObj*);
void ftCo_HammerTurn_Phys(HSD_GObj*);
void ftCo_HammerWait_Anim(HSD_GObj*);
void ftCo_HammerWait_Coll(HSD_GObj*);
void ftCo_HammerWait_IASA(HSD_GObj*);
void ftCo_HammerWait_Phys(HSD_GObj*);
void ftCo_HammerWalk_Anim(HSD_GObj*);
void ftCo_HammerWalk_Coll(HSD_GObj*);
void ftCo_HammerWalk_IASA(HSD_GObj*);
void ftCo_HammerWalk_Phys(HSD_GObj*);
void ftCo_HarisenSwing_Anim(HSD_GObj*);
void ftCo_HarisenSwing_Coll(HSD_GObj*);
void ftCo_HarisenSwing_IASA(HSD_GObj*);
void ftCo_HarisenSwing_Phys(HSD_GObj*);
void ftCo_HeavyThrow_Coll(HSD_GObj*);
void ftCo_ItemGet_Anim(HSD_GObj*);
void ftCo_ItemGet_Coll(HSD_GObj*);
void ftCo_ItemGet_IASA(HSD_GObj*);
void ftCo_ItemGet_Phys(HSD_GObj*);
void ftCo_ItemParasolDamageFall_Anim(HSD_GObj*);
void ftCo_ItemParasolDamageFall_Coll(HSD_GObj*);
void ftCo_ItemParasolDamageFall_IASA(HSD_GObj*);
void ftCo_ItemParasolDamageFall_Phys(HSD_GObj*);
void ftCo_ItemParasolFall_Anim(HSD_GObj*);
void ftCo_ItemParasolFall_Coll(HSD_GObj*);
void ftCo_ItemParasolFall_IASA(HSD_GObj*);
void ftCo_ItemParasolFall_Phys(HSD_GObj*);
void ftCo_ItemParasolFallSpecial_Anim(HSD_GObj*);
void ftCo_ItemParasolFallSpecial_Coll(HSD_GObj*);
void ftCo_ItemParasolFallSpecial_IASA(HSD_GObj*);
void ftCo_ItemParasolFallSpecial_Phys(HSD_GObj*);
void ftCo_ItemParasolOpen_Anim(HSD_GObj*);
void ftCo_ItemParasolOpen_Coll(HSD_GObj*);
void ftCo_ItemParasolOpen_IASA(HSD_GObj*);
void ftCo_ItemParasolOpen_Phys(HSD_GObj*);
void ftCo_ItemScopeAirEnd_Anim(HSD_GObj*);
void ftCo_ItemScopeAirEnd_Coll(HSD_GObj*);
void ftCo_ItemScopeAirEnd_IASA(HSD_GObj*);
void ftCo_ItemScopeAirEnd_Phys(HSD_GObj*);
void ftCo_ItemScopeAirFire_Anim(HSD_GObj*);
void ftCo_ItemScopeAirFire_Coll(HSD_GObj*);
void ftCo_ItemScopeAirFire_IASA(HSD_GObj*);
void ftCo_ItemScopeAirFire_Phys(HSD_GObj*);
void ftCo_ItemScopeAirRapid_Anim(HSD_GObj*);
void ftCo_ItemScopeAirRapid_Coll(HSD_GObj*);
void ftCo_ItemScopeAirRapid_IASA(HSD_GObj*);
void ftCo_ItemScopeAirRapid_Phys(HSD_GObj*);
void ftCo_ItemScopeAirStart_Anim(HSD_GObj*);
void ftCo_ItemScopeAirStart_Coll(HSD_GObj*);
void ftCo_ItemScopeAirStart_IASA(HSD_GObj*);
void ftCo_ItemScopeAirStart_Phys(HSD_GObj*);
void ftCo_ItemScopeEnd_Anim(HSD_GObj*);
void ftCo_ItemScopeEnd_Coll(HSD_GObj*);
void ftCo_ItemScopeEnd_IASA(HSD_GObj*);
void ftCo_ItemScopeEnd_Phys(HSD_GObj*);
void ftCo_ItemScopeFire_Anim(HSD_GObj*);
void ftCo_ItemScopeFire_Coll(HSD_GObj*);
void ftCo_ItemScopeFire_IASA(HSD_GObj*);
void ftCo_ItemScopeFire_Phys(HSD_GObj*);
void ftCo_ItemScopeRapid_Anim(HSD_GObj*);
void ftCo_ItemScopeRapid_Coll(HSD_GObj*);
void ftCo_ItemScopeRapid_IASA(HSD_GObj*);
void ftCo_ItemScopeRapid_Phys(HSD_GObj*);
void ftCo_ItemScopeStart_Anim(HSD_GObj*);
void ftCo_ItemScopeStart_Coll(HSD_GObj*);
void ftCo_ItemScopeStart_IASA(HSD_GObj*);
void ftCo_ItemScopeStart_Phys(HSD_GObj*);
void ftCo_ItemScrewAir_Anim(HSD_GObj*);
void ftCo_ItemScrewAir_Coll(HSD_GObj*);
void ftCo_ItemScrewAir_IASA(HSD_GObj*);
void ftCo_ItemScrewAir_Phys(HSD_GObj*);
void ftCo_ItemScrew_Anim(HSD_GObj*);
void ftCo_ItemScrew_Coll(HSD_GObj*);
void ftCo_ItemScrew_IASA(HSD_GObj*);
void ftCo_ItemScrew_Phys(HSD_GObj*);
void ftCo_ItemThrow_Anim(HSD_GObj*);
void ftCo_ItemThrow_IASA(HSD_GObj*);
void ftCo_ItemThrow_Phys(HSD_GObj*);
void ftCo_JumpAerial_Anim(HSD_GObj*);
void ftCo_JumpAerial_Coll(HSD_GObj*);
void ftCo_JumpAerialF1_Anim(HSD_GObj*);
void ftCo_JumpAerialF1_Coll(HSD_GObj*);
void ftCo_JumpAerialF1_IASA(HSD_GObj*);
void ftCo_JumpAerialF1_Phys(HSD_GObj*);
void ftCo_JumpAerial_IASA(HSD_GObj*);
void ftCo_JumpAerial_Phys(HSD_GObj*);
void ftCo_Jump_Anim(HSD_GObj*);
bool ftCo_Jump_CheckInput(HSD_GObj*);
void ftCo_Jump_Coll(HSD_GObj*);
void ftCo_Jump_IASA(HSD_GObj*);
void ftCo_Jump_Phys(HSD_GObj*);
void ftCo_KinokoGiantEndAir_Anim(HSD_GObj*);
void ftCo_KinokoGiantEndAir_Coll(HSD_GObj*);
void ftCo_KinokoGiantEnd_Anim(HSD_GObj*);
void ftCo_KinokoGiantEnd_Coll(HSD_GObj*);
void ftCo_KinokoGiantStartAir_Anim(HSD_GObj*);
void ftCo_KinokoGiantStartAir_Coll(HSD_GObj*);
void ftCo_KinokoGiantStart_Anim(HSD_GObj*);
void ftCo_KinokoGiantStart_Coll(HSD_GObj*);
void ftCo_KinokoSmallEndAir_Anim(HSD_GObj*);
void ftCo_KinokoSmallEndAir_Coll(HSD_GObj*);
void ftCo_KinokoSmallEnd_Anim(HSD_GObj*);
void ftCo_KinokoSmallEnd_Coll(HSD_GObj*);
void ftCo_KinokoSmallStartAir_Anim(HSD_GObj*);
void ftCo_KinokoSmallStartAir_Coll(HSD_GObj*);
void ftCo_KinokoSmallStart_Anim(HSD_GObj*);
void ftCo_KinokoSmallStart_Coll(HSD_GObj*);
void ftCo_KneeBend_Anim(HSD_GObj*);
void ftCo_KneeBend_Coll(HSD_GObj*);
void ftCo_KneeBend_IASA(HSD_GObj*);
void ftCo_KneeBend_Phys(HSD_GObj*);
void ftCo_Landing_Anim(HSD_GObj*);
void ftCo_Landing_Coll(HSD_GObj*);
void ftCo_Landing_IASA(HSD_GObj*);
void ftCo_Landing_Phys(HSD_GObj*);
void ftCo_LGunShootAir_Anim(HSD_GObj*);
void ftCo_LGunShootAir_Coll(HSD_GObj*);
void ftCo_LGunShootAir_IASA(HSD_GObj*);
void ftCo_LGunShootAir_Phys(HSD_GObj*);
void ftCo_LGunShoot_Anim(HSD_GObj*);
void ftCo_LGunShoot_Coll(HSD_GObj*);
void ftCo_LGunShoot_IASA(HSD_GObj*);
void ftCo_LGunShoot_Phys(HSD_GObj*);
void ftCo_LiftTurn_Anim(HSD_GObj*);
void ftCo_LiftTurn_Coll(HSD_GObj*);
void ftCo_LiftTurn_IASA(HSD_GObj*);
void ftCo_LiftTurn_Phys(HSD_GObj*);
void ftCo_LiftWait_Anim(HSD_GObj*);
void ftCo_LiftWait_Coll(HSD_GObj*);
void ftCo_LiftWait_IASA(HSD_GObj*);
void ftCo_LiftWait_Phys(HSD_GObj*);
void ftCo_LiftWalk_Anim(HSD_GObj*);
void ftCo_LiftWalk_Coll(HSD_GObj*);
void ftCo_LiftWalk_IASA(HSD_GObj*);
void ftCo_LiftWalk_Phys(HSD_GObj*);
void ftCo_LightThrowAir_Coll(HSD_GObj*);
void ftCo_LightThrowAir_Phys(HSD_GObj*);
void ftCo_LightThrow_Coll(HSD_GObj*);
void ftCo_LightThrowDashDrop_Coll(HSD_GObj*);
void ftCo_LightThrowDash_Phys(HSD_GObj*);
void ftCo_LipstickSwing_Anim(HSD_GObj*);
void ftCo_LipstickSwing_Coll(HSD_GObj*);
void ftCo_LipstickSwing_IASA(HSD_GObj*);
void ftCo_LipstickSwing_Phys(HSD_GObj*);
bool ftColl_8007B868(HSD_GObj*);
void ftCo_MissFoot_Anim(HSD_GObj*);
void ftCo_MissFoot_Coll(HSD_GObj*);
void ftCo_MissFoot_IASA(HSD_GObj*);
void ftCo_MissFoot_Phys(HSD_GObj*);
void ftCo_Ottotto_Anim(HSD_GObj*);
void ftCo_Ottotto_Coll(HSD_GObj*);
void ftCo_Ottotto_IASA(HSD_GObj*);
void ftCo_Ottotto_Phys(HSD_GObj*);
void ftCo_OttottoWait_Anim(HSD_GObj*);
void ftCo_OttottoWait_Coll(HSD_GObj*);
void ftCo_OttottoWait_IASA(HSD_GObj*);
void ftCo_OttottoWait_Phys(HSD_GObj*);
void ftCo_ParasolSwing_Anim(HSD_GObj*);
void ftCo_ParasolSwing_Coll(HSD_GObj*);
void ftCo_ParasolSwing_IASA(HSD_GObj*);
void ftCo_ParasolSwing_Phys(HSD_GObj*);
void ftCo_Pass_Anim(HSD_GObj*);
void ftCo_Pass_Coll(HSD_GObj*);
void ftCo_Pass_IASA(HSD_GObj*);
void ftCo_Passive_Anim(HSD_GObj*);
void ftCo_PassiveCeil_Anim(HSD_GObj*);
void ftCo_PassiveCeil_Coll(HSD_GObj*);
void ftCo_PassiveCeil_IASA(HSD_GObj*);
void ftCo_PassiveCeil_Phys(HSD_GObj*);
void ftCo_Passive_Coll(HSD_GObj*);
void ftCo_Passive_IASA(HSD_GObj*);
void ftCo_Passive_Phys(HSD_GObj*);
void ftCo_PassiveStand_Anim(HSD_GObj*);
void ftCo_PassiveStand_Coll(HSD_GObj*);
void ftCo_PassiveStand_IASA(HSD_GObj*);
void ftCo_PassiveStand_Phys(HSD_GObj*);
void ftCo_PassiveWall_Anim(HSD_GObj*);
void ftCo_PassiveWall_Coll(HSD_GObj*);
void ftCo_PassiveWall_IASA(HSD_GObj*);
void ftCo_PassiveWall_Phys(HSD_GObj*);
void ftCo_Pass_Phys(HSD_GObj*);
void ftCo_Rebirth_Anim(HSD_GObj*);
void ftCo_Rebirth_Cam(HSD_GObj*);
void ftCo_Rebirth_Coll(HSD_GObj*);
void ftCo_Rebirth_IASA(HSD_GObj*);
void ftCo_Rebirth_Phys(HSD_GObj*);
void ftCo_RebirthWait_Anim(HSD_GObj*);
void ftCo_RebirthWait_Coll(HSD_GObj*);
void ftCo_RebirthWait_IASA(HSD_GObj*);
void ftCo_RebirthWait_Phys(HSD_GObj*);
void ftCo_Rebound_Anim(HSD_GObj*);
void ftCo_Rebound_Coll(HSD_GObj*);
void ftCo_Rebound_IASA(HSD_GObj*);
void ftCo_Rebound_Phys(HSD_GObj*);
void ftCo_ReboundStop_Anim(HSD_GObj*);
void ftCo_Run_Anim(HSD_GObj*);
void ftCo_RunBrake_Anim(HSD_GObj*);
void ftCo_RunBrake_Coll(HSD_GObj*);
void ftCo_RunBrake_IASA(HSD_GObj*);
void ftCo_RunBrake_Phys(HSD_GObj*);
void ftCo_Run_Coll(HSD_GObj*);
void ftCo_RunDirect_Anim(HSD_GObj*);
void ftCo_RunDirect_Coll(HSD_GObj*);
void ftCo_RunDirect_IASA(HSD_GObj*);
void ftCo_RunDirect_Phys(HSD_GObj*);
void ftCo_Run_IASA(HSD_GObj*);
void ftCo_Run_Phys(HSD_GObj*);
void ftCo_ShieldBreakDown_Anim(HSD_GObj*);
void ftCo_ShieldBreakDown_Coll(HSD_GObj*);
void ftCo_ShieldBreakDown_IASA(HSD_GObj*);
void ftCo_ShieldBreakDown_Phys(HSD_GObj*);
void ftCo_ShieldBreakFall_Anim(HSD_GObj*);
void ftCo_ShieldBreakFall_Coll(HSD_GObj*);
void ftCo_ShieldBreakFall_IASA(HSD_GObj*);
void ftCo_ShieldBreakFall_Phys(HSD_GObj*);
void ftCo_ShieldBreakFly_Anim(HSD_GObj*);
void ftCo_ShieldBreakFly_Coll(HSD_GObj*);
void ftCo_ShieldBreakFly_IASA(HSD_GObj*);
void ftCo_ShieldBreakFly_Phys(HSD_GObj*);
void ftCo_ShieldBreakStand_Anim(HSD_GObj*);
void ftCo_ShieldBreakStand_Coll(HSD_GObj*);
void ftCo_ShieldBreakStand_IASA(HSD_GObj*);
void ftCo_ShieldBreakStand_Phys(HSD_GObj*);
void ftCo_Shouldered_Anim(HSD_GObj*);
void ftCo_Shouldered_Coll(HSD_GObj*);
void ftCo_Shouldered_IASA(HSD_GObj*);
void ftCo_Shouldered_Phys(HSD_GObj*);
void ftCo_Sleep_Anim(HSD_GObj*);
void ftCo_Sleep_IASA(HSD_GObj*);
void ftCo_Squat_Anim(HSD_GObj*);
bool ftCo_Squat_CheckInput(HSD_GObj*);
void ftCo_Squat_Coll(HSD_GObj*);
void ftCo_Squat_IASA(HSD_GObj*);
void ftCo_Squat_Phys(HSD_GObj*);
void ftCo_SquatRv_Anim(HSD_GObj*);
void ftCo_SquatRv_Coll(HSD_GObj*);
void ftCo_SquatRv_IASA(HSD_GObj*);
void ftCo_SquatRv_Phys(HSD_GObj*);
void ftCo_SquatWait_Anim(HSD_GObj*);
void ftCo_SquatWait_Coll(HSD_GObj*);
void ftCo_SquatWait_IASA(HSD_GObj*);
void ftCo_SquatWait_Phys(HSD_GObj*);
void ftCo_StarRodSwing_Anim(HSD_GObj*);
void ftCo_StarRodSwing_Coll(HSD_GObj*);
void ftCo_StarRodSwing_IASA(HSD_GObj*);
void ftCo_StarRodSwing_Phys(HSD_GObj*);
void ftCo_StopCeil_Anim(HSD_GObj*);
void ftCo_StopCeil_Coll(HSD_GObj*);
void ftCo_StopCeil_IASA(HSD_GObj*);
void ftCo_StopCeil_Phys(HSD_GObj*);
void ftCo_StopWall_Anim(HSD_GObj*);
void ftCo_StopWall_Coll(HSD_GObj*);
void ftCo_StopWall_IASA(HSD_GObj*);
void ftCo_StopWall_Phys(HSD_GObj*);
void ftCo_SwordSwing_Anim(HSD_GObj*);
void ftCo_SwordSwing_Coll(HSD_GObj*);
void ftCo_SwordSwing_IASA(HSD_GObj*);
void ftCo_SwordSwing_Phys(HSD_GObj*);
void ftCo_ThrowB_Anim(HSD_GObj*);
void ftCo_ThrowB_Coll(HSD_GObj*);
void ftCo_ThrowB_IASA(HSD_GObj*);
void ftCo_ThrowB_Phys(HSD_GObj*);
void ftCo_ThrowF_Anim(HSD_GObj*);
void ftCo_ThrowF_Coll(HSD_GObj*);
void ftCo_ThrowF_IASA(HSD_GObj*);
void ftCo_ThrowF_Phys(HSD_GObj*);
void ftCo_ThrowHi_Anim(HSD_GObj*);
void ftCo_ThrowHi_Cam(HSD_GObj*);
void ftCo_ThrowHi_Coll(HSD_GObj*);
void ftCo_ThrowHi_IASA(HSD_GObj*);
void ftCo_ThrowHi_Phys(HSD_GObj*);
void ftCo_ThrowLw_Anim(HSD_GObj*);
void ftCo_ThrowLw_Coll(HSD_GObj*);
void ftCo_ThrowLw_IASA(HSD_GObj*);
void ftCo_ThrowLw_Phys(HSD_GObj*);
void ftCo_ThrownB_Anim(HSD_GObj*);
void ftCo_ThrownB_Coll(HSD_GObj*);
void ftCo_ThrownB_IASA(HSD_GObj*);
void ftCo_ThrownB_Phys(HSD_GObj*);
void ftCo_ThrownCopyStar_Anim(HSD_GObj*);
void ftCo_ThrownCopyStar_Coll(HSD_GObj*);
void ftCo_ThrownCopyStar_IASA(HSD_GObj*);
void ftCo_ThrownCopyStar_Phys(HSD_GObj*);
void ftCo_ThrownF_Anim(HSD_GObj*);
void ftCo_ThrownF_Coll(HSD_GObj*);
void ftCo_ThrownF_IASA(HSD_GObj*);
void ftCo_ThrownF_Phys(HSD_GObj*);
void ftCo_ThrownHi_Anim(HSD_GObj*);
void ftCo_ThrownHi_Cam(HSD_GObj*);
void ftCo_ThrownHi_Coll(HSD_GObj*);
void ftCo_ThrownHi_IASA(HSD_GObj*);
void ftCo_ThrownHi_Phys(HSD_GObj*);
void ftCo_ThrownKirby_Anim(HSD_GObj*);
void ftCo_ThrownKirby_Coll(HSD_GObj*);
void ftCo_ThrownKirby_IASA(HSD_GObj*);
void ftCo_ThrownKirby_Phys(HSD_GObj*);
void ftCo_ThrownKirbyStar_Anim(HSD_GObj*);
void ftCo_ThrownKirbyStar_Coll(HSD_GObj*);
void ftCo_ThrownKirbyStar_IASA(HSD_GObj*);
void ftCo_ThrownKirbyStar_Phys(HSD_GObj*);
void ftCo_ThrownKoopaAirB_Anim(HSD_GObj*);
void ftCo_ThrownKoopaAirB_Coll(HSD_GObj*);
void ftCo_ThrownKoopaAirB_IASA(HSD_GObj*);
void ftCo_ThrownKoopaAirB_Phys(HSD_GObj*);
void ftCo_ThrownKoopaAirF_Anim(HSD_GObj*);
void ftCo_ThrownKoopaAirF_Coll(HSD_GObj*);
void ftCo_ThrownKoopaAirF_IASA(HSD_GObj*);
void ftCo_ThrownKoopaAirF_Phys(HSD_GObj*);
void ftCo_ThrownKoopaB_Anim(HSD_GObj*);
void ftCo_ThrownKoopaB_Coll(HSD_GObj*);
void ftCo_ThrownKoopaB_IASA(HSD_GObj*);
void ftCo_ThrownKoopaB_Phys(HSD_GObj*);
void ftCo_ThrownKoopaF_Anim(HSD_GObj*);
void ftCo_ThrownKoopaF_Coll(HSD_GObj*);
void ftCo_ThrownKoopaF_IASA(HSD_GObj*);
void ftCo_ThrownKoopaF_Phys(HSD_GObj*);
void ftCo_ThrownLw_Anim(HSD_GObj*);
void ftCo_ThrownLw_Coll(HSD_GObj*);
void ftCo_ThrownLw_IASA(HSD_GObj*);
void ftCo_ThrownLw_Phys(HSD_GObj*);
void ftCo_ThrownMewtwoAir_Anim(HSD_GObj*);
void ftCo_ThrownMewtwoAir_Coll(HSD_GObj*);
void ftCo_ThrownMewtwoAir_IASA(HSD_GObj*);
void ftCo_ThrownMewtwoAir_Phys(HSD_GObj*);
void ftCo_ThrownMewtwo_Anim(HSD_GObj*);
void ftCo_ThrownMewtwo_Coll(HSD_GObj*);
void ftCo_ThrownMewtwo_IASA(HSD_GObj*);
void ftCo_ThrownMewtwo_Phys(HSD_GObj*);
void ftCo_Turn_Anim(HSD_GObj*);
bool ftCo_Turn_CheckInput(HSD_GObj*);
void ftCo_Turn_Coll(HSD_GObj*);
void ftCo_Turn_IASA(HSD_GObj*);
void ftCo_Turn_Phys(HSD_GObj*);
void ftCo_TurnRun_Anim(HSD_GObj*);
void ftCo_TurnRun_Coll(HSD_GObj*);
void ftCo_TurnRun_IASA(HSD_GObj*);
void ftCo_TurnRun_Phys(HSD_GObj*);
void ftCo_Wait_IASA(HSD_GObj*);
void ftCo_Walk_Anim(HSD_GObj*);
bool ftCo_Walk_CheckInput(HSD_GObj*);
void ftCo_Walk_Coll(HSD_GObj*);
void ftCo_Walk_IASA(HSD_GObj*);
void ftCo_Walk_Phys(HSD_GObj*);
void ftCo_WarpStarFall_Anim(HSD_GObj*);
void ftCo_WarpStarFall_Cam(HSD_GObj*);
void ftCo_WarpStarFall_Coll(HSD_GObj*);
void ftCo_WarpStarFall_IASA(HSD_GObj*);
void ftCo_WarpStarFall_Phys(HSD_GObj*);
void ftCo_WarpStarJump_Anim(HSD_GObj*);
void ftCo_WarpStarJump_Cam(HSD_GObj*);
void ftCo_WarpStarJump_Coll(HSD_GObj*);
void ftCo_WarpStarJump_IASA(HSD_GObj*);
void ftCo_WarpStarJump_Phys(HSD_GObj*);
void ftCo_YoshiEgg_Anim(HSD_GObj*);
void ftCo_YoshiEgg_Coll(HSD_GObj*);
void ftCo_YoshiEgg_IASA(HSD_GObj*);
void ftCo_YoshiEgg_Phys(HSD_GObj*);
void ftDk_ThrowF_Anim(HSD_GObj*);
void ftDk_ThrowFB_Anim(HSD_GObj*);
void ftDk_ThrowFB_Coll(HSD_GObj*);
void ftDk_ThrowFB_IASA(HSD_GObj*);
void ftDk_ThrowFB_Phys(HSD_GObj*);
void ftDk_ThrowF_Coll(HSD_GObj*);
void ftDk_ThrowFFall_Anim(HSD_GObj*);
void ftDk_ThrowFFall_Coll(HSD_GObj*);
void ftDk_ThrowFFall_IASA(HSD_GObj*);
void ftDk_ThrowFFall_Phys(HSD_GObj*);
void ftDk_ThrowFF_Anim(HSD_GObj*);
void ftDk_ThrowFF_Coll(HSD_GObj*);
void ftDk_ThrowFF_IASA(HSD_GObj*);
void ftDk_ThrowFF_Phys(HSD_GObj*);
void ftDk_ThrowFHi_Anim(HSD_GObj*);
void ftDk_ThrowFHi_Coll(HSD_GObj*);
void ftDk_ThrowFHi_IASA(HSD_GObj*);
void ftDk_ThrowFHi_Phys(HSD_GObj*);
void ftDk_ThrowF_IASA(HSD_GObj*);
void ftDk_ThrowFJump_Anim(HSD_GObj*);
void ftDk_ThrowFJump_Coll(HSD_GObj*);
void ftDk_ThrowFJump_IASA(HSD_GObj*);
void ftDk_ThrowFJump_Phys(HSD_GObj*);
void ftDk_ThrowFKneebend_Anim(HSD_GObj*);
void ftDk_ThrowFKneebend_Coll(HSD_GObj*);
void ftDk_ThrowFKneebend_IASA(HSD_GObj*);
void ftDk_ThrowFKneebend_Phys(HSD_GObj*);
void ftDk_ThrowFLanding_Anim(HSD_GObj*);
void ftDk_ThrowFLanding_Coll(HSD_GObj*);
void ftDk_ThrowFLanding_Phys(HSD_GObj*);
void ftDk_ThrowFLw_Anim(HSD_GObj*);
void ftDk_ThrowFLw_Coll(HSD_GObj*);
void ftDk_ThrowFLw_IASA(HSD_GObj*);
void ftDk_ThrowFLw_Phys(HSD_GObj*);
void ftDk_ThrowF_Phys(HSD_GObj*);
void ftDk_ThrowFTurn_Anim(HSD_GObj*);
void ftDk_ThrowFTurn_Coll(HSD_GObj*);
void ftDk_ThrowFTurn_IASA(HSD_GObj*);
void ftDk_ThrowFTurn_Phys(HSD_GObj*);
void ftDk_ThrowFWait0_Anim(HSD_GObj*);
void ftDk_ThrowFWait0_Coll(HSD_GObj*);
void ftDk_ThrowFWait0_IASA(HSD_GObj*);
void ftDk_ThrowFWait0_Phys(HSD_GObj*);
void ftDk_ThrowFWait2_Anim(HSD_GObj*);
void ftDk_ThrowFWait2_Coll(HSD_GObj*);
void ftDk_ThrowFWait2_Phys(HSD_GObj*);
void ftDk_ThrowFWalk_Anim(HSD_GObj*);
void ftDk_ThrowFWalk_Coll(HSD_GObj*);
void ftDk_ThrowFWalk_IASA(HSD_GObj*);
void ftDk_ThrowFWalk_Phys(HSD_GObj*);
unk_t mpColl_8004B4B0(void);
/* 0889F4 */ void ft_800889F4(ftCo_Fighter* fp, UNK_T);
/* 0886D8 */ void ftCo_800886D8(ftCo_Fighter* fp, UNK_T, UNK_T, UNK_T);

#endif
