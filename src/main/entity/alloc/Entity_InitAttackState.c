/**
 * @brief Initializes attack state: entity[0x46] dispatch, sets entity[0x6A], SFX 0x22, timer 0x6E
 * @note Original: func_8006923C at 0x8006923C
 */
// Entity_InitAttackState



void FUN_8006923c(int param_1)

{
  undefined2 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x46) >> 1 & 3;
  if (bVar2 == 2) {
    uVar1 = 0xe80;
  }
  else {
    if (bVar2 < 3) {
      *(undefined2 *)(param_1 + 0x6a) = 0;
      goto LAB_800692b0;
    }
    if (bVar2 != 3) goto LAB_800692b0;
    uVar1 = 0xc00;
  }
  *(undefined2 *)(param_1 + 0x6a) = uVar1;
LAB_800692b0:
  *(undefined2 *)(param_1 + 0x40) = 1;
  *(undefined2 *)(param_1 + 0x44) = 0x6e;
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 7;
  FUN_80074590(0x22,0,0);
  FUN_8006b020(param_1,2);
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x68);
  return;
}
