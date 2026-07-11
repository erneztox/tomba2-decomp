// FUN_0801f104

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801f188) */
/* WARNING: Removing unreachable block (ram,0x0801f198) */
/* WARNING: Removing unreachable block (ram,0x0801f1a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f104(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x50);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x1000;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x1000;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x1000;
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + *(short *)(param_1 + 0x52);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
    if (sVar3 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 6) = 1;
      iVar8 = (int)_DAT_800e7eae;
      iVar7 = (int)_DAT_800e7eb2;
      iVar6 = (int)_DAT_800e7eb6;
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      iVar4 = (int)*(short *)(param_1 + 0x40);
      iVar7 = (iVar7 - (*(short *)(param_1 + 0x32) + 200)) * 0x10;
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      if ((iVar4 == -1) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      iVar5 = (int)*(short *)(param_1 + 0x40);
      iVar6 = (iVar6 - *(short *)(param_1 + 0x36)) * 0x10;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar6 == -0x80000000)) {
        trap(0x1800);
      }
      *(undefined2 *)(param_1 + 0x50) = 0xd800;
      *(undefined2 *)(param_1 + 0x52) = 0x280;
      *(short *)(param_1 + 0x48) = (short)(((iVar8 - *(short *)(param_1 + 0x2e)) * 0x10) / 0x1e);
      *(short *)(param_1 + 0x4a) = (short)(iVar7 / iVar4);
      *(short *)(param_1 + 0x4c) = (short)(iVar6 / iVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 2) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + *(short *)(param_1 + 0x52);
      if (_DAT_800e7eb2 <= *(short *)(param_1 + 0x32)) {
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 3) {
        *(undefined1 *)(param_1 + 1) = 1;
        halt_baddata();
      }
      func_0x0004d4c4(0xa7,1);
      func_0x0004b0d8(param_1);
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

