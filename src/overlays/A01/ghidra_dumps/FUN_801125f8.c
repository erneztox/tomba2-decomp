// FUN_801125f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801125f8(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = func_0x8007778c();
  if (iVar2 != 0) {
    func_0x800517f8(param_1);
  }
  if (*(char *)(param_1 + 6) == '\0') {
    if (_DAT_800e7fee != 0) {
      DAT_800bf9f4 = DAT_800bf9f4 | (byte)(1 << (*(byte *)(param_1 + 3) & 0x1f));
      DAT_800bf9f5 = DAT_800bf9f5 + '\x01';
      if ((DAT_800bf8be != -1) && (DAT_800bf9f5 == '\b')) {
        func_0x80040c00(10);
        DAT_800bf9f9 = 1;
      }
    }
    *(undefined2 *)(param_1 + 0x4a) = 0xffe0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') goto LAB_8011b698;
  if (*(char *)(param_1 + 1) != '\0') {
    sVar1 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x100;
    *(short *)(param_1 + 0x4a) = sVar1 + 3;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + sVar1;
    return;
  }
  *(undefined1 *)(param_1 + 4) = 3;
LAB_8011b698:
  func_0x800735f4();
  return;
}

