// FUN_0803fb9c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803fb9c(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 5) == '\0') {
    func_0x00085480(param_1 + 0x48,0x1f800000);
    *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = *(undefined4 *)(param_1 + 0x5c);
  func_0x000321d8(param_1 + 0x2c,param_1 + 0x50,param_1 + 0x48);
  func_0x00027768(0x8013faf4,0,0,0);
  pbVar2 = *(byte **)(param_1 + 0x3c);
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    if ((bVar1 & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte **)(param_1 + 0x40) = pbVar2 + 1;
    iVar3 = 0;
    uVar4 = *(undefined4 *)((uint)bVar1 * 4 + *(int *)(param_1 + 0x54));
    do {
      func_0x000323fc(param_1 + 0x2c,param_1 + 0x50,param_1 + 0x48);
      func_0x00027768(uVar4,0,0,0);
      iVar3 = iVar3 + 1;
      *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x400;
    } while (iVar3 < 4);
  }
  return;
}

