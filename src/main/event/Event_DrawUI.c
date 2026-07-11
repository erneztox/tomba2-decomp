/**
 * @brief Event UI drawer: checks DAT_800bf81a/b, draws UI elements
 * @note Original: func_80034338 at 0x80034338
 */
// Event_DrawUI



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80034338(s32 param_1)

{
  s32 bVar1;
  s32 bVar2;
  
  bVar1 = DAT_800bf81a != '\0';
  if (bVar1) {
    FUN_8004eddc(DAT_800e7eec,g_SpriteParam1);
  }
  bVar2 = DAT_800bf81b != '\0';
  if (bVar2) {
    FUN_8004eddc(DAT_800e7eed + 10,g_SpriteParam2 + 10);
    FUN_80067da8(&g_CollisionEntity);
  }
  bVar2 = bVar2 || bVar1;
  if (DAT_800bf81d == '\x01') {
    if (DAT_800e7eef == '\0') {
      bVar2 = true;
      FUN_8004d6d4(g_SpriteParam4);
    }
    else {
      bVar2 = true;
      FUN_8004eddc(DAT_800e7eef,g_SpriteParam4);
    }
  }
  else {
    if (DAT_800bf81d == '\x02') {
      FUN_8004d6f4(DAT_800e7eef);
    }
    else if (DAT_800bf81d != -0x7e) goto LAB_8003443c;
    bVar2 = true;
    g_SpriteParam4 = 0;
    DAT_800e7eef = '\0';
  }
LAB_8003443c:
  if (DAT_800bf81c == '\x01') {
    if (DAT_800e7eee == '\0') {
      bVar2 = true;
      FUN_8004d6d4(g_SpriteParam3);
    }
    else {
      bVar2 = true;
      FUN_8004eddc(DAT_800e7eee,g_SpriteParam3);
    }
  }
  else if (DAT_800bf81c == '\x02') {
    FUN_8004d6f4(DAT_800e7eee);
    DAT_800bf81c = '\0';
    g_SpriteParam3 = 0;
    DAT_800e7eee = '\0';
    _DAT_800e7ef4->state = STATE_DEAD;
    _DAT_800e7ef4 = 0;
  }
  if (DAT_800bf80a != '\0') {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_80054198(&g_CollisionEntity);
    DAT_800e7e84 = 4;
    g_CollisionType = 0x11;
    DAT_800e7e86 = 0;
    g_CurrentOverlay = 2;
    g_CollisionEntity = g_CollisionEntity | 2;
  }
  FUN_8009a420(param_1,0,4);
  g_ActionState = 0;
  return;
}
