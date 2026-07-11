// FUN_08018480

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018480(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  char local_10;
  undefined1 auStack_f [7];
  
  iVar2 = *(byte *)(param_1 + 7) - 0xf;
  auStack_f._1_2_ = (undefined2)((uint)_DAT_80109218 >> 0x10);
  _local_10 = CONCAT31(CONCAT21(auStack_f._1_2_,
                                (char)(((0xe1 - iVar2 * iVar2) * 3 >> 5 & 0xffU) << 1)),
                       ((*(byte *)(param_1 + 7) >> 2) + 6) * '\x02');
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  if (0xf < *(byte *)(param_1 + 7)) {
    _DAT_1f800090 = (*(byte *)(param_1 + 7) - 0x10) * 0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f800090 = 0;
  uVar1 = func_0x00085690((int)*(short *)(param_1 + 0x2c) - (int)_DAT_1f8000d2,
                          (int)*(short *)(param_1 + 0x30) - (int)_DAT_1f8000da);
  *(undefined2 *)(param_1 + 0x4a) = uVar1;
  func_0x000318a0(param_1 + 0x2c,&local_10,param_1 + 0x48);
  func_0x00027768(0x8011b894,0,(int)*(short *)(param_1 + 0x32),0);
  return;
}

