// FUN_08013080

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08013080(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_18 [2];
  short local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x4a) < 0x3000) {
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x200;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    if (*(short *)(param_1 + 0x32) < *(short *)(param_1 + 0x60)) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x60);
    iVar3 = func_0x00031220(0xa02,0,0);
    if (iVar3 != 0) {
      *(char *)(iVar3 + 3) = *(char *)(param_1 + 3) + '\x01';
      *(undefined2 *)(iVar3 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
      *(short *)(iVar3 + 0x2e) = *(short *)(param_1 + 0x32) + -0x96;
      *(undefined2 *)(iVar3 + 0x30) = *(undefined2 *)(param_1 + 0x36);
      if (*(char *)(param_1 + 3) == '\0') {
        *(undefined2 *)(iVar3 + 0x50) = 0x780;
        *(undefined2 *)(iVar3 + 0x52) = 0xfcc8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(iVar3 + 0x50) = 0xd00;
      *(undefined2 *)(iVar3 + 0x52) = 0xfb17;
      *(undefined2 *)(iVar3 + 0x54) = 0xced;
      *(int *)(param_1 + 0x10) = iVar3;
    }
    *(undefined2 *)(param_1 + 0x40) = 8;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    DAT_800e807e = 4;
    local_16 = *(undefined2 *)(param_1 + 0x2e);
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfd;
    local_12 = *(undefined2 *)(param_1 + 0x32);
    local_e = *(undefined2 *)(param_1 + 0x36);
    func_0x0003116c(0,auStack_18,0xffffffc0);
    local_16 = *(short *)(param_1 + 0x2e) + 0x40;
    func_0x0003116c(0,auStack_18,0xffffffc0);
    local_16 = *(short *)(param_1 + 0x2e) + -0x40;
    func_0x0003116c(0,auStack_18);
    func_0x00074590(0x32,0xfffffff2,0);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      if ((ushort)DAT_800bfa41 != *(ushort *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fef1c5c)) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x1a) = 0xff;
      *(undefined1 *)(param_1 + 0x19) = 0xff;
      *(undefined1 *)(param_1 + 0x18) = 0xff;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x32);
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -600;
      _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
      iVar3 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
      _DAT_800e8046 = *(short *)(param_1 + 0x60) - (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
      _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 != -1) {
      return 0;
    }
    DAT_800e807e = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

