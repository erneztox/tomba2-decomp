// FUN_08034674

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08034674(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      param_1[4] = 1;
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
      func_0x00077b38(param_1,0x801486ec,10);
      param_1[0xb] = 0x10;
      *(undefined2 *)(param_1 + 0x80) = 0x20;
      *(undefined2 *)(param_1 + 0x82) = 0x40;
      *(undefined2 *)(param_1 + 0x84) = 0x30;
      param_1[0xd] = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      param_1[0x47] = 0;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 0x70;
      func_0x0004766c(param_1);
      func_0x00049674(param_1);
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 != 0) {
      func_0x00077b5c(param_1);
    }
    bVar1 = param_1[5];
    if (bVar1 != 1) {
      if (bVar1 == 0) {
        return;
      }
      if (bVar1 < 4) {
        func_0x0004d4c4(0x3c,1);
        func_0x0004b0d8(param_1);
        DAT_800bfa49 = DAT_800bfa49 | 4;
        param_1[4] = 3;
        halt_baddata();
      }
      return;
    }
    return;
  }
  iVar3 = func_0x0007778c(param_1);
  if (iVar3 == 0) {
    return;
  }
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if ((short)(sVar2 + -1) == -1) {
        param_1[5] = param_1[5] + -1;
        param_1[0x47] = '\x01' - param_1[0x47];
      }
      goto LAB_080348bc;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[5] = 1;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0;
  }
  sVar2 = *(short *)(param_1 + 0x4e);
  *(short *)(param_1 + 0x4e) = sVar2 + 0x20;
  iVar3 = func_0x00083f50((int)(short)(sVar2 + 0x20));
  sVar2 = (short)(iVar3 * 0xc >> 4);
  *(short *)(param_1 + 0x44) = sVar2;
  iVar3 = (int)*(short *)(param_1 + 0x44);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar3;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)sVar2
  ;
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
  func_0x0004766c(param_1);
  func_0x00049250(param_1,0,
                  (int)(((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) *
                       0x10000) >> 0x10);
  if (*(short *)(param_1 + 0x44) == 0) {
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_080348bc:
  func_0x00077b5c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

