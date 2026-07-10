// FUN_8003ef9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003ef9c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_800bf544;
  bVar1 = *(char *)(param_1 + 0xb) == '\x0f';
  if ((*(byte *)(param_1 + 0xd) & 0xf) == 0) {
    FUN_8003f07c(param_1,bVar1);
  }
  else if ((*(byte *)(param_1 + 0xd) & 0xf) == 2) {
    FUN_8003f07c(param_1,bVar1);
    FUN_8003d584(param_1,uVar2,_DAT_800bf544);
  }
  return;
}

