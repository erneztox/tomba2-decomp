// FUN_0000eb40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000eb40(undefined1 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (param_1[3] == '\0') {
    *param_1 = 2;
    param_1[0xb] = 0xff;
    param_1[0xd] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[0xb] = 0x16;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x7c) = 0x80111fd8;
  param_1[0xd] = 1;
  param_1[0x29] = 0;
  param_1[0x5f] = 0;
  param_1[0x2b] = 0;
  param_1[0x5e] = 0;
  param_1[0xbf] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  iVar2 = func_0x0004766c(param_1);
  if (iVar2 == 0) {
    param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[4] = 1;
  func_0x00049760(param_1);
  uVar1 = _DAT_1f8001a0;
  *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
  *(undefined2 *)(param_1 + 0x60) = uVar1;
  *(undefined2 *)(param_1 + 100) = 300;
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined2 *)(param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0x46;
  *(undefined2 *)(param_1 + 0x82) = 0x8c;
  *(undefined2 *)(param_1 + 0x84) = 0x14;
  *(undefined2 *)(param_1 + 0x86) = 0x28;
  return;
}

