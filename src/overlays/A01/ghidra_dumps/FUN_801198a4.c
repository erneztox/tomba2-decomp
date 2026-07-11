// FUN_801198a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801198a4(void)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int in_v1;
  undefined1 *puVar4;
  undefined1 *unaff_s0;
  
  if ((in_v1 == 3) && (0x3b8e < *(short *)(unaff_s0 + 0x36))) {
    *(undefined2 *)(unaff_s0 + 0x36) = 0x3b8e;
  }
  func_0x8004954c();
  func_0x80041ac0();
  DAT_800e7eaa = unaff_s0[0x2a];
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 8;
  puVar4 = unaff_s0;
  func_0x80041938();
  if (unaff_s0[0x29] != '\0') {
    *(undefined2 *)(unaff_s0 + 0x50) = 0;
    FUN_801208b4();
    uVar3 = (undefined2)((uint)*(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) * 0x19 >> 10);
    *(undefined2 *)(unaff_s0 + 0x84) = uVar3;
    *(undefined2 *)(unaff_s0 + 0x86) = uVar3;
    FUN_801229bc();
    return;
  }
  sVar2 = *(short *)(unaff_s0 + 0x50);
  *(undefined2 *)(unaff_s0 + 0x4a) = 0;
  *(short *)(unaff_s0 + 0x50) = sVar2 + 0x300;
  if (0x3000 < (short)(sVar2 + 0x300)) {
    *(undefined2 *)(unaff_s0 + 0x50) = 0x3000;
  }
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x50) * 0x100;
  if ((byte)unaff_s0[5] < 6) {
    *unaff_s0 = 1;
    unaff_s0[4] = 1;
    FUN_8012ba50();
    return;
  }
  if (unaff_s0[5] != 6) {
    FUN_8012ba50();
    return;
  }
  bVar1 = unaff_s0[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        _DAT_800e8046 = _DAT_800e8046 + -100;
        if (_DAT_800e8046 < -0x1fa4) {
          puVar4[0x196] = puVar4[0x196] | 8;
          *(undefined2 *)(unaff_s0 + 0x40) = 0x5a;
          unaff_s0[6] = unaff_s0[6] + '\x01';
          FUN_8012ba48();
          return;
        }
      }
      else {
        if (bVar1 != 3) {
          FUN_8012ba48();
          return;
        }
        sVar2 = *(short *)(unaff_s0 + 0x40);
        *(short *)(unaff_s0 + 0x40) = sVar2 + -1;
        if (sVar2 == 1) {
          unaff_s0[4] = 3;
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
    *unaff_s0 = 2;
    DAT_1f800137 = 2;
    unaff_s0[6] = unaff_s0[6] + '\x01';
  }
  *(short *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) =
       *(short *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) + -0x400;
  if (*(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) < 0x400) {
    func_0x80027144(*(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 0x40),unaff_s0 + 0x2c,0x400,0xc);
    func_0x80074590(0xc,0,0);
    func_0x80074590(0x97,0,0);
    *(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 0x40) = 0;
    unaff_s0[6] = unaff_s0[6] + '\x01';
    DAT_800e806c = 8;
    _DAT_800e8042 = 0x2cdc;
    _DAT_800e8046 = 0xe4d5;
    _DAT_800e804a = 0x35a3;
    FUN_8012ba48();
    return;
  }
LAB_80122aac:
  func_0x80051844();
  return;
}

