// FUN_080412f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080412f8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      func_0x0013a7f8(param_1);
      *(undefined1 *)(param_1 + 0x2b) = 0;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0013a518(param_1);
        *(undefined1 *)(param_1 + 0x2b) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x2b) = 0;
      }
    }
    else {
      if (bVar1 == 2) {
        func_0x0013a6b8(param_1);
        *(undefined1 *)(param_1 + 0x2b) = 0;
        func_0x000518fc(param_1);
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x2b) = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x000519e0(param_1,8,_DAT_800ed004,0x8013fefc);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ed008;
      func_0x00040cdc(param_1,0x801461bc,0x800a3d70);
      return;
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

