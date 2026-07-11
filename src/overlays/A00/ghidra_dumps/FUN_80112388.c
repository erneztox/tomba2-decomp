// FUN_80112388

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80112388(undefined1 *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  byte bVar8;
  short sVar9;
  undefined1 *puVar10;
  int iVar11;
  
  bVar8 = DAT_800bf9de;
  if (DAT_800bf9de < 4) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[6]) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return;
    }
  }
  bVar2 = param_1[7];
  if (bVar2 == 1) {
    sVar9 = *(short *)(param_1 + 0x32);
    *(short *)(param_1 + 0x32) = sVar9 + 8;
    if (-0x95c < (short)(sVar9 + 8)) {
      *(undefined2 *)(param_1 + 0x32) = 0xf6a4;
    }
    if (*(short *)(param_1 + 0x40) == 0) {
      param_1[7] = param_1[7] + '\x01';
    }
    else {
      bVar2 = param_1[3];
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      if (bVar2 == 7) {
        uVar3 = *(ushort *)(param_1 + 0x36);
        iVar11 = *(ushort *)(param_1 + 0x2e) - 6;
LAB_8011b458:
        *(uint *)(param_3 + 0x2c) = (uVar3 - 6) + iVar11 * 0x100;
        sVar9 = *(short *)(param_3 + 0x48);
LAB_8011b468:
        sVar5 = *(short *)(param_3 + 0x56) + 0x80;
        *(short *)(param_3 + 0x56) = sVar5;
        *(ushort *)(param_3 + 0x48) = sVar9 + (ushort)bVar8;
        if (sVar5 == 0x800) {
          *(undefined2 *)(param_3 + 0x40) = 0x5a;
          *(undefined2 *)(param_3 + 0x48) = 0xf000;
          *(undefined2 *)(param_3 + 0x4e) = 0x200;
          FUN_801243dc();
          return;
        }
        return;
      }
      if (bVar2 < 8) {
        if (bVar2 == 3) {
          FUN_8011b454();
          return;
        }
      }
      else {
        if (bVar2 == 8) {
          uVar3 = *(ushort *)(param_1 + 0x36);
          iVar11 = *(ushort *)(param_1 + 0x2e) + 6;
          goto LAB_8011b458;
        }
        if (bVar2 == 9) {
          *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 6;
          *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 6;
        }
      }
    }
  }
  else if (bVar2 < 2) {
    sVar9 = 0x1e;
    if (bVar2 == 0) {
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      goto LAB_8011b468;
    }
  }
  else if (bVar2 == 2) {
    if (DAT_800bf9de < 5) {
      return;
    }
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    if (param_1[3] == '\x03') {
      param_1[3] = 10;
    }
    else {
      param_1[3] = param_1[3] + '\x04';
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x14) + 1) == '\0') {
    return;
  }
  puVar10 = (undefined1 *)(uint)(byte)param_1[5];
  iVar11 = *(int *)(param_1 + 0x10);
  cVar4 = puVar10 < (undefined1 *)0x2;
  if (puVar10 != (undefined1 *)0x1) {
    if (!(bool)cVar4) {
      cVar4 = '\x03';
      if (puVar10 == (undefined1 *)0x2) {
        bVar8 = param_1[0x46] & 3;
        param_1[5] = 3;
        if (((param_1[0x46] & 3) == 0) || (bVar8 == 2)) {
          *(undefined2 *)(param_1 + 0x4a) = 0xe800;
          *(undefined2 *)(param_1 + 0x4c) = 0;
          FUN_801248d8();
          return;
        }
        uVar6 = 0xfc00;
        if (bVar8 == 1) {
          uVar6 = 0x400;
        }
        *(undefined2 *)(param_1 + 0x4c) = uVar6;
        *(undefined2 *)(param_1 + 0x4a) = 0xf000;
        *(undefined2 *)(param_1 + 0x50) = 0x200;
      }
      else if (puVar10 != (undefined1 *)0x3) goto LAB_801249bc;
      iVar7 = func_0x8007778c(param_1);
      if (iVar7 == 0) {
        return;
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x100;
      if (*(int *)(iVar11 + 0x34) + -0x40 <= (int)*(short *)(param_1 + 0x36)) {
        if (*(int *)(iVar11 + 0x34) + 0x40 < (int)*(short *)(param_1 + 0x36)) {
          *(short *)(param_1 + 0x36) = *(short *)(iVar11 + 0x34) + 0x40;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
        func_0x80077b5c(param_1);
        if (param_1[0x29] == '\0') {
          return;
        }
        param_1[5] = 2;
        param_1[0x47] = '\x01' - param_1[0x47];
        param_1[0x46] = param_1[0x46] + '\x01';
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -8;
        func_0x80074590(0x8f,0,0);
        return;
      }
      FUN_80124940();
      return;
    }
    bVar1 = puVar10 != (undefined1 *)0x0;
    puVar10 = (undefined1 *)0x107;
    if (bVar1) goto LAB_801249bc;
    param_1[5] = 1;
    *param_1 = 1;
    param_1[0xb] = 0x10;
    *(undefined2 *)(param_1 + 0x5a) = 0;
    param_1[0x47] = 0;
    param_1[0x46] = param_1[0x60] & 3;
    func_0x8003116c(0x107,param_1 + 0x2c,0xfffffff6);
    *(short *)(param_1 + 0x2e) =
         *(short *)(iVar11 + 0x2c) + *(short *)(&stack0xfffffff8 + *(short *)(param_1 + 0x60) * 2);
    *(short *)(param_1 + 0x32) = *(short *)(iVar11 + 0x30) + -0x20;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar11 + 0x34);
    puVar10 = param_1;
    func_0x80077b38(param_1,0x8014c808,4);
  }
  if (DAT_800bf9dd < 0xf) {
    if (*(int *)(iVar11 + 0x30) <= (int)*(short *)(param_1 + 0x32)) {
      func_0x8009a450();
      return;
    }
    func_0x80077b5c(param_1);
    cVar4 = func_0x8007778c();
    puVar10 = param_1;
  }
  else {
    cVar4 = param_1[5] + '\x01';
    param_1[5] = cVar4;
  }
LAB_801249bc:
  puVar10[0x1a] = cVar4;
  puVar10[0x19] = cVar4;
  puVar10[0x18] = cVar4;
  puVar10[0xd] = 2;
  puVar10[6] = puVar10[6] + '\x01';
  FUN_8012d9e8();
  return;
}

