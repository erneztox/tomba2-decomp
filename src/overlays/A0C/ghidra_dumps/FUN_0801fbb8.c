// FUN_0801fbb8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801fbb8(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  *(undefined2 *)(param_1 + 0x62) = 300;
  *(undefined2 *)(param_1 + 0x42) = 0;
  iVar2 = func_0x0004766c();
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 4) = 1;
  func_0x00049760(param_1);
  uVar1 = _DAT_1f8001a0;
  *(undefined2 *)(param_1 + 0x44) = 0x100;
  *(undefined2 *)(param_1 + 0x60) = uVar1;
  *(undefined2 *)(param_1 + 0x56) = uVar1;
  if (*(char *)(param_1 + 0xbe) != '\0') {
    *(undefined2 *)(param_1 + 100) = 0x800;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0x50;
  *(undefined2 *)(param_1 + 0x82) = 0xa0;
  *(undefined2 *)(param_1 + 0x84) = 0x50;
  *(undefined2 *)(param_1 + 0x86) = 0xa0;
  iVar2 = func_0x000310f4(0xd01,0);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x10) = param_1;
  }
  return;
}

