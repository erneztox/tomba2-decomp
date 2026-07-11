/**
 * @brief Entity behavior type: processes entity type flags, dispatches
 * @note Original: func_8002F36C at 0x8002F36C
 */
// Entity_BehaviorType



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002f36c(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_30 = 0x40;
  local_2c = 0x40;
  local_28 = 0x40;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar3 = 0;
  param_1->pos_x = _DAT_800e7f84->pos_x;
  param_1->pos_y = *(undefined2 *)(_DAT_800e7f84 + 0x30);
  _DAT_1f800090 = (uint)param_1->sub_action << 6;
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(_DAT_800e7f84 + 0x34);
  do {
    iVar2 = _DAT_800e7f88;
    if (iVar3 == 0) {
      iVar2 = _DAT_800e7f84;
    }
    FUN_80084110(&DAT_1f8000f8,iVar2 + 0x18,0x1f800000);
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
    setCopReg(2,extraout_at,param_1->pos_y_fixed);
    copFunction(2,0x486012);
    _DAT_1f800014 = getCopReg(2,0x19);
    _DAT_1f800018 = getCopReg(2,0x1a);
    _DAT_1f80001c = getCopReg(2,0x1b);
    _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
    _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
    _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
    FUN_80084520(0x1f800000,&local_30);
    FUN_80084660(0x1f800000);
    FUN_80084690(0x1f800000);
    if (iVar3 == 0) {
      puVar1 = &DAT_8009f788;
    }
    else {
      puVar1 = &DAT_8009f6f8;
    }
    FUN_80027768(puVar1,0,0xffffff9c,param_1->collision_state);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}
