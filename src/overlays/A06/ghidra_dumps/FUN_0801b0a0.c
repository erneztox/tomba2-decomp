// FUN_0801b0a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801b0a0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  uVar4 = *(ushort *)(param_2 + 0x6a) >> 8 & 0xf;
  if (uVar4 == 2) {
    iVar2 = func_0x000489e4(param_1,(int)*(short *)(param_1 + 0x32));
    if (iVar2 != 0) {
      if (((int)*(short *)(param_2 + 0x32) + (int)*(short *)(param_2 + 0x84)) - (int)_DAT_1f8001a4 <
          0x15) {
        return 4;
      }
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      local_1a = _DAT_1f8001a4;
      local_16 = *(undefined2 *)(param_1 + 0x36);
      func_0x000312d4(0x704,auStack_20,0xfffffff6);
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
  else {
    if (uVar4 < 3) {
      if (uVar4 == 1) {
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        local_1a = _DAT_1f80019e;
        local_16 = *(undefined2 *)(param_1 + 0x36);
        if (*(char *)(param_2 + 0x145) == '\0') {
          func_0x000312d4(8,auStack_20,0xffffffb0);
        }
        else {
          func_0x000312d4(0x704,auStack_20,0xfffffff6);
          local_1a = local_1a + 0x50;
          func_0x000312d4(0x709,auStack_20,0xfffffff6);
          func_0x00074590(7,0,0);
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (uVar4 != 8) {
      halt_baddata();
    }
    if (DAT_1f800137 != '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0x2b) != '\0') {
      return 0;
    }
    iVar2 = (int)*(short *)(param_2 + 0x44);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0xc11) {
      return 0;
    }
    uVar3 = func_0x0009a450();
    if ((uVar3 & 0xf) != 0) {
      return 0;
    }
    if (*(char *)(param_2 + 0x61) != '\0') {
      return 0;
    }
    local_1e = *(undefined2 *)(param_2 + 0x2e);
    local_1a = *(short *)(param_2 + 0x32) + *(short *)(param_2 + 0x62);
    local_16 = *(undefined2 *)(param_2 + 0x36);
    func_0x00141020(auStack_20,2,0);
    *(undefined1 *)(param_1 + 0x2b) = 0xb4;
  }
  return 0;
}

