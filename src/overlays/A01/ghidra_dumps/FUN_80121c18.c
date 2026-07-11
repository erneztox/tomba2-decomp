// FUN_80121c18

/* WARNING: Control flow encountered bad instruction data */

void FUN_80121c18(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  
  if (*(char *)(param_1 + 0x47) == '\x02') {
    return;
  }
  if (*(char *)(param_1 + 0x2b) == '\0') {
    uVar2 = *(short *)(param_1 + 0x7c) + 0x1e0U & 0xfff;
    *(ushort *)(param_1 + 0x7c) = uVar2;
    if (0x1df < uVar2) {
      return;
    }
    if (*(short *)(param_1 + 0x7e) == 0) {
      return;
    }
    *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + -8;
    return;
  }
  uVar3 = *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) / 0x140;
  if (uVar3 == 0) {
    *(undefined2 *)(unaff_s0 + 0x70) = 1;
    iVar4 = func_0x80083e80();
    *(short *)(unaff_s0 + 0x72) = *(short *)(unaff_s0 + 0x40) + (short)(iVar4 >> 6);
    *(short *)(unaff_s0 + 0x40) = *(short *)(unaff_s0 + 0x40) + 0xc;
    uVar2 = func_0x8009a450();
    *(ushort *)(unaff_s0 + 0x42) = *(short *)(unaff_s0 + 0x42) + (uVar2 & 0xff);
    if ((byte)unaff_s0[5] != 0) {
      if ((byte)unaff_s0[5] != unaff_s2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(uint *)(unaff_s1 + 0xc) =
           *(int *)(unaff_s1 + 0xc) + (0x1000U - *(int *)(unaff_s1 + 0xc) >> 3);
      goto LAB_8012aca4;
    }
    uVar3 = (uint)(byte)unaff_s0[6];
  }
  else {
    uVar1 = (undefined2)(uVar3 << 3);
    if (4 < uVar3) {
      uVar1 = 0x20;
    }
    *(undefined2 *)(param_1 + 0x7c) = 0;
    *(undefined2 *)(param_1 + 0x7e) = uVar1;
    uVar3 = func_0x80074590(0x81,0,0);
  }
  if (uVar3 < 4) {
    *unaff_s0 = 2;
    unaff_s0[5] = (char)unaff_s2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_8012aca4:
  *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + *(short *)(unaff_s0 + 0x4e) * 0x100;
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x50) * 0x100;
  *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + *(short *)(unaff_s0 + 0x52) * 0x100;
  func_0x8007778c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

