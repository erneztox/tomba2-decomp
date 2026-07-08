
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003cca4(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_800bf544;
  bVar1 = *(char *)(param_1 + 0xb) == '\x0f';
  _DAT_1f80028c = param_1;
  switch(*(byte *)(param_1 + 0xd) & 0xb) {
  case 0:
  case 4:
    FUN_8003cdd8(param_1,bVar1);
    break;
  case 1:
    FUN_8003cdd8(param_1,bVar1);
    if (*(char *)(param_1 + 0x1b) == '\0') {
      FUN_8003f4c4(param_1,uVar2,_DAT_800bf544);
    }
    else {
      FUN_8003f3f4(param_1,uVar2);
    }
    break;
  case 2:
    FUN_8003cdd8(param_1,bVar1);
    FUN_8003d584(param_1,uVar2,_DAT_800bf544);
    break;
  case 3:
    FUN_8003cdd8(param_1,bVar1);
    FUN_8003f594(param_1,uVar2,_DAT_800bf544);
    break;
  case 8:
    FUN_8003cdd8(param_1,bVar1);
    FUN_8003f344(param_1,uVar2,_DAT_800bf544);
  }
  return;
}

