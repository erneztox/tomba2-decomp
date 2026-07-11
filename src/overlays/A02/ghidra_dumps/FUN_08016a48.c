// FUN_08016a48

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016a48(int param_1)

{
  bool bVar1;
  int iVar2;
  
  func_0x0010a6e8();
  *(undefined1 *)(param_1 + 1) = 1;
  bVar1 = DAT_1f800236 == '\x05';
  *(undefined2 *)(param_1 + 0x6a) = 0;
  if (bVar1) {
    if (DAT_800bf871 != '\x01') {
      *(undefined2 *)(param_1 + 0x56) = 0x400;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (DAT_800bf871 == '\b') {
    DAT_1f800137 = 2;
    *(undefined1 *)(param_1 + 4) = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x56) = 0xc00;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x172) = 0;
  func_0x00054d14(param_1,2,0);
  iVar2 = func_0x0003315c(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x8010cfac;
  }
  _DAT_1f8001c6 = 0;
  return;
}

