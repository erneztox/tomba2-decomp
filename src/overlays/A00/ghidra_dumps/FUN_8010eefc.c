// FUN_8010eefc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010eefc(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  short *psVar4;
  
  psVar4 = *(short **)(param_1 + 0x10);
  iVar3 = func_0x8007778c();
  uVar2 = _DAT_1f800164;
  uVar1 = _DAT_1f800162;
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 5) == '\x02') {
      *(undefined2 *)(param_1 + 0x2e) = _DAT_1f800160;
      *(undefined2 *)(param_1 + 0x32) = uVar1;
      *(undefined2 *)(param_1 + 0x36) = uVar2;
      FUN_80117f14();
      return;
    }
    *(short *)(param_1 + 0x2e) = *psVar4 + -0x20;
    *(short *)(param_1 + 0x32) = psVar4[1] + 0x50;
    func_0x80077b5c(param_1);
    func_0x8004b374(param_1,0);
  }
  return;
}

