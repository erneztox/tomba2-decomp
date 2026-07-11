// FUN_08040944

undefined4 FUN_08040944(int param_1)

{
  DAT_800bfa46 = (DAT_800bfa46 | (byte)(1 << (*(byte *)(param_1 + 0x47) & 0x1f))) & 0xef;
  func_0x00074590(0x1a,0x1b,0);
  return 1;
}

