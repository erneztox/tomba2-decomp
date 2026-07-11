/**
 * @brief Audio program change: reads byte, increments ptr, sets [0x26], stores voice at [0x90]
 * @note Original: func_8008E390 at 0x8008E390
 */
// Audio_ProgramChange



void FUN_8008e390(short param_1,short param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(int *)(&DAT_80104c30 + param_1 * 4) + param_2 * 0xb0);
  uVar1 = *(undefined1 *)*puVar3;
  *puVar3 = (undefined1 *)*puVar3 + 1;
  *(undefined1 *)((int)puVar3 + 0x26) = uVar1;
  uVar2 = FUN_80090160();
  puVar3[0x24] = uVar2;
  return;
}
