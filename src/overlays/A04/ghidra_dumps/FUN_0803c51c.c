// FUN_0803c51c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803c51c(int param_1,short param_2)

{
  ushort uVar1;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  local_18 = *(undefined4 *)(param_1 + 0x2c);
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_14 = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x84) * 0x10000;
  local_10 = *(undefined4 *)(param_1 + 0x34);
  uVar1 = func_0x0009a450();
  local_18 = CONCAT22(local_18._2_2_ + -0x3f + (uVar1 & 0x7f),(undefined2)local_18);
  uVar1 = func_0x0009a450();
  local_10 = CONCAT22(local_10._2_2_ + -0x3f + (uVar1 & 0x7f),(undefined2)local_10);
  if ((_DAT_800bfe56 & 0x10) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0003116c(0xd,&local_18,0xffffffce);
  func_0x00074590(0x92,0,0);
  return;
}

