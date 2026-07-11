// FUN_0803ba30

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803ba30(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = *(short *)(param_1 + 0x60) + 0x800U & 0xfff;
  iVar1 = (int)-*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar1;
  if (*(char *)(param_1 + 0xbf) == '\0') {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar1;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    func_0x0004766c(param_1);
    iVar1 = func_0x00045cac(param_1,100,0,uVar2);
    if ((iVar1 == 0) && (iVar1 = func_0x000468ac(param_1,300,0,uVar2), iVar1 == 0)) {
      func_0x000492b0(param_1,500,0x8c,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 1;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (*(short *)(param_1 + 0x4a) >> 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

