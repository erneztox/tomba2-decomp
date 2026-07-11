// FUN_0802c5c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802c664) */
/* WARNING: Removing unreachable block (ram,0x0802c674) */
/* WARNING: Removing unreachable block (ram,0x0802c67c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802c5c4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 == 1) {
      *(undefined2 *)(param_1 + 0x40) = 10;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x4e) * 0x1000;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x1000;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x52) * 0x1000;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      iVar5 = _DAT_800bf854 * 6;
      *(short *)(param_1 + 0x7a) = *(short *)(iVar5 + -0x7fec118c) + -0x1c2;
      *(short *)(param_1 + 0x7c) = *(short *)(iVar5 + -0x7fec118a) + -0xe1;
      uVar2 = *(undefined2 *)(iVar5 + -0x7fec1188);
      *(undefined2 *)(param_1 + 0x40) = 0x2d;
      iVar5 = (int)*(short *)(param_1 + 0x40);
      iVar7 = ((int)*(short *)(param_1 + 0x7c) - (int)*(short *)(param_1 + 0x32)) * 0x10;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      *(undefined2 *)(param_1 + 0x7e) = uVar2;
      iVar6 = (int)*(short *)(param_1 + 0x40);
      iVar4 = ((int)*(short *)(param_1 + 0x7e) - (int)*(short *)(param_1 + 0x36)) * 0x10;
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && (iVar4 == -0x80000000)) {
        trap(0x1800);
      }
      *(short *)(param_1 + 0x4e) =
           (short)((((int)*(short *)(param_1 + 0x7a) - (int)*(short *)(param_1 + 0x2e)) * 0x10) /
                  0x2d);
      *(short *)(param_1 + 0x50) = (short)(iVar7 / iVar5);
      *(short *)(param_1 + 0x52) = (short)(iVar4 / iVar6);
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 == 1) {
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    if ((_DAT_1f80017c & 7) == 0) {
      func_0x00074590(0x93,0,0);
    }
    _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
    _DAT_800e8046 = *(undefined2 *)(param_1 + 0x32);
    _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
    _DAT_800e8078 = 0;
    _DAT_800e8074 = -_DAT_1f8000ee;
    _DAT_800e8076 = 0x80;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

