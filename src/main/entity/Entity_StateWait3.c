/**
 * @brief Entity wait state variant 3: entity[0x78]=1, polls DAT_800bf822
 * @note Original: func_80043720 at 0x80043720
 */
// Entity_StateWait3



undefined4 FUN_80043720(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if ((DAT_800bf822 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x78) = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return 0;
    }
    switch(*(undefined2 *)(param_1 + 0x72)) {
    case 0:
    case 1:
      FUN_8004ed94((int)*(short *)(param_1 + 0x74),(int)*(short *)(param_1 + 0x76));
      break;
    case 2:
    case 3:
      FUN_8004ed0c((int)*(short *)(param_1 + 0x74),(int)*(short *)(param_1 + 0x76));
      break;
    case 4:
    case 5:
      FUN_8004eddc((int)*(short *)(param_1 + 0x74),(int)*(short *)(param_1 + 0x76));
      break;
    case 10:
      *(undefined1 *)(param_1 + 0x78) = 2;
      return 0;
    }
    if ((*(ushort *)(param_1 + 0x72) & 1) == 0) {
      return 1;
    }
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else {
    if (bVar1 != 2) {
      return 0;
    }
    if ((DAT_800bf822 & 1) == 0) {
      return 1;
    }
  }
  return 0;
}
