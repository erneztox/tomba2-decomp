// FUN_08043c60

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08043c60(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  
  iVar6 = *(short *)(param_1 + 0x72) * 10;
  if (*(char *)(param_1 + 0x78) == '\0') {
    if (*(short *)(param_1 + 0x72) == 1) {
      DAT_800e806c = 8;
      func_0x0006cba8(param_1 + 0x2c);
      iVar6 = func_0x00031220(0x913,0,0xffffffe2);
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x10) = param_1;
      }
      *(int *)(param_1 + 0x10) = iVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00074590(2,0xfffffff9,0);
    *(undefined4 *)(param_1 + 0x10) = 0;
    func_0x00041718(param_1,2,4);
    iVar7 = (int)*(short *)(iVar6 + -0x7feb8160);
    iVar5 = ((int)*(short *)(iVar6 + -0x7feb8168) - (int)*(short *)(param_1 + 0x2e)) * 0x100;
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    sVar1 = *(short *)(iVar6 + -0x7feb8164);
    sVar2 = *(short *)(iVar6 + -0x7feb8166);
    sVar3 = *(short *)(iVar6 + -0x7feb8162);
    *(short *)(param_1 + 0x4e) = (short)(iVar5 / iVar7);
    iVar5 = (int)*(short *)(iVar6 + -0x7feb8160);
    iVar7 = ((int)sVar2 - (int)*(short *)(param_1 + 0x32)) * 0x100;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar7 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 0x50) = (short)(iVar7 / iVar5);
    iVar5 = (int)*(short *)(iVar6 + -0x7feb8160);
    iVar7 = ((int)sVar1 - (int)*(short *)(param_1 + 0x36)) * 0x100;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar7 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 0x52) = (short)(iVar7 / iVar5);
    iVar5 = (int)*(short *)(iVar6 + -0x7feb8160);
    iVar7 = ((int)sVar3 - (int)*(short *)(param_1 + 0x58)) * 0x100;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar7 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 0x4c) = (short)(iVar7 / iVar5);
    uVar4 = *(undefined2 *)(iVar6 + -0x7feb8160);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    *(undefined2 *)(param_1 + 0x40) = uVar4;
  }
  else if (*(char *)(param_1 + 0x78) != '\x01') {
    halt_baddata();
  }
  if ((*(short *)(param_1 + 0x72) == 0) &&
     ((int)*(short *)(param_1 + 0x40) == *(short *)(iVar6 + -0x7feb8160) + -7)) {
    local_18 = *(undefined2 *)(*(int *)(param_1 + 0xd8) + 0x2c);
    local_16 = 0xddf8;
    local_14 = *(undefined2 *)(*(int *)(param_1 + 0xd8) + 0x34);
    func_0x0011bd98(7,&local_18,0x10);
  }
  if (*(short *)(param_1 + 0x40) == 0) {
    func_0x00041718(param_1,0,4);
    *(short *)(param_1 + 0x2e) = *(short *)(iVar6 + -0x7feb8168);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar6 + -0x7feb8166);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar6 + -0x7feb8164);
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(iVar6 + -0x7feb8162);
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(short *)(param_1 + 0x72) == 1) && (-0x2af9 < *(short *)(param_1 + 0x32))) {
    func_0x0006cba8(param_1 + 0x2c);
  }
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x4e) * 0x100;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x52) * 0x100;
  *(short *)(param_1 + 0x58) =
       *(short *)(param_1 + 0x58) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4c) >> 8);
  return 0;
}

