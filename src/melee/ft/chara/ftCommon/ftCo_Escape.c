#include <platform.h>
#include "ft/forward.h"
#include "ftCommon/forward.h"

#include "ftCo_Escape.h"

#include "ftCo_ItemThrow.h"
#include "math.h"

#include "ft/fighter.h"
#include "ft/ft_081B.h"
#include "ft/ft_0877.h"
#include "ft/ft_0D14.h"
#include "ft/ftcommon.h"
#include "ft/ftparts.h"
#include "ft/inlines.h"
#include "ftSamus/ftSs_SpecialLw_1.h"
#include "ftSamus/types.h"
#include "ftYoshi/ftYs_Guard.h"
#include "ftYoshi/ftYs_Init.h"

static inline bool inlineA0(ftCo_Fighter* fp)
{
    if (ABS(fp->input.lstick.x) >= p_ftCommonData->x31C &&
        fp->x670_timer_lstick_tilt_x < p_ftCommonData->x320)
    {
        return true;
    }
    return false;
}

static inline bool inlineA1(ftCo_Fighter* fp)
{
    if (ABS(fp->input.lstick.x) >= p_ftCommonData->x31C &&
        fp->x670_timer_lstick_tilt_x < p_ftCommonData->x320)
    {
        return true;
    }
    return false;
}

bool ftCo_8009917C(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    float stick_x;
    if (inlineA1(fp)) {
        stick_x = fp->input.lstick.x;
    } else if (ftCo_800DF8B0(fp)) {
        stick_x = fp->input.cstick.x;
    } else {
        return false;
    }
    {
        FtMotionId msid =
            stick_x * fp->facing_dir >= 0 ? ftCo_MS_EscapeF : ftCo_MS_EscapeB;
        ftCo_800992A8(gobj, msid, p_ftCommonData->x324);
    }
    return true;
}

bool ftCo_80099264(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    if (fp->input.held_inputs & HSD_PAD_LR) {
        ftCo_800992A8(gobj, ftCo_MS_EscapeF, false);
        return true;
    }
    return false;
}

void ftCo_800992A8(ftCo_GObj* gobj, FtMotionId msid, bool arg2)
{
    ftCo_Fighter* fp = gobj->user_data;
    switch (fp->kind) {
    case FTKIND_SAMUS:
        ftCo_80099390(gobj, msid, arg2);
        break;
    case FTKIND_YOSHI:
        ftCo_80099438(gobj, msid, arg2);
        break;
    default:
        ftCo_80099314(gobj, msid, arg2);
        break;
    }
    ftCommon_8007EBAC(fp, 23, 0);
}

void ftCo_80099314(ftCo_GObj* gobj, FtMotionId msid, bool arg2)
{
    ftCo_Fighter* fp = gobj->user_data;
    fp->throw_flags = 0;
    Fighter_ChangeMotionState(gobj, msid, Ft_MF_None, 0, 1, 0, NULL);
    ftAnim_8006EBA4(gobj);
    fp->x221D_b5 = true;
    fp->mv.co.escape.x0 = arg2;
}

void ftCo_80099390(ftCo_GObj* gobj, int msid, int arg2)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8] = { 0 };
#endif
    ftCo_Fighter* fp = gobj->user_data;
    fp->cmd_vars[0] = 0;
    fp->mv.co.escape.x4 = false;
    ftCo_80099314(gobj, msid, arg2);
    fp->anim_cb = ftCo_80099564;
    fp->coll_cb = ftCo_80099754;
}

void ftCo_80099438(ftCo_GObj* gobj, int msid, int arg2)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8] = { 0 };
#endif
    ftCo_Fighter* fp = gobj->user_data;
    ftCo_80099314(gobj, msid, arg2);
    ftParts_80074B0C(gobj, 0, 1);
    ftYs_Init_8012BDA0(gobj);
    fp->anim_cb = ftCo_80099644;
}

void ftCo_Escape_Anim(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    if (ftCheckThrowB3(fp)) {
        fp->facing_dir = -fp->facing_dir;
    }
    if (!ftAnim_IsFramesRemaining(gobj)) {
        fp->gr_vel = 0;
        ft_8008A2BC(gobj);
    }
}

