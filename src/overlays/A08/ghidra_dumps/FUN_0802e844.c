// FUN_0802e844

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802e844(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    if (DAT_800bfa42 == -0x7c) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    if ((_DAT_1f80017c & 7) != 0) {
LAB_0802ea14:
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x000517f8(param_1);
      }
      return;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x1e;
    func_0x0003116c(0x90a,param_1 + 0x2c,0xffffffec);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x1e;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0007778c(param_1);
      if (DAT_800bfa42 == -0x7f) {
        *(undefined2 *)(param_1 + 0x2e) = 0x3280;
        *(undefined2 *)(param_1 + 0x32) = 0xec80;
        *(undefined2 *)(param_1 + 0x36) = 0x1100;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0x51c;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0802ea14;
    }
  }
  else if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 1) = 1;
    sVar2 = func_0x00085690((int)((0x11d7 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10,
                            (int)((0x30d4 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10);
    iVar3 = func_0x00083f50((int)-sVar2);
    *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
    iVar3 = func_0x00083e80((int)-sVar2);
    *(short *)(param_1 + 0x4c) = (short)(-iVar3 >> 4);
    *(undefined2 *)(param_1 + 0x44) = 0x800;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 == 3) {
    *(undefined1 *)(param_1 + 1) = 1;
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
    if (*(short *)(param_1 + 0x2e) < 0x30d5) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    goto LAB_0802ea14;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

