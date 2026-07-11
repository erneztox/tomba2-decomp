// FUN_08017194

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017194(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_20 [2];
  
  uVar5 = _DAT_801091f4;
  local_20[0] = _DAT_801091fc;
  pbVar2 = *(byte **)(param_1 + 0x3c);
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    if ((bVar1 & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte **)(param_1 + 0x40) = pbVar2 + 1;
    uVar4 = *(undefined4 *)((uint)bVar1 * 4 + *(int *)(param_1 + 0x50));
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    iVar3 = 0;
    _DAT_1f800090 = 0;
    do {
      func_0x00031ac4(param_1 + 0x2c,local_20,param_1 + 0x48);
      func_0x00027768(uVar4,0,(int)*(short *)(param_1 + 0x32),0,uVar5);
      iVar3 = iVar3 + 1;
      *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x400;
    } while (iVar3 < 4);
  }
  return;
}

