/**
 * @brief Entity player checker: tests entity[0x72] bit 0x8000
 * @note Original: func_80044308 at 0x80044308
 */
// Entity_CheckPlayer



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80044308(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = _DAT_1f800214;
  if (((int)param_1->event_id & 0x8000U) == 0) {
    iVar4 = param_1;
  }
  bVar1 = param_1->sub_state;
  if (bVar1 == 1) {
    sVar2 = iVar4->rot_y;
    if (0xff < ((int)*(short *)(param_1 + 100) - (int)iVar4->rot_y & 0xfffU)) {
      if ((*(short *)(param_1 + 100) - sVar2 & 0xfffU) < 0x800) {
        iVar4->rot_y = sVar2 + 0x100;
        return 0;
      }
      iVar4->rot_y = sVar2 + -0x100;
      return 0;
    }
    iVar4->rot_y = *(short *)(param_1 + 100);
    if ((DAT_800e7fe4 == '\0') && (DAT_800bf80e == '\0')) {
      return 0;
    }
    uVar3 = param_1->event_id;
    if ((uVar3 & 0x7fff) == 2) {
      return 1;
    }
    FUN_800442a0(param_1);
    if ((uVar3 & 0x7fff) != 0) {
      return 1;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return 0;
      }
      if (iVar4->sub_state2 != '\x01') {
        return 0;
      }
      return 1;
    }
    if (bVar1 != 0) {
      return 0;
    }
    if (DAT_800e7fe4 == '\0') {
      _DAT_1f800192 =
           FUN_80085690((int)_DAT_1f800164 - (int)iVar4->pos_z,
                        (int)iVar4->pos_y - (int)_DAT_1f800160);
      _DAT_1f800192 = _DAT_1f800192 & 0xfff;
      DAT_800e7e85 = 0x1e;
      DAT_800e7e86 = 0;
    }
    uVar3 = FUN_80085690((int)iVar4->pos_z - (int)_DAT_1f800164,
                         (int)_DAT_1f800160 - (int)iVar4->pos_y);
    uVar3 = uVar3 & 0xfff;
    *(ushort *)(param_1 + 100) = uVar3;
    if ((uVar3 - iVar4->rot_y & 0xfff) < 0x100) {
      iVar4->rot_y = uVar3;
    }
  }
  param_1->sub_state = param_1->sub_state + '\x01';
  return 0;
}
