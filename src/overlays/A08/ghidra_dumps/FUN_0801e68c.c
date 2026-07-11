// FUN_0801e68c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e68c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  short local_78;
  short local_76;
  short local_74;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined1 local_68;
  char local_67;
  undefined1 local_66;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [10];
  
  puVar3 = local_48;
  puVar2 = (undefined4 *)&DAT_801098f0;
  local_68 = DAT_801098d4;
  local_66 = DAT_801098d6;
  local_60[0] = _DAT_801098d8;
  local_60[1] = _DAT_801098dc;
  local_60[2] = _DAT_801098e0;
  local_60[3] = _DAT_801098e4;
  local_50 = _DAT_801098e8;
  local_4c = _DAT_801098ec;
  do {
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar2 = puVar2 + 4;
    puVar3 = puVar3 + 4;
  } while (puVar2 != (undefined4 *)&DAT_80109910);
  *puVar3 = _DAT_80109910;
  local_78 = *(short *)(param_1 + 0x2e);
  local_76 = *(short *)(param_1 + 0x32);
  local_74 = *(short *)(param_1 + 0x36);
  iVar1 = *(short *)(param_1 + 100) * 0x40;
  local_67 = (char)((ulonglong)((longlong)iVar1 * 0xd20d20d3) >> 0x28) - (char)(iVar1 >> 0x1f);
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar1 = 0;
  _DAT_1f800090 = (int)*(short *)(param_1 + 0x68);
  *(undefined2 *)(param_1 + 0x58) = 0;
  do {
    func_0x00031f84(&local_78,&local_68,param_1 + 0x54);
    func_0x0011731c(0x80145000,*(undefined1 *)(param_1 + 0x61),0,*(byte *)(param_1 + 0x60));
    iVar1 = iVar1 + 1;
    *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + 0x400;
  } while (iVar1 < 4);
  iVar1 = (uint)*(ushort *)(param_1 + 0x68) << 0x10;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0x1000 - (iVar1 >> 0x10));
  iVar7 = 0;
  _DAT_1f800090 = (iVar1 >> 0x12) + 0xc00;
  *(undefined2 *)(param_1 + 0x58) = 0x800;
  local_67 = 0x80;
  do {
    func_0x00031f84(&local_78,&local_68,param_1 + 0x54);
    func_0x0011731c(0x80145000,0x80 - (uint)*(byte *)(param_1 + 0x61),0,
                    0x80 - (uint)*(byte *)(param_1 + 0x60));
    iVar7 = iVar7 + 1;
    *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + 0x400;
  } while (iVar7 < 4);
  _DAT_1f800090 = (int)*(short *)(param_1 + 0x68);
  func_0x000318a0(&local_78,0x800a1cd4,0x800a1ccc);
  func_0x00027768(local_60[*(byte *)(param_1 + 0x62)],0,0,0);
  local_70 = 0;
  local_6c = 0;
  local_6e = func_0x00085690((int)local_78 - (int)_DAT_1f8000d2,(int)local_74 - (int)_DAT_1f8000da);
  local_76 = (local_76 + 0x22) - *(short *)(param_1 + 100);
  func_0x000318a0(&local_78,0x800a1cd4,&local_70);
  func_0x00027768(local_48[*(byte *)(param_1 + 99)],0,0,0);
  return;
}

