// FUN_00002100

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002100(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  uVar4 = *(ushort *)(param_2 + 0x6a) >> 8 & 0xf;
  if (uVar4 == 1) {
    local_1e = *(undefined2 *)(param_1 + 0x2e);
    local_1a = _DAT_1f80019e;
    local_16 = *(undefined2 *)(param_1 + 0x36);
    if (*(char *)(param_2 + 0x145) == '\0') {
      func_0x000312d4(8,auStack_20,0xffffffb0);
    }
    else {
      func_0x000312d4(0xf06,auStack_20,0xfffffff6);
      local_1a = local_1a + 0x50;
      func_0x000312d4(0xf0c,auStack_20,0xfffffff6);
      func_0x00074590(7,0,0);
    }
  }
  else if (uVar4 == 2) {
    iVar2 = func_0x000489e4(param_1,(int)*(short *)(param_1 + 0x32));
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
      if (0x14 < ((int)*(short *)(param_2 + 0x32) + (int)*(short *)(param_2 + 0x84)) -
                 (int)_DAT_1f8001a4) {
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        local_1a = _DAT_1f8001a4;
        local_16 = *(undefined2 *)(param_1 + 0x36);
        func_0x000312d4(0xf06,auStack_20,0xfffffff6);
        sVar1 = *(short *)(param_2 + 0x44);
        if (sVar1 < 0) {
          sVar1 = -sVar1;
        }
        if (sVar1 < 0x1001) {
          halt_baddata();
        }
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        local_1a = _DAT_1f8001a4;
        local_16 = *(undefined2 *)(param_1 + 0x36);
        func_0x000312d4(8,auStack_20,0xffffffb0);
        halt_baddata();
      }
    }
    return uVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

