// FUN_80111f34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80111f34(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_v1;
  int unaff_s2;
  
  *(short *)(unaff_s2 + 0x66) = -(short)((in_v1 >> 0x10) - (in_v1 >> 0x1f) >> 1);
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

