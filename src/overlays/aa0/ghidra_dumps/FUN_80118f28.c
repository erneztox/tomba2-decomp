// FUN_80118f28

undefined4 FUN_80118f28(void)

{
  undefined4 uVar1;
  int unaff_s0;
  
  if ((DAT_800bf9b5 == '\x04') && (*(char *)(unaff_s0 + 0x79) != '\0')) {
    *(undefined1 *)(unaff_s0 + 0x47) = 0;
    *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    uVar1 = FUN_80121fc4();
    return uVar1;
  }
  return 0;
}

