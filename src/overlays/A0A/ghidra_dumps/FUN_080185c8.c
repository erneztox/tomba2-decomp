// FUN_080185c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080185c8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined2 uStack_16;
  
  uVar2 = _DAT_801091c8;
  pbVar4 = *(byte **)(param_1 + 0x3c);
  if (pbVar4 != (byte *)0x0) {
    bVar1 = *pbVar4;
    if ((bVar1 & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte **)(param_1 + 0x40) = pbVar4 + 1;
    uVar5 = *(undefined4 *)((uint)bVar1 * 4 + *(int *)(param_1 + 0x50));
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    _DAT_1f800090 = 0;
    uStack_16 = (undefined2)((uint)uVar2 >> 0x10);
    _local_18 = CONCAT11(*(undefined1 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x54));
    uVar3 = func_0x00085690((int)*(short *)(param_1 + 0x2c) - (int)_DAT_1f8000d2,
                            (int)*(short *)(param_1 + 0x30) - (int)_DAT_1f8000da);
    *(undefined2 *)(param_1 + 0x4a) = uVar3;
    func_0x000318a0(param_1 + 0x2c,&local_18,param_1 + 0x48);
    func_0x00027768(uVar5,0,(int)*(short *)(param_1 + 0x32),0);
  }
  return;
}

