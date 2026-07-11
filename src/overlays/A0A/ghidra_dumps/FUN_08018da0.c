// FUN_08018da0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08018da0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  short local_28 [4];
  short local_20 [4];
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        cVar2 = *(char *)(param_1 + 7);
        *(char *)(param_1 + 7) = cVar2 + -1;
        if (cVar2 != '\0') {
          local_20[0] = 0x12e0;
          local_20[1] = 0xfd63;
          local_20[2] = 0x11a0;
          func_0x00031220(0xb04,local_20,0);
          uVar6 = func_0x0009a450();
          local_20[0] = local_20[0] + -0x100 + (uVar6 & 0x1ff);
          uVar6 = func_0x0009a450();
          local_20[2] = local_20[2] + -0x100 + (uVar6 & 0x1ff);
          func_0x00031220(0xb07,local_20,0xffffffe2);
          halt_baddata();
        }
        func_0x00074590(0x8b,0,0);
        *(undefined1 *)(param_1 + 4) = 3;
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x2c);
    *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_1 + 0x30);
    iVar7 = -0x8fc - (*(short *)(param_1 + 0x2e) + 0x29d) / 2;
    *(short *)(param_1 + 0x56) = (short)iVar7;
    if (-400 < iVar7 * 0x10000 >> 0x10) {
      *(undefined2 *)(param_1 + 0x56) = 0xfe70;
    }
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x5a) = 0x66;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    sVar4 = func_0x00085690(0x11a0 - *(short *)(param_1 + 0x54),0x12e0 - *(short *)(param_1 + 0x50))
    ;
    *(short *)(param_1 + 0x4a) = -sVar4;
    iVar7 = func_0x00031220(0xb02,param_1 + 0x2c,0);
    if (iVar7 != 0) {
      *(undefined2 *)(iVar7 + 0x48) = 0x200;
      uVar3 = *(undefined2 *)(param_1 + 0x4a);
      *(undefined2 *)(iVar7 + 0x4c) = 0;
      *(undefined2 *)(iVar7 + 0x4a) = uVar3;
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0x8011c198;
    *(undefined4 *)(param_1 + 0x34) = 0x8011c198;
  }
  *(short *)(param_1 + 0x2c) =
       *(short *)(param_1 + 0x50) +
       (short)((int)*(short *)(param_1 + 0x58) * (0x12e0 - *(short *)(param_1 + 0x50)) >> 0xb);
  *(short *)(param_1 + 0x2e) =
       *(short *)(param_1 + 0x52) +
       (short)((int)*(short *)(param_1 + 0x58) * (-0x29d - *(short *)(param_1 + 0x52)) >> 0xb);
  *(short *)(param_1 + 0x30) =
       *(short *)(param_1 + 0x54) +
       (short)((int)*(short *)(param_1 + 0x58) * (0x11a0 - *(short *)(param_1 + 0x54)) >> 0xb);
  iVar7 = func_0x00083e80((int)*(short *)(param_1 + 0x58));
  *(short *)(param_1 + 0x2e) =
       *(short *)(param_1 + 0x2e) + (short)(*(short *)(param_1 + 0x56) * iVar7 >> 0xc);
  uVar8 = func_0x00083f50((int)*(short *)(param_1 + 0x58));
  sVar4 = func_0x00085690(uVar8,0x1000);
  *(short *)(param_1 + 0x4c) = -sVar4;
  sVar4 = *(short *)(param_1 + 0x5c);
  sVar5 = sVar4 + 8;
  *(short *)(param_1 + 0x5c) = sVar5;
  if (0x27 < sVar5) {
    *(short *)(param_1 + 0x5c) = sVar4 + -0x20;
  }
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + *(short *)(param_1 + 0x5a);
  *(short *)(param_1 + 0x5a) =
       *(short *)(param_1 + 0x5a) - (short)(*(short *)(param_1 + 0x5a) + -0x33 >> 3);
  if (*(short *)(param_1 + 0x58) < 0x800) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    local_28[0] = 0x12e0;
    local_28[1] = 0xfd63;
    local_28[2] = 0x11a0;
    func_0x00031220(0xb03,local_28,0);
    func_0x00031220(0xb04,local_28,0);
    uVar6 = func_0x0009a450();
    local_28[0] = local_28[0] + -0x100 + (uVar6 & 0x1ff);
    uVar6 = func_0x0009a450();
    local_28[2] = local_28[2] + -0x100 + (uVar6 & 0x1ff);
    func_0x00031220(0xb07,local_28,0);
    func_0x00118c8c(0);
    func_0x00118c8c(1);
    func_0x00118c8c(2);
    *(undefined1 *)(param_1 + 4) = 2;
    *(undefined1 *)(param_1 + 7) = 4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

