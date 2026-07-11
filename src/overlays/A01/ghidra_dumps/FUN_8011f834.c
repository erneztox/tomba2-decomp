// FUN_8011f834

undefined4 FUN_8011f834(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-2000 < *(short *)(param_1 + 0x32)) &&
     (((int)(uint)DAT_800bf9fc >> (param_2 & 0x1f) & 1U) == 0)) {
    uVar1 = FUN_80112948(param_1);
    DAT_800bf9fc = DAT_800bf9fc | (byte)(1 << (param_2 & 0x1f));
    *(undefined1 *)(param_1 + 0xbf) = 2;
  }
  return uVar1;
}

