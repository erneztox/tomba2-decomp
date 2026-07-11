/**
 * @brief GPU sprite draw main: builds + submits sprite prims
 * @note Original: func_8007E1B8 at 0x8007E1B8
 */
// GPU_SpriteDrawMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007e1b8(undefined4 *param_1,short *param_2,int param_3,byte *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  short *psVar15;
  uint uVar16;
  char cVar17;
  char cVar18;
  short sVar19;
  short sVar20;
  ushort uVar21;
  uint *puVar22;
  ushort uVar23;
  char *pcVar24;
  uint *puVar25;
  int iVar26;
  
  uVar2 = *(ushort *)(param_4 + 2);
  bVar1 = *param_4;
  *param_4 = bVar1 & 0xf;
  psVar15 = (short *)(param_3 + *param_2 * 4);
  iVar26 = (int)*psVar15;
  puVar25 = (uint *)(param_3 + psVar15->flags);
  pcVar24 = (char *)((int)puVar25 + 0xf);
  do {
    _DAT_1f80000c = *puVar25;
    uVar16 = *(uint *)(pcVar24 + -0xb);
    uVar3 = *(undefined2 *)(pcVar24 + -7);
    uVar7 = DAT_1f80001c_1._1_2_;
    _DAT_1f80001c = CONCAT22(DAT_1f80001c_1._1_2_,uVar3);
    uVar9 = _DAT_1f80001c;
    uVar4 = *(undefined2 *)(pcVar24 + -3);
    _DAT_1f800004 = CONCAT13(0x2c,_DAT_1f800004);
    uVar8 = DAT_1f800024_1._1_2_;
    _DAT_1f800024 = CONCAT22(DAT_1f800024_1._1_2_,uVar4);
    uVar10 = _DAT_1f800024;
    if ((uVar2 & 0x8000) != 0) {
      _DAT_1f800004 = CONCAT13(0x2e,_DAT_1f800004);
    }
    if ((bVar1 & 0xf0) == 0) {
      _DAT_1f800004 = _DAT_1f800004 | 0x1000000;
    }
    else {
      _DAT_1f800004 = CONCAT31(CONCAT21(CONCAT11(DAT_1f800007,bVar1),bVar1),bVar1) & 0xfff0f0f0;
    }
    if ((uVar2 & 0x7fff) != 0) {
      _DAT_1f80000c = CONCAT22(*(undefined2 *)(param_4 + 2),_DAT_1f80000c);
    }
    uVar23 = *(ushort *)(param_1 + 1);
    if (*(short *)(param_1 + 1) < 1) {
      if (*(short *)(param_1 + 1) < 0) {
        uVar23 = (byte)pcVar24[-5] + uVar23;
      }
      else {
        uVar23 = (ushort)(byte)pcVar24[-5];
      }
    }
    uVar21 = *(ushort *)((int)param_1 + 6);
    if (*(short *)((int)param_1 + 6) < 1) {
      if (*(short *)((int)param_1 + 6) < 0) {
        uVar21 = (byte)pcVar24[-4] + uVar21;
      }
      else {
        uVar21 = (ushort)(byte)pcVar24[-4];
      }
    }
    cVar11 = DAT_1f80000d;
    uVar5 = _DAT_1f80000e;
    DAT_1f800014 = (char)uVar16;
    DAT_1f800015 = (char)(uVar16 >> 8);
    cVar12 = DAT_1f800015;
    _DAT_1f800016 = (undefined2)(uVar16 >> 0x10);
    uVar6 = _DAT_1f800016;
    DAT_1f80001c = (char)uVar3;
    DAT_1f80001d = (char)((ushort)uVar3 >> 8);
    cVar17 = DAT_1f80001d;
    DAT_1f800024 = (char)uVar4;
    DAT_1f800025 = (char)((ushort)uVar4 >> 8);
    cVar13 = DAT_1f800025;
    switch(*param_4) {
    case 0:
      _DAT_1f800008 = (short)*param_1;
      _DAT_1f800008 = _DAT_1f800008 + pcVar24[-1];
      _DAT_1f80000a = (short)((uint)*param_1 >> 0x10);
      _DAT_1f80000a = _DAT_1f80000a + *pcVar24;
      _DAT_1f800010 = CONCAT22(_DAT_1f80000a,_DAT_1f800008 + uVar23);
      _DAT_1f800018 = CONCAT22(_DAT_1f80000a + uVar21,_DAT_1f800008);
      _DAT_1f800020 = CONCAT22(_DAT_1f80000a + uVar21,_DAT_1f800008 + uVar23);
      break;
    case 1:
      _DAT_1f800010 = (short)*param_1;
      _DAT_1f800010 = _DAT_1f800010 + pcVar24[-1];
      _DAT_1f800012 = (short)((uint)*param_1 >> 0x10);
      _DAT_1f80000c = CONCAT31(_DAT_1f80000d,DAT_1f80000c + -1);
      _DAT_1f800014 = CONCAT31((int3)(uVar16 >> 8),DAT_1f800014 + -1);
      _DAT_1f800012 = _DAT_1f800012 + *pcVar24;
      _DAT_1f80001c = CONCAT31(SUB43(uVar9,1),DAT_1f80001c + -1);
      _DAT_1f800008 = CONCAT22(_DAT_1f800012,_DAT_1f800010 + uVar23);
      _DAT_1f800018 = CONCAT22(_DAT_1f800012 + uVar21,_DAT_1f800010 + uVar23);
      _DAT_1f800020 = CONCAT22(_DAT_1f800012 + uVar21,_DAT_1f800010);
      _DAT_1f800024 = CONCAT31(SUB43(uVar10,1),DAT_1f800024 + -1);
      uVar16 = _DAT_1f800014;
      uVar9 = _DAT_1f80001c;
      uVar10 = _DAT_1f800024;
      break;
    case 2:
      _DAT_1f800018 = (short)*param_1;
      _DAT_1f800018 = _DAT_1f800018 + pcVar24[-1];
      _DAT_1f80001a = (short)((uint)*param_1 >> 0x10);
      cVar11 = cVar11 + -1;
      cVar17 = cVar17 + -1;
      cVar12 = cVar12 + -1;
      sVar19 = _DAT_1f800018 + uVar23;
      sVar20 = _DAT_1f80001a + *pcVar24;
      _DAT_1f800018 = CONCAT22(sVar20,_DAT_1f800018);
      _DAT_1f800008 = CONCAT22(sVar20 + uVar21,_DAT_1f800018);
      _DAT_1f800010 = CONCAT22(sVar20 + uVar21,sVar19);
      cVar13 = cVar13 + -1;
      goto LAB_8007e618;
    case 3:
      _DAT_1f800020 = (short)*param_1;
      _DAT_1f800020 = _DAT_1f800020 + pcVar24[-1];
      _DAT_1f800022 = (short)((uint)*param_1 >> 0x10);
      cVar18 = DAT_1f80001c + -1;
      cVar14 = DAT_1f800014 + -1;
      _DAT_1f80000c = CONCAT11(cVar11 + -1,DAT_1f80000c + -1);
      _DAT_1f80000c = CONCAT22(uVar5,_DAT_1f80000c);
      _DAT_1f800022 = _DAT_1f800022 + *pcVar24;
      _DAT_1f800008 = CONCAT22(_DAT_1f800022 + uVar21,_DAT_1f800020 + uVar23);
      _DAT_1f800014 = CONCAT22(uVar6,CONCAT11(cVar12 + -1,cVar14));
      _DAT_1f800010 = CONCAT22(_DAT_1f800022 + uVar21,_DAT_1f800020);
      _DAT_1f800018 = CONCAT22(_DAT_1f800022,_DAT_1f800020 + uVar23);
      _DAT_1f80001c = CONCAT22(uVar7,CONCAT11(cVar17 + -1,cVar18));
      _DAT_1f800024 = CONCAT11(cVar13 + -1,DAT_1f800024 + -1);
      _DAT_1f800024 = CONCAT22(uVar8,_DAT_1f800024);
      uVar16 = _DAT_1f800014;
      uVar9 = _DAT_1f80001c;
      uVar10 = _DAT_1f800024;
      break;
    case 5:
      _DAT_1f800018 = (short)*param_1;
      _DAT_1f800018 = _DAT_1f800018 + pcVar24[-1];
      _DAT_1f80001a = (short)((uint)*param_1 >> 0x10);
      cVar11 = cVar11 + '\x01';
      cVar17 = cVar17 + '\x01';
      cVar12 = cVar12 + '\x01';
      sVar19 = _DAT_1f800018 + uVar23;
      sVar20 = _DAT_1f80001a + *pcVar24;
      _DAT_1f800018 = CONCAT22(sVar20,_DAT_1f800018);
      _DAT_1f800008 = CONCAT22(sVar20 + uVar21,_DAT_1f800018);
      _DAT_1f800010 = CONCAT22(sVar20 + uVar21,sVar19);
      cVar13 = cVar13 + '\x01';
LAB_8007e618:
      _DAT_1f80001c = CONCAT22(uVar7,CONCAT11(cVar17,DAT_1f80001c));
      _DAT_1f800014 = CONCAT22(uVar6,CONCAT11(cVar12,DAT_1f800014));
      _DAT_1f80000c = CONCAT22(uVar5,CONCAT11(cVar11,DAT_1f80000c));
      _DAT_1f800024 = CONCAT11(cVar13,DAT_1f800024);
      _DAT_1f800024 = CONCAT22(uVar8,_DAT_1f800024);
      _DAT_1f800020 = CONCAT22(sVar20,sVar19);
      uVar16 = _DAT_1f800014;
      uVar9 = _DAT_1f80001c;
      uVar10 = _DAT_1f800024;
    }
    _DAT_1f800024 = uVar10;
    _DAT_1f80001c = uVar9;
    _DAT_1f800014 = uVar16;
    puVar22 = (uint *)(_DAT_800ed8c8 + (uint)param_4->flags * 4);
    *_DAT_800bf544 = *puVar22 | 0x9000000;
    *puVar22 = (uint)_DAT_800bf544;
    pcVar24 = pcVar24 + 0x10;
    puVar25 = puVar25 + 4;
    iVar26 = iVar26 + -1;
    _DAT_800bf544->flags = _DAT_1f800004;
    _DAT_800bf544->kind = _DAT_1f800008;
    _DAT_800bf544->sub_type = _DAT_1f80000c;
    _DAT_800bf544->state = _DAT_1f800010;
    _DAT_800bf544->behavior_state = _DAT_1f800014;
    _DAT_800bf544->action_state = _DAT_1f800018;
    _DAT_800bf544->sub_action = _DAT_1f80001c;
    _DAT_800bf544->counter1 = _DAT_1f800020;
    _DAT_800bf544->counter2 = _DAT_1f800024;
    _DAT_800bf544 = _DAT_800bf544 + 10;
    if (iVar26 == 0) {
      return;
    }
  } while( true );
}
