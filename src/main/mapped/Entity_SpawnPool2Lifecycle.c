/**
 * @brief Spawns entity in pool 2 with FUN_8006f2d0 callback, type 1, flag 0x80
 * @note Original: func_8006F0E4 at 0x8006F0E4
 */
// Entity_SpawnPool2Lifecycle



int FUN_8006f0e4(void)

{
  int iVar1;
  
  iVar1 = FUN_8007a980(2,3,1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(code **)(iVar1 + 0x1c) = FUN_8006f2d0;
    *(undefined1 *)(iVar1 + 2) = 1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return iVar1;
}
