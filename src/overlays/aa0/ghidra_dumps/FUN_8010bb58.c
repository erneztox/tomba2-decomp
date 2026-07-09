// FUN_8010bb58

void FUN_8010bb58(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x80023d48(param_1,param_2,*(undefined4 *)(param_2 + 200),0);
  if (iVar1 == 0) {
    if ((*(ushort *)(param_2 + 0x60) & 2) == 0) {
      return;
    }
    iVar1 = func_0x80023d48(param_1,param_2,*(undefined4 *)(param_2 + 0xcc),0);
    if (iVar1 != 2) {
      return;
    }
    *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_2 + 0x5e);
  }
  else if (iVar1 == 2) {
    FUN_80114b64();
    return;
  }
  DAT_1f800182 = 0;
  return;
}

