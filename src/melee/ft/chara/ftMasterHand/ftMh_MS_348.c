#include "ftMh_MS_348.h"

#include "ftMh_MS_389.h"

#include "ft/ft_081B.h"
#include "ft/ftbosslib.h"

void ftMh_MS_348_Anim(HSD_GObj* gobj)
{
    if (!ftAnim_IsFramesRemaining(gobj)) {
        ftMh_MS_389_80151018(gobj);
    }
}

void ftMh_MS_348_Phys(HSD_GObj* gobj)
{
    ft_80085134(gobj);
}

void ftMh_MS_348_IASA(HSD_GObj* gobj)
{
    Fighter* fp = GET_FIGHTER(gobj);
    if (Player_GetPlayerSlotType(fp->xC_playerID) == 0) {
        ftBossLib_8015BD20(gobj);
    }
}

void ftMh_MS_348_Coll(HSD_GObj* gobj) {}

void ftMh_MS_348_80151BB8(HSD_GObj* gobj)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8];
#endif

    Fighter_ChangeMotionState(gobj, ftMh_MS_Sweep_StartMotion, 0, 0, 0, 1, 0);
    ftAnim_8006EBA4(gobj);
}