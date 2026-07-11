// FUN_0801ca90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ca90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 8) = 3;
  iVar4 = 0;
  if (_DAT_800ed098 < 3) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 9) = 3;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    if (*(char *)(param_1 + 8) != '\0') {
      puVar3 = (undefined2 *)&DAT_80133030;
      iVar2 = param_1;
      do {
        iVar1 = func_0x0007aae8();
        *(int *)(iVar2 + 0xc0) = iVar1;
        *(undefined2 *)(iVar1 + 6) = *puVar3;
        **(undefined2 **)(iVar2 + 0xc0) = puVar3[1];
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 2) = puVar3[2];
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 4) = puVar3[3];
        iVar1 = iVar4 + 0x20;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 8) = 0;
        iVar4 = iVar4 + 1;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0xc) = 0;
        puVar3 = puVar3 + 4;
        func_0x00051b04(*(undefined4 *)(iVar2 + 0xc0),0xc,iVar1);
        iVar2 = iVar2 + 4;
      } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
    if (DAT_800bf8dc != -1) {
      *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0x36);
      return;
    }
    *(undefined1 *)(param_1 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

