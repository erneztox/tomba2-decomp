/**
 * @brief Entity anim load variant 2: checks entity flags, loads from table
 * @note Original: func_80054C08 at 0x80054C08
 */
// Entity_AnimLoad2



void FUN_80054c08(int param_1,int param_2)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  
  iVar3 = FUN_800535d4();
  bVar2 = 2 < iVar3 - 7U;
  if (param_2 == 0) {
    if (bVar2) {
      puVar5 = &DAT_800a44d0;
      uVar4 = param_1->behavior_flags & 6;
    }
    else {
      uVar4 = (uint)param_1->gte_flags;
      puVar5 = &DAT_800a44e8;
    }
    uVar6 = (uint)(byte)puVar5[uVar4];
    if (param_1->anim_id != uVar6) {
      *(undefined *)(param_1 + 0x46) = puVar5[uVar4];
      FUN_80054790(param_1,uVar6);
      *(undefined **)(param_1 + 0x38) =
           (&PTR_DAT_80017fe8)[uVar6] + *(short *)(param_1->anim_data + 2) * 8;
      FUN_80076904();
    }
  }
  else {
    if (bVar2) {
      uVar1 = *(undefined1 *)
               ((param_1->behavior_flags & 6) + 0x800a44e0 + (uint)param_1->gte_flags);
    }
    else {
      uVar1 = (&DAT_800a44f0)[param_1->gte_flags];
    }
    FUN_80054d14(param_1,uVar1,0);
  }
  return;
}
