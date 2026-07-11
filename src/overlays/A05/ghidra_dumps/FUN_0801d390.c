// FUN_0801d390

int FUN_0801d390(int param_1,short param_2,short param_3)

{
  short sVar1;
  short extraout_var;
  int iVar2;
  int iVar3;
  ushort uVar4;
  
  iVar2 = func_0x0007a980(2,2,0);
  iVar3 = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x801160cc;
    *(int *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 2) = 0x21;
    *(undefined2 *)(iVar2 + 0x54) = 0;
    *(undefined2 *)(iVar2 + 0x56) = *(undefined2 *)(param_1 + 0x56);
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x2c);
    *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x30);
    *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x34);
    uVar4 = param_2 + 0x80U & 0xf00;
    if ((*(char *)(param_1 + 0xbf) == '\0') && (uVar4 < 0x800)) {
      uVar4 = 0;
    }
    *(ushort *)(iVar2 + 0x58) = uVar4;
    iVar3 = func_0x00083e80(uVar4);
    *(short *)(iVar2 + 0x50) = (short)(iVar3 >> 4);
    func_0x00083f50(uVar4);
    iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(iVar2 + 0x4e) = (short)((uint)(iVar3 * extraout_var) >> 8);
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    sVar1 = (short)((uint)(-iVar3 * (int)extraout_var) >> 8);
    *(short *)(iVar2 + 0x52) = sVar1;
    *(short *)(iVar2 + 0x50) = *(short *)(iVar2 + 0x50) * param_3;
    *(short *)(iVar2 + 0x4e) = *(short *)(iVar2 + 0x4e) * param_3;
    *(short *)(iVar2 + 0x52) = sVar1 * param_3;
    iVar3 = iVar2;
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x00074590(0x8d,0,0);
    }
  }
  return iVar3;
}

