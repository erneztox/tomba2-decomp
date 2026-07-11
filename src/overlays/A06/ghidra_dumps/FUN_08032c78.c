// FUN_08032c78

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032c78(void)

{
  short in_v0;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_s1;
  int iVar4;
  undefined2 in_stack_00000010;
  short sStack00000012;
  undefined2 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  
  sStack00000012 = in_v0;
  while( true ) {
    unaff_s1 = unaff_s1 + 1;
    func_0x0012b9d8(in_stack_00000018,in_stack_00000020,in_stack_0000001c);
    in_stack_00000018 = in_stack_00000020;
    if (1 < unaff_s1) break;
    sStack00000012 = sStack00000012 + -800;
    func_0x0003f7a0(&stack0x00000010,&stack0x00000020);
  }
  iVar4 = 0;
  iVar2 = *(int *)(_DAT_1f800240 + 200);
  iVar3 = *(int *)(_DAT_1f800248 + 0xcc);
  iVar1 = (uint)*(byte *)(_DAT_1f800240 + 1) + (uint)*(byte *)(_DAT_1f800248 + 1);
  do {
    if (iVar1 != 0) {
      in_stack_00000010 = *(undefined2 *)(iVar2 + 0x2c);
      sStack00000012 = *(undefined2 *)(iVar2 + 0x30);
      in_stack_00000014 = *(undefined2 *)(iVar2 + 0x34);
      iVar1 = func_0x0003f7a0(&stack0x00000010,&stack0x00000018);
      in_stack_0000001c = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
      if (0x7fb < in_stack_0000001c - 4U) {
        in_stack_0000001c = -1;
      }
      in_stack_00000010 = *(undefined2 *)(iVar3 + 0x2c);
      sStack00000012 = *(undefined2 *)(iVar3 + 0x30);
      in_stack_00000014 = *(undefined2 *)(iVar3 + 0x34);
      iVar1 = func_0x0003f7a0(&stack0x00000010,&stack0x00000020);
      in_stack_00000024 = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
      if (0x7fb < in_stack_00000024 - 4U) {
        in_stack_00000024 = -1;
      }
      if (0 < in_stack_0000001c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0 < in_stack_00000024) {
        func_0x0012b9d8(in_stack_00000020,in_stack_00000018);
      }
    }
    iVar4 = iVar4 + 1;
    iVar2 = *(int *)(_DAT_1f800248 + 200);
    iVar3 = *(int *)(_DAT_1f80024c + 0xcc);
    iVar1 = (uint)*(byte *)(_DAT_1f800248 + 1) + (uint)*(byte *)(_DAT_1f80024c + 1);
    if (1 < iVar4) {
      return;
    }
  } while( true );
}

