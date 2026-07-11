// FUN_8011af8c

undefined4 FUN_8011af8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((DAT_800bf936 & 4) == 0) {
    uVar1 = 0;
    if (DAT_800bf9d4 == '\0') {
      iVar2 = func_0x80072ddc(param_1,0,2,0x56);
      if (iVar2 == 0) goto LAB_8011afe8;
      *(undefined4 *)(iVar2 + 0x1c) = 0x80123cfc;
      *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
      *(undefined1 *)(iVar2 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
      DAT_800bf9d4 = '\x01';
      func_0x8003116c(0x30,iVar2 + 0x2c,0xfffffff6);
      func_0x80074590(0x37,0x20,0);
      uVar1 = 1;
    }
    return uVar1;
  }
LAB_8011afe8:
  uVar1 = FUN_80123fe4();
  return uVar1;
}

