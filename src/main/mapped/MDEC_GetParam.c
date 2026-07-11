/**
 * @brief MDEC param getter: returns entity[0xE9] or entity[0xEC] based on sign
 * @note Original: func_80087CB0 at 0x80087CB0
 */
// MDEC_GetParam



undefined1 FUN_80087cb0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = (*DAT_800abe4c)();
  if (param_2 < 0) {
    return *(undefined1 *)(iVar2 + 0xe9);
  }
  if (param_2 < (int)(uint)*(byte *)(iVar2 + 0xe9)) {
    puVar3 = (undefined1 *)(*(int *)(iVar2 + 4) + param_2 * 5);
    switch(param_3) {
    case 1:
      uVar1 = *puVar3;
      break;
    case 2:
      uVar1 = puVar3[1];
      break;
    case 3:
      uVar1 = puVar3[2];
      break;
    case 4:
      uVar1 = puVar3[3];
      break;
    case 5:
      uVar1 = puVar3[4];
      break;
    default:
      goto switchD_80087d28_default;
    }
  }
  else {
switchD_80087d28_default:
    uVar1 = 0;
  }
  return uVar1;
}
