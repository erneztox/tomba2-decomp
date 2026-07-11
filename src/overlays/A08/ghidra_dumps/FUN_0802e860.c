// FUN_0802e860

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802e860(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int unaff_s1;
  
  if (param_1 == param_3) {
    *(char *)(unaff_s1 + 1) = (char)param_1;
    if (DAT_800bfa42 == -0x7c) {
      *(char *)(unaff_s1 + 5) = *(char *)(unaff_s1 + 5) + '\x01';
    }
    if ((_DAT_1f80017c & 7) != 0) {
LAB_0802ea14:
      if (*(char *)(unaff_s1 + 1) != '\0') {
        func_0x000517f8();
      }
      return;
    }
    *(short *)(unaff_s1 + 0x32) = *(short *)(unaff_s1 + 0x32) + -0x1e;
    func_0x0003116c(0x90a,unaff_s1 + 0x2c,0xffffffec);
    *(short *)(unaff_s1 + 0x32) = *(short *)(unaff_s1 + 0x32) + 0x1e;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      func_0x0007778c();
      if (DAT_800bfa42 == -0x7f) {
        *(undefined2 *)(unaff_s1 + 0x2e) = 0x3280;
        *(undefined2 *)(unaff_s1 + 0x32) = 0xec80;
        *(undefined2 *)(unaff_s1 + 0x36) = 0x1100;
        *(undefined2 *)(unaff_s1 + 0x58) = 0;
        *(undefined2 *)(unaff_s1 + 0x54) = 0;
        *(undefined2 *)(unaff_s1 + 0x56) = 0x51c;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0802ea14;
    }
  }
  else if (param_1 == 2) {
    *(char *)(unaff_s1 + 1) = (char)param_3;
    sVar1 = func_0x00085690((int)((0x11d7 - (uint)*(ushort *)(unaff_s1 + 0x36)) * 0x10000) >> 0x10,
                            (int)((0x30d4 - (uint)*(ushort *)(unaff_s1 + 0x2e)) * 0x10000) >> 0x10);
    iVar2 = func_0x00083f50((int)-sVar1);
    *(short *)(unaff_s1 + 0x48) = (short)(iVar2 >> 4);
    iVar2 = func_0x00083e80((int)-sVar1);
    *(short *)(unaff_s1 + 0x4c) = (short)(-iVar2 >> 4);
    *(undefined2 *)(unaff_s1 + 0x44) = 0x800;
    *(char *)(unaff_s1 + 5) = *(char *)(unaff_s1 + 5) + '\x01';
  }
  else if (param_1 == 3) {
    *(char *)(unaff_s1 + 1) = (char)param_3;
    *(int *)(unaff_s1 + 0x2c) =
         *(int *)(unaff_s1 + 0x2c) +
         (int)*(short *)(unaff_s1 + 0x48) * (int)*(short *)(unaff_s1 + 0x44);
    *(int *)(unaff_s1 + 0x34) =
         *(int *)(unaff_s1 + 0x34) +
         (int)*(short *)(unaff_s1 + 0x4c) * (int)*(short *)(unaff_s1 + 0x44);
    if (*(short *)(unaff_s1 + 0x2e) < 0x30d5) {
      *(undefined1 *)(unaff_s1 + 4) = 3;
    }
    goto LAB_0802ea14;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

