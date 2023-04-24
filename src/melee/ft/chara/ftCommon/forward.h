#ifndef MELEE_FT_CHARA_FTCOMMON_FORWARD_H
#define MELEE_FT_CHARA_FTCOMMON_FORWARD_H

#include <platform.h>
#include "ft/forward.h"

static MotionFlags const ftCo_MF_5_6 ATTRIBUTE_USED =
    Ft_MF_SkipAnimVel | Ft_MF_Unk06;
static MotionFlags const ftCo_MF_2_5_6 ATTRIBUTE_USED =
    ftCo_MF_5_6 | Ft_MF_KeepColAnimHitStatus;
static MotionFlags const ftCo_MF_Squat ATTRIBUTE_USED =
    ftCo_MF_2_5_6 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_Dash ATTRIBUTE_USED =
    ftCo_MF_Squat | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_Run ATTRIBUTE_USED =
    ftCo_MF_5_6 | Ft_MF_SkipHit;
static MotionFlags const ftCo_MF_Appeal ATTRIBUTE_USED =
    ftCo_MF_5_6 | Ft_MF_KeepFastFall | Ft_MF_SkipModel;
static MotionFlags const ftCo_MF_9_10 ATTRIBUTE_USED =
    Ft_MF_KeepSfx | Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_LandingAirN ATTRIBUTE_USED =
    ftCo_MF_9_10 | Ft_MF_KeepColAnimHitStatus | Ft_MF_SkipHit;
static MotionFlags const ftCo_MF_LandingAirF ATTRIBUTE_USED =
    ftCo_MF_LandingAirN | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_LandingAirB ATTRIBUTE_USED =
    ftCo_MF_LandingAirN | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_LandingAirHi ATTRIBUTE_USED =
    ftCo_MF_LandingAirB | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_LandingAirLw ATTRIBUTE_USED =
    ftCo_MF_9_10 | Ft_MF_SkipModel;
static MotionFlags const ftCo_MF_Turn ATTRIBUTE_USED =
    ftCo_MF_2_5_6 | Ft_MF_KeepAccessory;
static MotionFlags const ftCo_MF_Walk ATTRIBUTE_USED =
    ftCo_MF_2_5_6 | Ft_MF_KeepGfx | Ft_MF_UpdateCmd;
static MotionFlags const ftCo_MF_3_5_6 ATTRIBUTE_USED =
    ftCo_MF_5_6 | Ft_MF_SkipHit;
static MotionFlags const ftCo_MF_Jump ATTRIBUTE_USED =
    ftCo_MF_3_5_6 | Ft_MF_KeepFastFall | Ft_MF_SkipNametagVis;
static MotionFlags const ftCo_MF_JumpAir ATTRIBUTE_USED =
    ftCo_MF_3_5_6 | Ft_MF_KeepGfx | Ft_MF_KeepColAnimPartHitStatus;
static MotionFlags const ftCo_MF_GuardReflect ATTRIBUTE_USED =
    ftCo_MF_5_6 | Ft_MF_KeepFastFall | Ft_MF_KeepGfx | Ft_MF_SkipModel |
    Ft_MF_SkipColAnim | Ft_MF_UnkUpdatePhys;
static MotionFlags const ftCo_MF_Guard ATTRIBUTE_USED =
    Ft_MF_Unk19 | Ft_MF_UnkUpdatePhys;
static MotionFlags const ftCo_MF_AttackBase ATTRIBUTE_USED =
    Ft_MF_KeepSfx | Ft_MF_SkipItemVis;
static MotionFlags const ftCo_MF_Attack ATTRIBUTE_USED =
    ftCo_MF_AttackBase | Ft_MF_FreezeState;
static MotionFlags const ftCo_MF_Attack_2 ATTRIBUTE_USED =
    ftCo_MF_Attack | Ft_MF_KeepColAnimHitStatus;
static MotionFlags const ftCo_MF_AttackDash ATTRIBUTE_USED =
    ftCo_MF_Attack_2 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_AttackS3 ATTRIBUTE_USED =
    ftCo_MF_Attack_2 | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_AttackHi3 ATTRIBUTE_USED =
    ftCo_MF_AttackS3 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_AttackLw3 ATTRIBUTE_USED =
    ftCo_MF_Attack | Ft_MF_SkipHit;
static MotionFlags const ftCo_MF_CliffAttackQuick ATTRIBUTE_USED =
    ftCo_MF_AttackLw3 | Ft_MF_KeepFastFall | Ft_MF_KeepGfx |
    Ft_MF_KeepColAnimHitStatus | Ft_MF_SkipModel | Ft_MF_SkipAnimVel;
