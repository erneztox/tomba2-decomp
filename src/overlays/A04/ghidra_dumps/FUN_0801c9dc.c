// FUN_0801c9dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801c9dc(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  uVar1 = *(ushort *)(param_2 + 0x6a) >> 8;
  uVar4 = uVar1 & 0xf;
  if (uVar4 == 5) {
    iVar2 = func_0x000489e4(param_1,(int)*(short *)(param_1 + 0x32));
    if (iVar2 != 0) {
      if (((int)*(short *)(param_2 + 0x32) + (int)*(short *)(param_2 + 0x84)) - (int)_DAT_1f8001a4 <
          0x15) {
        return 0;
      }
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      local_1a = _DAT_1f8001a4 + -0x28;
      local_16 = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(0x513,auStack_20,0xffffffce);
      uVar3 = func_0x0009a450();
      if ((uVar3 & 7) != 0) {
        return 1;
      }
      if (*(char *)(param_2 + 0x61) != '\0') {
        return 1;
      }
      if (DAT_1f800137 != '\0') {
        return 1;
      }
      func_0x0013ebe4(auStack_20,2,0);
      halt_baddata();
    }
  }
  else {
    if (5 < uVar4) {
      if (uVar4 == 6) {
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        local_1a = _DAT_1f80019e + -0x28;
        local_16 = *(undefined2 *)(param_1 + 0x36);
        func_0x0003116c(0x513,auStack_20,0xffffffce);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((uVar1 & 0xf) != 0) {
      halt_baddata();
    }
    if (*(char *)(param_2 + 0x16a) == '\n') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}

