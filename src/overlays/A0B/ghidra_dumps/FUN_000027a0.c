// FUN_000027a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000027a0(undefined1 *param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar4;
  int iVar5;
  int iVar3;
  
  param_1[0x177] = param_1[0x177] | 2;
  if (param_1[6] == '\0') {
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)(param_1 + 0x58);
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = *(short *)(param_1 + 0x40) + 1;
  uVar2 = uVar4 & 0xff;
  *(ushort *)(param_1 + 0x40) = uVar4;
  if (0x7f < uVar2) {
    uVar2 = 0x80;
  }
  *(ushort *)(param_1 + 0x40) = uVar4 & 0xff00 | uVar2;
  func_0x00056b48(param_1,1);
  func_0x00055d5c(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  func_0x0005444c(param_1);
  iVar5 = (int)*(short *)(param_1 + 0x44);
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = -iVar5;
  }
  sVar1 = (short)(iVar3 + -0xe0);
  if ((iVar3 + -0xe0) * 0x10000 < 1) {
    sVar1 = 0;
  }
  if (-1 < iVar5) {
    *(short *)(param_1 + 0x44) = sVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x44) = -sVar1;
  if ((_DAT_800e7e68 & (_DAT_1f800174 | _DAT_1f800172 | _DAT_1f800170 | 0xf0)) != 0) {
    uVar2 = func_0x0009a450();
    *(ushort *)(param_1 + 0x58) = *(short *)(param_1 + 0x7e) + ((uVar2 & 0x1f) - 0x10) * 4;
    if ((*(ushort *)(param_1 + 0x40) & 0xff) < 10) {
      uVar2 = *(ushort *)(param_1 + 0x40) + 0x100 & 0xff00;
      *(ushort *)(param_1 + 0x40) = uVar2;
      if ((short)uVar2 < 0x500) goto LAB_00002968;
      *param_1 = 1;
      param_1[0x177] = param_1[0x177] & 2;
      func_0x00054198();
      param_1[4] = 1;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0x40) = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x7e);
LAB_00002968:
  func_0x00056c00(param_1,1);
  if (param_1[0x29] != '\0') {
    DAT_800bf81e = 1;
  }
  return;
}

