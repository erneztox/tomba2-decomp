// FUN_08013574

/* WARNING: Control flow encountered bad instruction data */

void FUN_08013574(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        func_0x00054d14(param_1,2,6);
        if (DAT_1f800137 == '\x01') {
          DAT_800bf80e = 1;
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 5) {
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x40) = 0x11;
        *(undefined2 *)(param_1 + 0x44) = 0x800;
        *(undefined1 *)(param_1 + 6) = 1;
        func_0x00054d14(param_1,4,0);
      }
      goto LAB_08013730;
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x40) = 0x11;
    *(undefined2 *)(param_1 + 0x44) = 0x1000;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x00054d14(param_1,4,0);
  }
  iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  sVar2 = *(short *)(param_1 + 0x44);
  iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar3 * sVar2 >> 4);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar4 * *(short *)(param_1 + 0x44) >> 4);
  func_0x00076d68(param_1);
  if (((int)*(short *)(param_1 + 0x40) % 7 & 0xffffU) == 0) {
    func_0x00074590(0,5,0);
  }
  sVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar2 + -1;
  if (sVar2 == 1) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08013730:
  *(undefined1 *)(param_1 + 0x29) = 0x81;
  return;
}

