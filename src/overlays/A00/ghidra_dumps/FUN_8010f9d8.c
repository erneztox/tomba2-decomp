// FUN_8010f9d8

undefined4 FUN_8010f9d8(undefined4 param_1)

{
  int iVar1;
  undefined2 unaff_s0;
  undefined1 unaff_s1;
  
  iVar1 = func_0x80072ddc(param_1,0,5,3);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined1 *)(iVar1 + 3) = 0;
  *(undefined **)(iVar1 + 0x1c) = &DAT_80118240;
  DAT_8011825c = &DAT_8011d988;
  DAT_80118243 = 6;
                    /* WARNING: Read-only address (ram,0x801182a8) is written */
  uRam801182a8 = unaff_s0;
                    /* WARNING: Read-only address (ram,0x8011829e) is written */
  uRam8011829e = unaff_s1;
  return 6;
}

