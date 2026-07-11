// FUN_080377d0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080377d0(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x72) + -1;
    *(short *)(param_1 + 0x72) = sVar2;
    if (sVar2 == 0) {
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
    else if (sVar2 == 0xbe) {
      func_0x000440e4(&DAT_800e7e80,0xcf,4);
      if ((*(int *)(param_1 + 0x14) != 0) && (*(char *)(*(int *)(param_1 + 0x14) + 4) != '\x03')) {
        return 0;
      }
      func_0x000416a8(param_1,0xe,0x80144404);
      func_0x00041718(param_1,*(undefined1 *)(param_1 + 0x7b),4);
      func_0x000440e4(&DAT_800e7e80,2,4);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = func_0x0013ebe4(0,3,param_1);
    *(int *)(param_1 + 0x14) = iVar3;
    if (iVar3 != 0) {
      *(undefined2 *)(param_1 + 0x72) = 200;
      func_0x000416a8(param_1,0xffffffff,0);
      func_0x00041718(param_1,0x73,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 2) {
      halt_baddata();
    }
    if ((DAT_800bf822 & 1) == 0) {
      return 1;
    }
  }
  return 0;
}

