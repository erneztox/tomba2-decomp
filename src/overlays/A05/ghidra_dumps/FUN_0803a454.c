// FUN_0803a454

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803a454(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf816 != '\0') {
      iVar2 = func_0x0007778c(param_1);
      if (iVar2 == 0) {
        return;
      }
      bVar1 = *(byte *)(param_1 + 3);
      if (bVar1 == 3) {
        func_0x0013311c(param_1);
      }
      else if (bVar1 < 4) {
        func_0x00132be4(param_1);
      }
      else if (bVar1 == 4) {
        func_0x001332b0(param_1);
        func_0x00076d68(param_1);
        func_0x000518fc(param_1);
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 3;
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
      iVar2 = func_0x000519e0(param_1,5,_DAT_800ecfcc,0x8013ba14);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfd8;
      }
      bVar1 = *(char *)(param_1 + 3) - 0x32;
      *(byte *)(param_1 + 3) = bVar1;
      iVar2 = (uint)bVar1 * 6;
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar2 + -0x7fec0b4c);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar2 + -0x7fec0b4a);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar2 + -0x7fec0b48);
      func_0x00077c40(param_1,0x80142108,4);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

