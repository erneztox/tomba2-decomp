// FUN_8012d16c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_8012d16c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 unaff_s0;
  undefined4 unaff_s1;
  uint uVar3;
  int unaff_s5;
  
  iVar1 = func_0x8007a980(2,4,0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0x80135d64;
  *(undefined4 *)(iVar1 + 0x10) = unaff_s1;
  *(undefined1 *)(iVar1 + 2) = 7;
  *(undefined1 *)(iVar1 + 3) = unaff_s0;
  if (iVar1 != 7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800a3f90 = 0x2d00;
  _DAT_800a3f94 = 0x155;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(DAT_1f800207) {
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    _DAT_800a3f90 = 0x3200;
    _DAT_800a3f94 = 0x1c7;
    uVar3 = 0xfffffe39U - (int)_DAT_1f8000f2 & 0xfff;
    func_0x80083e80(uVar3);
    func_0x80083f50(uVar3);
    uVar3 = _DAT_800a3f94 - _DAT_1f8000f2 & 0xfff;
    func_0x80083e80(uVar3);
    func_0x80083f50(uVar3);
    func_0x80083e80((int)_DAT_1f8000f0);
    func_0x80083e80(-(int)_DAT_1f8000f2);
    func_0x80083f50(-(int)_DAT_1f8000f2);
    *(undefined1 *)(unaff_s5 + 6) = 0;
    uVar2 = FUN_8013f4dc();
    return uVar2;
  }
}

