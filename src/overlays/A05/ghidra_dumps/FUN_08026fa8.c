// FUN_08026fa8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026fa8(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      func_0x0011fb88(param_1);
    }
    else if (param_1[3] == '\x01') {
      func_0x0011fe08(param_1);
      if (param_1[1] != '\0') {
        func_0x000518fc(param_1);
      }
      param_1[0x2b] = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < bVar1) {
    if (3 < bVar1) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 == 0) {
    if (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfb4,0x8013b90c);
    uVar3 = _DAT_800ecf90;
    if (iVar2 != 0) {
      return;
    }
    *param_1 = 9;
    *(undefined2 *)(param_1 + 0x80) = 0x5a;
    *(undefined2 *)(param_1 + 0x82) = 0xb4;
    *(undefined2 *)(param_1 + 0x84) = 0x90;
    *(undefined2 *)(param_1 + 0x86) = 0x120;
    param_1[0xb] = 0;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    param_1[4] = param_1[4] + '\x01';
    param_1[0xb] = param_1[0xb] & 0xc0 | 0x80;
    if (param_1[3] == '\0') {
      func_0x00040cdc(param_1,0x80140f7c,0x800a3d18);
      *(undefined4 *)(param_1 + 0x2c) = 0x36060000;
      *(undefined4 *)(param_1 + 0x30) = 0xd0350000;
      *(undefined4 *)(param_1 + 0x34) = 0x38180000;
      *(undefined2 *)(param_1 + 0x56) = 0x280;
      param_1[0x7b] = 0;
      if (DAT_800bf8ce != -1) {
        uVar3 = func_0x00129924(param_1,0);
        *(undefined4 *)(param_1 + 0x14) = uVar3;
      }
      func_0x00041718(param_1,param_1[0x7b],0);
    }
    else if (param_1[3] == '\x01') {
      func_0x00077c40(param_1,0x80140f7c,0);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

