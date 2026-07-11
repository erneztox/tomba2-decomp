// FUN_08017dd0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017dd0(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = func_0x0010c8b4();
  if (iVar2 < 0) {
    return;
  }
  if (iVar2 == 1) {
    if ((*(byte *)(param_1 + 0x5f) & 1) == 0) {
      *(undefined2 *)(param_1 + 0x142) = 0xfd00;
    }
    else {
      *(undefined2 *)(param_1 + 0x142) = 0x300;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_2 + 3) == '\b') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_2 + 3) != '\x06') {
    iVar2 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
    uVar1 = 0x100;
    if (iVar2 != 0) goto LAB_08017e64;
  }
  uVar1 = 0xff00;
LAB_08017e64:
  *(undefined2 *)(param_1 + 0x142) = uVar1;
  *(undefined1 *)(param_1 + 0x16a) = 10;
  return;
}

