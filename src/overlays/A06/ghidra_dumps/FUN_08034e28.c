// FUN_08034e28

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08034e98) */
/* WARNING: Removing unreachable block (ram,0x08034ea8) */
/* WARNING: Removing unreachable block (ram,0x08034eb0) */

undefined4 FUN_08034e28(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x40) == 0) {
      *(undefined1 *)(param_1 + 6) = 2;
      *(undefined2 *)(param_1 + 0x40) = 0xf;
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(param_2 + 0xc4) + 0x2c);
      *(short *)(param_1 + 0x32) =
           *(short *)(*(int *)(param_2 + 0xc4) + 0x30) -
           ((*(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84)) + -500);
      *(short *)(param_1 + 0x36) = *(short *)(*(int *)(param_2 + 0xc4) + 0x34) + 0x14;
    }
    else {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x100;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x100;
      sVar2 = *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + *(short *)(param_1 + 0x52);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      iVar5 = *(int *)(param_2 + 0xc4);
      iVar7 = *(int *)(iVar5 + 0x2c);
      iVar4 = *(int *)(iVar5 + 0x30);
      iVar6 = *(int *)(iVar5 + 0x34);
      *(undefined2 *)(param_1 + 0x40) = 0x1b;
      iVar5 = (int)*(short *)(param_1 + 0x40);
      iVar4 = ((iVar4 - (((int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84)) + -500)
               ) - (int)*(short *)(param_1 + 0x32)) * 0x100;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar4 == -0x80000000)) {
        trap(0x1800);
      }
      iVar3 = (int)*(short *)(param_1 + 0x40);
      iVar6 = (iVar6 - (*(short *)(param_1 + 0x36) + -0x14)) * 0x100;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar6 == -0x80000000)) {
        trap(0x1800);
      }
      *(undefined2 *)(param_1 + 0x50) = 0xd000;
      *(undefined2 *)(param_1 + 0x52) = 0x360;
      *(short *)(param_1 + 0x48) = (short)(((iVar7 - *(short *)(param_1 + 0x2e)) * 0x100) / 0x1b);
      *(short *)(param_1 + 0x4a) = (short)(iVar4 / iVar5);
      *(short *)(param_1 + 0x4c) = (short)(iVar6 / iVar3);
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(undefined1 *)(param_1 + 6) = 0;
      func_0x0006cba8(param_2 + 0x2c);
      DAT_800bfa22 = 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0006cba8(param_1 + 0x2c);
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

