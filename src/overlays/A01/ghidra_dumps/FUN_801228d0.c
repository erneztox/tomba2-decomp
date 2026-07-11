// FUN_801228d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801228d0(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  short sVar2;
  
  if ((DAT_800bf873 != '\0') || ((byte)param_1[5] < 6)) {
    *param_1 = 1;
    param_1[4] = 1;
    FUN_8012ba50();
    return;
  }
  if (param_1[5] != 6) {
    FUN_8012ba50();
    return;
  }
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        _DAT_800e8046 = _DAT_800e8046 + -100;
        if (_DAT_800e8046 < -0x1fa4) {
          DAT_800bfa06 = DAT_800bfa06 | 8;
          *(undefined2 *)(param_1 + 0x40) = 0x5a;
          param_1[6] = param_1[6] + '\x01';
          FUN_8012ba48();
          return;
        }
      }
      else {
        if (bVar1 != 3) {
          FUN_8012ba48();
          return;
        }
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 == 1) {
          param_1[4] = 3;
          DAT_1f800137 = 0;
          DAT_800e806c = 0;
        }
      }
      goto LAB_80122aac;
    }
    if (bVar1 != 0) {
      FUN_8012ba48();
      return;
    }
    *param_1 = 2;
    DAT_1f800137 = 2;
    param_1[6] = param_1[6] + '\x01';
  }
  *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) = *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + -0x400
  ;
  param_2 = param_1 + 0x2c;
  if (*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) < 0x400) {
    func_0x80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_2,0x400,0xc);
    func_0x80074590(0xc,0,0);
    func_0x80074590(0x97,0,0);
    *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
    param_1[6] = param_1[6] + '\x01';
    DAT_800e806c = 8;
    _DAT_800e8042 = 0x2cdc;
    _DAT_800e8046 = 0xe4d5;
    _DAT_800e804a = 0x35a3;
    FUN_8012ba48();
    return;
  }
LAB_80122aac:
  func_0x80051844(param_1,param_2);
  return;
}

