// FUN_80121900

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80121900(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int in_v1;
  undefined1 *unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  
  *(undefined1 *)((int)unaff_s1 + 0x2b) = 0;
  if (*(byte *)((int)unaff_s1 + 3) - 7 < 2) {
    if (in_v1 == 0) {
      *(undefined1 *)((int)unaff_s1 + 1) = 0;
      FUN_8012a960();
      return;
    }
    if (DAT_1f800137 == '\0') {
      if (DAT_800e7eaa != '\x10') goto LAB_801219a8;
      if (_DAT_1f800160 < 0x34bd) {
        FUN_8012a944();
        return;
      }
    }
  }
  else if ((*(byte *)((int)unaff_s1 + 3) != param_2) || (DAT_1f800137 == '\0')) {
LAB_801219a8:
    func_0x800778e4();
    *(undefined1 *)((int)unaff_s1 + 0x2b) = 0;
    goto code_r0x8012ab3c;
  }
  *(undefined1 *)((int)unaff_s1 + 1) = 1;
  func_0x80077ebc();
  *(undefined1 *)((int)unaff_s1 + 0x2b) = 0;
code_r0x8012ab3c:
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

