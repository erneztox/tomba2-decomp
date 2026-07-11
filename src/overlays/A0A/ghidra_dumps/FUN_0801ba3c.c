// FUN_0801ba3c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ba3c(undefined1 *param_1)

{
  short *psVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  param_1[8] = 2;
  if (_DAT_800ed098 < 2) {
    param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[9] = 2;
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x80) = 0x50;
  *(undefined2 *)(param_1 + 0x82) = 0xa0;
  *(undefined2 *)(param_1 + 0x84) = 0x5a;
  *(undefined2 *)(param_1 + 0x86) = 0xb4;
  iVar5 = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x5e] = 0;
  param_1[0x46] = 0;
  param_1[4] = param_1[4] + '\x01';
  if (param_1[8] != '\0') {
    puVar4 = (undefined2 *)&DAT_8011ec54;
    puVar3 = param_1;
    do {
      iVar5 = iVar5 + 1;
      iVar2 = func_0x0007aae8();
      *(int *)(puVar3 + 0xc0) = iVar2;
      *(undefined2 *)(iVar2 + 6) = *puVar4;
      **(undefined2 **)(puVar3 + 0xc0) = puVar4[1];
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 2) = puVar4[2];
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 4) = puVar4[3];
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 8) = 0;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 0xc) = 0;
      psVar1 = puVar4 + 4;
      puVar4 = puVar4 + 5;
      func_0x00051b04(*(undefined4 *)(puVar3 + 0xc0),0xc,(int)*psVar1);
      puVar3 = puVar3 + 4;
    } while (iVar5 < (int)(uint)(byte)param_1[8]);
  }
  *(undefined2 *)(param_1 + 0x60) = 0;
  return;
}

