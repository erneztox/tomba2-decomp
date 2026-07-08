
void FUN_80018fd4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_80026794;
  DAT_800267b4 = DAT_800267b4 + 1;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 8);
  return;
}

