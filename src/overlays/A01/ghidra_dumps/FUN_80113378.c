// FUN_80113378

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80113378(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x78;
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    FUN_8011c378();
    return;
  }
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
  FUN_8011aff0(param_1);
  iVar2 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                       0x10000) >> 0x10);
  if (iVar2 != 0) {
    func_0x800517f8(param_1);
  }
  return;
}

