// FUN_080229bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080229bc(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 4);
  iVar4 = *(int *)(iVar3 + 0xc0);
  if (bVar1 == 1) {
    if (*(char *)(iVar3 + 4) == '\x03') {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    else {
      cVar2 = *(char *)(iVar3 + 1);
      *(char *)(param_1 + 1) = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      if (*(char *)(param_1 + 3) == '\0') {
        _DAT_1f8000c0 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 3) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      _DAT_1f8000c0 = 0;
      _DAT_1f8000c2 = 0xcb;
      _DAT_1f8000c4 = 0;
      func_0x000844c0(iVar4 + 0x18,&DAT_1f8000c0,param_1 + 0x68);
      *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + *(short *)(iVar4 + 0x2c);
      *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + *(short *)(iVar4 + 0x30);
      *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + *(short *)(iVar4 + 0x34);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 0xb) = 0x14;
      if (*(char *)(param_1 + 3) == '\0') {
        _DAT_1f8000c8 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 3) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      _DAT_1f8000c8 = 0;
      _DAT_1f8000ca = 800;
      _DAT_1f8000cc = 0;
      func_0x000844c0(iVar4 + 0x18,&DAT_1f8000c8,param_1 + 0x60);
      *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + *(short *)(iVar3 + 0x2e);
      *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + *(short *)(iVar3 + 0x32);
      *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + *(short *)(iVar3 + 0x36);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

