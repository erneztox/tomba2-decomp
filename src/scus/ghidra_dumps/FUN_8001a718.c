
void FUN_8001a718(int param_1)

{
  undefined1 extraout_v1;
  byte in_stack_00000010;
  uint in_stack_00000018;
  
  FUN_8001a554(param_1 + 0x6d0);
  if ((in_stack_00000010 != 3) || (*(int *)((uint)DAT_800268ed * 4 + -0x7ffd956c) != 0)) {
    if (((DAT_800268dc & 0x10) == 0) && ((in_stack_00000018 & 0x10) != 0)) {
      iRam800268e4 = iRam800268e4 + 1;
    }
    DAT_800268dc = in_stack_00000018 & 0xff;
    DAT_800268e0 = in_stack_00000018 >> 8 & 0xff;
  }
  uRamffffffff = extraout_v1;
  if ((in_stack_00000010 == 5) && (0 < DAT_800268d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(0x800106ec);
  }
  if (in_stack_00000010 - 1 < 5) {
                    /* WARNING: Jumptable at 0x8001a070 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((in_stack_00000010 - 1) * 4 + -0x7ffef8cc))();
    return;
  }
  FUN_8001effc(0x80010714);
                    /* WARNING: Subroutine does not return */
  FUN_8001e5ec(0x80010728,in_stack_00000010);
}

