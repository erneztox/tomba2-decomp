// FUN_0803e680

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803e680(int param_1,undefined4 param_2,byte param_3)

{
  undefined1 uVar1;
  byte in_v0;
  int in_v1;
  int unaff_s4;
  
  uVar1 = *(undefined1 *)(unaff_s4 + 0x62);
  *(byte *)(in_v1 + 99) = in_v0 | param_3;
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  *(undefined2 *)(unaff_s4 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0x5759;
  *(undefined2 *)(param_1 + 0x32) = 0xea7d;
  *(undefined2 *)(param_1 + 0x36) = 0x3f8b;
  func_0x000440e4();
  *(undefined2 *)(unaff_s4 + 0x4e) = _DAT_1f8000de;
  *(undefined2 *)(unaff_s4 + 0x50) = _DAT_1f8000e2;
  *(undefined2 *)(unaff_s4 + 0x52) = _DAT_1f8000e6;
  func_0x000521f4(0,0,0xfa,0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

