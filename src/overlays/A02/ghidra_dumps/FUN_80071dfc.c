// FUN_80071dfc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80071dfc(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  ushort local_28;
  short local_26;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    iVar6 = 0;
    iVar8 = 0;
    do {
      *(undefined2 *)(param_1 + (iVar8 >> 0xf) + 0x60) = 0;
      iVar6 = iVar6 + 1;
      iVar8 = iVar6 * 0x10000;
    } while (iVar6 * 0x10000 >> 0x10 < 0x10);
    *(undefined2 *)(param_1 + 0x82) = 8;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    iVar8 = (uint)*(ushort *)(param_1 + 0xe) << 0x10;
    uVar5 = (iVar8 >> 0x10) - (iVar8 >> 0x1f) >> 1;
    *(char *)(param_1 + 0x5f) = (char)uVar5;
    if ((*(ushort *)(param_1 + 0xe) & 1) == 0) {
      cVar3 = *(char *)(param_1 + 0x5f) * '\b' + -4;
    }
    else {
      cVar3 = (char)((uVar5 & 0xff) << 3);
    }
    *(char *)(param_1 + 0x5f) = cVar3;
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
    return;
  }
  bVar4 = *(char *)(param_1 + 0x5e) + 1;
  *(byte *)(param_1 + 0x5e) = bVar4;
  if ((bVar4 & 1) == 0) {
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
  }
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(undefined1 *)(param_1 + 4) = 3;
    _DAT_800bf83c = 0;
  }
  else {
    FUN_80084660(&DAT_1f8000f8);
    FUN_80084690(&DAT_1f8000f8);
    if (*(char *)(param_1 + 3) == '\0') {
      _DAT_1f8000c0 = _DAT_800e7eae;
      if ((DAT_800e7ff4 & 4) == 0) {
        _DAT_1f8000c2 = _DAT_800e7eb2 + -200;
      }
      else {
        _DAT_1f8000c2 = _DAT_800e7eb2 + -0x8c;
      }
      _DAT_1f8000c4 = _DAT_800e7eb6;
    }
    else {
      _DAT_1f8000c0 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x2e);
      _DAT_1f8000c2 = *(short *)(*(int *)(param_1 + 0x10) + 0x32) + -200;
      _DAT_1f8000c4 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x36);
    }
    local_37 = FUN_8003f7a0(&DAT_1f8000c0,&local_28);
    uVar2 = _DAT_800ecf58;
    bVar4 = *(byte *)(param_1 + 0x5f);
    iVar8 = 0;
    local_38 = 0;
    local_36 = *(undefined2 *)(param_1 + 0x5c);
    local_2c = 0;
    local_2a = 0;
    puVar9 = (undefined1 *)(param_1 + 0x44);
    if (0 < *(short *)(param_1 + 0xe)) {
      iVar6 = 0;
      do {
        iVar7 = (int)(((uint)local_28 - (uint)bVar4) * 0x10000) >> 0x10;
        if (iVar6 >> 0x10 == 0) {
          FUN_80071c48(param_1,iVar7,(int)local_26);
        }
        else {
          FUN_80071cf4(param_1,iVar7,(int)local_26);
        }
        local_30 = *(undefined2 *)(param_1 + 0x2e);
        local_2e = *(undefined2 *)(param_1 + 0x32);
        local_40 = *puVar9;
        puVar9 = puVar9 + 1;
        local_3f = 0;
        iVar6 = FUN_8009a1f0(&local_40);
        FUN_8007e1b8(&local_30,
                     *(undefined4 *)((int)&PTR_DAT_80017334 + ((iVar6 + 0x69) * 0x10000 >> 0xe)),
                     uVar2,&local_38);
        iVar8 = iVar8 + 1;
        iVar6 = iVar8 * 0x10000;
      } while (iVar8 * 0x10000 >> 0x10 < (int)*(short *)(param_1 + 0xe));
    }
  }
  return;
}

