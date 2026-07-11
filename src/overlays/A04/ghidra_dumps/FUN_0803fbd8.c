// FUN_0803fbd8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803fbd8(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    uVar2 = *(short *)(param_1 + 0x4e) - 0x100U & 0xfff;
    *(ushort *)(param_1 + 0x4e) = uVar2;
    if (uVar2 == 0) {
      param_1[6] = param_1[6] + '\x01';
    }
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x66) + (short)((iVar3 << 6) >> 0xc);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar2 = *(short *)(param_1 + 0x4e) - 0x100U & 0xfff;
      *(ushort *)(param_1 + 0x4e) = uVar2;
      if (uVar2 == 0) {
        param_1[6] = param_1[6] + '\x01';
      }
      iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x66) + (short)(iVar3 * 0x60 >> 0xc);
    }
  }
  else if (bVar1 == 2) {
    *param_1 = 1;
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