static MotionFlags const ftCo_MF_AttackAir ATTRIBUTE_USED =
    ftCo_MF_Attack | Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_AttackAirN ATTRIBUTE_USED =
    ftCo_MF_AttackAir | Ft_MF_KeepColAnimHitStatus | Ft_MF_SkipHit |
    Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_AttackAirF ATTRIBUTE_USED =
    ftCo_MF_AttackAirN | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_AttackAirB ATTRIBUTE_USED =
    ftCo_MF_AttackAirN | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_AttackAirHi ATTRIBUTE_USED =
    ftCo_MF_AttackAirF | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_AttackAirLw ATTRIBUTE_USED =
    ftCo_MF_AttackAir | Ft_MF_SkipModel;
static MotionFlags const ftCo_MF_Attack4 ATTRIBUTE_USED =
    ftCo_MF_AttackLw3 | Ft_MF_SkipRumble;
static MotionFlags const ftCo_MF_AttackS4 ATTRIBUTE_USED =
    ftCo_MF_Attack4 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_AttackHi4 ATTRIBUTE_USED =
    ftCo_MF_Attack4 | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_AttackLw4 ATTRIBUTE_USED =
    ftCo_MF_Attack4 | Ft_MF_KeepFastFall | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_Attack1 ATTRIBUTE_USED =
    ftCo_MF_Attack | Ft_MF_Unk19;
static MotionFlags const ftCo_MF_Attack11 ATTRIBUTE_USED =
    ftCo_MF_Attack1 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_Attack12 ATTRIBUTE_USED =
    ftCo_MF_Attack1 | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_Attack13 ATTRIBUTE_USED =
    ftCo_MF_Attack12 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_Attack100 ATTRIBUTE_USED =
    ftCo_MF_Attack1 | Ft_MF_KeepColAnimHitStatus;
static MotionFlags const ftCo_MF_ItemScope ATTRIBUTE_USED =
    Ft_MF_SkipItemVis | Ft_MF_SkipModelPartVis;
static MotionFlags const ftCo_MF_SwordSwing1 ATTRIBUTE_USED =
    ftCo_MF_ItemScope | Ft_MF_Unk06;
static MotionFlags const ftCo_MF_SwordSwing3 ATTRIBUTE_USED =
    ftCo_MF_SwordSwing1 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_SwordSwingDash ATTRIBUTE_USED =
    ftCo_MF_SwordSwing3 | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_BatSwing1 ATTRIBUTE_USED =
    ftCo_MF_SwordSwing1 | Ft_MF_KeepColAnimHitStatus;
static MotionFlags const ftCo_MF_BatSwing3 ATTRIBUTE_USED =
    ftCo_MF_BatSwing1 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_BatSwingDash ATTRIBUTE_USED =
    ftCo_MF_BatSwing3 | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_ParasolSwing1 ATTRIBUTE_USED =
    ftCo_MF_SwordSwing1 | Ft_MF_SkipHit;
static MotionFlags const ftCo_MF_ParasolSwing3 ATTRIBUTE_USED =
    ftCo_MF_ParasolSwing1 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_ParasolSwingDash ATTRIBUTE_USED =
    ftCo_MF_ParasolSwing3 | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_HarisenSwing1 ATTRIBUTE_USED =
    ftCo_MF_BatSwing1 | Ft_MF_SkipHit;
static MotionFlags const ftCo_MF_HarisenSwing3 ATTRIBUTE_USED =
    ftCo_MF_HarisenSwing1 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_HarisenSwingDash ATTRIBUTE_USED =
    ftCo_MF_HarisenSwing3 | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_StarRodSwing1 ATTRIBUTE_USED =
    ftCo_MF_SwordSwing1 | Ft_MF_SkipModel;
static MotionFlags const ftCo_MF_StarRodSwing3 ATTRIBUTE_USED =
    ftCo_MF_StarRodSwing1 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_StarRodSwingDash ATTRIBUTE_USED =
    ftCo_MF_StarRodSwing3 | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_LipstickSwing1 ATTRIBUTE_USED =
    ftCo_MF_StarRodSwing1 | Ft_MF_KeepColAnimHitStatus;
static MotionFlags const ftCo_MF_LipstickSwing3 ATTRIBUTE_USED =
    ftCo_MF_LipstickSwing1 | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_LipstickSwingDash ATTRIBUTE_USED =
    ftCo_MF_LipstickSwing3 | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_ParasolOpen ATTRIBUTE_USED =
    ftCo_MF_ParasolSwing1 | Ft_MF_SkipModel;
static MotionFlags const ftCo_MF_HammerBase ATTRIBUTE_USED =
    ftCo_MF_LipstickSwing1 | Ft_MF_SkipHit;
static MotionFlags const ftCo_MF_Hammer ATTRIBUTE_USED =
    ftCo_MF_HammerBase | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_WarpStarFall ATTRIBUTE_USED =
    ftCo_MF_Hammer | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_ItemScope_5_6 ATTRIBUTE_USED =
    ftCo_MF_5_6 | ftCo_MF_ItemScope;
