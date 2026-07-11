// FUN_0801aea0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0801aea0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x00054198(param_1);
    func_0x00054d14(param_1,0x40,0);
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((_DAT_800ecf54 & 0x10) == 0) {
    if ((_DAT_800ecf54 & 0x40) != 0) {
      if ((_DAT_1f80017c & 3) == 0) {
        func_0x00074590(5,0xfffffffe,0xffffffc4);
      }
      func_0x00054d14(param_1,0x42,0);
      func_0x00076d68(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00076d68(param_1);
    func_0x00054d14(param_1,0x40,4);
    iVar1 = func_0x0006271c(param_1,2);
    if ((iVar1 != 0) && (iVar1 = func_0x00055824(), iVar1 != 0)) {
      *(undefined1 *)(param_1 + 5) = 4;
      *(undefined1 *)(param_1 + 6) = 2;
      *(undefined1 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x40) = 8;
      func_0x00074590(0x1d,0,0);
      func_0x00055e28(param_1,0);
      *(byte *)(param_1 + 0x149) = (*(byte *)(param_1 + 0x14a) & 1) + 2;
      func_0x00054d14(param_1,0x14,0);
    }
    uVar3 = (uint)_DAT_1f8000d6;
    iVar1 = (int)((_DAT_1f8000e2 - uVar3) * 0x10000) >> 0x10;
    if (iVar1 < 1) {
      iVar2 = uVar3 + 600;
      if (iVar1 < -600) {
        iVar2 = (_DAT_1f8000e2 - uVar3) + iVar2;
        _DAT_1f8000d6 = (ushort)iVar2;
      }
    }
    else {
      iVar2 = uVar3 - 2000;
      if (1999 < iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    return iVar2;
  }
  if ((_DAT_1f80017c & 3) == 0) {
    func_0x00074590(5,3,0xffffffc4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

