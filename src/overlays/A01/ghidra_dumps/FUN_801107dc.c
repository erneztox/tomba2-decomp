// FUN_801107dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801107dc(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_80116994(param_1);
        if (param_1[5] == '\x04') {
          return;
        }
        func_0x80076d68(param_1);
        FUN_801199c4();
        return;
      }
      if (bVar1 == 3) {
        *param_1 = 2;
        if ((param_1[0x1b] & 0x40) == 0) {
          if (*(int *)(param_1 + 0x10) != 0) {
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
          }
          func_0x8007a624(param_1);
          return;
        }
        param_1[0x1b] = param_1[0x1b] & 0xbf;
        FUN_801199c4();
        return;
      }
      FUN_801199c4();
      return;
    }
    if (bVar1 != 0) {
      FUN_801199c4();
      return;
    }
    FUN_8011638c(param_1);
    param_1[4] = 1;
    param_1[5] = 0;
  }
  puVar5 = param_1;
  if ((DAT_1f800137 == '\0') && (DAT_800bf809 == '\0')) {
    if (param_1[0x2b] != '\0') {
      param_1[0x2b] = param_1[0x2b] + -1;
      if ((_DAT_1f80017c & 1) != 0) {
        FUN_801198a4();
        return;
      }
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + -0x80;
      iVar4 = func_0x800777fc(param_1);
      if (iVar4 == 0) {
        return;
      }
LAB_8011091c:
      func_0x800518fc(param_1);
      FUN_801199c4();
      return;
    }
    if ((param_1[3] == '\x01') && (*(short *)(param_1 + 0x32) < -0x16a8)) {
      *(undefined2 *)(param_1 + 0x32) = 0xe958;
    }
    iVar4 = FUN_80116294(param_1);
    if (iVar4 != 0) {
LAB_801109b8:
      param_1[0x29] = 0;
      param_1[0x6b] = 0;
      FUN_801199c4();
      return;
    }
    iVar4 = func_0x8007778c(param_1);
    if ((4 < (byte)param_1[3]) || ((byte)param_1[3] < 3)) {
      FUN_80118070(param_1);
      if (iVar4 != 0) {
        func_0x80076d68(param_1);
      }
      func_0x800518fc(param_1);
      goto LAB_801109b8;
    }
    uVar3 = FUN_80119320();
LAB_8011993c:
    *(undefined2 *)(param_1 + 0x50) = uVar3;
  }
  else {
    iVar4 = FUN_80116294(param_1);
    if (iVar4 != 0) {
      return;
    }
    iVar4 = func_0x800777fc(param_1);
    if (iVar4 != 0) goto LAB_8011091c;
    if (param_1[3] != '\x03') {
      return;
    }
    if ((DAT_800bf9f0 & 2) == 0) {
      return;
    }
    param_1[1] = 1;
    iVar4 = func_0x80077e7c(param_1);
    if (0x3b8e < iVar4) {
      *(undefined2 *)(param_1 + 0x36) = 0x3b8e;
    }
    func_0x8004954c();
    func_0x80041ac0(param_1);
    DAT_800e7eaa = param_1[0x2a];
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    func_0x80041938(param_1,0,0);
    if (param_1[0x29] != '\0') {
      *(undefined2 *)(param_1 + 0x50) = 0;
      FUN_801208b4(param_1);
      uVar3 = (undefined2)((uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) * 0x19 >> 10);
      *(undefined2 *)(param_1 + 0x84) = uVar3;
      *(undefined2 *)(param_1 + 0x86) = uVar3;
      FUN_801229bc();
      return;
    }
    sVar2 = *(short *)(param_1 + 0x50);
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(short *)(param_1 + 0x50) = sVar2 + 0x300;
    uVar3 = 0x3000;
    if (0x3000 < (short)(sVar2 + 0x300)) goto LAB_8011993c;
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
          puVar5[0x196] = puVar5[0x196] | 8;
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
          DAT_1f800137 = '\0';
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
    DAT_1f800137 = '\x02';
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

