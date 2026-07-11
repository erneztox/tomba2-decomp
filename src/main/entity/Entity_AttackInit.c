/**
 * @brief Entity attack initializer: reads entity[0x104/0x108] data
 * @note Original: func_80056F3C at 0x80056F3C
 */
// Entity_AttackInit



void FUN_80056f3c(int param_1)

{
  s16 uVar1;
  u16 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x104);
  iVar4 = *(int *)(param_1 + 0x108);
  iVar3 = 0x1b - (uint)*(u8 *)(param_1 + 0x178);
  if (iVar3 < 0) {
    *(s16 *)(iVar4 + 10) = 0;
    *(s16 *)(iVar5 + 10) = 0;
    uVar2 = *(s16 *)(iVar4 + 0x38) - 0x200;
    *(u16 *)(iVar4 + 0x38) = uVar2;
    if ((int)((uint)uVar2 << 0x10) < 1) {
      *(s16 *)(iVar4 + 0x38) = 0;
      *(u8 *)(param_1 + 0x179) = 0;
    }
    else {
      *(u8 *)(param_1 + 0x179) = 2;
    }
    uVar1 = *(s16 *)(iVar4 + 0x38);
    *(s16 *)(iVar4 + 0x3c) = uVar1;
    *(s16 *)(iVar4 + 0x3a) = uVar1;
    *(s16 *)(iVar5 + 0x38) = uVar1;
    *(s16 *)(iVar5 + 0x3a) = *(s16 *)(iVar4 + 0x38);
    *(s16 *)(iVar5 + 0x3c) = *(s16 *)(iVar4 + 0x38);
    return;
  }
  if (6 < iVar3) {
    *(s16 *)(iVar4 + 10) = 0xd80;
    *(s16 *)(iVar5 + 10) = 0x280;
    uVar2 = *(s16 *)(iVar4 + 0x38) + 0x200;
    *(u16 *)(iVar4 + 0x38) = uVar2;
    if (0xfff < uVar2) {
      *(s16 *)(iVar4 + 0x38) = 0x1000;
    }
    uVar1 = *(s16 *)(iVar4 + 0x38);
    *(s16 *)(iVar4 + 0x3c) = uVar1;
    *(s16 *)(iVar4 + 0x3a) = uVar1;
    *(s16 *)(iVar5 + 0x38) = uVar1;
    *(s16 *)(iVar5 + 0x3a) = *(s16 *)(iVar4 + 0x38);
    *(s16 *)(iVar5 + 0x3c) = *(s16 *)(iVar4 + 0x38);
    *(u8 *)(param_1 + 0x179) = 1;
    return;
  }
  *(s16 *)(iVar5 + 10) = (s16)iVar3 * 0x6a;
  *(u16 *)(iVar4 + 10) = (s16)iVar3 * -0x6a & 0xfff;
  *(u8 *)(param_1 + 0x179) = 2;
  return;
}
