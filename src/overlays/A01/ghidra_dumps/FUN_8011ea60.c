// FUN_8011ea60

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011ea60(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int unaff_s1;
  int *unaff_s2;
  int unaff_s7;
  
  uVar2 = _DAT_1f800162;
  uVar1 = _DAT_1f800160;
  *(undefined2 *)(unaff_s1 + 0x42) = _DAT_1f800164;
  iVar4 = -0x7fec89a0;
  *(undefined2 *)(unaff_s1 + 0x3a) = uVar1;
  *(undefined2 *)(unaff_s1 + 0x3e) = uVar2;
  iVar3 = func_0x8006cc1c();
  if (iVar3 == 0) {
    FUN_80130aac();
    return;
  }
  if (*(int *)(unaff_s7 + 0x8c) < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_s2 = *(int *)(unaff_s7 + 0x8c) >> 2;
  FUN_80130acc();
  return;
}

