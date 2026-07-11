// FUN_0803d330

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803d330(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1 + 4;
  if (DAT_800bf873 == '\0') {
    if ((DAT_800e7eaa < 0xc) && (DAT_800bf816 == '\0')) {
      setCopControlWord(2,0xa800,0x800);
      setCopControlWord(2,0xb000,0x800);
      setCopControlWord(2,0xb800,0x800);
      uVar3 = *param_1;
      uVar2 = func_0x0013ac90(puVar4,param_2,uVar3 & 0xffff);
      func_0x0013af0c(uVar2,param_2,uVar3 >> 0x10);
      return;
    }
    uVar3 = *param_1;
    uVar2 = func_0x0007fdb0(puVar4,param_2,uVar3 & 0xffff);
    func_0x0008007c(uVar2,param_2,uVar3 >> 0x10);
  }
  else {
    iVar1 = func_0x00078240((int)*(short *)(_DAT_1f80028c + 0x2e) - (int)_DAT_1f800160,
                            (int)*(short *)(_DAT_1f80028c + 0x32) - (int)_DAT_1f800162,
                            (int)*(short *)(_DAT_1f80028c + 0x36) - (int)_DAT_1f800164);
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    uVar3 = *param_1;
    uVar2 = func_0x0013544c(puVar4,param_2,uVar3 & 0xffff,iVar1 << 1);
    func_0x0013590c(uVar2,param_2,uVar3 >> 0x10,iVar1 << 1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

