// FUN_80120618

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80120618(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      iVar1 = *(int *)(iVar3 + 0xc0);
      _DAT_1f8000c0 = *(undefined2 *)(iVar1 + 0x2c);
      _DAT_1f8000c2 = *(undefined2 *)(iVar1 + 0x30);
      _DAT_1f8000c4 = *(undefined2 *)(iVar1 + 0x34);
      func_0x80084110(&DAT_1f8000f8,iVar1 + 0x18,0x1f800000);
      func_0x80084220(&DAT_1f8000c0,&DAT_1f800014);
      _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
      _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
      _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
      func_0x80084660(0x1f800000);
      func_0x80084690(0x1f800000);
      FUN_8012a2d8(param_1,iVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return;
}

