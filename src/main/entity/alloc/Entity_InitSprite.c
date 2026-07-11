/**
 * @brief Inits sprite entity in pool 3: entity->sub_anim_id=2, assigns sprite data from DAT_800ecf60
 * @note Original: func_8007E110 at 0x8007E110
 */
// Entity_InitSprite



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_8007e110(undefined2 param_1,undefined1 param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar3 = FUN_8007a5a8(3);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3->sub_anim_id = 2;
    iVar3->sub_type = param_2;
    iVar3->callback = FUN_8007dde0;
    iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
    puVar2 = _DAT_800ecf60;
    *(ushort **)(iVar3 + 0x48) = _DAT_800ecf60;
    puVar4 = _DAT_800ecf60 + 8;
    *(ushort **)(iVar3 + 0x4c) = puVar4;
    uVar1 = *puVar2;
    iVar3->draw_y = 0xffff;
    *(undefined2 *)(iVar3 + 0x5e) = param_1;
    *(ushort **)(iVar3 + 0x50) = puVar4 + (uint)uVar1 * 2;
  }
  return iVar3;
}
