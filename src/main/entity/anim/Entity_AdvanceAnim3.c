/**
 * @brief Entity anim advance variant 3: entity[0xE] timer, calls next frame
 * @note Original: func_80077B5C at 0x80077B5C
 */
// Entity_AdvanceAnim3



undefined4 FUN_80077b5c(int param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  sVar1 = param_1->anim_timer;
  param_1->anim_timer = sVar1 + -1;
  if (sVar1 != 1) {
    return 0;
  }
  iVar4 = param_1->anim_data;
  uVar2 = *(ushort *)(iVar4 + 2);
  uVar3 = uVar2 & 0xc000;
  if (uVar3 == 0x4000) {
    param_1->anim_data = iVar4 + 4;
    iVar4 = *(int *)(iVar4 + 4);
  }
  else {
    if (0x4000 < uVar3) {
      if (uVar3 == 0x8000) {
        param_1->anim_timer = uVar2 & 0x3fff;
        return 1;
      }
      if (uVar3 != 0xc000) {
        return 0;
      }
      param_1->anim_data = iVar4 + 4;
      iVar4 = *(int *)(iVar4 + 4);
      param_1->anim_data = iVar4;
      param_1->anim_timer = *(ushort *)(iVar4 + 2) & 0x3fff;
      return 1;
    }
    if ((uVar2 & 0xc000) != 0) {
      return 0;
    }
    iVar4 = iVar4 + 4;
  }
  param_1->anim_data = iVar4;
  param_1->anim_timer = *(ushort *)(iVar4 + 2) & 0x3fff;
  return 0;
}
