// FUN_80108558

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80108558(undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = param_1[2];
  iVar2 = func_0x80023d48(param_1,param_2,*(undefined4 *)(param_2 + 200),cVar1 == '\x03');
  if (iVar2 == 0) {
    if ((*(ushort *)(param_2 + 0x60) & 2) == 0) {
      return;
    }
    iVar2 = func_0x80023d48(param_1,param_2,*(undefined4 *)(param_2 + 0xcc),cVar1 == '\x03');
    if (iVar2 == 0) {
      return;
    }
    if (((param_1[2] == '\x03') && (param_1[3] != -0x80)) && (1 < *(byte *)(param_2 + 0x5e))) {
      *param_1 = 3;
      iVar2 = _DAT_1f80009c;
      param_1[4] = 2;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[0x2b] = (char)(iVar2 >> 4);
    }
  }
  else if (((param_1[2] == '\x03') && (param_1[3] != -0x80)) && (1 < *(byte *)(param_2 + 0x5e))) {
    *param_1 = 3;
    FUN_801115e0();
    return;
  }
  DAT_1f800182 = 0;
  return;
}

