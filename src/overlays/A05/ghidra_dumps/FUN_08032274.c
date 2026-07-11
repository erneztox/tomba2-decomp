// FUN_08032274

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032274(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((byte)param_1[0x5e] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08032554 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[0x5e] * 4 + -0x7fef6258))();
      return;
    }
    if (param_1[1] != '\0') {
      func_0x000517f8(param_1);
      if (*(short *)(param_1 + 0xe) == 0) {
        sVar2 = *(short *)(param_1 + 0x42);
        *(short *)(param_1 + 0x42) = sVar2 + 1;
        if (0xb < (short)(sVar2 + 1)) {
          *(undefined2 *)(param_1 + 0x42) = 0;
        }
        *(ushort *)(param_1 + 0x5c) =
             (*(short *)(*(short *)(param_1 + 0x42) * 2 + -0x7fec0e78) + 0xbd) * 0x40 | 0x2f;
        *(undefined2 *)(param_1 + 0xe) =
             *(undefined2 *)(*(short *)(param_1 + 0x42) * 2 + -0x7fec0e60);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + -1;
    }
    param_1[0x5f] = 0;
    param_1[0x29] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf9c5 < 4) {
        iVar5 = func_0x00051b70(param_1,0xc,0x3a);
        if (iVar5 == 0) {
          param_1[0xd] = param_1[0xd] | 8;
          *param_1 = 1;
          param_1[0x2a] = 8;
          param_1[4] = param_1[4] + '\x01';
          param_1[3] = param_1[3] | 0x40;
          if (DAT_800bf9c5 == 0) {
            param_1[0x5e] = 0;
            param_1[0x28] = param_1[0x28] & 0x7f;
            *(undefined2 *)(param_1 + 0x2e) = _DAT_8013f170;
            *(undefined2 *)(param_1 + 0x32) = _DAT_8013f172;
            *(undefined2 *)(param_1 + 0x80) = 0x9f;
            *(undefined2 *)(param_1 + 0x82) = 0x13e;
            *(undefined2 *)(param_1 + 0x84) = 0xa0;
          }
          else if (DAT_800bf9c5 == 1) {
            param_1[0x5e] = 2;
            *(undefined2 *)(param_1 + 0x2e) = _DAT_8013f176;
            *(undefined2 *)(param_1 + 0x32) = _DAT_8013f178;
            *(undefined2 *)(param_1 + 0x80) = 0x9f;
            *(undefined2 *)(param_1 + 0x82) = 0x13e;
            *(undefined2 *)(param_1 + 0x84) = 0xa0;
          }
          else {
            if (1 < (byte)(DAT_800bf9c5 - 2)) {
              param_1[0x5e] = 4;
              param_1[2] = 0x1f;
              *(undefined2 *)(param_1 + 0x2e) = _DAT_8013f182;
              *(undefined2 *)(param_1 + 0x32) = _DAT_8013f184;
              uVar3 = _DAT_8013f186;
              *(undefined2 *)(param_1 + 0x80) = 0x38;
              *(undefined2 *)(param_1 + 0x82) = 0x70;
              *(undefined2 *)(param_1 + 0x84) = 0x140;
              *(undefined2 *)(param_1 + 0x86) = 0x140;
              *(undefined2 *)(param_1 + 0x36) = uVar3;
              *(undefined2 *)(param_1 + 0x50) = 0;
              param_1[0x5f] = 0;
              param_1[0x29] = 0;
              *(undefined2 *)(param_1 + 0x44) = 0;
              *(undefined2 *)(param_1 + 0x40) = 0;
              *(undefined2 *)(param_1 + 0x42) = 0;
              *(undefined2 *)(param_1 + 0xe) = 0;
              func_0x0004766c(param_1);
              func_0x00049760(param_1);
              uVar4 = _DAT_1f8001a2;
              uVar3 = _DAT_1f8001a0;
              param_1[0xbe] = 0;
              *(undefined2 *)(param_1 + 0x60) = uVar3;
              *(undefined2 *)(param_1 + 0x62) = uVar4;
              func_0x0004130c(param_1,0);
              *(undefined2 *)(param_1 + 0x54) = 0;
              *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x62);
              *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x32;
              func_0x000517f8();
              halt_baddata();
            }
            param_1[0x5e] = 3;
            *(undefined2 *)(param_1 + 0x2e) = _DAT_8013f17c;
            *(undefined2 *)(param_1 + 0x32) = _DAT_8013f17e;
            *(undefined2 *)(param_1 + 0x80) = 0x9f;
            *(undefined2 *)(param_1 + 0x82) = 0x13e;
            *(undefined2 *)(param_1 + 0x84) = 0xa0;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        iVar5 = func_0x00051b70(param_1,0xc,0x31);
        if (iVar5 == 0) {
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0x800;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      return;
    }
  }
  else if (bVar1 == 2) {
    *param_1 = 1;
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    func_0x0007778c(param_1);
    func_0x0012b118(param_1);
    func_0x000517f8(param_1);
    param_1[0x5f] = 0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
    if (*(short *)(param_1 + 0xe) == 0) {
      sVar2 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar2 + 1;
      if (0xb < (short)(sVar2 + 1)) {
        *(undefined2 *)(param_1 + 0x42) = 0;
      }
      *(ushort *)(param_1 + 0x5c) =
           (*(short *)(*(short *)(param_1 + 0x42) * 2 + -0x7fec0e78) + 0xbd) * 0x40 | 0x2f;
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(*(short *)(param_1 + 0x42) * 2 + -0x7fec0e60)
      ;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + -1;
    func_0x00074590(0x32,0xfffffffb,0);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

