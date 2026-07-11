// FUN_0801c76c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801c76c(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  uVar1 = *(ushort *)(param_2 + 0x6a) >> 8;
  uVar5 = uVar1 & 0xf;
  if (uVar5 == 1) {
    local_1e = *(undefined2 *)(param_1 + 0x2e);
    local_1a = _DAT_1f80019e;
    local_16 = *(undefined2 *)(param_1 + 0x36);
    if (*(char *)(param_2 + 0x145) == '\0') {
      func_0x0003116c(8,auStack_20,0xffffffb0);
    }
    else {
      func_0x000312d4(0x515,auStack_20,0xfffffff6);
      local_1a = local_1a + 0x50;
      func_0x000312d4(0x514,auStack_20,0xfffffff6);
      func_0x00074590(7,0,0);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (uVar5 < 2) {
    if ((uVar1 & 0xf) != 0) {
      halt_baddata();
    }
  }
  else {
    if (uVar5 == 2) {
      iVar3 = func_0x000489e4(param_1,(int)*(short *)(param_1 + 0x32));
      if (iVar3 == 0) {
        return 0;
      }
      if (0x14 < ((int)*(short *)(param_2 + 0x32) + (int)*(short *)(param_2 + 0x84)) -
                 (int)_DAT_1f8001a4) {
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        local_1a = _DAT_1f8001a4;
        local_16 = *(undefined2 *)(param_1 + 0x36);
        func_0x000312d4(0x515,auStack_20,0xfffffff6);
        sVar2 = *(short *)(param_2 + 0x44);
        if (sVar2 < 0) {
          sVar2 = -sVar2;
        }
        if (0x1000 < sVar2) {
          local_1e = *(undefined2 *)(param_1 + 0x2e);
          local_1a = _DAT_1f8001a4;
          local_16 = *(undefined2 *)(param_1 + 0x36);
          func_0x0003116c(8,auStack_20,0xffffffb0);
          halt_baddata();
        }
        halt_baddata();
      }
      return 4;
    }
    if (uVar5 != 3) {
      return 0;
    }
  }
  if (((int)*(short *)(param_2 + 0x6a) & 0xf000U) != 0) {
    return 0;
  }
  if ((int)*(short *)(param_2 + 0x6a) == 0) {
    return 0;
  }
  if (DAT_1f800137 != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x2b) != '\0') {
    return 0;
  }
  iVar3 = (int)*(short *)(param_2 + 0x44);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 0xc11) {
    return 0;
  }
  uVar4 = func_0x0009a450();
  if ((uVar4 & 0xf0) != 0) {
    return 0;
  }
  if (*(char *)(param_2 + 0x61) == '\0') {
    local_1e = *(undefined2 *)(param_2 + 0x2e);
    local_1a = *(short *)(param_2 + 0x32) + *(short *)(param_2 + 0x62);
    local_16 = *(undefined2 *)(param_2 + 0x36);
    func_0x0013ebe4(auStack_20,2,0);
    *(undefined1 *)(param_1 + 0x2b) = 0xb4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