void ftCo_80099564(ftCo_GObj* gobj)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8] = { 0 };
#endif
    ftCo_Fighter* fp = gobj->user_data;
    if (fp->cmd_vars[0] && !fp->mv.co.escape.x4) {
        ftSs_SpecialLw_8012AEBC(gobj);
        fp->mv.co.escape.x4 = true;
    }
    if (fp->cmd_vars[0] == 0 && fp->mv.co.escape.x4) {
        ftSs_SpecialLw_8012AF38(gobj);
        fp->mv.co.escape.x4 = false;
    }
    ftCo_Escape_Anim(gobj);
}

/// todo Shared code with #ftCo_Escape_Anim.
void ftCo_80099644(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    if (ftCheckThrowB3(fp)) {
        fp->facing_dir = -fp->facing_dir;
    }
    if (!ftAnim_IsFramesRemaining(gobj)) {
        fp->gr_vel = 0;
        if (ftYs_Shield_8012CC1C(gobj)) {
            return;
        }
        ftYs_Init_8012BE3C(gobj);
        ft_8008A2BC(gobj);
    }
    ftYs_Init_8012B8A4(gobj);
}

void ftCo_Escape_IASA(ftCo_GObj* gobj)
{
    RETURN_IF(ftCo_8009563C(gobj));
}

void ftCo_Escape_Phys(ftCo_GObj* gobj)
{
    ft_80085004(gobj);
}

void ftCo_Escape_Coll(ftCo_GObj* gobj)
{
    ft_80084104(gobj);
}

void ftCo_80099754(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    ftSs_DatAttrs* da = fp->dat_attrs;
    if (fp->cmd_vars[0]) {
        ft_800847D0(gobj, &da->height_attributes);
    } else {
        ft_80084104(gobj);
    }
}

static inline bool inlineB0(ftCo_Fighter* fp)
{
    if (fp->input.lstick.y <= p_ftCommonData->x314 &&
        fp->x671_timer_lstick_tilt_y < p_ftCommonData->x318)
    {
        return true;
    }
    return false;
}

bool ftCo_80099794(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    if (fp->input.held_inputs & HSD_PAD_LR && inlineB0(fp)) {
        ftCo_80099894(gobj);
        return true;
    }
    return false;
}

int ftCo_8009980C(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    if (inlineB0(fp) || ftCo_800DF8E8(fp)) {
        ftCo_80099894(gobj);
        return true;
    }
    return false;
}

void ftCo_80099894(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    switch (fp->kind) {
    case FTKIND_YOSHI:
        ftCo_80099954(gobj);
        break;
    default:
        ftCo_800998EC(gobj);
        break;
    }
    ftCommon_8007EBAC(fp, 23, 0);
}

void ftCo_800998EC(ftCo_GObj* gobj)
{
    ftCo_Fighter* fp = gobj->user_data;
    Fighter_ChangeMotionState(gobj, ftCo_MS_EscapeN, Ft_MF_None, 0, 1, 0,
                              NULL);
    ftAnim_8006EBA4(gobj);
    fp->x221D_b5 = true;
}

void ftCo_80099954(ftCo_GObj* gobj)
{
    /// @todo Unused stack.
#ifdef MUST_MATCH
    u8 _[8] = { 0 };
#endif
    ftCo_Fighter* fp = gobj->user_data;
    if (fp->x5F5 == 1) {
        ftYs_Init_8012BE3C(gobj);
    }
    ftCo_800998EC(gobj);
}

void ftCo_EscapeN_Anim(ftCo_GObj* gobj)
{
    if (!ftAnim_IsFramesRemaining(gobj)) {
        ft_8008A2BC(gobj);
    }
}

void ftCo_EscapeN_IASA(ftCo_GObj* gobj) {}

void ftCo_EscapeN_Phys(ftCo_GObj* gobj)
{
    ft_80084F3C(gobj);
}

void ftCo_EscapeN_Coll(ftCo_GObj* gobj)
{
    ft_80084104(gobj);
}
