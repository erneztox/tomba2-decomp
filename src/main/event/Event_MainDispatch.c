/**
 * @brief Event main dispatcher: switch on event type 0x66-0x6E
 * @note Original: func_80034CE0 at 0x80034CE0
 */
// Event_MainDispatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_80034ce0(s32 param_1,int param_2,int param_3)

{
  u8 bVar1;
  s32 bVar2;
  s32 uVar3;
  
  if (g_SubState != '\0') goto LAB_80034fe8;
  bVar2 = param_2 - 0x66U < 9;
  switch(param_2) {
  case 0x66:
    if (((g_EntityFlags & 8) == 0) && ((s16)(u16)g_ItemCount <= (s16)_g_FrameCounter))
    goto LAB_80034fe8;
    if (param_3 != 1) {
      FUN_8004dc84(param_2,1);
      uVar3 = 0x66;
      goto LAB_80035054;
    }
    break;
  case 0x67:
    if (((_DAT_800bf89e & 0x200) == 0) && ((s16)(u16)g_ItemCount <= (s16)_g_FrameCounter))
    goto LAB_80034fe8;
    if (param_3 != 1) {
      if ((_DAT_800bf89e & 0x200) == 0) {
        FUN_8004dc84(param_2,1);
        FUN_8004d650(param_2,1);
        return false;
      }
      DAT_800bf81d = 0x82;
      FUN_8004d604(param_2,1);
      _g_FrameCounter = (u16)g_ItemCount;
      _DAT_800e7ff0 = _g_FrameCounter;
      FUN_80072114(0,0x10);
LAB_80034d68:
      FUN_8004ed94(0x44,0x41);
    }
    break;
  case 0x68:
    if ((((g_EntityFlags & 2) == 0) && ((g_EntityFlags & 1) == 0)) &&
       ((s16)(u16)g_ItemCount <= (s16)_g_FrameCounter)) {
      if (param_3 != 1) {
        return (s32)4;
      }
      return true;
    }
    if (param_3 != 1) {
      FUN_8004dc84(param_2,1);
      uVar3 = 0x68;
LAB_80035054:
      FUN_8004d650(uVar3,1);
      return false;
    }
    break;
  case 0x69:
    bVar1 = g_EntityFlags & 8;
LAB_80034fc0:
    if (bVar1 == 0) {
LAB_80034fe8:
      if (param_3 == 1) {
        return true;
      }
      return (s32)4;
    }
  case 0x6a:
  case 0x6e:
LAB_80034fcc:
    if (param_3 != 1) {
LAB_80034fd4:
      FUN_8004dc84(param_2,1);
      return false;
    }
    break;
  case 0x6b:
    if ((g_EntityFlags & 2) == 0) {
      bVar1 = g_EntityFlags & 1;
      goto LAB_80034fc0;
    }
    goto LAB_80034fcc;
  case 0x6c:
    if ((_DAT_800bf89e & 0x200) == 0) goto LAB_80034fe8;
    if (param_3 != 1) {
      DAT_800bf81d = 0x82;
      FUN_8004ed0c(param_2,1);
      goto LAB_80034d68;
    }
    break;
  case 0x6d:
    if ((((g_ActionFlag != '\0') && (DAT_800bf84d != '\0')) || (g_GameState == '\x14')) ||
       (((g_GameState == '\x05' && ((_DAT_800bfe56 & 0x20) != 0)) && (_DAT_800bf850 < 0))))
    goto LAB_80034fe8;
    if (param_3 != 1) {
      if ((((_DAT_800bf89e & 0x200) == 0) && (g_SpriteParam4 != '\x15')) && (g_SpriteParam4 != '\0')) {
        if ((DAT_800e7eef == '\x15') || (DAT_800e7eef == '\0')) {
          DAT_800bf81d = 0;
          g_SpriteParam4 = DAT_800e7eef;
        }
        else {
          DAT_800bf81d = 2;
          g_SpriteParam4 = '\0';
        }
      }
      if (DAT_800e7eee != '\0') {
        DAT_800bf81c = 2;
      }
      if (DAT_800bfe55 != '\0') {
        DAT_800bfe55 = '\0';
        FUN_8004d6f4(0x58);
      }
      goto LAB_80034fd4;
    }
    break;
  default:
    goto switchD_80034d28_default;
  }
  bVar2 = false;
switchD_80034d28_default:
  return bVar2;
}
