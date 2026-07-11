// FUN_0801f858

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f858(int param_1)

{
  short sVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
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
  
  local_220 = _DAT_80109a10;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  iVar5 = 0;
  if ('\0' < *(char *)(param_1 + 0x55)) {
    cVar2 = *(char *)(param_1 + 0x54) << 1;
    local_220._3_1_ = (undefined1)((uint)_DAT_80109a10 >> 0x18);
    local_220._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x55),cVar2);
    local_220 = CONCAT22(CONCAT11(local_220._3_1_,cVar2),(undefined2)local_220);
    _DAT_1f800090 = (int)*(short *)(param_1 + 0x56);
    do {
      func_0x000318a0(param_1 + 0x2c,&local_220,param_1 + 0x48);
      func_0x00027768(0x80109980,0,(int)*(short *)(param_1 + 0x32),0);
      iVar5 = iVar5 + 1;
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
    } while (iVar5 < 4);
  }
  iVar5 = 0;
  uVar3 = func_0x0009a450();
  local_220 = CONCAT13(local_220._3_1_,0x200000);
  _DAT_1f800090 = (int)*(short *)(param_1 + 0x52) + (uVar3 & 0x1ff);
  local_220._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x51),0x20);
  do {
    func_0x000318a0(param_1 + 0x2c,&local_220,param_1 + 0x48);
    func_0x00027768(0x80109914,0,(int)*(short *)(param_1 + 0x32),0);
    iVar5 = iVar5 + 1;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x400;
  } while (iVar5 < 4);
  iVar6 = (int)*(short *)(param_1 + 0x58);
  iVar5 = 0;
  puVar7 = local_f8;
  do {
    iVar4 = func_0x00083f50(iVar6);
    *(short *)(&local_218 + iVar5 * 2) = *(short *)(param_1 + 0x2c) + (short)(iVar4 * 400 >> 0xc);
    iVar4 = func_0x00083e80(iVar6);
    *(short *)(&local_214 + iVar5 * 2) = *(short *)(param_1 + 0x30) + (short)(iVar4 * 400 >> 0xc);
    *(short *)((int)&local_218 + iVar5 * 8 + 2) =
         *(short *)(param_1 + 0x2e) - (short)iVar5 * (short)(*(char *)(param_1 + 0x51) * 5 >> 4);
    if (iVar5 < 2) {
      *puVar7 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = (uint)((((0x24 - iVar5) * 0x94) / 0x24) * (0x1000 - _DAT_1f800090)) >> 0xc;
    *puVar7 = uVar3 << 0x10 | uVar3 << 8 | uVar3;
    local_68[iVar5] = 5;
    puVar7 = puVar7 + 1;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x155;
  } while (iVar5 < 0x24);
  func_0x00029664(&local_218,0x24,local_f8);
  func_0x000329e0(6);
  iVar6 = (int)*(short *)(param_1 + 0x4a);
  iVar5 = 0;
  do {
    local_40 = _DAT_80109a14;
    local_3c = _DAT_80109a18;
    local_38 = _DAT_80109a1c;
    local_34 = _DAT_80109a20;
    local_30[0] = _DAT_80109a24;
    sVar1 = *(short *)(param_1 + iVar5 * 2 + 0x5c);
    if (sVar1 < 0) {
      iVar4 = func_0x00083f50(iVar6);
      local_218 = CONCAT22(local_218._2_2_,*(short *)(param_1 + 0x2c) + (short)(iVar4 * 400 >> 0xc))
      ;
      iVar4 = func_0x00083e80(iVar6);
      local_20c = *(short *)(param_1 + 0x30) + (short)(iVar4 * 400 >> 0xc);
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
      iVar4 = func_0x000317cc(0xffffffce);
      if (iVar4 == 0) {
        uVar3 = func_0x0009a450();
        _DAT_1f800090 = (uVar3 & 0x1ff) + sVar1 * -8;
        iVar4 = 0xfff - _DAT_1f800090;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        local_40 = iVar4 >> 4;
        if (0xfff < iVar4) {
          local_40 = 0xff;
        }
        local_40 = local_40 << 0x10 | local_40 << 8 | local_40;
        local_3c = local_40 >> 1 & 0x7f7f7f;
        local_38 = local_3c >> 1 & 0x3f3f3f;
        _DAT_1f800084 = _DAT_1f800084 >> 1;
        _DAT_1f800088 = _DAT_1f800084;
        func_0x00027a4c(0x801099f0,_DAT_801099ec);
        func_0x00029664(&local_218,3,&local_40,local_30);
      }
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x155;
  } while (iVar5 < 0xc);
  return;
}

