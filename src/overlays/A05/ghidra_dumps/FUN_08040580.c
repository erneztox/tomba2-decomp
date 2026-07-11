// FUN_08040580

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08040580(int param_1)

{
  short sVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined2 local_210;
  short local_20e;
  short local_20c;
  undefined2 local_208;
  short local_206;
  short local_204;
  uint local_f8 [36];
  undefined1 local_68 [40];
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  
  local_220 = _DAT_8010a1ac;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar4 = 0;
  if ('\0' < *(char *)(param_1 + 0x55)) {
    local_220._3_1_ = (undefined1)((uint)_DAT_8010a1ac >> 0x18);
    local_220 = CONCAT22(CONCAT11(local_220._3_1_,*(undefined1 *)(param_1 + 0x54)),
                         *(undefined2 *)(param_1 + 0x54));
    _DAT_1f800090 = (int)*(short *)(param_1 + 0x56);
    do {
      func_0x000318a0(param_1 + 0x2c,&local_220,param_1 + 0x48);
      func_0x00027768(0x8013ff74,0,(int)*(short *)(param_1 + 0x32),0);
      iVar4 = iVar4 + 1;
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
    } while (iVar4 < 4);
  }
  iVar4 = 0;
  uVar2 = func_0x0009a450();
  local_220 = CONCAT13(local_220._3_1_,0x100000);
  _DAT_1f800090 = (int)*(short *)(param_1 + 0x52) + (uVar2 & 0x1ff);
  local_220._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x51),0x10);
  do {
    func_0x000318a0(param_1 + 0x2c,&local_220,param_1 + 0x48);
    func_0x00027768(0x8013ff08,0,(int)*(short *)(param_1 + 0x32),0);
    iVar4 = iVar4 + 1;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
  } while (iVar4 < 4);
  iVar5 = (int)*(short *)(param_1 + 0x58);
  iVar4 = 0;
  puVar6 = local_f8;
  do {
    iVar3 = func_0x00083f50(iVar5);
    *(short *)(&local_218 + iVar4 * 2) = *(short *)(param_1 + 0x2c) + (short)(iVar3 * 200 >> 0xc);
    iVar3 = func_0x00083e80(iVar5);
    *(short *)(&local_214 + iVar4 * 2) = *(short *)(param_1 + 0x30) + (short)(iVar3 * 200 >> 0xc);
    *(short *)((int)&local_218 + iVar4 * 8 + 2) =
         *(short *)(param_1 + 0x2e) - (short)iVar4 * (short)(*(char *)(param_1 + 0x51) * 5 >> 4);
    if (iVar4 < 2) {
      *puVar6 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = (uint)((((0x24 - iVar4) * 0x94) / 0x24) * (0x1000 - _DAT_1f800090)) >> 0xc;
    *puVar6 = uVar2 << 0x10 | uVar2 << 8 | uVar2;
    local_68[iVar4] = 5;
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x155;
  } while (iVar4 < 0x24);
  func_0x00029664(&local_218,0x24,local_f8);
  func_0x000329e0(6);
  iVar5 = (int)*(short *)(param_1 + 0x4a);
  iVar4 = 0;
  do {
    local_40 = _DAT_8010a2d0;
    local_3c = _DAT_8010a2d4;
    local_38 = _DAT_8010a2d8;
    local_34 = _DAT_8010a2dc;
    local_30[0] = _DAT_8010a2e0;
    sVar1 = *(short *)(param_1 + iVar4 * 2 + 0x5c);
    if (sVar1 < 0) {
      iVar3 = func_0x00083f50(iVar5);
      local_218 = CONCAT22(local_218._2_2_,*(short *)(param_1 + 0x2c) + (short)(iVar3 * 200 >> 0xc))
      ;
      iVar3 = func_0x00083e80(iVar5);
      local_20c = *(short *)(param_1 + 0x30) + (short)(iVar3 * 200 >> 0xc);
      local_214 = CONCAT22(local_214._2_2_,local_20c);
      local_210 = (undefined2)local_218;
      local_208 = (undefined2)local_218;
      local_206 = *(short *)(param_1 + 0x2e) + sVar1;
      local_20e = local_206 + 300;
      local_218 = CONCAT22(local_206,(undefined2)local_218);
      local_206 = local_206 + 600;
      setCopReg(2,in_zero,local_218);
      setCopReg(2,extraout_at,local_214);
      local_204 = local_20c;
      iVar3 = func_0x000317cc(0xffffffce);
      if (iVar3 == 0) {
        uVar2 = func_0x0009a450();
        _DAT_1f800090 = (uVar2 & 0x1ff) + sVar1 * -8;
        iVar3 = 0xfff - _DAT_1f800090;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        local_40 = iVar3 >> 4;
        if (0xfff < iVar3) {
          local_40 = 0xff;
        }
        local_40 = local_40 << 0x10 | local_40 << 8 | local_40;
        local_3c = local_40 >> 1 & 0x7f7f7f;
        local_38 = local_3c >> 1 & 0x3f3f3f;
        _DAT_1f800084 = _DAT_1f800084 >> 1;
        _DAT_1f800088 = _DAT_1f800084;
        func_0x00027a4c(0x8013ffe4,_DAT_8013ffe0);
        func_0x00029664(&local_218,3,&local_40,local_30);
      }
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x155;
  } while (iVar4 < 0xc);
  return;
}

