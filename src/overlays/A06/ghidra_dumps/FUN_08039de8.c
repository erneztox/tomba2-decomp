// FUN_08039de8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08039de8(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = func_0x000519e0(param_1,0x12,_DAT_800ecfc0,0x80142090);
  uVar2 = _DAT_800ecfc4;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0x8014e0f8;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    func_0x00041718(param_1,0xe,0);
    uVar1 = *_DAT_8014e120;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0xa0;
    *(undefined2 *)(param_1 + 0x82) = 0x140;
    *(undefined2 *)(param_1 + 0x84) = 0x60;
    *(undefined2 *)(param_1 + 0x86) = 0xe0;
    param_1[0x47] = uVar1;
    if ((param_1[3] & 0x80) == 0) {
      func_0x00041194(param_1,0x80,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00041ac0(param_1);
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x76) = *(undefined2 *)(param_1 + 0x36);
    func_0x0004130c(param_1,1);
    *(undefined2 *)(param_1 + 100) = 0xffff;
    *(undefined2 *)(param_1 + 0x66) = 0;
    func_0x00134b60(param_1);
    param_1[0x5f] = 0;
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    param_1[0x1b] = param_1[0x1b] & 0xbf;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    param_1[5] = 0;
    param_1[4] = 1;
  }
  return;
}

