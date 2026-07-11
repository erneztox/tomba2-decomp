// FUN_080382ac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080382ac(int param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if ((DAT_800e7ea9 & 0x80) == 0) {
      return;
    }
    func_0x00040d68(param_1,0x80141d60);
    *(undefined1 *)(param_1 + 0x70) = 2;
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0004766c(param_1);
      uVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(ushort *)(param_1 + 0x4a) = uVar2;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + ((int)((uint)uVar2 << 0x10) >> 8);
      func_0x00041938(param_1,0,0x60);
      if (*(char *)(param_1 + 0x29) == '\0') {
        return;
      }
      if ((_DAT_800bfe56 & 0x10) == 0) {
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x50;
        func_0x0003116c(0xd,param_1 + 0x2c,0xffffffec);
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x50;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00074590(3,0,0);
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x40;
      if (*(char *)(param_1 + 0x46) != -0x3d) {
        func_0x000416a8(param_1,0xffffffff,0);
        func_0x00041718(param_1,0xc3,4);
      }
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + -200;
      DAT_800bf929 = DAT_800bf929 | 0x10;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return;
    }
    bVar1 = *(byte *)(param_1 + 7);
    if (bVar1 == 1) {
      if ((_DAT_800bfe56 & 0x10) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00040d68(param_1,0x80141d90);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined1 *)(param_1 + 0x7a) = 10;
        func_0x00040d68(param_1,0x80141cb0);
        *(undefined1 *)(param_1 + 0x70) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (bVar1 == 2) {
      *(undefined1 *)(param_1 + 4) = 3;
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

