// FUN_0802e93c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802e93c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 8) = 2;
  if (1 < _DAT_800ed098) {
    iVar4 = 0;
    *(undefined1 *)(param_1 + 9) = 2;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0xff;
    *(undefined1 *)(param_1 + 0x19) = 0xff;
    *(undefined1 *)(param_1 + 0x1a) = 0xff;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    puVar3 = (undefined2 *)&DAT_80138a08;
    iVar2 = param_1;
    do {
      iVar1 = func_0x0007aae8();
      *(int *)(iVar2 + 0xc0) = iVar1;
      *(undefined2 *)(iVar1 + 6) = *puVar3;
      **(undefined2 **)(iVar2 + 0xc0) = puVar3[1];
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 2) = puVar3[2];
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 4) = puVar3[3];
      iVar1 = iVar4 + 0x35;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 8) = 0;
      iVar4 = iVar4 + 1;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0xc) = 0;
      puVar3 = puVar3 + 4;
      func_0x00051b04(*(undefined4 *)(iVar2 + 0xc0),0xc,iVar1);
      iVar2 = iVar2 + 4;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 9));
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    return 0;
  }
  *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

