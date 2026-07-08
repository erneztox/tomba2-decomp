
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005fb54(byte *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  DAT_1f80027a = 1;
  param_1[0x17b] = 1;
  switch(param_1[6]) {
  case 0:
    DAT_800bf80e = 0;
    if (DAT_800bfa47 != -0x80) {
      FUN_8004ed0c(DAT_800bf80b,1);
    }
    FUN_80053d90(param_1);
    FUN_80054198(param_1);
    param_1[0xd] = param_1[0xd] & 0x7f;
    if (DAT_800bf80a == '\x02') {
      *param_1 = *param_1 | 6;
      DAT_800bf809 = 1;
    }
    else if (DAT_800bf80a == '\x03') {
      *param_1 = 6;
      DAT_800bf809 = 1;
      FUN_8005fa84();
      return;
    }
    FUN_80054d14(param_1,0x72,4);
    param_1[6] = param_1[6] + 1;
  case 1:
    iVar5 = FUN_80076d68(param_1);
    if (iVar5 == 1) {
      uVar6 = 0x73;
      bVar1 = param_1[6];
      uVar7 = 2;
LAB_8005fe08:
      param_1[6] = bVar1 + 1;
      FUN_80054d14(param_1,uVar6,uVar7);
    }
    break;
  case 2:
    iVar5 = FUN_80076d68(param_1);
    if (iVar5 == 1) {
      if (DAT_800bf80a == '\x02') {
        DAT_800bf809 = 0;
        DAT_1f800137 = 0;
        *param_1 = 3;
        param_1[0x172] = 0x1e;
        param_1[0x173] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        FUN_80054d14(param_1,2,5);
      }
      else {
        *param_1 = *param_1 & 3;
        param_1[6] = param_1[6] + 1;
      }
      DAT_800bf80a = '\0';
      DAT_800bf80e = 1;
    }
    break;
  case 4:
    param_1[0x17a] = 1;
    FUN_80076d68(param_1);
    if (param_1[2] == 0) {
      sVar2 = FUN_800776f8((int)((*(ushort *)(param_1 + 0x140) + 0x400) * 0x10000) >> 0x10,
                           (int)*(short *)(param_1 + 0x56),0x100);
      *(short *)(param_1 + 0x56) = sVar2;
      if ((int)sVar2 != ((int)*(short *)(param_1 + 0x140) + 0x400U & 0xfff)) {
        return;
      }
    }
    else {
      uVar3 = FUN_800782b0(param_1 + 0x2c,(int)_DAT_1f8000d2,(int)_DAT_1f8000da);
      uVar4 = FUN_800776f8((int)(short)uVar3,(int)*(short *)(param_1 + 0x56),0x100);
      *(ushort *)(param_1 + 0x56) = uVar4;
      if (uVar4 != (uVar3 & 0xfff)) {
        return;
      }
    }
    iVar5 = FUN_80042728();
    if (iVar5 == 0) {
      return;
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    uVar6 = 0x72;
    uVar7 = 4;
    bVar1 = param_1[6];
    param_1[0x40] = 0x14;
    param_1[0x41] = 0;
    goto LAB_8005fe08;
  case 5:
    param_1[0x17a] = 1;
    FUN_80076d68(param_1);
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    FUN_8006804c(param_1);
    bVar1 = param_1[6];
    goto LAB_8005ff58;
  case 6:
    param_1[0x17a] = 1;
    FUN_80076d68(param_1);
    if (*(short *)(param_1 + 0x7e) != 0) {
      param_1[6] = param_1[6] + 1;
      DAT_800bf80f = 4;
      DAT_800bf839 = 1;
      param_1[0x40] = 0x14;
      param_1[0x41] = 0;
      param_1[0x42] = 0xc;
      param_1[0x43] = 0;
    }
    break;
  case 7:
    param_1[0x17a] = 1;
    FUN_80076d68(param_1);
    if ((_DAT_1f80017c & 7) == 0) {
      FUN_80074590(0x38,(int)(char)param_1[0x42],0);
      sVar2 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar2 + 2;
      if (0x1a < (short)(sVar2 + 2)) {
        param_1[0x42] = 0x1a;
        param_1[0x43] = 0;
      }
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -10;
    if (sVar2 != 1) {
      return;
    }
    DAT_800bf80f = DAT_800bf80f | 0x80;
    bVar1 = param_1[6];
    param_1[0x40] = 0x14;
    param_1[0x41] = 0;
LAB_8005ff58:
    param_1[6] = bVar1 + 1;
    break;
  case 8:
    sVar2 = *(short *)(param_1 + 0x40);
    param_1[0x17a] = 1;
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      DAT_1f800236 = 5;
      DAT_800bf80f = DAT_800bf80f & 0x7f;
      param_1[6] = param_1[6] + 1;
      goto switchD_8005fba0_caseD_9;
    }
    goto LAB_8005ffb4;
  case 9:
switchD_8005fba0_caseD_9:
LAB_8005ffb4:
    if ((_DAT_1f80017c & 7) == 0) {
      FUN_80074590(0x38,(int)(char)param_1[0x42],0);
      sVar2 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar2 + 2;
      if (0x1a < (short)(sVar2 + 2)) {
        param_1[0x42] = 0x1a;
        param_1[0x43] = 0;
      }
    }
    param_1[0x17a] = 1;
    FUN_80076d68(param_1);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -10;
    break;
  case 10:
    param_1[0x17a] = 1;
    FUN_80076d68(param_1);
    iVar5 = FUN_80042728();
    if (iVar5 != 0) {
      param_1[6] = 5;
      param_1[0x40] = 1;
      param_1[0x41] = 0;
    }
  }
  return;
}

