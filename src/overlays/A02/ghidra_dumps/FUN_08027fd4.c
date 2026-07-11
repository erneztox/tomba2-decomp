// FUN_08027fd4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08028064) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08027fd4(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = _DAT_1f800214;
  if (*(char *)(param_1 + 5) == '\0') {
    iVar3 = func_0x0007778c(param_1);
    if ((iVar3 != 0) && (*(char *)(param_1 + 0x2b) == '\x03')) {
      func_0x00040d68(param_1,0x800a3cc0);
      *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x080280a8 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef687c))();
        return;
      }
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = *(byte *)(param_1 + 6);
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 5) {
        *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bfa03 < 0xd) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
        iVar5 = (int)*(short *)(iVar4 + 0x30);
        iVar4 = (int)*(short *)(iVar4 + 0x2c);
        sVar2 = func_0x00085690(*(short *)(param_1 + 0x36) - iVar5,
                                iVar4 - *(short *)(param_1 + 0x2e));
        func_0x00041438(param_1,(int)sVar2,0x120);
        sVar2 = func_0x00085690(*(short *)(iVar3 + 0x36) - iVar5,iVar4 - *(short *)(iVar3 + 0x2e));
        func_0x00041438(iVar3,(int)sVar2,0x120);
        sVar2 = func_0x00085690(_DAT_800e7eb6 - iVar5,iVar4 - _DAT_800e7eae);
        func_0x00041438(&DAT_800e7e80,(int)sVar2,0x120);
      }
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
  }
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
  }
  return;
}

