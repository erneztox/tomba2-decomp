
void FUN_8001c108(void)

{
  bool bVar1;
  code *pcVar2;
  undefined4 uVar3;
  int unaff_s0;
  
  FUN_80019024(*(undefined4 *)(unaff_s0 + 0x2c));
  if ((DAT_8002683c & 1) != 0) {
    FUN_80019454(*(undefined4 *)(unaff_s0 + 0x30));
  }
  FUN_80019010(0x8001b6ec);
  FUN_80019174(9,0);
  pcVar2 = DAT_80026838;
  bVar1 = DAT_80026838 != (code *)0x0;
  *(undefined4 *)(unaff_s0 + 0x24) = 1;
  if (bVar1) {
    uVar3 = 5;
    if (*(int *)(unaff_s0 + 0x14) == 0) {
      uVar3 = 2;
    }
    (*pcVar2)(uVar3);
  }
  return;
}

