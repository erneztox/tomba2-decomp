
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80018558(void)

{
  int in_at;
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  *(undefined4 *)(in_at + -0x61c0) = unaff_retaddr;
  FUN_80017cec();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  iVar2 = 0xb;
  _DAT_80039e48 = iVar1 + 0x884;
  _DAT_80039e4c = iVar1 + 0x894;
  do {
    *(undefined4 *)(iVar1 + 0x594) = 0;
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_80017dcc();
  return;
}

