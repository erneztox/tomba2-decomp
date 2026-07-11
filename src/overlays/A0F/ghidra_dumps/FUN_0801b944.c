// FUN_0801b944

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b944(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = _DAT_1f80024c;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  if (DAT_1f800250 == '\0') {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar3 + 0x2e);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar3 + 0x32);
  bVar2 = DAT_800e7e7c < 0x10;
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar3 + 0x36);
  if (bVar2) {
    return;
  }
  func_0x00031220(0x1006,param_1 + 0x2c,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