static MotionFlags const ftCo_MF_ItemThrow ATTRIBUTE_USED =
    ftCo_MF_ItemScope_5_6 | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_LGunShoot ATTRIBUTE_USED =
    ftCo_MF_ItemScope | Ft_MF_KeepFastFall | Ft_MF_SkipHit | Ft_MF_SkipModel |
    Ft_MF_Unk06 | Ft_MF_SkipThrowException;
static MotionFlags const ftCo_MF_ItemScopeFire ATTRIBUTE_USED =
    ftCo_MF_LGunShoot | Ft_MF_KeepColAnimHitStatus;
static MotionFlags const ftCo_MF_HammerFall ATTRIBUTE_USED =
    ftCo_MF_Hammer | Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_ItemThrowAir ATTRIBUTE_USED =
    ftCo_MF_ItemThrow | Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_LGunShootAir ATTRIBUTE_USED =
    ftCo_MF_LGunShoot | Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_ItemScopeAir ATTRIBUTE_USED =
    ftCo_MF_HammerBase | Ft_MF_KeepFastFall | Ft_MF_SkipThrowException |
    Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_Swing4 ATTRIBUTE_USED =
    Ft_MF_KeepGfx | Ft_MF_SkipRumble;
static MotionFlags const ftCo_MF_SwordSwing4 ATTRIBUTE_USED =
    ftCo_MF_SwordSwing1 | ftCo_MF_Swing4;
static MotionFlags const ftCo_MF_BatSwing4 ATTRIBUTE_USED =
    ftCo_MF_BatSwing1 | ftCo_MF_Swing4;
static MotionFlags const ftCo_MF_ParasolSwing4 ATTRIBUTE_USED =
    ftCo_MF_ParasolSwing1 | ftCo_MF_Swing4;
static MotionFlags const ftCo_MF_HarisenSwing4 ATTRIBUTE_USED =
    ftCo_MF_HarisenSwing1 | ftCo_MF_Swing4;
static MotionFlags const ftCo_MF_StarRodSwing4 ATTRIBUTE_USED =
    ftCo_MF_StarRodSwing1 | ftCo_MF_Swing4;
static MotionFlags const ftCo_MF_LipstickSwing4 ATTRIBUTE_USED =
    ftCo_MF_LipstickSwing1 | ftCo_MF_Swing4;
static MotionFlags const ftCo_MF_ItemThrow4 ATTRIBUTE_USED =
    ftCo_MF_ItemScope_5_6 | ftCo_MF_Swing4;
static MotionFlags const ftCo_MF_ItemThrowAir4 ATTRIBUTE_USED =
    ftCo_MF_ItemThrow4 | Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_HammerMove ATTRIBUTE_USED =
    ftCo_MF_HammerBase | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_HammerTurn ATTRIBUTE_USED =
    ftCo_MF_HammerMove | Ft_MF_KeepAccessory;
static MotionFlags const ftCo_MF_HammerWalk ATTRIBUTE_USED =
    ftCo_MF_HammerMove | Ft_MF_UpdateCmd;
static MotionFlags const ftCo_MF_ItemFall ATTRIBUTE_USED =
    Ft_MF_SkipHit | Ft_MF_SkipModel | Ft_MF_Unk06 | Ft_MF_SkipModelPartVis;
static MotionFlags const ftCo_MF_ItemScrewBase ATTRIBUTE_USED =
    ftCo_MF_AttackBase | ftCo_MF_ItemFall | Ft_MF_KeepFastFall | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_ItemScrew ATTRIBUTE_USED =
    ftCo_MF_ItemScrewBase | Ft_MF_SkipNametagVis;
static MotionFlags const ftCo_MF_HammerJump ATTRIBUTE_USED =
    ftCo_MF_HammerMove | Ft_MF_SkipParasol | Ft_MF_SkipNametagVis;
static MotionFlags const ftCo_MF_ItemScrewAir ATTRIBUTE_USED =
    ftCo_MF_ItemScrewBase | Ft_MF_SkipParasol | Ft_MF_KeepColAnimPartHitStatus;
static MotionFlags const ftCo_MF_LiftWait ATTRIBUTE_USED =
    Ft_MF_Unk19 | Ft_MF_SkipModelPartVis;
static MotionFlags const ftCo_MF_LiftMove ATTRIBUTE_USED =
    ftCo_MF_LiftWait | Ft_MF_KeepColAnimHitStatus | Ft_MF_SkipAnimVel |
    Ft_MF_Unk06;
static MotionFlags const ftCo_MF_LiftTurn ATTRIBUTE_USED =
    ftCo_MF_LiftMove | Ft_MF_KeepAccessory;
