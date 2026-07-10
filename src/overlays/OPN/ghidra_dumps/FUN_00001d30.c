// FUN_00001d30

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001d30(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    uVar3 = func_0x00076d68(param_1);
    func_0x0018a300(param_1,uVar3);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf9ed != '\0') {
        *(undefined1 *)(param_1 + 1) = 1;
        *(undefined1 *)(param_1 + 0x147) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
      if ((_DAT_1f80017c & 0x1f) != 0) {
        if ((_DAT_1f80017c & 0xf) != 0) {
          return;
        }
        uVar2 = func_0x0009a450();
        if ((uVar2 & 1) == 0) {
          return;
        }
      }
      func_0x00074590(2,0,0);
    }
  }
  else if (bVar1 == 2) {
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x145) = 0;
    func_0x00054198(param_1);
    *(undefined1 *)(param_1 + 4) = 6;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

