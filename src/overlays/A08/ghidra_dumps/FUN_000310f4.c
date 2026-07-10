// FUN_000310f4

/* WARNING: Control flow encountered bad instruction data */

void FUN_000310f4(void)

{
  ushort uVar1;
  int iVar2;
  int unaff_s1;
  int unaff_s2;
  
  *(short *)(unaff_s2 + 0x32) =
       (short)((*(int *)(*(int *)(unaff_s1 + 0xd0) + 0x30) +
               *(int *)(*(int *)(unaff_s1 + 0xdc) + 0x30)) / 2);
  *(short *)(unaff_s2 + 0x36) =
       (short)((*(int *)(*(int *)(unaff_s1 + 0xd0) + 0x34) +
               *(int *)(*(int *)(unaff_s1 + 0xdc) + 0x34)) / 2);
  *(ushort *)(unaff_s2 + 0x56) = *(short *)(unaff_s1 + 0x56) - 0x400U & 0xfff;
  iVar2 = func_0x00083f50((int)*(short *)(unaff_s1 + 0x56));
  *(short *)(unaff_s2 + 0x2e) = *(short *)(unaff_s2 + 0x2e) + (short)(iVar2 * 0x28 >> 0xc);
  iVar2 = func_0x00083e80((int)*(short *)(unaff_s1 + 0x56));
  *(short *)(unaff_s2 + 0x36) = *(short *)(unaff_s2 + 0x36) + (short)(iVar2 * -0x28 >> 0xc);
  uVar1 = func_0x0009a450();
  *(ushort *)(unaff_s2 + 0x2e) = (*(short *)(unaff_s2 + 0x2e) + 3) - (uVar1 & 7);
  uVar1 = func_0x0009a450();
  *(ushort *)(unaff_s2 + 0x32) = (*(short *)(unaff_s2 + 0x32) + 7) - (uVar1 & 0xf);
  uVar1 = func_0x0009a450();
  *(ushort *)(unaff_s2 + 0x36) = (*(short *)(unaff_s2 + 0x36) + 3) - (uVar1 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

