// FUN_0801f660

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0801f660(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x0007a980(0,2,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80118158;
    *(int *)(iVar1 + 0x10) = param_1;
    *(undefined1 *)(iVar1 + 2) = 0x49;
    *(char *)(iVar1 + 3) = (char)param_2;
    if (param_2 == 0) {
      *(undefined2 *)(iVar1 + 100) = *(undefined2 *)(param_1 + 0x70);
      *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
      *(undefined2 *)(iVar1 + 0x60) = *(undefined2 *)(param_1 + 0x60);
      *(undefined1 *)(iVar1 + 0x46) = *(undefined1 *)(param_1 + 0xbe);
      _DAT_1f8000c0 = 0x96;
      _DAT_1f8000c2 = 0xffec;
      _DAT_1f8000c4 = 0;
      func_0x000844c0(*(int *)(param_1 + 0xc4) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
      *(short *)(iVar1 + 0x2e) = *(short *)(*(int *)(param_1 + 0xc4) + 0x2c) + _DAT_1f8000c8;
      *(short *)(iVar1 + 0x32) = *(short *)(*(int *)(param_1 + 0xc4) + 0x30) + _DAT_1f8000ca;
      *(short *)(iVar1 + 0x36) = *(short *)(*(int *)(param_1 + 0xc4) + 0x34) + _DAT_1f8000cc;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined2 *)(iVar1 + 0x60) = *(undefined2 *)(param_1 + 0x60);
    iVar2 = iVar1;
  }
  return iVar2;
}

