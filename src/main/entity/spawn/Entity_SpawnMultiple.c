/**
 * @brief Entity multiple spawner: iterates table at 0x800A4BB8, spawns children
 * @note Original: func_8006FF10 at 0x8006FF10
 */
// Entity_SpawnMultiple



int FUN_8006ff10(undefined4 param_1,undefined2 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = &DAT_800a4bb8;
  iVar3 = 0;
  do {
    iVar2 = FUN_80072ddc(param_1,*puVar1,3,4);
    iVar4 = iVar3 + 1;
    if (iVar2 != 0) {
      *(code **)(iVar2 + 0x1c) = FUN_80070018;
      *(undefined4 *)(iVar2 + 0x10) = param_1;
      *(undefined2 *)(iVar2 + 0x68) = param_2;
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
      if (DAT_800bf816 == '\0') {
        *(undefined1 *)(iVar2 + 0xbe) = 0;
      }
      else {
        *(undefined1 *)(iVar2 + 0xbe) = 1;
      }
      *(undefined1 *)(iVar2 + 0x5f) = 1;
      *(undefined2 *)(iVar2 + 0x74) = 0;
      *(undefined1 *)(iVar2 + 4) = 2;
      return iVar2;
    }
    puVar1 = &DAT_800a4bb9 + iVar3;
    iVar3 = iVar4;
  } while (iVar4 < 3);
  return 0;
}
