// FUN_0801ef98

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ef98(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(ushort *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0x80U & 0xfff;
    iVar2 = func_0x00083f50();
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar2 * -0x80;
    if (DAT_800bfa22 < 0x2e) {
LAB_0801f0dc:
      func_0x0004b374(param_1,1);
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00051844(param_1);
      return;
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(ushort *)(param_1 + 0xb8) < 0x1000) {
        *(ushort *)(param_1 + 0xb8) = *(ushort *)(param_1 + 0xb8) + 0x100;
        *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + 0x100;
        *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x100;
      }
      else {
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined2 *)(param_1 + 0x50) = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c2 = 0x5a;
    _DAT_1f8000c4 = 0;
    func_0x0004bd64(param_1,1,*(undefined4 *)(_DAT_800bf868 + 0xdc),
                    *(undefined4 *)(_DAT_800bf868 + 0xd0),&DAT_1f8000c0);
    if (0x30 < DAT_800bfa22) {
      *(undefined1 *)(param_1 + 4) = 3;
      func_0x0004d4c4(0x19,1);
      func_0x0004b2e8(param_1);
    }
    goto LAB_0801f0dc;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

