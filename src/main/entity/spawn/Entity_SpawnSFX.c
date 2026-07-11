/**
 * @brief Entity SFX spawn: allocs child with callback, sets type 4, stores SFX ID
 * @note Original: func_8007413C at 0x8007413C
 */
// Entity_SpawnSFX



int FUN_8007413c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_80072ddc(param_1,0,5,4);
  if (iVar2 != 0) {
    iVar2->callback = FUN_8004c930;
    iVar2->pos_y = param_1->pos_y;
    iVar3 = (uint)param_1->bounds_min_y << 0x10;
    *(short *)(iVar2 + 0x32) =
         *(short *)(param_1 + 0x32) - (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
    iVar2->pos_z = param_1->pos_z;
    cVar1 = param_1->sub_type;
    iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
    iVar2->sub_type = cVar1 + '+';
  }
  return iVar2;
}
