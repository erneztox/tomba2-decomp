/**
 * @brief GPU sprite draw main: builds + submits sprite prims
 * @note Original: func_8007E1B8 at 0x8007E1B8
 */
// GPU_SpriteDrawMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8007e1b8(s32 *param_1,s16 *param_2,int param_3,u8 *param_4)

{
  u8 bVar1;
  u16 uVar2;
  s16 uVar3;
  s16 uVar4;
  s16 uVar5;
  s16 uVar6;
  s16 uVar7;
  s16 uVar8;
  uint uVar9;
  uint uVar10;
  s8 cVar11;
  s8 cVar12;
  s8 cVar13;
  s8 cVar14;
  s16 *psVar15;
  uint uVar16;
  s8 cVar17;
  s8 cVar18;
  s16 sVar19;
  s16 sVar20;
  u16 uVar21;
  uint *puVar22;
  u16 uVar23;
  char *pcVar24;
  uint *puVar25;
  int iVar26;
  
  uVar2 = *(u16 *)(param_4 + 2);
  bVar1 = *param_4;
  *param_4 = bVar1 & 0xf;
  psVar15 = (s16 *)(param_3 + *param_2 * 4);
  iVar26 = (int)*psVar15;
  puVar25 = (uint *)(param_3 + psVar15->flags);
  pcVar24 = (s8*)((int)puVar25 + 0xf);
  do {
    _g_GTE_DataC = *puVar25;
    uVar16 = *(uint *)(pcVar24 + -0xb);
    uVar3 = *(s16 *)(pcVar24 + -7);
    uVar7 = g_GTE_Data1C_1._1_2_;
    _g_GTE_Data1C = CONCAT22(g_GTE_Data1C_1._1_2_,uVar3);
    uVar9 = _g_GTE_Data1C;
    uVar4 = *(s16 *)(pcVar24 + -3);
    _g_GTE_Data4 = CONCAT13(0x2c,_g_GTE_Data4);
    uVar8 = DAT_1f800024_1._1_2_;
    _DAT_1f800024 = CONCAT22(DAT_1f800024_1._1_2_,uVar4);
    uVar10 = _DAT_1f800024;
    if ((uVar2 & 0x8000) != 0) {
      _g_GTE_Data4 = CONCAT13(0x2e,_g_GTE_Data4);
    }
    if ((bVar1 & 0xf0) == 0) {
      _g_GTE_Data4 = _g_GTE_Data4 | 0x1000000;
    }
    else {
      _g_GTE_Data4 = CONCAT31(CONCAT21(CONCAT11(DAT_1f800007,bVar1),bVar1),bVar1) & 0xfff0f0f0;
    }
    if ((uVar2 & 0x7fff) != 0) {
      _g_GTE_DataC = CONCAT22(*(s16 *)(param_4 + 2),_g_GTE_DataC);
    }
    uVar23 = *(u16 *)(param_1 + 1);
    if (*(s16 *)(param_1 + 1) < 1) {
      if (*(s16 *)(param_1 + 1) < 0) {
        uVar23 = (u8)pcVar24[-5] + uVar23;
      }
      else {
        uVar23 = (u16)(u8)pcVar24[-5];
      }
    }
    uVar21 = *(u16 *)((int)param_1 + 6);
    if (*(s16 *)((int)param_1 + 6) < 1) {
      if (*(s16 *)((int)param_1 + 6) < 0) {
        uVar21 = (u8)pcVar24[-4] + uVar21;
      }
      else {
        uVar21 = (u16)(u8)pcVar24[-4];
      }
    }
    cVar11 = DAT_1f80000d;
    uVar5 = _DAT_1f80000e;
    g_GTE_Data14 = (char)uVar16;
    DAT_1f800015 = (char)(uVar16 >> 8);
    cVar12 = DAT_1f800015;
    _DAT_1f800016 = (s16)(uVar16 >> 0x10);
    uVar6 = _DAT_1f800016;
    g_GTE_Data1C = (char)uVar3;
    DAT_1f80001d = (char)((u16)uVar3 >> 8);
    cVar17 = DAT_1f80001d;
    DAT_1f800024 = (char)uVar4;
    DAT_1f800025 = (char)((u16)uVar4 >> 8);
    cVar13 = DAT_1f800025;
    switch(*param_4) {
    case 0:
      _g_GTE_Data8 = (s16)*param_1;
      _g_GTE_Data8 = _g_GTE_Data8 + pcVar24[-1];
      _DAT_1f80000a = (s16)((uint)*param_1 >> 0x10);
      _DAT_1f80000a = _DAT_1f80000a + *pcVar24;
      _g_GTE_Data10 = CONCAT22(_DAT_1f80000a,_g_GTE_Data8 + uVar23);
      _g_GTE_Data18 = CONCAT22(_DAT_1f80000a + uVar21,_g_GTE_Data8);
      _DAT_1f800020 = CONCAT22(_DAT_1f80000a + uVar21,_g_GTE_Data8 + uVar23);
      break;
    case 1:
      _g_GTE_Data10 = (s16)*param_1;
      _g_GTE_Data10 = _g_GTE_Data10 + pcVar24[-1];
      _DAT_1f800012 = (s16)((uint)*param_1 >> 0x10);
      _g_GTE_DataC = CONCAT31(_DAT_1f80000d,g_GTE_DataC + -1);
      _g_GTE_Data14 = CONCAT31((int3)(uVar16 >> 8),g_GTE_Data14 + -1);
      _DAT_1f800012 = _DAT_1f800012 + *pcVar24;
      _g_GTE_Data1C = CONCAT31(SUB43(uVar9,1),g_GTE_Data1C + -1);
      _g_GTE_Data8 = CONCAT22(_DAT_1f800012,_g_GTE_Data10 + uVar23);
      _g_GTE_Data18 = CONCAT22(_DAT_1f800012 + uVar21,_g_GTE_Data10 + uVar23);
      _DAT_1f800020 = CONCAT22(_DAT_1f800012 + uVar21,_g_GTE_Data10);
      _DAT_1f800024 = CONCAT31(SUB43(uVar10,1),DAT_1f800024 + -1);
      uVar16 = _g_GTE_Data14;
      uVar9 = _g_GTE_Data1C;
      uVar10 = _DAT_1f800024;
      break;
    case 2:
      _g_GTE_Data18 = (s16)*param_1;
      _g_GTE_Data18 = _g_GTE_Data18 + pcVar24[-1];
      _DAT_1f80001a = (s16)((uint)*param_1 >> 0x10);
      cVar11 = cVar11 + -1;
      cVar17 = cVar17 + -1;
      cVar12 = cVar12 + -1;
      sVar19 = _g_GTE_Data18 + uVar23;
      sVar20 = _DAT_1f80001a + *pcVar24;
      _g_GTE_Data18 = CONCAT22(sVar20,_g_GTE_Data18);
      _g_GTE_Data8 = CONCAT22(sVar20 + uVar21,_g_GTE_Data18);
      _g_GTE_Data10 = CONCAT22(sVar20 + uVar21,sVar19);
      cVar13 = cVar13 + -1;
      goto LAB_8007e618;
    case 3:
      _DAT_1f800020 = (s16)*param_1;
      _DAT_1f800020 = _DAT_1f800020 + pcVar24[-1];
      _DAT_1f800022 = (s16)((uint)*param_1 >> 0x10);
      cVar18 = g_GTE_Data1C + -1;
      cVar14 = g_GTE_Data14 + -1;
      _g_GTE_DataC = CONCAT11(cVar11 + -1,g_GTE_DataC + -1);
      _g_GTE_DataC = CONCAT22(uVar5,_g_GTE_DataC);
      _DAT_1f800022 = _DAT_1f800022 + *pcVar24;
      _g_GTE_Data8 = CONCAT22(_DAT_1f800022 + uVar21,_DAT_1f800020 + uVar23);
      _g_GTE_Data14 = CONCAT22(uVar6,CONCAT11(cVar12 + -1,cVar14));
      _g_GTE_Data10 = CONCAT22(_DAT_1f800022 + uVar21,_DAT_1f800020);
      _g_GTE_Data18 = CONCAT22(_DAT_1f800022,_DAT_1f800020 + uVar23);
      _g_GTE_Data1C = CONCAT22(uVar7,CONCAT11(cVar17 + -1,cVar18));
      _DAT_1f800024 = CONCAT11(cVar13 + -1,DAT_1f800024 + -1);
      _DAT_1f800024 = CONCAT22(uVar8,_DAT_1f800024);
      uVar16 = _g_GTE_Data14;
      uVar9 = _g_GTE_Data1C;
      uVar10 = _DAT_1f800024;
      break;
    case 5:
      _g_GTE_Data18 = (s16)*param_1;
      _g_GTE_Data18 = _g_GTE_Data18 + pcVar24[-1];
      _DAT_1f80001a = (s16)((uint)*param_1 >> 0x10);
      cVar11 = cVar11 + '\x01';
      cVar17 = cVar17 + '\x01';
      cVar12 = cVar12 + '\x01';
      sVar19 = _g_GTE_Data18 + uVar23;
      sVar20 = _DAT_1f80001a + *pcVar24;
      _g_GTE_Data18 = CONCAT22(sVar20,_g_GTE_Data18);
      _g_GTE_Data8 = CONCAT22(sVar20 + uVar21,_g_GTE_Data18);
      _g_GTE_Data10 = CONCAT22(sVar20 + uVar21,sVar19);
      cVar13 = cVar13 + '\x01';
LAB_8007e618:
      _g_GTE_Data1C = CONCAT22(uVar7,CONCAT11(cVar17,g_GTE_Data1C));
      _g_GTE_Data14 = CONCAT22(uVar6,CONCAT11(cVar12,g_GTE_Data14));
      _g_GTE_DataC = CONCAT22(uVar5,CONCAT11(cVar11,g_GTE_DataC));
      _DAT_1f800024 = CONCAT11(cVar13,DAT_1f800024);
      _DAT_1f800024 = CONCAT22(uVar8,_DAT_1f800024);
      _DAT_1f800020 = CONCAT22(sVar20,sVar19);
      uVar16 = _g_GTE_Data14;
      uVar9 = _g_GTE_Data1C;
      uVar10 = _DAT_1f800024;
    }
    _DAT_1f800024 = uVar10;
    _g_GTE_Data1C = uVar9;
    _g_GTE_Data14 = uVar16;
    puVar22 = (uint *)(_g_EntityBuffer + (uint)param_4->flags * 4);
    *_g_OT_Buffer = *puVar22 | 0x9000000;
    *puVar22 = (uint)_g_OT_Buffer;
    pcVar24 = pcVar24 + 0x10;
    puVar25 = puVar25 + 4;
    iVar26 = iVar26 + -1;
    _g_OT_Buffer->flags = _g_GTE_Data4;
    _g_OT_Buffer->kind = _g_GTE_Data8;
    _g_OT_Buffer->sub_type = _g_GTE_DataC;
    _g_OT_Buffer->state = _g_GTE_Data10;
    _g_OT_Buffer->behavior_state = _g_GTE_Data14;
    _g_OT_Buffer->action_state = _g_GTE_Data18;
    _g_OT_Buffer->sub_action = _g_GTE_Data1C;
    _g_OT_Buffer->counter1 = _DAT_1f800020;
    _g_OT_Buffer->counter2 = _DAT_1f800024;
    _g_OT_Buffer = _g_OT_Buffer + 10;
    if (iVar26 == 0) {
      return;
    }
  } while( true );
}
