// FUN_800424f0

undefined4 FUN_800424f0(int param_1)

{
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    if (DAT_800bf843 != '\0') {
      return 1;
    }
    if ((*(ushort *)(param_1 + 0x76) & 4) == 0) {
      FUN_80070724(*(ushort *)(param_1 + 0x72) & 0xfff,(int)*(short *)(param_1 + 0x74),
                   (int)(short)*(ushort *)(param_1 + 0x76));
    }
    else {
      local_18 = CONCAT22(*(undefined2 *)(param_1 + 100),(undefined2)local_18);
      FUN_8007074c(*(ushort *)(param_1 + 0x72) & 0xfff,(int)*(short *)(param_1 + 0x74),
                   (int)*(short *)(param_1 + 0x76),local_18);
    }
    if (((int)*(short *)(param_1 + 0x72) & 0x8000U) != 0) {
      return 1;
    }
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') {
      return 0;
    }
    if (DAT_800bf843 == '\x01') {
      return 1;
    }
  }
  return 0;
}

