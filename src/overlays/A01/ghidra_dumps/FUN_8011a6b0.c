// FUN_8011a6b0

/* WARNING: Control flow encountered bad instruction data */

uint FUN_8011a6b0(int param_1)

{
  uint uVar1;
  int unaff_s1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    FUN_8011a43c(param_1,0);
    DAT_800bf9eb = 0;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    uVar1 = FUN_801236b8();
    return uVar1;
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    FUN_8012c4f4(param_1,0);
    func_0x80077c40(param_1,0x8001b7b0,0);
    DAT_800bfa13 = DAT_800bfa13 | (byte)(unaff_s1 << (*(byte *)(param_1 + 3) & 0x1f));
    func_0x8004ed94(0x5b,0x41);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return (uint)(DAT_800bf9eb == '\x02');
}

