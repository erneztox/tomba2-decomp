// FUN_08032b78

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032b78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_28;
  short local_26;
  short sStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  func_0x00084660(&DAT_1f8000f8);
  func_0x00084690(&DAT_1f8000f8);
  if ((*(short *)(param_1 + 0x68) == 0) && (*(char *)(param_1 + 1) != '\0')) {
    iVar1 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    local_28 = *(short *)(*(int *)(param_1 + 0xc0) + 0x2c) - (short)(iVar1 >> 7);
    local_26 = *(short *)(*(int *)(param_1 + 0xc0) + 0x30);
    iVar1 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    sStack_24 = *(short *)(*(int *)(param_1 + 0xc0) + 0x34) + (short)(iVar1 >> 7);
    iVar1 = func_0x0003f7a0(&local_28,&uStack_20);
    iStack_1c = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
    if (0x7fb < iStack_1c - 4U) {
      iStack_1c = -1;
    }
    iVar1 = 0;
    if (0 < iStack_1c) {
      do {
        local_26 = local_26 + -800;
        func_0x0003f7a0(&local_28,&uStack_18);
        iVar1 = iVar1 + 1;
        func_0x0012b9d8(uStack_20,uStack_18,iStack_1c);
        uStack_20 = uStack_18;
      } while (iVar1 < 2);
    }
  }
  iVar4 = 0;
  iVar2 = *(int *)(_DAT_1f800240 + 200);
  iVar3 = *(int *)(_DAT_1f800248 + 0xcc);
  iVar1 = (uint)*(byte *)(_DAT_1f800240 + 1) + (uint)*(byte *)(_DAT_1f800248 + 1);
  do {
    if (iVar1 != 0) {
      local_28 = *(short *)(iVar2 + 0x2c);
      local_26 = *(undefined2 *)(iVar2 + 0x30);
      sStack_24 = *(undefined2 *)(iVar2 + 0x34);
      iVar1 = func_0x0003f7a0(&local_28,&uStack_20);
      iStack_1c = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
      if (0x7fb < iStack_1c - 4U) {
        iStack_1c = -1;
      }
      local_28 = *(short *)(iVar3 + 0x2c);
      local_26 = *(undefined2 *)(iVar3 + 0x30);
      sStack_24 = *(undefined2 *)(iVar3 + 0x34);
      iVar1 = func_0x0003f7a0(&local_28,&uStack_18);
      iStack_14 = (iVar1 >> (iVar1 >> 10 & 0x1fU)) + (iVar1 >> 10) * 0x200;
      if (0x7fb < iStack_14 - 4U) {
        iStack_14 = -1;
      }
      if (0 < iStack_1c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0 < iStack_14) {
        func_0x0012b9d8(uStack_18,uStack_20);
      }
    }
    iVar4 = iVar4 + 1;
    iVar2 = *(int *)(_DAT_1f800248 + 200);
    iVar3 = *(int *)(_DAT_1f80024c + 0xcc);
    iVar1 = (uint)*(byte *)(_DAT_1f800248 + 1) + (uint)*(byte *)(_DAT_1f80024c + 1);
    if (1 < iVar4) {
      return;
    }
  } while( true );
}

