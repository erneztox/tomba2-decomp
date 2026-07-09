// FUN_80110b74

void FUN_80110b74(void)

{
  int iVar1;
  int in_a3;
  int unaff_s0;
  int in_lo;
  short sStack00000010;
  short sStack00000012;
  short in_stack_00000014;
  short sStack00000018;
  short sStack0000001a;
  short in_stack_0000001c;
  short in_stack_00000020;
  short sStack00000022;
  short in_stack_00000024;
  short sStack00000028;
  short sStack0000002a;
  short in_stack_0000002c;
  
  iVar1 = func_0x800707e0();
  if (iVar1 == 0) {
    return;
  }
  while( true ) {
    in_stack_00000024 = in_stack_0000002c;
    in_stack_00000020 = sStack00000028;
    sStack00000022 = sStack0000002a;
    if (in_lo < 0) {
      in_lo = in_lo + 7;
    }
    iVar1 = ((int)sStack0000001a - (int)sStack00000012) * in_a3;
    sStack00000028 = sStack00000010 + (short)(in_lo >> 3);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    in_a3 = ((int)in_stack_0000001c - (int)in_stack_00000014) * in_a3;
    sStack0000002a = sStack00000012 + (short)(iVar1 >> 3);
    if (in_a3 < 0) {
      in_a3 = in_a3 + 7;
    }
    in_stack_0000002c = in_stack_00000014 + (short)(in_a3 >> 3);
    if (7 < unaff_s0 + 1) break;
    FUN_8013dd34(&stack0x00000020,&stack0x00000028);
    in_a3 = unaff_s0 + 3;
    in_lo = ((int)sStack00000018 - (int)sStack00000010) * in_a3;
    unaff_s0 = unaff_s0 + 1;
  }
  return;
}

