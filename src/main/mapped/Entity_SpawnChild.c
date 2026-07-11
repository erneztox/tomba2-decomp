/**
 * @brief Spawns child entity: AllocByPoolId with bitmask, sets parent/type/flag
 * @note Original: func_80072DDC at 0x80072DDC
 */
// Entity_SpawnChild



int FUN_80072ddc(undefined4 param_1,byte param_2,char param_3,undefined1 param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = param_3 == '\x03';
  if (bVar1) {
    param_3 = '\x03';
  }
  iVar2 = FUN_8007a980(param_2 & 0x7f,param_3,bVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    *(byte *)(iVar2 + 0x28) = param_2;
    *(undefined4 *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 2) = param_4;
  }
  return iVar2;
}
