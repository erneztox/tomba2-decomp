/**
 * @brief Entity dash state: entity[0x4A] += 0x360, applies velocity to position
 * @note Original: func_8005706C at 0x8005706C
 */
// Entity_State_Dash



void FUN_8005706c(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = *(short *)(param_1 + 0x4a) + 0x360;
  *(short *)(param_1 + 0x4a) = sVar1;
  if (sVar1 < 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar1 * 0x100;
  }
  else {
    if ((*(ushort *)(param_1 + 0x17e) & 0x40) == 0) {
      *(undefined1 *)(param_1 + 0x178) = 0;
      FUN_80056ec8(param_1);
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + 0x46);
      if (((uVar2 - 0x14 < 2) || (uVar2 == 0x62)) || (uVar2 == 0x12)) {
        FUN_80054d14(param_1,0xca,6);
        *(undefined1 *)(param_1 + 0x178) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x145) = 2;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    if ((param_2 & 2) == 0) {
      *(undefined1 *)(param_1 + 0x144) = 1;
    }
  }
  return;
}
