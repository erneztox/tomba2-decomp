// FUN_08044b60

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08044b60(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((((_DAT_800bfe56 & 0x10) == 0) && (DAT_800bf816 == '\0')) && (DAT_800e7eaa < 0x2c)) {
    setCopControlWord(2,0xa800,0x800);
    setCopControlWord(2,0xb000,0x800);
    setCopControlWord(2,0xb800,0x800);
    uVar2 = *param_1;
    uVar1 = func_0x0013f418(param_1 + 4,param_2,uVar2 & 0xffff,0x800);
    func_0x0013f6e4(uVar1,param_2,uVar2 >> 0x10);
    return;
  }
  uVar2 = *param_1;
  uVar1 = func_0x0007fdb0(param_1 + 4,param_2,uVar2 & 0xffff);
  func_0x0008007c(uVar1,param_2,uVar2 >> 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

