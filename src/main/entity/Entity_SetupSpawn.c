/**
 * @brief Entity spawn setup: reads position data, sets entity pos at 0x2C/0x32/0x36
 * @note Original: func_80042690 at 0x80042690
 */
// Entity_SetupSpawn



undefined4 FUN_80042690(int param_1)

{
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  local_16 = *(undefined2 *)(param_1 + 0x72);
  local_12 = *(undefined2 *)(param_1 + 0x74);
  local_e = *(undefined2 *)(param_1 + 0x76);
  FUN_80070f00(param_1,1,auStack_18);
  FUN_800708b4(3);
  return 1;
}
