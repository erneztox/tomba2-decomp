// FUN_0803412c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803412c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  bVar3 = DAT_800bf9ca;
  bVar1 = param_1[5];
  uVar5 = (uint)DAT_800bf9ca;
  if (bVar1 == 1) {
    if (param_1[0x2b] == '\0') {
      if (uVar5 == 0) {
        return;
      }
      func_0x0012c978(param_1);
      func_0x0012ca78(param_1);
    }
    else {
      _DAT_800bf854 = (uint)(byte)param_1[3];
      param_1[5] = 2;
      *param_1 = 2;
      param_1[6] = 0;
      param_1[7] = 0;
      func_0x00074590(0x85,0,0);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[5] = 1;
      if (uVar5 != 0) {
        if (((byte)param_1[3] < 2) || (param_1[3] == 3)) {
          *(short *)(param_1 + 0x4a) = (short)((int)((uVar5 + 3) * 0x300) >> 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(ushort *)(param_1 + 0x4a) = (bVar3 + 3) * 0x200;
        *(undefined2 *)(param_1 + 0x62) = 0x1e0;
        iVar4 = (int)*(short *)(param_1 + 0x4a);
        if (iVar4 == 0) {
          trap(0x1c00);
        }
        if ((iVar4 == -1) && ((int)*(short *)(param_1 + 0x62) << 8 == -0x80000000)) {
          trap(0x1800);
        }
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(undefined2 *)(param_1 + 0xe) = 0;
        param_1[0x47] = 1;
        *(short *)(param_1 + 100) = (short)(((int)*(short *)(param_1 + 0x62) << 8) / iVar4);
        if (5 < uVar5) {
          uVar5 = 5;
        }
        *(short *)(param_1 + 0x40) = *(short *)(uVar5 * 4 + -0x7fec0de8) * *(short *)(param_1 + 100)
        ;
      }
      param_1[0x5e] = 1;
      func_0x00051b04(*(undefined4 *)(param_1 + 200),0xc,6);
    }
  }
  else if (bVar1 == 2) {
    func_0x0012ce34(param_1);
    bVar1 = param_1[7];
    if (bVar1 == 1) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        func_0x00051b04(*(undefined4 *)(param_1 + 200),0xc,
                        (int)*(short *)(*(short *)(param_1 + 0xe) * 2 + -0x7fec0df8));
        sVar2 = *(short *)(param_1 + 0xe);
        *(short *)(param_1 + 0xe) = sVar2 + 1;
        if ((short)(sVar2 + 1) == 3) {
          *(undefined2 *)(param_1 + 0xe) = 0;
          param_1[7] = param_1[7] + '\x01';
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x40) = 2;
      }
    }
    else if ((bVar1 < 2) && (bVar1 == 0)) {
      param_1[7] = 1;
      *(undefined2 *)(param_1 + 0x40) = 2;
      param_1[0x5e] = 0;
      halt_baddata();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

