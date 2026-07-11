/**
 * @brief Entity state main variant 11: DAT_1f80027a=1 (246L)
 * @note Original: func_8005F2F0 at 0x8005F2F0
 */
// Entity_StateMain11



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005f2f0(byte *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  param_1[0x17b] = 1;
  DAT_1f80027a = 1;
  bVar1 = param_1[6];
  if (bVar1 == 1) {
LAB_8005f3c0:
    param_1[6] = param_1[6] + 1;
    if (DAT_800bf81a != '\0') {
      param_1[0x6c] = DAT_800bf88c;
      DAT_800bf81a = '\0';
    }
    if (DAT_800bf81b != '\0') {
      param_1[0x6d] = DAT_800bf88d;
      DAT_800bf81b = '\0';
    }
    if (DAT_800bf81c != '\0') {
      param_1[0x6e] = DAT_800bf88e;
      FUN_80067fe4(param_1);
      DAT_800bf81c = '\0';
    }
    if (DAT_800bf81d != '\0') {
      DAT_1f80027a = 2;
      param_1[0xd] = param_1[0xd] & 0x7f;
      param_1[0x6f] = DAT_800bf88f;
      FUN_80067ef4(param_1);
      param_1[6] = 3;
      *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x56) & 0xfff;
      DAT_800bf81d = '\0';
      param_1[0x40] = 0x1e;
      param_1[0x41] = 0;
      FUN_8001cf2c();
    }
LAB_8005f4fc:
    if (param_1[2] != 0) {
      return;
    }
    FUN_80055d5c(param_1);
    FUN_8005444c(param_1);
    FUN_80056c00(param_1,1);
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      DAT_1f80027a = 1;
      return;
    }
    *param_1 = *param_1 | 6;
    DAT_1f800137 = '\x02';
    DAT_800bf809 = 1;
    DAT_800bf80e = 0;
    FUN_80054198(param_1);
    FUN_80054d14(param_1,2,4);
    if (param_1[2] == 0) {
      FUN_80053d90(param_1);
      FUN_800551c4(param_1);
    }
    param_1[7] = 0;
    param_1[6] = param_1[6] + 1;
    goto LAB_8005f3c0;
  }
  if (bVar1 == 2) {
    if (DAT_800bf80a == '\0') {
      DAT_800bf809 = 0;
      DAT_1f800137 = '\0';
      *param_1 = 3;
      param_1[0x172] = 0xf;
      param_1[0x173] = 0;
      param_1[5] = 0;
    }
    else {
      param_1[5] = 0x12;
    }
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_80054d14(param_1,2,4);
    goto LAB_8005f4fc;
  }
  if (bVar1 != 3) {
    DAT_1f80027a = 1;
    return;
  }
  DAT_1f80027a = 2;
  param_1[0x17a] = 1;
  switch(param_1[7]) {
  case 0:
    FUN_80076d68(param_1);
    if (*(short *)(param_1 + 0x40) != 0) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      return;
    }
    if ((DAT_800bf80a != '\x03') || (DAT_800bf80b != '_')) {
      if (param_1[2] == 0) {
        sVar2 = FUN_800776f8((int)((*(ushort *)(param_1 + 0x140) + 0x400) * 0x10000) >> 0x10,
                             (int)*(short *)(param_1 + 0x56),0x100);
        *(short *)(param_1 + 0x56) = sVar2;
        if ((int)sVar2 != ((int)*(short *)(param_1 + 0x140) + 0x400U & 0xfff)) {
          return;
        }
      }
      else {
        sVar2 = FUN_800776f8((int)((_DAT_800e805a + 0x800) * 0x10000) >> 0x10,
                             (int)*(short *)(param_1 + 0x56),0x100);
        *(short *)(param_1 + 0x56) = sVar2;
        if ((int)sVar2 != ((int)(short)_DAT_800e805a + 0x800U & 0xfff)) {
          return;
        }
      }
    }
    goto switchD_8005f560_caseD_4;
  case 1:
    FUN_80076d68(param_1);
    if (_DAT_801fe0e0 != 0) {
      FUN_8001cf2c(param_1);
      return;
    }
    *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x32);
    FUN_80054d14(param_1,99,8);
    param_1[0x4a] = 0;
    param_1[0x4b] = 0xe0;
    bVar1 = param_1[7];
    param_1[0x145] = 1;
    goto code_r0x8005f890;
  case 2:
    FUN_80076d68(param_1);
    sVar2 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x4a) = sVar2 + 0x300;
    if (-0x901 < (short)(sVar2 + 0x300)) {
      param_1[7] = param_1[7] + 1;
      iVar3 = FUN_800310f4(0x1e,0);
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
      }
      FUN_80074590(0x37,0x16,0x1e);
      *(int *)(param_1 + 0x10) = iVar3;
    }
    goto LAB_8005f74c;
  case 3:
    FUN_80076d68(param_1);
    sVar2 = *(short *)(param_1 + 0x4a);
    *(ushort *)(param_1 + 0x4a) = sVar2 + 0x300U;
    if (-1 < (int)((uint)(ushort)(sVar2 + 0x300U) << 0x10)) {
      param_1[1] = 0;
      param_1[0x145] = 2;
      param_1[7] = param_1[7] + 1;
    }
