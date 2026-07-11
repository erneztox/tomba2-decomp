// FUN_0802f30c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802f30c(undefined1 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = func_0x000519e0(param_1,5,_DAT_800ecfdc,0x801416bc);
  uVar4 = _DAT_800ecfd8;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    if (((int)(uint)DAT_800bf9ec >> (((byte)param_1[3] & 0xf) << 1) & 1U) != 0) {
      func_0x00077c40(param_1,0x80145a00,10);
      func_0x00119f24(param_1,0);
      param_1[3] = param_1[3] | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00077c40(param_1,0x80145a00,0);
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0x50;
    *(undefined2 *)(param_1 + 0x82) = 0xa0;
    *(undefined2 *)(param_1 + 0x84) = 0x50;
    *(undefined2 *)(param_1 + 0x86) = 0x96;
    func_0x0004766c(param_1);
    func_0x00048894(param_1);
    sVar3 = _DAT_1f8001a4;
    uVar2 = _DAT_1f8001a2;
    uVar1 = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x62) = 0x3c;
    *(undefined2 *)(param_1 + 0x68) = 0xff;
    *(undefined2 *)(param_1 + 0x6c) = 0xff;
    *(undefined2 *)(param_1 + 0x6e) = 30000;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    param_1[0x5e] = 0;
    *(undefined2 *)(param_1 + 0x7e) = 0;
    param_1[0x2b] = 0;
    param_1[0xbf] = 0;
    *(undefined2 *)(param_1 + 0x66) = 0;
    *(undefined2 *)(param_1 + 0x72) = 0;
    *(undefined2 *)(param_1 + 0x74) = 0;
    *(short *)(param_1 + 0x32) = sVar3 + -0x46;
    *(undefined2 *)(param_1 + 0x56) = uVar1;
    *(undefined2 *)(param_1 + 0x58) = uVar2;
    param_1[4] = param_1[4] + '\x01';
  }
  return;
}