static MotionFlags const ftCo_MF_LiftWalk ATTRIBUTE_USED =
    ftCo_MF_LiftMove | Ft_MF_KeepGfx | Ft_MF_UpdateCmd;
static MotionFlags const ftCo_MF_ParasolFall ATTRIBUTE_USED =
    ftCo_MF_ItemFall | Ft_MF_SkipItemVis | Ft_MF_Unk19;
static MotionFlags const ftCo_MF_FireFlowerShoot ATTRIBUTE_USED =
    ftCo_MF_ParasolFall | Ft_MF_KeepGfx | Ft_MF_SkipThrowException;
static MotionFlags const ftCo_MF_ItemScopeRapid ATTRIBUTE_USED =
    ftCo_MF_ParasolFall | Ft_MF_KeepColAnimHitStatus |
    Ft_MF_SkipThrowException | Ft_MF_Unk19;
static MotionFlags const ftCo_MF_FireFlowerShootAir ATTRIBUTE_USED =
    ftCo_MF_FireFlowerShoot | Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_ItemScopeAirRapid ATTRIBUTE_USED =
    ftCo_MF_ItemScopeRapid | Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_Dazed ATTRIBUTE_USED =
    Ft_MF_UnkUpdatePhys | Ft_MF_SkipModelPartVis;
static MotionFlags const ftCo_MF_Damage ATTRIBUTE_USED =
    ftCo_MF_Dazed | Ft_MF_KeepSwordTrail;
static MotionFlags const ftCo_MF_DamageScrew ATTRIBUTE_USED =
    ftCo_MF_Damage | Ft_MF_SkipNametagVis;
static MotionFlags const ftCo_MF_DamageScrewAir ATTRIBUTE_USED =
    ftCo_MF_Damage | Ft_MF_KeepColAnimPartHitStatus;
static MotionFlags const ftCo_MF_Down ATTRIBUTE_USED =
    Ft_MF_SkipHit | Ft_MF_SkipAnimVel | Ft_MF_Unk06 | Ft_MF_FreezeState |
    Ft_MF_SkipModelPartVis;
static MotionFlags const ftCo_MF_DownU ATTRIBUTE_USED =
    ftCo_MF_Down | Ft_MF_KeepColAnimHitStatus;
static MotionFlags const ftCo_MF_DownD ATTRIBUTE_USED =
    ftCo_MF_DownU | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_DownDamageU ATTRIBUTE_USED =
    ftCo_MF_DownU | Ft_MF_KeepSwordTrail;
static MotionFlags const ftCo_MF_DownDamageD ATTRIBUTE_USED =
    ftCo_MF_DownD | Ft_MF_KeepSwordTrail;
static MotionFlags const ftCo_MF_DownAttack ATTRIBUTE_USED =
    ftCo_MF_Attack | Ft_MF_SkipModel | Ft_MF_SkipAnimVel |
    Ft_MF_SkipModelPartVis;
static MotionFlags const ftCo_MF_DownAttackU ATTRIBUTE_USED =
    ftCo_MF_DownAttack | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_DownAttackD ATTRIBUTE_USED =
    ftCo_MF_DownAttack | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_PassiveWall ATTRIBUTE_USED =
    ftCo_MF_Dazed | Ft_MF_FreezeState;
static MotionFlags const ftCo_MF_Passive ATTRIBUTE_USED =
    ftCo_MF_Down | Ft_MF_KeepGfx | Ft_MF_KeepColAnimHitStatus |
    Ft_MF_UnkUpdatePhys;
static MotionFlags const ftCo_MF_StopWall ATTRIBUTE_USED =
    Ft_MF_KeepFastFall | Ft_MF_KeepGfx | Ft_MF_SkipHit | Ft_MF_SkipAnimVel |
    Ft_MF_Unk06 | Ft_MF_SkipMetalB;
static MotionFlags const ftCo_MF_Pass ATTRIBUTE_USED =
    ftCo_MF_StopWall | Ft_MF_KeepColAnimHitStatus;
static MotionFlags const ftCo_MF_OttottoWait ATTRIBUTE_USED =
    Ft_MF_Unk19 | Ft_MF_SkipMetalB;
static MotionFlags const ftCo_MF_CliffAction ATTRIBUTE_USED =
    Ft_MF_UnkUpdatePhys | Ft_MF_SkipMetalB;
static MotionFlags const ftCo_MF_CliffAction_4_5 ATTRIBUTE_USED =
    ftCo_MF_CliffAction | Ft_MF_SkipModel | Ft_MF_SkipAnimVel;
static MotionFlags const ftCo_MF_CliffCatch ATTRIBUTE_USED =
    ftCo_MF_CliffAction_4_5 | Ft_MF_Unk06;
static MotionFlags const ftCo_MF_CliffAttackSlow ATTRIBUTE_USED =
    ftCo_MF_AttackBase | ftCo_MF_CliffAction_4_5 | Ft_MF_KeepGfx |
    Ft_MF_KeepColAnimHitStatus | Ft_MF_SkipHit;