LAB_8005f74c:
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    break;
  case 4:
    goto switchD_8005f560_caseD_4;
  case 5:
    iVar3 = FUN_80044cd4(_DAT_800ed014,
                         *(uint *)(&DAT_800fb170 + (*(ushort *)(param_1 + 0x17e) & 0xf) * 8) >> 0xb,
                         *(int *)(&DAT_800fb170 + ((*(ushort *)(param_1 + 0x17e) & 0xf) << 3 | 4)) -
                         *(uint *)(&DAT_800fb170 + (*(ushort *)(param_1 + 0x17e) & 0xf) * 8));
    if (iVar3 == 0) {
      return;
    }
    goto switchD_8005f560_caseD_4;
  case 6:
    if (DAT_1f80019b != '\0') {
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 != 0) {
        *(undefined1 *)(iVar3 + 4) = 2;
        *(undefined1 *)(iVar3 + 5) = 0;
      }
      FUN_80057fd4(param_1);
      FUN_80054d14(param_1,100,8);
      param_1[1] = 1;
      if (DAT_1f800137 != '\x01') {
        FUN_80074f24(DAT_800bf870);
      }
      param_1[7] = param_1[7] + 1;
      if ((DAT_800bf80a == '\x03') && (DAT_800bf80b == '_')) {
        param_1[7] = 0xc;
        FUN_80054d14(param_1,0xe4,0);
      }
    }
    break;
  case 7:
    DAT_1f80027a = 1;
    FUN_80076d68(param_1);
switchD_8005f560_caseD_4:
    bVar1 = param_1[7];
code_r0x8005f890:
    param_1[7] = bVar1 + 1;
    break;
  case 8:
    DAT_1f80027a = 1;
    FUN_80076d68(param_1);
    sVar2 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x4a) = sVar2 + 0x300;
    if (0x1fff < (short)(sVar2 + 0x300)) {
      param_1[0x4a] = 0;
      param_1[0x4b] = 0x20;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    if ((*(short *)(param_1 + 0x7c) <= *(short *)(param_1 + 0x32)) || (param_1[0x29] != 0)) {
      FUN_8005314c(param_1);
      if (param_1[0x29] == 0) {
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x7c);
      }
      FUN_80054d14(param_1,0x65,6);
      param_1[0x40] = 8;
      param_1[0x41] = 0;
      param_1[0x145] = 0;
      param_1[7] = param_1[7] + 1;
      if ((param_1[0x6f] - 0x12 < 5) && ((byte)(&DAT_800a4542)[param_1[0x6f]] >> 1 <= DAT_800bf87e))
      {
        FUN_8004ed94((int)*(short *)(&DAT_800a46e4 + (param_1[0x6f] - 0x12) * 2),0x41);
      }
    }
    break;
  case 9:
  case 10:
    DAT_1f80027a = 1;
    FUN_80076d68(param_1);
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      param_1[0x40] = 8;
      param_1[0x41] = 0;
      param_1[7] = param_1[7] + 1;
      FUN_80054d14(param_1,2);
    }
    break;
  case 0xb:
    DAT_1f80027a = 1;
    FUN_80076d68(param_1);
    sVar2 = FUN_800776f8((int)*(short *)(param_1 + 0x7a),(int)*(short *)(param_1 + 0x56),0x100);
    *(short *)(param_1 + 0x56) = sVar2;
    if (sVar2 == *(short *)(param_1 + 0x7a)) {
      param_1[6] = 2;
      param_1[7] = 0;
    }
    break;
  case 0xc:
    DAT_1f80027a = 1;
    FUN_80076d68(param_1);
  }
  return;
}
