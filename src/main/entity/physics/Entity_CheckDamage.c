/**
 * @brief Entity damage check: tests entity->anim_id flags + global DAT_800e7edf condition
 * @note Original: func_8006918C at 0x8006918C
 */
// Entity_CheckDamage



void FUN_8006918c(undefined1 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 != 0) {
    bVar1 = false;
    if (((param_1->anim_id & 4) == 0) && (DAT_800e7edf != 0)) {
      bVar1 = (DAT_800e7edf & 1) == DAT_800e7fc7;
    }
    if (bVar1) goto LAB_800691fc;
  }
  iVar2 = FUN_80069858(param_1,0,0);
  if (iVar2 == 0) {
    return;
  }
LAB_800691fc:
  *param_1 = 2;
  FUN_80074590(0xe,0,0);
  FUN_80031470(2,param_1 + 0x2c,0,param_1 + 0x68);
  FUN_8006914c(param_1);
  return;
}
