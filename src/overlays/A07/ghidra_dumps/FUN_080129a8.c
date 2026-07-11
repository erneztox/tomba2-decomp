// FUN_080129a8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080129a8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = func_0x0002300c(param_1,param_2,(int)*(short *)(param_2 + 0x80));
  if (iVar4 != 0) {
    iVar4 = func_0x00083f50(_DAT_1f80009c + 0x800);
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar5 = func_0x00083e80(_DAT_1f80009c + 0x800);
    sVar3 = *(short *)(param_2 + 0x80);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_2 + 0x2e) + (short)(iVar4 * ((int)sVar1 + (int)sVar2) >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_2 + 0x36) -
         (short)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
    if (((*(char *)(param_2 + 2) != '\x0f') || (DAT_800bf873 == '\0')) && (DAT_1f800137 == '\0')) {
      _DAT_1f80018c = (undefined2)(_DAT_1f80009c & 0xfff);
      iVar4 = (int)(((_DAT_1f80009c & 0xfff) - (uint)*(ushort *)(param_1 + 0x56)) * 0x100000) >>
              0x10;
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if ((iVar4 < 0x4001) &&
         ((*(char *)(param_1 + 5) != '\x1f' || (param_2 == *(int *)(param_1 + 0x10))))) {
        if (*(char *)(param_2 + 2) == '\x0e') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _DAT_1f80018e = 0x4800;
        _DAT_1f800184 = param_2;
        *(undefined1 *)(param_2 + 0x2b) = 1;
        if (*(char *)(param_1 + 0x61) != -0x80) {
          DAT_800bf840 = 0x4d;
        }
      }
    }
  }
  return;
}

