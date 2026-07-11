// FUN_0801d7c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d7c8(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 0x5e);
  if (bVar1 == 1) {
    *(short *)(param_1 + 0x2e) =
         (short)((*(int *)(_DAT_800e7f50 + 0x2c) + *(int *)(_DAT_800e7f5c + 0x2c)) / 2);
    *(short *)(param_1 + 0x32) =
         (short)((*(int *)(_DAT_800e7f50 + 0x30) + *(int *)(_DAT_800e7f5c + 0x30)) / 2) + 0x20;
    *(short *)(param_1 + 0x36) =
         (short)((*(int *)(_DAT_800e7f50 + 0x34) + *(int *)(_DAT_800e7f5c + 0x34)) / 2);
    *(undefined2 *)(param_1 + 0x56) = _DAT_800e7ed6;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = *(int *)(param_1 + 0x10);
      iVar3 = func_0x00083f50((int)*(short *)(iVar4 + 0x56));
      *(short *)(param_1 + 0x2e) =
           *(short *)(*(int *)(iVar4 + 0xc0) + 0x2c) + (short)(iVar3 * 0x32 >> 0xc);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x30);
      iVar3 = func_0x00083e80((int)*(short *)(iVar4 + 0x56));
      *(short *)(param_1 + 0x36) =
           *(short *)(*(int *)(iVar4 + 0xc0) + 0x34) - (short)(iVar3 * 0x32 >> 0xc);
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar4 + 0x56);
    }
  }
  else if (bVar1 == 2) {
    bVar1 = *(byte *)(param_1 + 5);
    if (bVar1 == 1) {
      iVar3 = *(int *)(param_1 + 0xc4);
      sVar2 = *(short *)(iVar3 + 0xc) + -0x40;
      if ((0x800 < *(short *)(iVar3 + 0xc)) && (*(short *)(iVar3 + 0xc) = sVar2, sVar2 < 0x801)) {
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0x800;
        *(undefined1 *)(param_1 + 5) = 2;
      }
LAB_0801d9b0:
      iVar4 = *(int *)(param_1 + 0x10);
      iVar3 = func_0x00083f50((int)*(short *)(iVar4 + 0x56));
      *(short *)(param_1 + 0x2e) =
           *(short *)(*(int *)(iVar4 + 0xc0) + 0x2c) + (short)(iVar3 * 0x78 >> 0xc);
      *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar4 + 0xd0) + 0x30) + 0x14;
      iVar3 = func_0x00083e80((int)*(short *)(iVar4 + 0x56));
      *(short *)(param_1 + 0x36) =
           *(short *)(*(int *)(iVar4 + 0xc0) + 0x34) - (short)(iVar3 * 0x78 >> 0xc);
      *(ushort *)(param_1 + 0x56) = *(short *)(iVar4 + 0x56) + 0xc00U & 0xfff;
      func_0x0007778c(param_1);
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x000517f8(param_1);
      }
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) goto LAB_0801d9b0;
    }
    else if (bVar1 == 2) goto LAB_0801d9b0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

