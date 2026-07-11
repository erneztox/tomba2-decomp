// FUN_08010b44

/* WARNING: Control flow encountered bad instruction data */

void FUN_08010b44(byte *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  if (((DAT_1f800137 == '\0') && (DAT_800bf80d == '\0')) &&
     (((int)*(short *)(param_1 + 0x6a) & 0x8000U) != 0)) {
    DAT_800bf81e = 0;
    param_1[4] = 2;
    param_1[5] = 3;
    *param_1 = *param_1 | 4;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    if (param_1[0x2a] == 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = *(short *)(param_1 + 0x2e) < 0x19de ^ 1;
    iVar3 = uVar2 * 4;
    *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(uVar2 * 8 + -0x7fee7188);
    *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)((iVar3 + 1) * 2 + -0x7fee7188);
    *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)((iVar3 + 2) * 2 + -0x7fee7188);
    uVar1 = *(undefined2 *)((iVar3 + 3) * 2 + -0x7fee7188);
    param_1[0x2a] = (byte)((ushort)uVar1 >> 8);
    param_1[0x147] = (byte)uVar1 & 1;
    func_0x00058304(param_1,1);
  }
  return;
}

