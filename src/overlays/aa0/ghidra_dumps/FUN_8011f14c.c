// FUN_8011f14c

undefined4 FUN_8011f14c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_800bf936 & 2) == 0) {
    if (DAT_800bf9d4 != '\0') {
      return 0;
    }
    iVar1 = func_0x80072ddc(param_1,0,2,0x56);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0x80127d1c;
      *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
      *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
      DAT_800bf9d4 = 1;
      func_0x8003116c(0x30,iVar1 + 0x2c,0xfffffff6);
      uVar2 = func_0x80074590(0x37,0x20,0);
      return uVar2;
    }
  }
  uVar2 = FUN_801281a4();
  return uVar2;
}

