// FUN_00022d08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00022d08(void)

{
  int in_v0;
  int iVar1;
  int iVar2;
  uint in_v1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  undefined2 uStack00000010;
  undefined2 uStack00000012;
  undefined2 uStack00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000020;
  
  while( true ) {
    iVar1 = (in_v0 >> (in_v1 & 0x1f)) + in_v1 * 0x200;
    if (0x7fb < iVar1 - 4U) {
      iVar1 = unaff_s2;
    }
    uStack00000010 = *(undefined2 *)(unaff_s0 + 0x2c);
    uStack00000012 = *(undefined2 *)(unaff_s0 + 0x30);
    uStack00000014 = *(undefined2 *)(unaff_s0 + 0x34);
    iVar2 = FUN_0003f7a0(&stack0x00000010,&stack0x00000020);
    iVar2 = (iVar2 >> (iVar2 >> 10 & 0x1fU)) + (iVar2 >> 10) * 0x200;
    if (0x7fb < iVar2 - 4U) {
      iVar2 = unaff_s2;
    }
    if (0 < iVar1) break;
    if (0 < iVar2) {
      func_0x0012b9d8(in_stack_00000020,in_stack_00000018);
    }
    do {
      unaff_s1 = unaff_s1 + 1;
      iVar1 = *(int *)(_DAT_1f800248 + 200);
      unaff_s0 = *(int *)(_DAT_1f80024c + 0xcc);
      if (1 < unaff_s1) {
        return;
      }
    } while ((uint)*(byte *)(_DAT_1f800248 + 1) + (uint)*(byte *)(_DAT_1f80024c + 1) == 0);
    uStack00000010 = *(undefined2 *)(iVar1 + 0x2c);
    uStack00000012 = *(undefined2 *)(iVar1 + 0x30);
    uStack00000014 = *(undefined2 *)(iVar1 + 0x34);
    in_v0 = FUN_0003f7a0(&stack0x00000010,&stack0x00000018);
    in_v1 = in_v0 >> 10;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

