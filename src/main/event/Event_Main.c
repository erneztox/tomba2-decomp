/**
 * @brief Event main: full event system controller (377L)
 * @note Original: func_80036DFC at 0x80036DFC
 */
// Event_Main



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Event_Main(u8 *param_1)

{
  s8 cVar1;
  u8 bVar2;
  s32 bVar3;
  s8 cVar4;
  u8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  s32 uVar9;
  s32 uVar10;
  int local_20;
  s16 local_1c->kind;
  u16 local_18->state;
  
  switchparam_1->flags {
  case 0:
    param_1[0x20] = 0;
    param_1->flags = param_1->flags + '\x01';
  case 1:
    bVar3 = false;
    iVar7 = Entity_CheckLoop(param_1,param_1[0x1f],param_1[0x1d]);
    if ((_g_PadState & 0xc00) == 0) {
      if ((_g_PadState & 0x4000) == 0) {
        if ((_g_PadState & 0x2000) != 0) {
          param_1->counter2 = 0;
          Entity_ResetFull(param_1);
          return;
        }
        if ((_g_PadState & 0x8000) == 0) {
          if ((_g_PadState & 0x20) == 0) {
            if ((_g_PadState & 0x80) != 0) {
              if (param_1[0x1d] != '\0') {
                param_1[0x1d] = 0;
                goto LAB_80037004;
              }
              goto LAB_80036fe8;
            }
          }
          else {
            if (param_1[0x1d] == '\x01') {
LAB_80036fe8:
              uVar9 = 0x12;
              goto LAB_80036fec;
            }
            iVar7 = Entity_CheckLoop(param_1,param_1[0x1f],1);
            uVar9 = 0x12;
            if (iVar7 < 0) goto LAB_80036fec;
            param_1[0x1d] = 1;
LAB_80037004:
            Audio_PlaySoundEffect(0x15,0,0);
            bVar3 = true;
          }
        }
        else {
          if (iVar7 == 999) {
            uVar9 = 0x14;
            goto LAB_80036fec;
          }
          param_1[0x20] = 4;
        }
LAB_8003701c:
        if ((_g_PadState & 0x200) == 0) {
          if ((_g_PadState & 0x100) == 0) {
            if ((_g_PadState & 0x40) == 0) {
              if ((_g_InputState & 0x40) == 0) {
                if ((_g_PadState & 0x10) == 0) {
                  if ((_g_InputState & 0x10) != 0) {
                    uVar8 = *(u16 *)(param_1 + 0x18) + 1;
                    *(s16 *)(param_1 + 0x18) = (s16)uVar8;
                    if (((8 < (int)(uVar8 * 0x10000) >> 0x10) && ((uVar8 & 1) != 0)) &&
                       (iVar7 = Entity_LoopCheck2(param_1,0), 0 < iVar7)) {
LAB_80037184:
                      uVar9 = 0x15;
                      uVar10 = 0;
                      goto LAB_80037188;
                    }
                  }
                }
                else {
                  *(s16 *)(param_1 + 0x18) = 0;
                  iVar7 = Entity_LoopCheck2(param_1,0);
                  if (iVar7 == 0) goto LAB_80037110;
                  if (0 < iVar7) goto LAB_80037184;
                  param_1->counter2 = 0;
                  Entity_ResetFull(param_1);
                }
              }
              else {
                uVar8 = *(u16 *)(param_1 + 0x18) + 1;
                *(s16 *)(param_1 + 0x18) = (s16)uVar8;
                if ((8 < (int)(uVar8 * 0x10000) >> 0x10) && ((uVar8 & 1) != 0)) {
                  iVar7 = Entity_LoopCheck(param_1,0);
                  uVar9 = 0x15;
                  if (iVar7 != 0) {
                    uVar10 = 0;
                    goto LAB_80037188;
                  }
                }
              }
              goto LAB_80037198;
            }
            *(s16 *)(param_1 + 0x18) = 0;
            iVar7 = Entity_LoopCheck(param_1,0);
            if (iVar7 != 0) goto LAB_80037184;
          }
          else {
            iVar7 = Entity_LoopCheck6B(param_1);
            uVar9 = 4;
            if (iVar7 != 0) {
              uVar10 = 5;
              goto LAB_80037188;
            }
          }
LAB_80037110:
          Audio_PlaySoundEffect(0x12,0,0);
        }
        else {
          iVar7 = Entity_LoopCheck6(param_1);
          uVar9 = 4;
          if (iVar7 == 0) goto LAB_80037110;
          uVar10 = 5;
LAB_80037188:
          Audio_PlaySoundEffect(uVar9,uVar10,0);
          bVar3 = true;
        }
LAB_80037198:
        param_1[0x1c] = param_1[0x1f] - param_1[0x1e];
        iVar7 = Entity_CheckLoop(param_1,param_1[0x1f],param_1[0x1d]);
        uVar5 = 5;
        if (iVar7 != 999) {
          if (!bVar3) {
            return;
          }
LAB_800376b8:
          uVar5 = (&DAT_800a2be8)[iVar7 * 0xc];
        }
code_r0x800376d0:
        param_1[0x20] = uVar5;
        return;
      }
      if (iVar7 == 999) {
        param_1->flags = 4;
        uVar9 = 0x11;
      }
      else {
        iVar6 = Event_Dispatch(param_1,iVar7,0);
        if (iVar6 == 0) {
          if (iVar7 - 0x5fU < 2) {
            param_1->flags = param_1->flags + '\x01';
            param_1[0x27] = param_1[0x27] + '\x01';
          }
          else {
            *param_1 = 2;
          }
          uVar9 = 0x11;
        }
        else {
          if (iVar6 != 1) {
            if (iVar6 != 2) {
              if (iVar6 == 3) {
                Audio_SetBank(1);
              }
              else if (iVar6 == 4) {
                uVar9 = 0x12;
                goto LAB_80036fec;
              }
              goto LAB_8003701c;
            }
            uVar9 = 0x11;
LAB_80036fec:
            Audio_PlaySoundEffect(uVar9,0,0);
            goto LAB_8003701c;
          }
          *param_1 = 2;
          uVar9 = 0x11;
        }
      }
    }
    else {
      param_1->flags = 5;
      uVar9 = 0x11;
    }
    break;
  case 2:
    if ((_g_PadState & 0x4000) == 0) {
      if ((_g_PadState & 0x2000) != 0) {
        cVar4 = param_1->flags;
        cVar1 = param_1[0x27];
        param_1[0x2d] = 0;
LAB_800374b4:
        param_1->flags = cVar4 + -1;
        param_1[0x27] = cVar1 + -1;
        Audio_SetBank(1);
        return;
      }
      if ((_g_PadState & 0x10) == 0) {
        if ((_g_InputState & 0x10) == 0) {
          if ((_g_PadState & 0x40) == 0) {
            if ((_g_InputState & 0x40) == 0) {
              return;
            }
            uVar8 = *(u16 *)(param_1 + 0x18) + 1;
            *(s16 *)(param_1 + 0x18) = (s16)uVar8;
            if ((int)(uVar8 * 0x10000) >> 0x10 < 7) {
              return;
            }
            if ((uVar8 & 1) == 0) {
              return;
            }
            if (_DAT_800d1e68 + -1 <= (int)(uint)(u8)param_1[0x2d]) {
              return;
            }
            param_1[0x2d] = param_1[0x2d] + 1;
          }
          else {
            *(s16 *)(param_1 + 0x18) = 0;
            if (_DAT_800d1e68 + -1 <= (int)(uint)(u8)param_1[0x2d]) {
              return;
            }
            param_1[0x2d] = param_1[0x2d] + 1;
          }
        }
        else {
          uVar8 = *(u16 *)(param_1 + 0x18) + 1;
          *(s16 *)(param_1 + 0x18) = (s16)uVar8;
          if ((int)(uVar8 * 0x10000) >> 0x10 < 7) {
            return;
          }
          if ((uVar8 & 1) == 0) {
            return;
          }
          if (param_1[0x2d] == '\0') {
            return;
          }
          param_1[0x2d] = param_1[0x2d] + -1;
        }
      }
      else {
        *(s16 *)(param_1 + 0x18) = 0;
        if (param_1[0x2d] == '\0') {
          return;
        }
        param_1[0x2d] = param_1[0x2d] + -1;
      }
LAB_800375c8:
      uVar9 = 0x15;
    }
    else {
      iVar7 = Game_CheckArea((int)*(s16 *)(&DAT_800d1e6a + (uint)(u8)param_1[0x2d] * 0xc));
      uVar9 = 0x12;
      if (iVar7 == 0) {
        param_1->flags = param_1->flags + '\x01';
        param_1[0x27] = param_1[0x27] + '\x01';
        Audio_PlaySoundEffect(0x11,0,0);
        return;
      }
    }
    break;
  case 3:
    if ((_g_PadState & 0x4000) == 0) {
      if ((_g_PadState & 0x2000) != 0) {
        cVar4 = param_1->flags;
        cVar1 = param_1[0x27];
        param_1[0x2e] = 0;
        goto LAB_800374b4;
      }
      if ((_g_PadState & 0x10) == 0) {
        if ((_g_InputState & 0x10) != 0) {
          uVar8 = *(u16 *)(param_1 + 0x18) + 1;
          *(s16 *)(param_1 + 0x18) = (s16)uVar8;
          if ((int)(uVar8 * 0x10000) >> 0x10 < 7) {
            return;
          }
          if ((uVar8 & 1) == 0) {
            return;
          }
          if (param_1[0x2e] == '\0') {
            return;
          }
          param_1[0x2e] = param_1[0x2e] + -1;
          goto LAB_800375c8;
        }
        if ((_g_PadState & 0x40) == 0) {
          if ((_g_InputState & 0x40) == 0) {
            return;
          }
          uVar8 = *(u16 *)(param_1 + 0x18) + 1;
          *(s16 *)(param_1 + 0x18) = (s16)uVar8;
          if ((int)(uVar8 * 0x10000) >> 0x10 < 7) {
            return;
          }
          if ((uVar8 & 1) == 0) {
            return;
          }
          bVar2 = param_1[0x2d];
        }
        else {
          bVar2 = param_1[0x2d];
          *(s16 *)(param_1 + 0x18) = 0;
        }
        cVar4 = param_1[0x2e] + 1;
        if (*(s16 *)(&DAT_800d1e6c + (uint)bVar2 * 0xc) + -1 <= (int)(uint)(u8)param_1[0x2e]) {
          return;
        }
      }
      else {
        *(s16 *)(param_1 + 0x18) = 0;
        if (param_1[0x2e] == '\0') {
          return;
        }
        cVar4 = param_1[0x2e] + -1;
      }
      param_1[0x2e] = cVar4;
      goto LAB_800375c8;
    }
    Event_TypeDispatch((int)*(s16 *)(&DAT_800d1e6a + (uint)(u8)param_1[0x2d] * 0xc),&local_20);
    iVar7 = Game_CheckUnlock(local_20 +
                         *(s16 *)((uint)(u8)param_1[0x2e] * 2 + (uint)(u8)param_1[0x2d] * 0xc
                                   + -0x7ff2e192));
    if (iVar7 == 0) {
      Event_Handler2((int)*(s16 *)(&DAT_800d1e6a + (uint)(u8)param_1[0x2d] * 0xc),
                   (int)*(s16 *)((uint)(u8)param_1[0x2e] * 2 + (uint)(u8)param_1[0x2d] * 0xc +
                                  -0x7ff2e192),local_1c,local_18);
      DAT_800bf80a = 3;
      _DAT_800bf83a = local_1c->type << 8 | local_18->type;
      DAT_800bf80b = Entity_CheckLoop(param_1,param_1[0x1f],param_1[0x1d]);
      DAT_800bf809 = 1;
      if (DAT_800bf80b == '`') {
        Inventory_RemoveItem3(0x60,1);
      }
      else if (DAT_800bf80b == '_') {
        Entity_SpawnWithBehavior(0,0);
      }
      *param_1 = 2;
      uVar9 = 0x11;
    }
    else {
      uVar9 = 0x12;
    }
    break;
  case 4:
    DAT_800bf8a0 = '\x01' - DAT_800bf8a0;
    if (DAT_800bf8a0 == '\0') {
      Menu_ClearItems(param_1);
    }
    else {
      if (DAT_800bf8a0 != '\x01') {
        param_1->flags = 1;
        return;
      }
      Event_LoadData(param_1);
    }
    param_1->flags = 1;
    return;
  case 5:
    DAT_800bf8a0 = '\x01' - DAT_800bf8a0;
    if (DAT_800bf8a0 == '\0') {
      Menu_ClearItems(param_1);
    }
    else if (DAT_800bf8a0 == '\x01') {
      Event_LoadData(param_1);
    }
    param_1->flags = 1;
    iVar7 = Entity_CheckLoop(param_1,param_1[0x1f],param_1[0x1d]);
    if (iVar7 == 999) {
      uVar5 = 5;
      goto code_r0x800376d0;
    }
    goto LAB_800376b8;
  default:
    goto switchD_80036e40_default;
  }
  Audio_PlaySoundEffect(uVar9,0,0);
switchD_80036e40_default:
  return;
}
