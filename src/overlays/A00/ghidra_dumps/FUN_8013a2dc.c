// FUN_8013a2dc

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013a2dc(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int in_v0;
  int iVar2;
  int in_v1;
  int unaff_s0;
  
  iVar2 = func_0x800781e0(param_3 - param_1,in_v0 - *(short *)(in_v1 + 0x164));
  if (100 < iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_s0 + 0x4e) =
       *(short *)(unaff_s0 + 0x4e) + (short)(0x100 - *(short *)(unaff_s0 + 0x4e) >> 3);
  sVar1 = *(short *)(unaff_s0 + 0x50) + (short)(-0x14 - *(short *)(unaff_s0 + 0x50) >> 1);
  *(short *)(unaff_s0 + 0x50) = sVar1;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + sVar1;
  FUN_801406e4();
  FUN_80143648();
  return;
}

