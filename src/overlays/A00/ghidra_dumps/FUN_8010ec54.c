// FUN_8010ec54

int FUN_8010ec54(void)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int unaff_s1;
  
  if (in_v1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x80117cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(in_v1 + in_v0))();
    return iVar1;
  }
  func_0x8004d4f4(0x28,1);
  func_0x8004ed94(0x2d,0x42);
  func_0x8004b0d8();
  iVar1 = func_0x8004bd04();
  if (iVar1 != 0) {
    func_0x8004bea8(0x28,iVar1);
    func_0x80042354(1,1);
    DAT_800bf9dc = DAT_800bf9dc | 1;
  }
  return *(byte *)(unaff_s1 + 5) + 1;
}

