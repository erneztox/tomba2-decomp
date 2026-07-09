// FUN_8010b408

void FUN_8010b408(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x80022f04();
  if (iVar1 != 0) {
    *(undefined1 *)(param_2 + 0x2b) = 1;
    *(char *)(param_2 + 0x46) = (char)(*(ushort *)(param_1 + 0x56) >> 4);
    func_0x8001e860();
    DAT_1f800182 = 0;
  }
  return;
}

