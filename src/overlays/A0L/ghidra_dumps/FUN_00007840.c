// FUN_00007840

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007840(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 8) = 2;
  if (_DAT_800ed098 < 2) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    puVar4 = (undefined2 *)&DAT_8011a678;
    iVar3 = param_1;
    do {
      iVar5 = iVar5 + 1;
      iVar2 = func_0x0007aae8();
      *(int *)(iVar3 + 0xc0) = iVar2;
      *(undefined2 *)(iVar2 + 6) = *puVar4;
      **(undefined2 **)(iVar3 + 0xc0) = puVar4[1];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 2) = puVar4[2];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 4) = puVar4[3];
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0xc) = 0;
      psVar1 = puVar4 + 4;
      puVar4 = puVar4 + 5;
      func_0x00051b04(*(undefined4 *)(iVar3 + 0xc0),0xc,(int)*psVar1);
      iVar3 = iVar3 + 4;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 8));
  }
  *(undefined2 *)(param_1 + 0x80) = 0x8c;
  *(undefined2 *)(param_1 + 0x82) = 0x118;
  *(undefined2 *)(param_1 + 0x84) = 0x8c;
  *(undefined2 *)(param_1 + 0x86) = 0x8c;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
  return;
}

