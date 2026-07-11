// FUN_0801cf00

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801cf00(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar3 = *(int *)(param_1 + 0x14);
  if (bVar1 == 1) {
    iVar3 = func_0x00041438(&DAT_800e7e80,(int)*(short *)(param_1 + 0x4e),0x100);
    if (iVar3 != 0) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      func_0x00040b48(0x7d);
      _DAT_800bf854 = 0x80;
    }
    *(undefined2 *)(param_1 + 0x56) = _DAT_800e7ed6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (DAT_800e7e85 == '\x12') {
      *(undefined1 *)(param_1 + 5) = 1;
      func_0x00054198(&DAT_800e7e80);
      DAT_800e7ee1 = 0;
      uVar2 = func_0x000782b0(&DAT_800e7eac,(int)*(short *)(iVar3 + 0x2e),
                              (int)*(short *)(iVar3 + 0x36));
      *(undefined2 *)(param_1 + 0x4e) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 == 2) {
      if (_DAT_800bf854 == 0) {
        *(undefined1 *)(param_1 + 5) = 3;
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = func_0x0004b528(param_1,iVar3);
      if (iVar3 == 2) {
        _DAT_800bf854 = 1;
        *(undefined1 *)(param_1 + 4) = 3;
      }
    }
    func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077efc();
  }
  return;
}

