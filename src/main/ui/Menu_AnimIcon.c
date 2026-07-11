/**
 * @brief Animates menu icon with sine wave oscillation using GTE trig functions
 * @note Original: func_8003A3E8 at 0x8003A3E8
 */
// Menu_AnimIcon



void FUN_8003a3e8(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  
  if (*(char *)(param_2 + 0x1f) == '\0') {
    *(undefined1 *)(param_2 + 0x1f) = 1;
    uVar1 = FUN_8003a1e4(param_1,param_2);
    *param_2 = uVar1;
    uVar2 = FUN_8009a450();
    param_2->counter2 = (uVar2 & 0x1f) << 7;
  }
  else if (*(char *)(param_2 + 0x1f) != '\x01') {
    return;
  }
  iVar3 = FUN_80083f50((int)(short)param_2->counter2);
  param_2->flags = (short)(iVar3 * 3 >> 0xc);
  param_2->counter2 = param_2->counter2 + 0x80;
  return;
}