static MotionFlags const ftCo_MF_CliffWait ATTRIBUTE_USED =
    ftCo_MF_CliffAction | Ft_MF_Unk19;
static MotionFlags const ftCo_MF_CatchWait ATTRIBUTE_USED =
    Ft_MF_FreezeState | Ft_MF_SkipMetalB;
static MotionFlags const ftCo_MF_CatchBase ATTRIBUTE_USED =
    ftCo_MF_CatchWait | Ft_MF_SkipModel | Ft_MF_SkipAnimVel;
static MotionFlags const ftCo_MF_Catch ATTRIBUTE_USED =
    ftCo_MF_CatchBase | Ft_MF_KeepFastFall | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_Throw ATTRIBUTE_USED =
    ftCo_MF_CatchBase | Ft_MF_SkipItemVis;
static MotionFlags const ftCo_MF_CatchAttack ATTRIBUTE_USED =
    ftCo_MF_Throw | Ft_MF_KeepColAnimHitStatus;
static MotionFlags const ftCo_MF_ThrowF ATTRIBUTE_USED =
    ftCo_MF_CatchAttack | Ft_MF_KeepFastFall;
static MotionFlags const ftCo_MF_ThrowB ATTRIBUTE_USED =
    ftCo_MF_CatchAttack | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_ThrowHi ATTRIBUTE_USED =
    ftCo_MF_ThrowF | Ft_MF_KeepGfx;
static MotionFlags const ftCo_MF_ThrowLw ATTRIBUTE_USED =
    ftCo_MF_Throw | Ft_MF_SkipHit;
static MotionFlags const ftCo_MF_Capture ATTRIBUTE_USED =
    ftCo_MF_CatchWait | Ft_MF_UnkUpdatePhys;
static MotionFlags const ftCo_MF_CaptureAir ATTRIBUTE_USED =
    ftCo_MF_Capture | Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_Thrown ATTRIBUTE_USED =
    ftCo_MF_Capture | Ft_MF_KeepSwordTrail;
static MotionFlags const ftCo_MF_ThrownAir ATTRIBUTE_USED =
    ftCo_MF_Thrown | Ft_MF_SkipParasol;
static MotionFlags const ftCo_MF_Shouldered ATTRIBUTE_USED =
    ftCo_MF_Capture | Ft_MF_Unk19;
static MotionFlags const ftCo_MF_Rebirth ATTRIBUTE_USED =
    Ft_MF_SkipModelPartVis | Ft_MF_SkipMetalB;
static MotionFlags const ftCo_MF_ThrownStar ATTRIBUTE_USED =
    ftCo_MF_Rebirth | Ft_MF_KeepSwordTrail;
static MotionFlags const ftCo_MF_Dead ATTRIBUTE_USED =
    ftCo_MF_Dazed | Ft_MF_SkipMetalB;
static MotionFlags const ftCo_MF_Sleep ATTRIBUTE_USED =
    ftCo_MF_Dead | Ft_MF_KeepSwordTrail;
static MotionFlags const ftCo_MF_Special ATTRIBUTE_USED =
    Ft_MF_SkipModel | Ft_MF_SkipItemVis | Ft_MF_UnkUpdatePhys |
    Ft_MF_FreezeState;

