// FUN_08037144

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08037184) */

undefined4 FUN_08037144(void)

{
  short in_v0;
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int unaff_s0;
  int unaff_s2;
  short unaff_s3;
  undefined2 unaff_s4;
  
  *(short *)(unaff_s0 + 100) = in_v0;
  if (in_v0 == 0) {
    *(undefined2 *)(unaff_s0 + 100) = unaff_s4;
  }
  if (*(short *)(unaff_s0 + 100) == 0) {
    trap(0x1c00);
  }
  *(undefined2 *)(unaff_s0 + 0x44) = 0x1000;
  *(short *)(unaff_s0 + 100) = (short)(0x1000 / (int)*(short *)(unaff_s0 + 100));
  if (unaff_s3 == -1) {
    uVar1 = func_0x00085690(-(int)*(short *)(unaff_s0 + 0x4c),(int)*(short *)(unaff_s0 + 0x48));
    *(ushort *)(unaff_s0 + 0x56) = uVar1 & 0xfff;
  }
  else if (unaff_s3 == 0) {
    *(undefined1 *)(unaff_s0 + 0x78) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = func_0x00085690(-(int)*(short *)(unaff_s0 + 0x4c),(int)*(short *)(unaff_s0 + 0x48));
  *(ushort *)(unaff_s0 + 0x66) = uVar1 & 0xfff;
  *(char *)(unaff_s0 + 0x78) = *(char *)(unaff_s0 + 0x78) + '\x01';
  iVar3 = func_0x00041438();
  if (iVar3 != 0) {
    *(char *)(unaff_s0 + 0x78) = *(char *)(unaff_s0 + 0x78) + '\x01';
  }
  if (unaff_s3 != 1) {
    func_0x00041768();
    if (*(short *)(*(int *)(unaff_s0 + 0x38) + 2) == 0) {
      iVar3 = (uint)*(ushort *)(unaff_s0 + 0x44) - (uint)*(ushort *)(unaff_s0 + 100);
      *(short *)(unaff_s0 + 0x44) = (short)iVar3;
      if (iVar3 * 0x10000 < 1) {
        *(undefined2 *)(unaff_s0 + 0x44) = 0;
      }
      iVar3 = (int)*(short *)(unaff_s0 + 0x44) * (int)*(short *)(unaff_s0 + 0x48);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xfff;
      }
      iVar4 = (int)*(short *)(unaff_s0 + 0x44) * (int)*(short *)(unaff_s0 + 0x4c);
      *(short *)(unaff_s0 + 0x2e) = *(short *)(unaff_s2 + 4) - (short)(iVar3 >> 0xc);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      *(short *)(unaff_s0 + 0x36) = *(short *)(unaff_s2 + 6) - (short)(iVar4 >> 0xc);
      func_0x00130e20();
      iVar3 = func_0x00130f50();
      if (iVar3 != 0) {
        if (0x1400 < *(short *)(unaff_s0 + 0x50)) {
          func_0x00074590(3,0,0);
        }
        *(undefined2 *)(unaff_s0 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar2 = *(short *)(unaff_s0 + 0x50) + 0x800;
      *(short *)(unaff_s0 + 0x50) = sVar2;
      if (0x3000 < sVar2) {
        *(undefined2 *)(unaff_s0 + 0x50) = 0x3000;
      }
      *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x50) * 0x100;
    }
    *(undefined1 *)(unaff_s0 + 0x29) = 0;
    if (*(short *)(unaff_s0 + 0x44) == 0) {
      if (*(char *)(unaff_s0 + 0x7b) != -1) {
        func_0x00041768();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = func_0x00042ea4();
    if (iVar3 != 0) {
      func_0x000521f4(0,0,0xf1,2);
    }
  }
  return 0;
}

