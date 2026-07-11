// FUN_08031a40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08031a40(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_800bf873 != '\0') {
    iVar1 = func_0x00078240((int)*(short *)(_DAT_1f80028c + 0x2e) - (int)_DAT_1f800160,
                            (int)*(short *)(_DAT_1f80028c + 0x32) - (int)_DAT_1f800162,
                            (int)*(short *)(_DAT_1f80028c + 0x36) - (int)_DAT_1f800164);
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    uVar3 = *param_1;
    uVar2 = func_0x00129bac(param_1 + 4,param_2,uVar3 & 0xffff,iVar1 << 1);
    func_0x0012a06c(uVar2,param_2,uVar3 >> 0x10,iVar1 << 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = *param_1;
  uVar2 = func_0x00140fbc(param_1 + 4,param_2,uVar3 & 0xffff);
  func_0x001411d8(uVar2,param_2,uVar3 >> 0x10);
  return;
}