typedef enum ftCommon_MotionState {
    ftCo_MS_None = -1,
    ftCo_MS_DeadDown,
    ftCo_MS_DeadLeft,
    ftCo_MS_DeadRight,
    ftCo_MS_DeadUp,
    ftCo_MS_DeadUpStar,
    ftCo_MS_DeadUpStarIce,
    ftCo_MS_DeadUpFall,
    ftCo_MS_DeadUpFallHitCamera,
    ftCo_MS_DeadUpFallHitCameraFlat,
    ftCo_MS_DeadUpFallIce,
    ftCo_MS_DeadUpFallHitCameraIce,
    ftCo_MS_Sleep,
    ftCo_MS_Rebirth,
    ftCo_MS_RebirthWait,
    ftCo_MS_Wait,
    ftCo_MS_WalkSlow,
    ftCo_MS_WalkMiddle,
    ftCo_MS_WalkFast,
    ftCo_MS_Turn,
    ftCo_MS_TurnRun,
    ftCo_MS_Dash,
    ftCo_MS_Run,
    ftCo_MS_RunDirect,
    ftCo_MS_RunBrake,
    ftCo_MS_KneeBend,
    ftCo_MS_JumpF,
    ftCo_MS_JumpB,
    ftCo_MS_JumpAerialF,
    ftCo_MS_JumpAerialB,
    ftCo_MS_Fall,
    ftCo_MS_FallF,
    ftCo_MS_FallB,
    ftCo_MS_FallAerial,
    ftCo_MS_FallAerialF,
    ftCo_MS_FallAerialB,
    ftCo_MS_FallSpecial,
    ftCo_MS_FallSpecialF,
    ftCo_MS_FallSpecialB,
    ftCo_MS_DamageFall,
    ftCo_MS_Squat,
    ftCo_MS_SquatWait,
    ftCo_MS_SquatRv,
    ftCo_MS_Landing,
    ftCo_MS_LandingFallSpecial,
    ftCo_MS_Attack11,
    ftCo_MS_Attack12,
    ftCo_MS_Attack13,
    ftCo_MS_Attack100Start,
    ftCo_MS_Attack100Loop,
    ftCo_MS_Attack100End,
    ftCo_MS_AttackDash,
    ftCo_MS_AttackS3Hi,
    ftCo_MS_AttackS3HiS,
    ftCo_MS_AttackS3S,
    ftCo_MS_AttackS3LwS,
    ftCo_MS_AttackS3Lw,
    ftCo_MS_AttackHi3,
    ftCo_MS_AttackLw3,
    ftCo_MS_AttackS4Hi,
    ftCo_MS_AttackS4HiS,
    ftCo_MS_AttackS4S,
    ftCo_MS_AttackS4LwS,
    ftCo_MS_AttackS4Lw,
    ftCo_MS_AttackHi4,
    ftCo_MS_AttackLw4,
    ftCo_MS_AttackAirN,
    ftCo_MS_AttackAirF,
    ftCo_MS_AttackAirB,
    ftCo_MS_AttackAirHi,
    ftCo_MS_AttackAirLw,
    ftCo_MS_LandingAirN,
    ftCo_MS_LandingAirF,
    ftCo_MS_LandingAirB,
    ftCo_MS_LandingAirHi,
    ftCo_MS_LandingAirLw,
    ftCo_MS_DamageHi1,
    ftCo_MS_DamageHi2,
    ftCo_MS_DamageHi3,
    ftCo_MS_DamageN1,
    ftCo_MS_DamageN2,
    ftCo_MS_DamageN3,
    ftCo_MS_DamageLw1,
    ftCo_MS_DamageLw2,
    ftCo_MS_DamageLw3,
    ftCo_MS_DamageAir1,
    ftCo_MS_DamageAir2,
    ftCo_MS_DamageAir3,
    ftCo_MS_DamageFlyHi,
    ftCo_MS_DamageFlyN,
    ftCo_MS_DamageFlyLw,
    ftCo_MS_DamageFlyTop,
    ftCo_MS_DamageFlyRoll,
    ftCo_MS_LightGet,
    ftCo_MS_HeavyGet,
    ftCo_MS_LightThrowF,
    ftCo_MS_LightThrowB,
    ftCo_MS_LightThrowHi,
    ftCo_MS_LightThrowLw,
    ftCo_MS_LightThrowDash,
    ftCo_MS_LightThrowDrop,
    ftCo_MS_LightThrowAirF,
    ftCo_MS_LightThrowAirB,
    ftCo_MS_LightThrowAirHi,
    ftCo_MS_LightThrowAirLw,
    ftCo_MS_HeavyThrowF,
    ftCo_MS_HeavyThrowB,
    ftCo_MS_HeavyThrowHi,
    ftCo_MS_HeavyThrowLw,
    ftCo_MS_LightThrowF4,
    ftCo_MS_LightThrowB4,
    ftCo_MS_LightThrowHi4,
    ftCo_MS_LightThrowLw4,
    ftCo_MS_LightThrowAirF4,
    ftCo_MS_LightThrowAirB4,
    ftCo_MS_LightThrowAirHi4,
    ftCo_MS_LightThrowAirLw4,
    ftCo_MS_HeavyThrowF4,
    ftCo_MS_HeavyThrowB4,
    ftCo_MS_HeavyThrowHi4,
    ftCo_MS_HeavyThrowLw4,
    ftCo_MS_SwordSwing1,
    ftCo_MS_SwordSwing3,
    ftCo_MS_SwordSwing4,
    ftCo_MS_SwordSwingDash,
    ftCo_MS_BatSwing1,
    ftCo_MS_BatSwing3,
    ftCo_MS_BatSwing4,
    ftCo_MS_BatSwingDash,
    ftCo_MS_ParasolSwing1,
    ftCo_MS_ParasolSwing3,
    ftCo_MS_ParasolSwing4,
    ftCo_MS_ParasolSwingDash,
    ftCo_MS_HarisenSwing1,
    ftCo_MS_HarisenSwing3,
    ftCo_MS_HarisenSwing4,
    ftCo_MS_HarisenSwingDash,
    ftCo_MS_StarRodSwing1,
    ftCo_MS_StarRodSwing3,
    ftCo_MS_StarRodSwing4,
    ftCo_MS_StarRodSwingDash,
    ftCo_MS_LipstickSwing1,
    ftCo_MS_LipstickSwing3,
    ftCo_MS_LipstickSwing4,
    ftCo_MS_LipstickSwingDash,
    ftCo_MS_ItemParasolOpen,
    ftCo_MS_ItemParasolFall,
    ftCo_MS_ItemParasolFallSpecial,
    ftCo_MS_ItemParasolDamageFall,
    ftCo_MS_LGunShoot,
    ftCo_MS_LGunShootAir,
    ftCo_MS_LGunShootEmpty,
    ftCo_MS_LGunShootAirEmpty,
    ftCo_MS_FireFlowerShoot,
    ftCo_MS_FireFlowerShootAir,
    ftCo_MS_ItemScrew,
    ftCo_MS_ItemScrewAir,
    ftCo_MS_DamageScrew,
    ftCo_MS_DamageScrewAir,
    ftCo_MS_ItemScopeStart,
    ftCo_MS_ItemScopeRapid,
    ftCo_MS_ItemScopeFire,
    ftCo_MS_ItemScopeEnd,
    ftCo_MS_ItemScopeAirStart,
    ftCo_MS_ItemScopeAirRapid,
    ftCo_MS_ItemScopeAirFire,
    ftCo_MS_ItemScopeAirEnd,
    ftCo_MS_ItemScopeStartEmpty,
    ftCo_MS_ItemScopeRapidEmpty,
    ftCo_MS_ItemScopeFireEmpty,
    ftCo_MS_ItemScopeEndEmpty,
    ftCo_MS_ItemScopeAirStartEmpty,
    ftCo_MS_ItemScopeAirRapidEmpty,
    ftCo_MS_ItemScopeAirFireEmpty,
    ftCo_MS_ItemScopeAirEndEmpty,
    ftCo_MS_LiftWait,
    ftCo_MS_LiftWalk1,
    ftCo_MS_LiftWalk2,
    ftCo_MS_LiftTurn,
    ftCo_MS_GuardOn,
    ftCo_MS_Guard,
    ftCo_MS_GuardOff,
    ftCo_MS_GuardSetOff,
    ftCo_MS_GuardReflect,
    ftCo_MS_DownBoundU,
    ftCo_MS_DownWaitU,
    ftCo_MS_DownDamageU,
    ftCo_MS_DownStandU,
    ftCo_MS_DownAttackU,
    ftCo_MS_DownFowardU,
    ftCo_MS_DownbackU,
    ftCo_MS_DownSpotU,
    ftCo_MS_DownBoundD,
    ftCo_MS_DownWaitD,
    ftCo_MS_DownDamageD,
    ftCo_MS_DownStandD,
    ftCo_MS_DownAttackD,
    ftCo_MS_DownFowardD,
    ftCo_MS_DownBackD,
    ftCo_MS_DownSpotD,
    ftCo_MS_Passive,
    ftCo_MS_PassiveStandF,
    ftCo_MS_PassiveStandB,
    ftCo_MS_PassiveWall,
    ftCo_MS_PassiveWallJump,
    ftCo_MS_PassiveCeil,
    ftCo_MS_ShieldBreakFly,
    ftCo_MS_ShieldBreakFall,
    ftCo_MS_ShieldBreakDownU,
    ftCo_MS_ShieldBreakDownD,
    ftCo_MS_ShieldBreakStandU,
    ftCo_MS_ShieldBreakStandD,
    ftCo_MS_Furafura,
    ftCo_MS_Catch,
    ftCo_MS_CatchPull,
    ftCo_MS_CatchDash,
    ftCo_MS_CatchDashPull,
    ftCo_MS_CatchWait,
    ftCo_MS_CatchAttack,
    ftCo_MS_CatchCut,
    ftCo_MS_ThrowF,
    ftCo_MS_ThrowB,
    ftCo_MS_ThrowHi,
    ftCo_MS_ThrowLw,
    ftCo_MS_CapturePulledHi,
    ftCo_MS_CaptureWaitHi,
    ftCo_MS_CaptureDamageHi,
    ftCo_MS_CapturePulledLw,
    ftCo_MS_CaptureWaitLw,
    ftCo_MS_CaptureDamageLw,
    ftCo_MS_CaptureCut,
    ftCo_MS_CaptureJump,
    ftCo_MS_CaptureNeck,
    ftCo_MS_CaptureFoot,
    ftCo_MS_EscapeF,
    ftCo_MS_EscapeB,
    ftCo_MS_Escape,
    ftCo_MS_EscapeAir,
    ftCo_MS_ReboundStop,
    ftCo_MS_Rebound,
    ftCo_MS_ThrownF,
    ftCo_MS_ThrownB,
    ftCo_MS_ThrownHi,
    ftCo_MS_ThrownLw,
    ftCo_MS_ThrownlwWomen,
    ftCo_MS_Pass,
    ftCo_MS_Ottotto,
    ftCo_MS_OttottoWait,
    ftCo_MS_FlyReflectWall,
    ftCo_MS_FlyReflectCeil,
    ftCo_MS_StopWall,
    ftCo_MS_StopCeil,
    ftCo_MS_MissFoot,
    ftCo_MS_CliffCatch,
    ftCo_MS_CliffWait,
    ftCo_MS_CliffClimbSlow,
    ftCo_MS_CliffClimbQuick,
    ftCo_MS_CliffAttackSlow,
    ftCo_MS_CliffAttackQuick,
    ftCo_MS_CliffEscapeSlow,
    ftCo_MS_CliffEscapeQuick,
    ftCo_MS_CliffJumpSlow1,
    ftCo_MS_CliffJumpSlow2,
    ftCo_MS_CliffJumpQuick1,
    ftCo_MS_CliffJumpQuick2,
    ftCo_MS_AppealR,
    ftCo_MS_AppealL,
    ftCo_MS_ShoulderedWait,
    ftCo_MS_ShoulderedWalkSlow,
    ftCo_MS_ShoulderedWalkMiddle,
    ftCo_MS_ShoulderedWalkFast,
    ftCo_MS_ShoulderedTurn,
    ftCo_MS_ThrownFF,
    ftCo_MS_ThrownFB,
    ftCo_MS_ThrownFHi,
    ftCo_MS_ThrownFLw,
    ftCo_MS_CaptureCaptain,
    ftCo_MS_CaptureYoshi,
    ftCo_MS_YoshiEgg,
    ftCo_MS_CaptureKoopa,
    ftCo_MS_CaptureDamageKoopa,
    ftCo_MS_CaptureWaitKoopa,
    ftCo_MS_ThrownKoopaF,
    ftCo_MS_ThrownKoopaB,
    ftCo_MS_CaptureKoopaAir,
    ftCo_MS_CaptureDamageKoopaAir,
    ftCo_MS_CaptureWaitKoopaAir,
    ftCo_MS_ThrownKoopaAirF,
    ftCo_MS_ThrownKoopaAirB,
    ftCo_MS_CaptureKirby,
    ftCo_MS_CaptureWaitKirby,
    ftCo_MS_ThrownKirbyStar,
    ftCo_MS_ThrownCopyStar,
    ftCo_MS_ThrownKirby,
    ftCo_MS_BarrelWait,
    ftCo_MS_Bury,
    ftCo_MS_BuryWait,
    ftCo_MS_BuryJump,
    ftCo_MS_DamageSong,
    ftCo_MS_DamageSongWait,
    ftCo_MS_DamageSongRv,
    ftCo_MS_DamageBind,
    ftCo_MS_CaptureMewtwo,
    ftCo_MS_CaptureMewtwoAir,
    ftCo_MS_ThrownMewtwo,
    ftCo_MS_ThrownMewtwoAir,
    ftCo_MS_WarpStarJump,
    ftCo_MS_WarpStarFall,
    ftCo_MS_HammerWait,
    ftCo_MS_HammerWalk,
    ftCo_MS_HammerTurn,
    ftCo_MS_HammerKneeBend,
    ftCo_MS_HammerFall,
    ftCo_MS_HammerJump,
    ftCo_MS_HammerLanding,
    ftCo_MS_KinokoGiantStart,
    ftCo_MS_KinokoGiantStartAir,
    ftCo_MS_KinokoGiantEnd,
    ftCo_MS_KinokoGiantEndAir,
    ftCo_MS_KinokoSmallStart,
    ftCo_MS_KinokoSmallStartAir,
    ftCo_MS_KinokoSmallEnd,
    ftCo_MS_KinokoSmallEndAir,
    ftCo_MS_Entry,
    ftCo_MS_EntryStart,
    ftCo_MS_EntryEnd,
    ftCo_MS_DamageIce,
    ftCo_MS_DamageIceJump,
    ftCo_MS_CaptureMasterHand,
    ftCo_MS_CaptureDamageMasterHand,
    ftCo_MS_CaptureWaitMasterHand,
    ftCo_MS_ThrownMasterHand,
    ftCo_MS_CaptureKirbyYoshi,
    ftCo_MS_KirbyYoshiEgg,
    ftCo_MS_CaptureLeadead,
    ftCo_MS_CaptureLikelike,
    ftCo_MS_DownReflect,
    ftCo_MS_CaptureCrazyHand,
    ftCo_MS_CaptureDamageCrazyHand,
    ftCo_MS_CaptureWaitCrazyHand,
    ftCo_MS_ThrownCrazyHand,
    ftCo_MS_Barrel,
    ftCo_MS_Count
} ftCommon_MotionState;

#endif