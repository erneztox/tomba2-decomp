
void FUN_8001c218(void)

{
  bool bVar1;
  code *pcVar2;
  int unaff_s0;
  
  FUN_80019010(0x8001b6ec);
  FUN_80019174(9,0);
  pcVar2 = DAT_80026838;
  bVar1 = DAT_80026838 != (code *)0x0;
  *(undefined4 *)(unaff_s0 + 0x24) = 1;
  if (bVar1) {
    (*pcVar2)(2,*(undefined4 *)(unaff_s0 + 0x34));
  }
  return;
}

