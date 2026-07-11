// FUN_80101e94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80101e94(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  if (DAT_800bf817 == 4) {
    func_0x8006e3f4(param_1,&DAT_800e7eac);
    _DAT_1f8000d2 = 0x2995;
    _DAT_1f8000d6 = 0xeb55;
    _DAT_1f8000da = 0x3d03;
    uVar1 = FUN_8010af58();
    return uVar1;
  }
  if (DAT_800bf817 < 5) {
    uVar1 = 0;
    if (DAT_800bf817 < 2) {
      func_0x8006e3f4(param_1,&DAT_800e7eac);
      iVar2 = (uint)DAT_800bf817 * 6;
      local_1e = *(undefined2 *)(iVar2 + -0x7fecb404);
      local_1a = *(undefined2 *)(iVar2 + -0x7fecb402);
      local_16 = *(undefined2 *)(iVar2 + -0x7fecb400);
      func_0x8006cec4(0x1f8000d0,auStack_20,0);
      *(undefined1 *)(param_1 + 0x66) = 3;
      uVar1 = FUN_8010af58();
      return uVar1;
    }
  }
  else {
    if (DAT_800bf817 != 5) {
      uVar1 = FUN_8010af58();
      return uVar1;
    }
    func_0x8006e3f4(param_1,&DAT_800e7eac);
    uVar1 = 1;
    _DAT_1f8000d2 = 0x1b64;
    _DAT_1f8000d6 = 0xe852;
    _DAT_1f8000da = 0x1f76;
  }
  return uVar1;
}

