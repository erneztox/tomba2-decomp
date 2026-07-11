// FUN_80137664

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80137664(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined1 *unaff_s1;
  int unaff_s2;
  
  iVar3 = (int)_DAT_1f800164;
  *(undefined2 *)(unaff_s2 + 2) = 0;
  sVar1 = *(short *)(unaff_s1 + 0x60);
  sVar2 = func_0x800782b0(unaff_s1 + 0x2c,param_2,iVar3);
  if (0x800 < ((sVar1 - sVar2) + 0x400U & 0xfff)) {
    FUN_8014064c();
    return;
  }
  *(ushort *)(unaff_s2 + 2) = *(ushort *)(unaff_s2 + 2) & 0xfffe;
  unaff_s1[0x5f] = 0;
  unaff_s1[0x1b] = unaff_s1[0x1b] & 0xbf;
  unaff_s1[0x2b] = 0;
  *(undefined2 *)(unaff_s1 + 4) = 1;
  *(undefined1 *)(unaff_s2 + 6) = unaff_s1[3];
                    /* WARNING: Subroutine does not return */
  *unaff_s1 = 1;
  FUN_801402b8();
}

