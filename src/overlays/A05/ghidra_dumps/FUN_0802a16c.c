// FUN_0802a16c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0802a16c(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(short *)(param_1 + 0x66) == 0) && (*(char *)(param_1 + 0x5f) == '\0')) {
    iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)_DAT_800e7eae) * 0x10000) >> 0x10;
    iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)_DAT_800e7eb6) * 0x10000) >> 0x10;
    iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)_DAT_800e7eb2) * 0x10000) >> 0x10;
    iVar3 = func_0x00084080(iVar3 * iVar3 + iVar2 * iVar2 + iVar4 * iVar4);
    if ((iVar3 < 0x3c1) && (iVar3 < 0x281)) {
      if (iVar3 < 0x141) {
        iVar3 = 3;
        if (0x1b < *(byte *)(param_1 + 0x1b)) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 1;
        if (0x1a < *(byte *)(param_1 + 0x1b)) {
          halt_baddata();
        }
      }
      uVar5 = func_0x0009a450();
      *(ushort *)(param_1 + 0x6c) = *(byte *)((uVar5 & 0xf) + iVar3 * 0x10 + -0x7fec1168) - 1;
      func_0x00122e10(param_1,iVar3,(int)*(short *)(param_1 + 0x6c));
      return (int)*(short *)(param_1 + 0x6c);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x6c);
  if ((sVar1 == 0) || (((sVar1 == 2 || (sVar1 == 4)) || (sVar1 == 6)))) {
    iVar2 = func_0x0009a450();
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = iVar2 + 3;
    }
    *(short *)(param_1 + 0x6c) = ((short)iVar2 + (short)(iVar3 >> 2) * -4) * 2 + 1;
  }
  else {
    if (((sVar1 != 1) && (sVar1 != 3)) && ((sVar1 != 5 && (sVar1 != 7)))) {
      *(undefined2 *)(param_1 + 0x6c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x0009a450();
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = iVar2 + 3;
    }
    *(short *)(param_1 + 0x6c) = ((short)iVar2 + (short)(iVar3 >> 2) * -4) * 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

