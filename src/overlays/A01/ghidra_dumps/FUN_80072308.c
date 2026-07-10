// FUN_80072308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80072308(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  short local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  short local_20;
  short local_1e;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x5a) = 0;
    *(undefined2 *)(param_1 + 0x82) = 8;
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
    return;
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
    _DAT_1f8000c0 = _DAT_800e7eae;
    if ((DAT_800e7ff4 & 4) == 0) {
      _DAT_1f8000c2 = _DAT_800e7eb2 + -200;
    }
    else {
      _DAT_1f8000c2 = _DAT_800e7eb2 + -0x8c;
    }
    _DAT_1f8000c4 = _DAT_800e7eb6;
    uVar3 = FUN_8003f7a0(&DAT_1f8000c0,&local_20);
    FUN_800721dc(param_1,(int)local_20,(int)local_1e);
    *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)(param_1 + 0x32);
    uVar2 = _DAT_800ecf58;
    local_30 = 0;
    local_2e = *(undefined2 *)(param_1 + 0x5c);
    local_24 = 0;
    local_22 = 0;
    local_2f = uVar3;
    if (*(char *)(param_1 + 7) == '\0') {
      local_28 = *(short *)(param_1 + 0x2e);
      local_26 = *(undefined2 *)(param_1 + 0x32);
      puVar4 = PTR_DAT_80017500;
    }
    else {
      if (*(char *)(param_1 + 7) != '\x01') {
        return;
      }
      local_28 = *(short *)(param_1 + 0x2e) + -6;
      local_26 = *(undefined2 *)(param_1 + 0x32);
      FUN_8007e1b8(&local_28,PTR_DAT_800174d4,_DAT_800ecf58,&local_30);
      local_28 = *(short *)(param_1 + 0x2e) + 6;
      local_26 = *(undefined2 *)(param_1 + 0x32);
      puVar4 = *(undefined **)
                ((int)&PTR_DAT_80017334 +
                ((int)((*(ushort *)(param_1 + 0xe) + 0x69) * 0x10000) >> 0xe));
    }
    FUN_8007e1b8(&local_28,puVar4,uVar2,&local_30);
  }
  return;
}

