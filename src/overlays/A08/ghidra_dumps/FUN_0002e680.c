// FUN_0002e680

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0002e680(void)

{
  short sVar1;
  int iVar2;
  int in_v1;
  int iVar3;
  int unaff_s0;
  int unaff_s1;
  
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * unaff_s1;
  *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + in_v1 * unaff_s1;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 8;
  *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + *(short *)(unaff_s0 + 0x4c) * unaff_s1;
  func_0x0004766c();
  if (*(char *)(unaff_s0 + 3) == '\x03') {
    iVar3 = (int)(((uint)*(ushort *)(unaff_s0 + 0x7c) - (uint)*(ushort *)(unaff_s0 + 0x2e)) *
                 0x10000) >> 0x10;
    iVar2 = (int)(((uint)*(ushort *)(unaff_s0 + 0x7e) - (uint)*(ushort *)(unaff_s0 + 0x36)) *
                 0x10000) >> 0x10;
    if (iVar3 * iVar3 + iVar2 * iVar2 < 0x40001) {
      func_0x00049250();
      func_0x00049674();
      sVar1 = _DAT_1f8001a0;
      *(short *)(unaff_s0 + 0x60) = _DAT_1f8001a0;
      if (*(char *)(unaff_s0 + 0xbe) == '\0') {
        *(short *)(unaff_s0 + 0x56) = sVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(unaff_s0 + 0x56) = sVar1 + 0x800U & 0xfff;
      return 0;
    }
  }
  else {
    func_0x0004954c();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

