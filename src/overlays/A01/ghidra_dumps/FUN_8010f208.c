// FUN_8010f208

void FUN_8010f208(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int in_v0;
  int iVar2;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 4) = *(undefined2 *)(in_v0 + 0x1a0);
  iVar2 = func_0x800493e8(param_1,param_2,0xffffffa6);
  if ((iVar2 != 0) || (iVar2 = func_0x80049250(), iVar2 != 0)) {
    *(undefined1 *)(unaff_s1 + 5) = 0;
    *(undefined1 *)(unaff_s1 + 6) = 0;
  }
  *(undefined1 *)(unaff_s1 + 0x29) = 0;
  sVar1 = FUN_80117188();
  if (sVar1 != 0) {
    *(char *)(unaff_s1 + 5) = (char)sVar1;
    FUN_801208b4();
    if ((*(char *)(unaff_s1 + 3) == '\0') && (unaff_s0 != 0)) {
      *(undefined1 *)(unaff_s1 + 5) = 0;
      *(undefined1 *)(unaff_s1 + 6) = 0;
      *(undefined1 *)(unaff_s1 + 7) = 0;
    }
    return;
  }
  return;
}

