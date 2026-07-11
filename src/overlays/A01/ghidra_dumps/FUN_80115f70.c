// FUN_80115f70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80115f70(void)

{
  bool bVar1;
  undefined4 in_v0;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_t1;
  uint in_t3;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  *(undefined4 *)(unaff_s0 + 0x14) = in_v0;
  *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
  iVar2 = func_0x8007778c();
  if ((((iVar2 == 0) || (DAT_1f800207 != '\x10')) || (_DAT_1f800164 < 0x3a34)) ||
     (iVar2 = func_0x8005308c(), iVar2 == 0)) {
    func_0x80041098();
    func_0x8004190c();
    return;
  }
  func_0x80042354(1,1);
  func_0x80040d68();
  *(undefined1 *)(unaff_s0 + 0x70) = 2;
  *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
  iVar2 = _DAT_1f800090;
  if ((in_t3 & 3) == 1) {
    iVar4 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
      iVar4 = *(int *)(unaff_s2 + 0x84);
    }
    bVar1 = _DAT_1f800090 < iVar4;
    if (_DAT_1f800090 < *(int *)(unaff_s0 + 0x8c)) {
      FUN_80131074(*(int *)(unaff_s0 + 0x8c),1);
      return;
    }
  }
  else {
    if ((in_t3 & 3) != 2) {
      halt_baddata();
    }
    iVar4 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
      iVar4 = *(int *)(unaff_s2 + 0x84);
    }
    iVar3 = *(int *)(unaff_s0 + 0x8c);
    bVar1 = iVar4 < _DAT_1f800090;
    if (iVar3 < _DAT_1f800090) {
      bVar1 = iVar4 < iVar3;
      iVar2 = iVar3;
    }
  }
  if (bVar1) {
    iVar2 = iVar4;
  }
  *in_t1 = iVar2 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

