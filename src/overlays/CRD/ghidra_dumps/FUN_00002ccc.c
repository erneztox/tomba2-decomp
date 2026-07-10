// FUN_00002ccc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002ccc(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short local_28 [4];
  ushort local_20 [4];
  
  local_28[0] = 0x2e;
  local_28[1] = 0x2f;
  if (*_DAT_800bf4a4 == '\0') {
    iVar4 = 0;
    local_20[3] = 0x10;
    local_20[2] = 0;
    local_20[1] = 100;
    iVar2 = param_1;
    do {
      if (*(byte *)(iVar2 + 0x4a) < 3) {
        uVar3 = *(undefined4 *)(local_28[iVar4] * 4 + -0x7ff5d7ac);
        sVar1 = func_0x0009a600(uVar3);
        local_20[0] = sVar1 * -4 + 0x50;
        if (iVar4 != 0) {
          local_20[0] = sVar1 * -4 + 0xf0;
        }
        local_20[1] = 100;
        local_20[2] = 0;
        if ((uint)*(byte *)(param_1 + 0x44) == iVar4 + 1U) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00079374((int)((uint)local_20[0] * 0x10000) >> 0x10,100,6,uVar3,3);
        local_20[2] = local_20[2] << 1;
        sVar1 = func_0x0009a600(uVar3);
        local_20[2] = local_20[2] + sVar1 * 8;
        func_0x0005019c(local_20,0x60,0);
      }
      iVar4 = iVar4 + 1;
      iVar2 = param_1 + iVar4;
    } while (iVar4 < 2);
  }
  return;
}

