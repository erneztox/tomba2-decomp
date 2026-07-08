
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_8001f6f8(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint in_v0;
  uint in_v1;
  int unaff_s0;
  uint unaff_s1;
  undefined4 unaff_s5;
  int unaff_s6;
  byte *unaff_s7;
  int in_stack_00000010;
  
  DAT_800272b8 = 0;
  while (iVar2 = unaff_s0 * 4, in_v0 != 0) {
    unaff_s7 = unaff_s7 + 1;
    iVar2 = unaff_s0 * 10 + -0x30;
    in_v1 = (uint)(*unaff_s7 < 0x80);
    unaff_s0 = iVar2 + param_1;
    if (in_v1 == 0) break;
    param_1 = (uint)*unaff_s7;
    in_v0 = (byte)(&DAT_80027229)[param_1] & 4;
  }
  if (-1 < unaff_s0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*unaff_s7) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      FUN_8001ed8c((int)(char)*unaff_s7);
      uVar1 = FUN_8001e67c();
      return uVar1;
    }
  }
  if (param_1 != 0) {
    in_stack_00000010 = DAT_80026dc0;
    DAT_80026dc0 = 0;
  }
  if (0x400 < unaff_s1) {
    (**(code **)((unaff_s1 >> 6) + 0x6dc0))();
    uVar1 = FUN_8001d718();
    return uVar1;
  }
  uVar1 = (unaff_s1 >> 6) * 0x40;
  if (uVar1 < unaff_s1) {
    uVar1 = uVar1 + 0x40;
  }
  FUN_8001d7d0(2,iVar2 << (in_v1 & 0x1f));
  FUN_8001d7d0(1);
  FUN_8001d7d0(3,&DAT_80026df8,uVar1);
  FUN_8001df9c(DAT_80026d10);
  if (unaff_s6 != 0) {
    DAT_80026da4 = unaff_s5;
  }
  if (in_stack_00000010 != 0) {
    DAT_80026dc0 = in_stack_00000010;
  }
  return uVar1;
}

