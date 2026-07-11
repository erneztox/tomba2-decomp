// FUN_08036b54

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_08036b54(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  
  iVar1 = func_0x0013b738(param_1,&DAT_800e7eac,1);
  if ((2 < iVar1) && (5 < iVar1)) {
    uVar2 = func_0x0009a450();
    cVar3 = *(char *)((uVar2 & 0xf) + 0x80148c70);
    uVar2 = (int)_DAT_800e7ffe & 0x8200;
    if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
      if (3 < DAT_1f800207) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (DAT_1f800207 != 0xe) {
      uVar2 = uVar2 | 1;
    }
    if (uVar2 != 0) {
      if (cVar3 == '\x01') {
        cVar3 = '\0';
      }
      else if (cVar3 == '\x03') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    return cVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

