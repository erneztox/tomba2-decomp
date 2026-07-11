// FUN_08031d24

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08031d24(undefined1 *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  func_0x00077b38(param_1,0x8013ff68,5);
  param_1[0xb] = 0x10;
  *(undefined2 *)(param_1 + 0x82) = 0x50;
  *(undefined2 *)(param_1 + 0x86) = 0x50;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[0x47] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0x80) = 0x28;
  *(undefined2 *)(param_1 + 0x84) = 0x28;
  if (7 < DAT_800bf9d6) {
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x2e) = 0x1740;
    *(undefined2 *)(param_1 + 0x32) = 0xf358;
    *(undefined2 *)(param_1 + 0x36) = 0x2eb8;
    param_1[5] = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *param_1 = 2;
  *(short *)(param_1 + 0x2e) =
       *(short *)(iVar3 + 0xac) + (short)((uint)(*(short *)(iVar3 + 0x98) * 5) >> 8);
  *(short *)(param_1 + 0x32) =
       *(short *)(iVar3 + 0xb0) + (short)((uint)(*(short *)(iVar3 + 0x9e) * 5) >> 8);
  sVar1 = *(short *)(iVar3 + 0xa4);
  sVar2 = *(short *)(iVar3 + 0xb4);
  param_1[5] = 0;
  *(short *)(param_1 + 0x36) = sVar2 + (short)((uint)(sVar1 * 5) >> 8);
  *(undefined2 *)(param_1 + 0x68) = 0x26;
  func_0x0004b354(param_1,0);
  return;
}

