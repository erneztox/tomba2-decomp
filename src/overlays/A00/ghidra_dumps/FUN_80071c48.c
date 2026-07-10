// FUN_80071c48

void FUN_80071c48(int param_1,undefined2 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = *(short *)(param_1 + 0x60) + 0x100U & 0xfff;
    *(ushort *)(param_1 + 0x60) = uVar1;
    if (uVar1 == 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    *(undefined2 *)(param_1 + 0x2e) = param_2;
    iVar2 = FUN_80083e80((int)*(short *)(param_1 + 0x60));
    *(int *)(param_1 + 0x30) = param_3 * 0x10000 + iVar2 * *(short *)(param_1 + 0x82) * 0x10;
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined2 *)(param_1 + 0x2e) = param_2;
    *(short *)(param_1 + 0x32) = (short)param_3;
  }
  return;
}

