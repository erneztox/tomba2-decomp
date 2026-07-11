// FUN_80121824

/* WARNING: Control flow encountered bad instruction data */

void FUN_80121824(void)

{
  ushort uVar1;
  int iVar2;
  undefined1 *unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  
  iVar2 = *(short *)((*(byte *)((int)unaff_s1 + 3) - 0xb) * 2 + -0x7fec85f4) * 4;
  if ((*(short *)(iVar2 + -0x7feca460) <= (short)(ushort)DAT_1f800207) &&
     ((short)(ushort)DAT_1f800207 <= *(short *)(iVar2 + -0x7feca45e))) {
    FUN_801291f4();
    *(undefined2 *)(unaff_s0 + 0x6e) = 1;
    *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)((int)unaff_s1 + 0x2b) = 0;
  if (unaff_s2 == 0) {
    unaff_s1[1] = unaff_s1[2];
    if (unaff_s1[2] == 0) {
      unaff_s1[2] = -0x7fec7474;
      unaff_s1[1] = -0x7fec7474;
    }
    *(ushort *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + (ushort)(byte)unaff_s0[6] * -8;
    *unaff_s1 = *unaff_s1 + 0x190019;
    unaff_s0[7] = unaff_s0[7] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s2 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x8004766c();
  iVar2 = func_0x8004951c();
  if (iVar2 == 0) {
    *unaff_s1 = unaff_s1[1];
    if (unaff_s1[1] == 0) {
      unaff_s1[1] = unaff_s1[2] + 4;
      *unaff_s1 = unaff_s1[2] + 4;
    }
    iVar2 = func_0x80083f50((int)*(short *)(unaff_s0 + 0x42));
    *(short *)(unaff_s0 + 0x70) = *(short *)(unaff_s0 + 0x40) + (short)(iVar2 >> 6);
    iVar2 = func_0x80083e80((int)*(short *)(unaff_s0 + 0x42));
    *(short *)(unaff_s0 + 0x72) = *(short *)(unaff_s0 + 0x40) + (short)(iVar2 >> 6);
    *(short *)(unaff_s0 + 0x40) = *(short *)(unaff_s0 + 0x40) + 0xc;
    uVar1 = func_0x8009a450();
    *(ushort *)(unaff_s0 + 0x42) = *(short *)(unaff_s0 + 0x42) + (uVar1 & 0xff);
    if (unaff_s0[5] == '\0') {
      if ((byte)unaff_s0[6] < 4) {
        *unaff_s0 = 2;
        unaff_s0[5] = 1;
        halt_baddata();
      }
    }
    else {
      if (unaff_s0[5] != '\x01') {
        halt_baddata();
      }
      unaff_s1[3] = unaff_s1[3] + (0x1000U - unaff_s1[3] >> 3);
    }
    *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + *(short *)(unaff_s0 + 0x4e) * 0x100;
    *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x50) * 0x100;
    *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + *(short *)(unaff_s0 + 0x52) * 0x100;
    func_0x8007778c();
  }
  else {
    *unaff_s0 = 2;
    unaff_s0[4] = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

