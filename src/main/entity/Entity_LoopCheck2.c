/**
 * @brief Entity loop check variant 2: entity[0x1F] + param check
 * @note Original: func_8003675C at 0x8003675C
 */
// Entity_LoopCheck2



s32 Entity_LoopCheck2(int param_1,int param_2)

{
  u8 bVar1;
  s32 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(s8*)(param_1 + 0x1f) == '\0') {
    uVar2 = 0xffffffff;
    if (param_2 != 0) {
      uVar2 = 0;
    }
  }
  else {
    iVar3 = Entity_CheckLoop(param_1,*(u8 *)(param_1 + 0x1f) - 1,*(u8 *)(param_1 + 0x1d));
    if (iVar3 < 0) {
      iVar3 = Entity_CheckLoop(param_1,*(u8 *)(param_1 + 0x1f) - 2,*(u8 *)(param_1 + 0x1d));
      iVar4 = 0;
      if (iVar3 < 0) {
        return 0;
      }
      do {
        bVar1 = *(s8*)(param_1 + 0x1f) - 1;
        *(u8 *)(param_1 + 0x1f) = bVar1;
        if (param_2 == 0) {
          if (bVar1 < *(u8 *)(param_1 + 0x1e)) {
            *(u8 *)(param_1 + 0x1e) = *(u8 *)(param_1 + 0x1e) - 1;
          }
        }
        else {
          *(s8*)(param_1 + 0x1e) = *(s8*)(param_1 + 0x1e) + -1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
    else {
      bVar1 = *(s8*)(param_1 + 0x1f) - 1;
      *(u8 *)(param_1 + 0x1f) = bVar1;
      if (param_2 == 0) {
        if (bVar1 < *(u8 *)(param_1 + 0x1e)) {
          *(u8 *)(param_1 + 0x1e) = *(u8 *)(param_1 + 0x1e) - 1;
        }
      }
      else if (*(s8*)(param_1 + 0x1e) != '\0') {
        *(s8*)(param_1 + 0x1e) = *(s8*)(param_1 + 0x1e) + -1;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
