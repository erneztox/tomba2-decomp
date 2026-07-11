// FUN_08024e24

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024e24(int param_1)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 == 1) {
    if (DAT_800bf816 != '\0') {
      bVar2 = *(byte *)(param_1 + 0x5e);
      if (bVar2 == 1) {
        func_0x0011d70c(param_1);
      }
      else if (bVar2 < 2) {
        if (bVar2 == 0) {
          func_0x0011cd30(param_1);
        }
      }
      else if (bVar2 == 2) {
        func_0x0011da2c(param_1);
        if (*(char *)(param_1 + 1) != '\0') {
          func_0x00076d68(param_1);
          func_0x000518fc(param_1);
          halt_baddata();
        }
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        if (bVar2 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar2 == 0) {
      iVar3 = func_0x0011eb84(param_1,0);
      if (iVar3 == 0) {
        return;
      }
      if (DAT_800bf8cd == -1) {
        func_0x0007addc(param_1);
        iVar3 = func_0x000519e0(param_1,5,_DAT_800ecfd0,0x8013ba3c);
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfd8;
        }
        func_0x00077c40(param_1,0x80142108,4);
        bVar2 = func_0x0009a450();
        *(byte *)(param_1 + 0x46) = bVar2;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(ushort *)(param_1 + 0x56) = (ushort)bVar2 << 4;
        *(undefined2 *)(param_1 + 0x2e) =
             *(undefined2 *)((*(byte *)(param_1 + 3) - 4) * 6 + -0x7fec1dc0);
        *(undefined2 *)(param_1 + 0x32) =
             *(undefined2 *)(((*(byte *)(param_1 + 3) - 4) * 3 + 1) * 2 + -0x7fec1dc0);
        uVar1 = *(undefined2 *)(((*(byte *)(param_1 + 3) - 4) * 3 + 2) * 2 + -0x7fec1dc0);
        *(undefined1 *)(param_1 + 0x5e) = 1;
        *(undefined2 *)(param_1 + 0x36) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0xe83;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

