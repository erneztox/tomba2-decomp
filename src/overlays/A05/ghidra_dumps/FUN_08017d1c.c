// FUN_08017d1c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017d1c(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      func_0x00076d68(param_1);
      if (((_DAT_800e7e68 & 0x10) == 0) && (iVar2 = func_0x00055824(), iVar2 == 0)) {
        if ((_DAT_800ecf54 & 0x40) == 0) {
          func_0x0011099c(param_1,2);
          return;
        }
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
        func_0x0011099c(param_1,1);
        *(undefined1 *)(param_1 + 6) = 1;
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 7;
      *(undefined1 *)(param_1 + 6) = 2;
      *(undefined1 *)(param_1 + 7) = 0;
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x00054198(param_1);
    *(undefined2 *)(param_1 + 0x6a) = 0;
    if ((*(byte *)(param_1 + 0x15c) & 2) != 0) {
      func_0x00054d14(param_1,0x18,3);
      *(undefined1 *)(param_1 + 6) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00054d14(param_1,0x40,3);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  func_0x00076d68(param_1);
  if ((_DAT_800ecf54 & 0x10) == 0) {
    if ((_DAT_800ecf54 & 0x40) == 0) {
      func_0x00054d14(param_1,0x40,4);
      func_0x0011099c(param_1,2);
    }
    else {
      func_0x00054d14(param_1,0x43,0);
      func_0x0011099c(param_1,1);
      if ((_DAT_1f80017c & 3) == 0) {
        func_0x00074590(5,0xfffffffe,0xffffffc4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else {
    func_0x00054d14(param_1,0x41,0);
    func_0x0011099c(param_1,0);
    if ((_DAT_1f80017c & 3) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar2 = func_0x00055824();
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 5) = 4;
    *(undefined1 *)(param_1 + 6) = 2;
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x40) = 8;
    func_0x00074590(0x1d,0,0);
    func_0x00055e28(param_1,0);
    *(byte *)(param_1 + 0x149) = (*(byte *)(param_1 + 0x14a) & 1) + 2;
    func_0x00054d14(param_1,0x14,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

