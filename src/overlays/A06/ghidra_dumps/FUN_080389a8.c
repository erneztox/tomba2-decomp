// FUN_080389a8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080389a8(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 7) == '\0') {
    func_0x00049760(param_1);
    uVar1 = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x60) = uVar1;
    if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 100) = *(short *)(param_1 + 0x60) + 8;
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
    halt_baddata();
  }
  iVar2 = func_0x0004139c(param_1 + 0x56,(int)*(short *)(param_1 + 100),0x80);
  if (iVar2 != 0) {
    uVar1 = *(undefined2 *)(param_1 + 100);
    *(undefined2 *)(param_1 + 100) = 0xffff;
    *(undefined2 *)(param_1 + 0x56) = uVar1;
    *(char *)(param_1 + 0xbe) = '\x01' - *(char *)(param_1 + 0xbe);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

