// FUN_8011ed80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011ed80(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int unaff_s2;
  int unaff_s3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if ((1 < (byte)param_1[5]) && ((byte)param_1[5] < 4)) {
          DAT_800bf9d4 = 0;
          DAT_800bf936 = DAT_800bf936 | 2;
          func_0x8004d4c4(0x40,1);
          func_0x8004b0d8(param_1);
          param_1[4] = 3;
        }
        func_0x8007778c(param_1);
        FUN_801280d4();
        return;
      }
      if (bVar1 != 3) {
        FUN_801280d4();
        return;
      }
      func_0x8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      FUN_801280d4();
      return;
    }
    param_1[4] = 1;
    uVar3 = _DAT_800ecf80;
    param_1[0xd] = 0;
    param_1[0xb] = 0x10;
    *(undefined2 *)(param_1 + 0x5a) = 0;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    param_1[0x5e] = 0;
    param_1[3] = 1;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    func_0x80077b38(param_1,0x8014c808,0x18);
    param_1[0x47] = 0;
    func_0x8004766c(param_1);
    *(undefined2 *)(param_1 + 0x80) = 0x1e;
    *(undefined2 *)(param_1 + 0x82) = 0x3c;
    *(undefined2 *)(param_1 + 0x84) = 0x3c;
    *(undefined2 *)(param_1 + 0x86) = 0x5a;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    param_1[5] = 2;
    param_1[6] = 1;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined2 *)(param_1 + 0x66) = 0;
LAB_8011ee68:
    param_1[0x29] = 0;
    FUN_801280d4();
    return;
  }
  if ((*(short *)(param_1 + 0x66) != 0) &&
     (func_0x80077b5c(param_1), *(short *)(param_1 + 0xe) == 7)) {
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) ^ 1;
  }
  func_0x8004766c(param_1);
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 100) != 0) {
      param_1[5] = 2;
      *(undefined2 *)(param_1 + 0x4a) = 0xec00;
      param_1[6] = 0;
      *(undefined2 *)(param_1 + 0x50) = 0x100;
      *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0xe) + -1;
      FUN_80127fe0();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_80127fe0();
      return;
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      param_1[5] = param_1[5] + '\x01';
      FUN_80127fe0();
      return;
    }
  }
  else {
    if (bVar1 != 2) {
      FUN_80127fe0();
      return;
    }
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    if (*(short *)(param_1 + 0x66) != 0) {
      *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + -1;
    }
    if (param_1[6] == '\0') {
      if (-1 < *(short *)(param_1 + 0x4a)) {
        param_1[6] = 1;
        FUN_80127fe0();
        return;
      }
    }
    else {
      if (param_1[6] != '\x01') {
        FUN_80127fe0();
        return;
      }
      iVar5 = 1;
      if (param_1[0x29] == '\0') {
        iVar5 = func_0x80049250(param_1,0,0x1e);
      }
      if (iVar5 == 1) {
        param_1[5] = 0;
        func_0x8009a450();
        return;
      }
      if (0 < *(short *)(param_1 + 0x32)) {
        DAT_800bf9d4 = 0;
        param_1[4] = 3;
      }
      if (0x2000 < *(short *)(param_1 + 0x4a)) {
        *(undefined2 *)(param_1 + 0x4a) = 0x2000;
      }
    }
  }
  func_0x8007778c(param_1);
  if (*(short *)(param_1 + 0x60) == 0) {
    if (param_1[1] != '\0') goto LAB_8011ee68;
    *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
    cVar4 = 'Z';
    *(undefined2 *)(param_1 + 0x62) = 0x5a;
  }
  else {
    if (*(short *)(param_1 + 0x60) != 1) {
      param_1[0x29] = 0;
      FUN_801280d4();
      return;
    }
    cVar4 = param_1[1];
    if (cVar4 == '\0') {
      sVar2 = *(short *)(param_1 + 0x62);
      *(ushort *)(param_1 + 0x62) = sVar2 - 1U;
      if (-1 < (int)((uint)(ushort)(sVar2 - 1U) << 0x10)) goto LAB_8011ee68;
      DAT_800bf9d4 = 0;
      cVar4 = '\x03';
      param_1[4] = 3;
    }
    else {
      *(undefined2 *)(param_1 + 0x60) = 0;
    }
  }
  while( true ) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(cVar4) {
    case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_s3 = unaff_s3 + 1;
    unaff_s2 = unaff_s2 + 1;
    if (3 < unaff_s3 * 0x10000 >> 0x10) break;
    cVar4 = *(char *)(*(int *)(param_1 + (unaff_s2 * 0x10000 >> 0xe) + 0xc0) + 0x3e);
  }
  return;
}

