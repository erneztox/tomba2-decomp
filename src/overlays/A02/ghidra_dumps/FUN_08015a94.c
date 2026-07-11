// FUN_08015a94

/* WARNING: Control flow encountered bad instruction data */

void FUN_08015a94(byte *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    func_0x00076d68(param_1);
    uVar5 = func_0x000776f8((int)((*(ushort *)(param_1 + 0x7c) + 0x800) * 0x10000) >> 0x10,
                            (int)*(short *)(param_1 + 0x56),0x80);
    *(undefined2 *)(param_1 + 0x56) = uVar5;
    iVar6 = func_0x00083f50((int)*(short *)(param_1 + 0x7c));
    sVar2 = *(short *)(param_1 + 0x44);
    iVar7 = func_0x00083e80((int)*(short *)(param_1 + 0x7c));
    sVar3 = *(short *)(param_1 + 0x44);
    sVar4 = *(short *)(param_1 + 0x44);
    *(ushort *)(param_1 + 0x44) = sVar4 - 0x100U;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar6 * sVar2 >> 4);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar7 * sVar3 >> 4);
    if (-1 < (int)((uint)(ushort)(sVar4 - 0x100U) << 0x10)) {
      return;
    }
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[6] = param_1[6] + 1;
    func_0x00054d14(param_1,2,7);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00074590(0x23,0,0);
      func_0x00054d14(param_1,0x57,0);
      param_1[0x44] = 0;
      param_1[0x45] = 0x10;
      *(ushort *)(param_1 + 0x7c) = (ushort)param_1[0x2b] << 4;
      param_1[6] = param_1[6] + 1;
    }
  }
  else if (bVar1 == 2) {
    func_0x00076d68(param_1);
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = *param_1 & 3;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

