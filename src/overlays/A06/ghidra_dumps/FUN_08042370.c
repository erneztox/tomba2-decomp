// FUN_08042370

undefined4 FUN_08042370(int param_1)

{
  char cVar1;
  
  cVar1 = DAT_800bfb29;
  func_0x0004d688(0x75,DAT_800bfb29);
  DAT_800bfa21 = DAT_800bfa21 + cVar1;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  *(char *)(param_1 + 0x5f) = cVar1;
  func_0x00141020(0,0,param_1);
  return 1;
}

