// FUN_00000eb8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00000eb8(int param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 auStack_30 [32];
  
  if (((param_2 & 0xff) != 0xff) && (*param_3 < 0xf)) {
    func_0x0009b0c0(auStack_30,0x8018a090,(param_2 & 0xf) << 4,0x8018a0a0,*param_3);
    if (param_3[2] == 0) {
      _DAT_800bf49c = func_0x000808b0(auStack_30,0x10200);
      if (_DAT_800bf49c != -1) {
        func_0x000808f0();
        param_3[2] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x97e) = 3;
      pbVar4 = (byte *)(param_1 + 0x380);
      bVar2 = 0;
      iVar3 = 0x5fe;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar3 = iVar3 + -1;
        bVar2 = bVar2 ^ bVar1;
      } while (-1 < iVar3);
      *(byte *)(param_1 + 0x97f) = bVar2;
      _DAT_800bf49c = func_0x000808b0(auStack_30,0x8002);
      if (_DAT_800bf49c != -1) {
        func_0x00080840(_DAT_800bf4b4);
        func_0x00080840(_DAT_800bf4b8);
        func_0x00080840(_DAT_800bf4bc);
        func_0x00080840(_DAT_800bf4c0);
        func_0x000808e0(_DAT_800bf49c,param_1,0x980);
        halt_baddata();
      }
    }
    func_0x000808f0(_DAT_800bf49c);
  }
  return 0;
}

