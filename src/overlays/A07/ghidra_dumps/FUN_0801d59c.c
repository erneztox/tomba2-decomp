// FUN_0801d59c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d59c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 8) = 3;
  iVar3 = 0;
  if (2 < _DAT_800ed098) {
    *(undefined1 *)(param_1 + 9) = 3;
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xbf) = 0;
    iVar2 = param_1;
    if (*(char *)(param_1 + 8) != '\0') {
      do {
        iVar1 = func_0x0007aae8();
        *(int *)(iVar2 + 0xc0) = iVar1;
        *(undefined2 *)(iVar1 + 6) = 0xffff;
        **(undefined2 **)(iVar2 + 0xc0) = 0;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 2) = 0;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 4) = 0;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0xc) = 0;
        func_0x00051b04(*(undefined4 *)(iVar2 + 0xc0),0xc,iVar3 + 0x33);
        iVar3 = iVar3 + 1;
        *(undefined1 *)(*(int *)(iVar2 + 0xc0) + 0x3f) = 0;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 8));
    }
    return;
  }
  *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

