// FUN_08012b20

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012b20(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        DAT_800bf80e = 0;
        *(undefined1 *)(param_1 + 0x146) = 0;
        func_0x00053d90(param_1);
        func_0x00054198(param_1);
        func_0x00054d14(param_1,0xdf,4);
        func_0x00074590(0x3a,0,0);
        *(undefined2 *)(param_1 + 0x40) = 0x1e;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x00076d68(param_1);
      func_0x000551c4(param_1);
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        DAT_800bf80e = 1;
        *(undefined1 *)(param_1 + 4) = 4;
        *(undefined1 *)(param_1 + 5) = 0x20;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x146) = 0;
    func_0x00053d90(param_1);
    func_0x00054198(param_1);
    func_0x00054d14(param_1,0xe0,4);
    func_0x00074590(0x3a,0,0);
    *(undefined1 *)(param_1 + 0x167) = 0x1e;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined2 *)(param_1 + 0x40) = 7;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  *(undefined1 *)(param_1 + 0x14b) = 3;
  *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x147) & 0x7f;
  func_0x0010a8d0(param_1);
  func_0x00054e80(param_1,0);
  iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  sVar2 = *(short *)(param_1 + 0x44);
  iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar3 * sVar2 >> 4);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar4 * *(short *)(param_1 + 0x44) >> 4);
  _DAT_1f8000c0 = 0;
  _DAT_1f8000c2 = *(undefined2 *)(param_1 + 0x62);
  _DAT_1f8000c4 = 0;
  func_0x001258a4(param_1 + 0x2c);
  func_0x00076d68(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
  func_0x0010b634(param_1);
  if ((*(char *)(param_1 + 0x29) != '\0') &&
     (func_0x0010aec4(param_1), *(char *)(param_1 + 0x29) != '\0')) {
    if (0x1e00 < *(short *)(param_1 + 0x50)) {
      func_0x00074590(3,0,0);
    }
    *(undefined2 *)(param_1 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(param_1 + 0x50) + 0x800;
  *(short *)(param_1 + 0x50) = sVar2;
  if (0x3000 < sVar2) {
    *(undefined2 *)(param_1 + 0x50) = 0x3000;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
  if (*(char *)(param_1 + 0x167) == '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    *(char *)(param_1 + 0x167) = *(char *)(param_1 + 0x167) + -1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

