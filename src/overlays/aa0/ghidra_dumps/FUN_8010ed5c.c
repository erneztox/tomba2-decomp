// FUN_8010ed5c

undefined4 FUN_8010ed5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((DAT_800bfaee == '\0') && ((DAT_800bf9c0 & 1) == 0)) &&
     (iVar1 = func_0x8007a980(0,5,0), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80117658;
    *(int *)(iVar1 + 0x10) = param_1 + 0x60;
    *(undefined1 *)(iVar1 + 2) = 2;
    *(undefined1 *)(iVar1 + 3) = 0;
    uVar2 = FUN_80117d6c();
    return uVar2;
  }
  return 0;
}

