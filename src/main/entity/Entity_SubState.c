/**
 * @brief Entity sub-state handler: checks entity->physics_flag flag, branches
 * @note Original: func_800541F4 at 0x800541F4
 */
// Entity_SubState



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800541f4(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  
  DAT_1f800253 = DAT_1f800253 & 4;
  if (param_1->physics_flag != '\0') {
    return 0;
  }
  uVar3 = 0xff7e;
  if ((param_1->state_flag145 != '\0') && (uVar3 = 0xffa6, param_1->velocity_y < -0x2700)
     ) {
    uVar3 = 0xff88;
  }
  iVar4 = 0x38;
  if (param_1->entity_flags < 0) {
    uVar3 = (ushort)((uint)(((int)((uint)uVar3 << 0x10) >> 0x10) -
                           ((int)((uint)uVar3 << 0x10) >> 0x1f)) >> 1);
    iVar4 = 0x1c;
  }
  if ((param_2 & 1) == 0) {
    iVar2 = FUN_800493e8(param_1,iVar4,(int)(short)uVar3);
    if (iVar2 != 0) goto LAB_800542dc;
    iVar4 = -iVar4;
  }
  else {
    iVar4 = 0;
  }
  iVar2 = FUN_800493e8(param_1,iVar4,(int)(short)uVar3);
  if (iVar2 == 0) {
    return 0;
  }
LAB_800542dc:
  if (iVar2 == 2) {
    if ((_DAT_1f8001a6 & 0xf00) == 0x100) {
      DAT_1f800253 = 1;
    }
    return 0;
  }
  if (((param_1->state_flag145 & 1) != 0) && (param_1->velocity_y < 0)) {
    param_1->velocity_y = 0;
  }
  if ((param_2 & 2) == 0) {
    if ((((int)(short)_DAT_1f8001a6 & 0x8000U) == 0) || (DAT_800bf873 != '\0')) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
      if ((param_1->entity_flags & 0x200) == 0) {
        FUN_80022d08(param_1,0,1,1);
        uVar1 = 2;
      }
    }
    DAT_1f800253 = uVar1;
    return 1;
  }
  return 1;
}
