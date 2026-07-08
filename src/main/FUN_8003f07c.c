
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003f07c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 8) != '\0') {
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    iVar1 = 0;
    iVar2 = param_1;
    if (*(char *)(param_1 + 9) != '\0') {
      do {
        if ((int)(uint)*(byte *)(param_1 + 8) <= iVar1) {
          return;
        }
        FUN_8003f698(*(undefined4 *)(*(int *)(iVar2 + 0xc0) + 0x40),_DAT_800ed8c8,param_2);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < (int)(uint)*(byte *)(param_1 + 9));
    }
  }
  return;
}

