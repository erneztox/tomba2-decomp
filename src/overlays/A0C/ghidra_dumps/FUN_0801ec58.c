// FUN_0801ec58

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ec58(undefined1 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = func_0x0009a450();
  param_1[0xb] = 0x16;
  *(undefined4 *)(param_1 + 0x7c) = 0x8011353c;
  *(undefined4 *)(param_1 + 0x78) = 0x8011c6f4;
  *(undefined2 *)(param_1 + 0x82) = 0x78;
  *(undefined2 *)(param_1 + 0x86) = 0x78;
  param_1[0xd] = 1;
  *param_1 = 1;
  param_1[0x29] = 0;
  param_1[0x5f] = 0;
  param_1[0x2b] = 0;
  param_1[0xbf] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0x3c;
  *(undefined2 *)(param_1 + 0x84) = 0x3c;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  param_1[0x5e] = param_1[3];
  *(undefined2 *)(param_1 + 100) = 300;
  *(undefined2 *)(param_1 + 0x62) = 0;
  iVar3 = iVar2 * 6 >> 0xf;
  iVar2 = func_0x0004766c(param_1);
  if (iVar2 == -1) {
    param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[4] = 1;
  if (param_1[3] != '\0') {
    iVar2 = (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
    iVar3 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
    sVar1 = func_0x00084080(iVar2 * iVar2 + iVar3 * iVar3);
    *(undefined2 *)(param_1 + 0x50) = 0xfe2b;
    if (param_1[0xbe] != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x4e) = (short)((sVar1 * 0x12) / 0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[0xbe] == '\0') {
    *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(iVar3 * 4 + -0x7fed9750);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x4e) = -*(short *)(iVar3 * 4 + -0x7fed9750);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(iVar3 * 4 + -0x7fed974e);
  return;
}

