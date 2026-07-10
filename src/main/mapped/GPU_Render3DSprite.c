/**
 * @brief Renders a 3D sprite: sets up GTE, transforms, submits to OT
 * @note Original: func_8003D23C at 0x8003D23C
 */
// GPU_Render3DSprite



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003d23c(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 in_zero;
  undefined4 extraout_at;
  uint *puVar3;
  int iVar4;
  
  iVar4 = (int)((uint)*(ushort *)(param_1 + 0xc) * 0x50000) >> 0x10;
  FUN_800517bc(0x1f800000,iVar4,iVar4,iVar4);
  FUN_80051794(&DAT_1f800020);
  FUN_800847f0(param_1 + 0x28,&DAT_1f800020);
  FUN_80084110(&DAT_1f800020,0x1f800000,&DAT_1f800040);
  puVar1 = _DAT_800bf544;
  _DAT_1f8000c0 = CONCAT22(*(undefined2 *)(param_1 + 0x22),*(undefined2 *)(param_1 + 0x1e));
  _DAT_1f8000c4 = CONCAT22(DAT_1f8000c4_2,*(undefined2 *)(param_1 + 0x26));
  setCopControlWord(2,0,_DAT_1f8000f8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopReg(2,in_zero,_DAT_1f8000c0);
  setCopReg(2,extraout_at,_DAT_1f8000c4);
  copFunction(2,0x486012);
  _DAT_1f800054 = getCopReg(2,0x19);
  _DAT_1f800058 = getCopReg(2,0x1a);
  _DAT_1f80005c = getCopReg(2,0x1b);
  _DAT_1f800054 = _DAT_1f800054 + _DAT_1f80010c;
  _DAT_1f800058 = _DAT_1f800058 + _DAT_1f800110;
  _DAT_1f80005c = _DAT_1f80005c + _DAT_1f800114;
  setCopControlWord(2,0,_DAT_1f800040);
  setCopControlWord(2,0x800,_DAT_1f800044);
  setCopControlWord(2,0x1000,_DAT_1f800048);
  setCopControlWord(2,0x1800,_DAT_1f80004c);
  setCopControlWord(2,0x2000,_DAT_1f800050);
  setCopControlWord(2,0x2800,_DAT_1f800054);
  setCopControlWord(2,0x3000,_DAT_1f800058);
  setCopControlWord(2,0x3800,_DAT_1f80005c);
  iVar4 = (uint)*(byte *)(param_1 + 7) * 0x18;
  setCopReg(2,in_zero,*(undefined4 *)(&DAT_8009d46c + iVar4));
  setCopReg(2,extraout_at,*(undefined4 *)(&DAT_8009d470 + iVar4));
  setCopReg(2,&DAT_8009d46c + iVar4,*(undefined4 *)(&DAT_8009d474 + iVar4));
  setCopReg(2,0x8009d46c,*(undefined4 *)(&DAT_8009d478 + iVar4));
  setCopReg(2,_DAT_1f800114,*(undefined4 *)(&DAT_8009d47c + iVar4));
  setCopReg(2,_DAT_1f800110,*(undefined4 *)(&DAT_8009d480 + iVar4));
  copFunction(2,0x280030);
  _DAT_1f800008 = getCopReg(2,0xc);
  _DAT_1f800010 = getCopReg(2,0xd);
  _DAT_1f800018 = getCopReg(2,0xe);
  copFunction(2,0x158002d);
  iVar4 = getCopReg(2,7);
  _DAT_1f800020 = (iVar4 >> (iVar4 >> 10 & 0x1fU)) + (iVar4 >> 10) * 0x200;
  if (0x7fb < _DAT_1f800020 - 4U) {
    _DAT_1f800020 = -1;
  }
  if (-1 < _DAT_1f800020) {
    _DAT_1f80001c = CONCAT22(DAT_1f80001c_2,*(undefined2 *)(param_1 + 0x3c));
    _DAT_1f800014 = CONCAT22(*(undefined2 *)(param_1 + 0x3a),*(undefined2 *)(param_1 + 0x38));
    _DAT_1f80000c = CONCAT22(*(undefined2 *)(param_1 + 0x36),*(undefined2 *)(param_1 + 0x34));
    _DAT_1f800004 = CONCAT13(*(undefined1 *)(param_1 + 0xe),*(undefined3 *)(param_1 + 0x30));
    puVar3 = (uint *)(_DAT_800ed8c8 + _DAT_1f800020 * 4);
    puVar2 = _DAT_800bf544 + 8;
    *_DAT_800bf544 = *puVar3 | 0x7000000;
    _DAT_800bf544 = puVar2;
    *puVar3 = (uint)puVar1;
    puVar1[1] = _DAT_1f800004;
    puVar1[2] = _DAT_1f800008;
    puVar1[3] = _DAT_1f80000c;
    puVar1[4] = _DAT_1f800010;
    puVar1[5] = _DAT_1f800014;
    puVar1[6] = _DAT_1f800018;
    puVar1[7] = _DAT_1f80001c;
  }
  return;
}
