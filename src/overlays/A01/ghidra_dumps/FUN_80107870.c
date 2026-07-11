// FUN_80107870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80107870(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 *puVar6;
  
  uVar3 = _DAT_800bf812;
  if (DAT_800bf817 != '\x02') {
    if ((DAT_800bf817 == '\x05') && (*(short *)(param_1 + 0x2e) < 0x19df)) {
      *(undefined2 *)(param_1 + 0x2e) = 0x19df;
    }
LAB_801078d8:
    if (((param_1[0x145] & 1) == 0) &&
       ((int)(short)uVar3 - (int)*(short *)(param_1 + 0x62) <= (int)*(short *)(param_1 + 0x32))) {
      *(ushort *)(param_1 + 0x32) = uVar3 - *(short *)(param_1 + 0x62);
      func_0x80022c78(param_1);
      param_1[0x29] = param_1[0x29] | 0x80;
    }
    return;
  }
  if (*(short *)(param_1 + 0x36) < 0x41e7) goto LAB_801078d8;
  iVar5 = func_0x800777fc(param_1,_DAT_800bf812 + 0x28);
  if (iVar5 != 0) {
    func_0x800518fc(param_1);
    FUN_801199c4();
    return;
  }
  if ((param_1[3] != '\x03') || ((DAT_800bf9f0 & 2) == 0)) {
    return;
  }
  param_1[1] = 1;
  iVar5 = func_0x80077e7c(param_1);
  if (0x3b8e < iVar5) {
    *(undefined2 *)(param_1 + 0x36) = 0x3b8e;
  }
  func_0x8004954c();
  func_0x80041ac0(param_1);
  DAT_800e7eaa = param_1[0x2a];
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  puVar6 = param_1;
  func_0x80041938(param_1,0,0);
  if (param_1[0x29] != '\0') {
    *(undefined2 *)(param_1 + 0x50) = 0;
    FUN_801208b4(param_1);
    uVar4 = (undefined2)((uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) * 0x19 >> 10);
    *(undefined2 *)(param_1 + 0x84) = uVar4;
    *(undefined2 *)(param_1 + 0x86) = uVar4;
    FUN_801229bc();
    return;
  }
  sVar2 = *(short *)(param_1 + 0x50);
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(short *)(param_1 + 0x50) = sVar2 + 0x300;
  if (0x3000 < (short)(sVar2 + 0x300)) {
    *(undefined2 *)(param_1 + 0x50) = 0x3000;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
  if ((byte)param_1[5] < 6) {
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
          puVar6[0x196] = puVar6[0x196] | 8;
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
  if (*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) < 0x400) {
    func_0x80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x400,0xc);
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
  func_0x80051844(param_1);
  return;
}

