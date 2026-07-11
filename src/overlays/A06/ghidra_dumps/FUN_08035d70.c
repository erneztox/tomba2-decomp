// FUN_08035d70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08035dc4) */
/* WARNING: Removing unreachable block (ram,0x08035dd4) */
/* WARNING: Removing unreachable block (ram,0x08035ddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08035d70(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined2 *)(param_1 + 0x40) = 0x20;
    iVar3 = (int)*(short *)(param_1 + 0x40);
    iVar6 = (-0x23f0 - *(short *)(param_1 + 0x32)) * 0x10;
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    if ((iVar3 == -1) && (iVar6 == -0x80000000)) {
      trap(0x1800);
    }
    iVar5 = (int)*(short *)(param_1 + 0x40);
    iVar2 = (0x72d8 - *(short *)(param_1 + 0x36)) * 0x10;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    *(undefined1 *)(param_1 + 6) = 1;
    *(short *)(param_1 + 0x48) = (short)(((0x3340 - *(short *)(param_1 + 0x2e)) * 0x10) / 0x20);
    *(short *)(param_1 + 0x4a) = (short)(iVar6 / iVar3);
    *(short *)(param_1 + 0x4c) = (short)(iVar2 / iVar5);
    uVar1 = func_0x000782b0(param_1 + 0x2c,0x3340,0x72d8);
    *(ushort *)(param_1 + 0x56) = uVar1 & 0xfff;
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x1000;
    sVar4 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar4;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x1000;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x1000;
    if (sVar4 != 0) {
      if (sVar4 == 8) {
        iVar3 = func_0x0003116c(0x706,param_1 + 0x2c,0xffffffce);
        *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
      }
      if ((*(char *)(param_1 + 3) == '\x03') && ((_DAT_1f80017c & 7) == 0)) {
        func_0x00074590(0x8f,0xf,0xffffffe2);
      }
      return;
    }
    if (*(char *)(param_1 + 3) == '\x03') {
      func_0x00074590(0x94,0xfffffff6,0xffffffec);
      iVar3 = func_0x00132cf8(param_1,2);
      *(undefined2 *)(iVar3 + 0x2e) = 0x3340;
      *(undefined2 *)(iVar3 + 0x32) = 0xdc10;
      *(undefined2 *)(iVar3 + 0x36) = 0x72d8;
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    }
    *(undefined1 *)(param_1 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

