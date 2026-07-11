// FUN_08039514

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08039514(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = param_1[3];
  param_1[3] = bVar1 & 0x7f;
  iVar5 = (uint)(byte)param_1[3] * 0xc;
  iVar4 = func_0x000519e0(param_1,0xf,_DAT_800ecfb4,0x80143d48);
  uVar2 = _DAT_800ecfb8;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0x80144db4;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    func_0x00041718(param_1,0,0);
    param_1[0x46] = 0;
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    param_1[0x5e] = 0;
    param_1[0xbf] = 0;
    param_1[0x2a] = *(undefined1 *)(iVar5 + -0x7febe220);
    *(int *)(param_1 + 0x2c) = (int)*(short *)(iVar5 + -0x7febe21e) << 0x10;
    *(int *)(param_1 + 0x30) = (int)*(short *)(iVar5 + -0x7febe21c) << 0x10;
    *(int *)(param_1 + 0x34) = (int)*(short *)(iVar5 + -0x7febe21a) << 0x10;
    if (param_1[3] == '\0') {
      uVar3 = 0xe00;
      if ((DAT_800bfa0a & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (param_1[3] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = 0xe00;
      if ((DAT_800bfa0a & 0x10) == 0) {
        uVar3 = 0x1200;
      }
    }
    *(undefined2 *)(param_1 + 0xb8) = uVar3;
    if ((bVar1 & 0x80) != 0) {
      *(undefined2 *)(param_1 + 0xb8) = 0xe00;
      param_1[5] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[5] = 0;
    iVar4 = (int)*(short *)(param_1 + 0xb8);
    iVar6 = iVar4 * 0x90;
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
    *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xfff;
    }
    iVar7 = iVar4 * 0x140;
    *(short *)(param_1 + 0x80) = (short)(iVar6 >> 0xc);
    *(short *)(param_1 + 0x82) = (short)((iVar6 >> 0xc) << 1);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xfff;
    }
    iVar4 = iVar4 * 0x110;
    *(short *)(param_1 + 0x84) = (short)(iVar7 >> 0xc);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xfff;
    }
    iVar4 = (iVar7 >> 0xc) + (iVar4 >> 0xc);
    *(short *)(param_1 + 0x86) = (short)iVar4;
    func_0x00041194(param_1,iVar4 - *(short *)(param_1 + 0x84),(int)*(short *)(iVar5 + -0x7febe216),
                    1);
    func_0x0004130c(param_1,1);
    *(undefined2 *)(param_1 + 100) = 0xffff;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *param_1 = 1;
    param_1[4] = param_1[4] + '\x01';
  }
  return;
}

