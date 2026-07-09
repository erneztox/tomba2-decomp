// FUN_80112158

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80112158(void)

{
  int in_v0;
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s1;
  int unaff_s2;
  
  if (in_v0 != 0) {
    iVar1 = func_0x8007778c();
    if (iVar1 != 0) {
      func_0x80077b5c();
    }
    return;
  }
  if (*(char *)(unaff_s1 + 3) == '\n') {
    DAT_800bf9de = 8;
    func_0x80074590(0x8f,5,0);
    return;
  }
  *(undefined2 *)(unaff_s1 + 0x4a) = 0;
  *(ushort *)(unaff_s1 + 0x40) = (ushort)*(byte *)(unaff_s1 + 3) * 2 + -10;
  *(char *)(unaff_s1 + 6) = *(char *)(unaff_s1 + 6) + '\x01';
  *(undefined2 *)(unaff_s2 + 0x66) = 0;
  FUN_80123e9c();
  func_0x80051d90(*(undefined4 *)(*(int *)(unaff_s2 + 0x10) + 0xc0),unaff_s2 + 100,&DAT_1f8000c0);
  *(undefined2 *)(unaff_s2 + 0x2e) = _DAT_1f8000c0;
  *(undefined2 *)(unaff_s2 + 0x32) = _DAT_1f8000c2;
  *(undefined2 *)(unaff_s2 + 0x36) = _DAT_1f8000c4;
  UNRECOVERED_JUMPTABLE = (code *)(*(short *)(unaff_s2 + 0x6c) * 0x100);
  *(code **)(unaff_s2 + 0x30) = UNRECOVERED_JUMPTABLE + *(int *)(unaff_s2 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x80124310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

