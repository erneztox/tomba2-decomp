// FUN_8012a034

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012a034(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (param_1[5] == -0x80) {
          param_1[5] = 0x20;
          *param_1 = 2;
          param_1[4] = 1;
          func_0x800778e4(param_1,(int)(((uint)_DAT_1f8000e2 - (uint)*(ushort *)(param_1 + 0x32)) *
                                       0x10000) >> 0x10);
          halt_baddata();
        }
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[0xb] = 0x20;
    *(undefined **)(param_1 + 0x18) = &DAT_8012d9e8;
    *(undefined2 *)(param_1 + 0x80) = 0x46;
    *(undefined2 *)(param_1 + 0x82) = 0x8c;
    *param_1 = 2;
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_1[5]) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar3 = *(short *)(param_1 + 0x40);
  sVar2 = sVar3 + 0x100;
  *(short *)(param_1 + 0x40) = sVar2;
  if (0x5ff < sVar2) {
    *(short *)(param_1 + 0x40) = sVar3 + -0x500;
  }
  if (((param_1[3] == '\a') && ((DAT_800bfa06 & 8) != 0)) && (*(short *)(param_1 + 0x42) < 0x180)) {
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 4;
  }
  iVar5 = *(short *)(param_1 + 0x42) * 0x18;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x1f;
  }
  sVar3 = (short)(iVar5 >> 5);
  *(short *)(param_1 + 0x6c) = sVar3;
  *(short *)(param_1 + 0x68) = sVar3;
  if (sVar3 < 0x1000) {
    *(undefined2 *)(param_1 + 0x6c) = 0x1000;
    *(undefined2 *)(param_1 + 0x68) = 0x1000;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_1[3]) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x36);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1[3]) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x42) << 4;
  if (param_1[3] == '\b') {
    *(undefined2 *)(param_1 + 0x84) = 0;
    iVar5 = (int)*(short *)(param_1 + 0x32) - (int)*(short *)(param_1 + 0x62);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    *(short *)(param_1 + 0x86) = (short)iVar5 + 200;
    *(undefined2 *)(param_1 + 0x80) = 100;
    *(undefined2 *)(param_1 + 0x82) = 200;
    *(undefined2 *)(param_1 + 0x54) = 0;
    sVar3 = _DAT_1f8000f2;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(short *)(param_1 + 0x56) = -sVar3;
    if (param_1[0x29] == '\0') {
      sVar3 = *(short *)(param_1 + 0x44);
      *(ushort *)(param_1 + 0x44) = sVar3 - 0x10U;
      if ((int)((uint)(ushort)(sVar3 - 0x10U) << 0x10) < 0) {
        *(undefined2 *)(param_1 + 0x44) = 0;
      }
    }
    else {
      uVar4 = func_0x8009a450(*(short *)(param_1 + 0x42) * 0x2c0);
      uVar4 = uVar4 & 3;
      if (((uVar4 == 1) || (uVar4 < 2)) || (uVar4 != 2)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar3 = *(short *)(param_1 + 0x44);
      *(short *)(param_1 + 0x44) = sVar3 + 0x40;
      if (0x1000 < (short)(sVar3 + 0x40)) {
        *(undefined2 *)(param_1 + 0x44) = 0x1000;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    func_0x8007703c(param_1);
    param_1[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar3 = (*(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x62)) + 200;
  *(short *)(param_1 + 0x86) = sVar3;
  *(short *)(param_1 + 0x84) = sVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

