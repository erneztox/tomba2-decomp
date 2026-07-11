// FUN_0801767c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0801767c(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,4,2,0x40);
  _DAT_1f800260 = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8010e8d8;
    *(undefined1 *)(iVar1 + 3) = param_2;
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(short *)(iVar1 + 0x32) = *(short *)(param_1 + 0x32) + 300;
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(iVar1 + 0xbe) = *(undefined1 *)(param_1 + 0xbe);
    DAT_1f80025a = DAT_1f80025a + '\x01';
  }
  return iVar1 != 0;
}

