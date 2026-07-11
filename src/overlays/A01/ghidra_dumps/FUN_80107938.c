// FUN_80107938

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80107938(int param_1,undefined1 *param_2)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int unaff_s2;
  
  if ((param_2[0x5e] == '\0') && (iVar4 = func_0x80022f04(param_1,param_2), iVar4 != 0)) {
    if ((param_2[0x5e] == '\0') &&
       (uVar5 = func_0x8001dc9c(param_1,param_2,0,2), (uVar5 & 0x80) != 0)) {
      *(undefined1 *)(param_1 + 0x2b) = 2;
    }
    DAT_1f800182 = 0;
    return 1;
  }
  iVar4 = FUN_80116294(param_2);
  if (iVar4 != 0) {
LAB_801109b8:
    param_2[0x29] = 0;
    *(undefined1 *)(unaff_s2 + 0xb) = 0;
    uVar6 = FUN_801199c4();
    return uVar6;
  }
  iVar4 = func_0x8007778c(param_2);
  if ((4 < (byte)param_2[3]) || ((byte)param_2[3] < 3)) {
    FUN_80118070(param_2);
    if (iVar4 != 0) {
      func_0x80076d68(param_2);
    }
    func_0x800518fc(param_2);
    goto LAB_801109b8;
  }
  puVar7 = param_2;
  uVar3 = FUN_80119320();
  *(undefined2 *)(param_2 + 0x50) = uVar3;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + *(short *)(param_2 + 0x50) * 0x100;
  if ((byte)param_2[5] < 6) {
    *param_2 = 1;
    param_2[4] = 1;
    uVar6 = FUN_8012ba50();
    return uVar6;
  }
  if (param_2[5] != 6) {
    uVar6 = FUN_8012ba50();
    return uVar6;
  }
  bVar1 = param_2[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        _DAT_800e8046 = _DAT_800e8046 + -100;
        if (_DAT_800e8046 < -0x1fa4) {
          puVar7[0x196] = puVar7[0x196] | 8;
          *(undefined2 *)(param_2 + 0x40) = 0x5a;
          param_2[6] = param_2[6] + '\x01';
          uVar6 = FUN_8012ba48();
          return uVar6;
        }
      }
      else {
        if (bVar1 != 3) {
          uVar6 = FUN_8012ba48();
          return uVar6;
        }
        sVar2 = *(short *)(param_2 + 0x40);
        *(short *)(param_2 + 0x40) = sVar2 + -1;
        if (sVar2 == 1) {
          param_2[4] = 3;
          DAT_1f800137 = 0;
          DAT_800e806c = 0;
        }
      }
      goto LAB_80122aac;
    }
    if (bVar1 != 0) {
      uVar6 = FUN_8012ba48();
      return uVar6;
    }
    *param_2 = 2;
    DAT_1f800137 = 2;
    param_2[6] = param_2[6] + '\x01';
  }
  *(short *)(*(int *)(param_2 + 0xc0) + 0x3a) = *(short *)(*(int *)(param_2 + 0xc0) + 0x3a) + -0x400
  ;
  if (*(ushort *)(*(int *)(param_2 + 0xc0) + 0x3a) < 0x400) {
    func_0x80027144(*(undefined4 *)(*(int *)(param_2 + 0xc0) + 0x40),param_2 + 0x2c,0x400,0xc);
    func_0x80074590(0xc,0,0);
    func_0x80074590(0x97,0,0);
    *(undefined4 *)(*(int *)(param_2 + 0xc0) + 0x40) = 0;
    param_2[6] = param_2[6] + '\x01';
    DAT_800e806c = 8;
    _DAT_800e8042 = 0x2cdc;
    _DAT_800e8046 = 0xe4d5;
    _DAT_800e804a = 0x35a3;
    uVar6 = FUN_8012ba48();
    return uVar6;
  }
LAB_80122aac:
  uVar6 = func_0x80051844(param_2);
  return uVar6;
}

