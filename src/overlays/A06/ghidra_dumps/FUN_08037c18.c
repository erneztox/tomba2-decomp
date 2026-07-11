// FUN_08037c18

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08037c18(undefined1 *param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  
  if (param_1[6] == '\0') {
    *param_1 = 2;
    uVar5 = func_0x0013b844(param_1,*(int *)(param_1 + 0x10) + 0x2c);
    *(undefined2 *)(param_1 + 0x66) = uVar5;
    uVar4 = func_0x0013b7dc(param_1);
    param_1[0xbe] = uVar4;
    *(undefined2 *)(param_1 + 0x44) = 0x800;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x44);
  *(short *)(param_1 + 0x44) = sVar1 + 0x180;
  if (0x3000 < (short)(sVar1 + 0x180)) {
    *(undefined2 *)(param_1 + 0x44) = 0x3000;
  }
  func_0x0013b8f4(param_1,(int)*(short *)(param_1 + 0x66),
                  (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18);
  func_0x00041ac0(param_1);
  func_0x0004130c(param_1,0);
  *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x44) >> 5;
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x44) >> 5;
  iVar6 = func_0x00022f04(&DAT_800e7e80,param_1);
  if (iVar6 != 0) {
    func_0x00074590(0x94,0,0);
    iVar6 = *(int *)(param_1 + 0x10);
    if (iVar6 != 0) {
      *(undefined1 *)(iVar6 + 6) = 0;
      *(undefined1 *)(iVar6 + 5) = 0;
      *(undefined1 *)(iVar6 + 4) = 3;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar2 = _DAT_1f800164;
    uVar5 = _DAT_1f800162;
    *(undefined2 *)(param_1 + 0x2e) = _DAT_1f800160;
    *(undefined2 *)(param_1 + 0x32) = uVar5;
    *(undefined2 *)(param_1 + 0x36) = uVar2;
    func_0x0003116c(0x706,param_1 + 0x2c,0xffffffe2);
    if ((_DAT_800e7ffe & 0x200) == 0) {
      if (DAT_800e7eee != '\0') {
        func_0x0004bec4(0x43);
      }
      uVar3 = _DAT_800e7e84;
      _DAT_800e7e84 = CONCAT12(2,_DAT_800e7e84);
      _DAT_1f80023c = _DAT_800e7e84;
      DAT_1f800137 = 2;
      DAT_800bf81e = 0;
      DAT_800e7eef = 0x6c;
      _DAT_800e7e84 = CONCAT11(0x3a,(char)uVar3);
      _DAT_800e7e84 = (uint3)_DAT_800e7e84;
      func_0x0004ed94(0x43,0x41);
    }
    param_1[5] = 0;
    param_1[4] = 4;
  }
  return;
}

