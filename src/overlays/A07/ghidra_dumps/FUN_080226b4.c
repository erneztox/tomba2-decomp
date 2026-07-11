// FUN_080226b4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080226b4(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  param_1[8] = 3;
  if (_DAT_800ed098 < 3) {
    param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[9] = 3;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  if (DAT_800bf9d5 < 3) {
    uVar1 = func_0x0011718c(param_1);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[5] = 3;
  *param_1 = 2;
  iVar5 = 0;
  *(undefined2 *)(param_1 + 0x80) = 300;
  *(undefined2 *)(param_1 + 0x82) = 600;
  *(undefined2 *)(param_1 + 0x84) = 0x1c2;
  *(undefined2 *)(param_1 + 0x86) = 600;
  if (param_1[8] != '\0') {
    puVar4 = (undefined2 *)&DAT_8013313c;
    puVar3 = param_1;
    do {
      iVar2 = func_0x0007aae8();
      *(int *)(puVar3 + 0xc0) = iVar2;
      *(undefined2 *)(iVar2 + 6) = *puVar4;
      **(undefined2 **)(puVar3 + 0xc0) = puVar4[1];
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 2) = puVar4[2];
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 4) = puVar4[3];
      iVar2 = iVar5 + 0x17;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 8) = 0;
      iVar5 = iVar5 + 1;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 10) = 0;
      *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 0xc) = 0;
      puVar4 = puVar4 + 4;
      func_0x00051b04(*(undefined4 *)(puVar3 + 0xc0),0xc,iVar2);
      puVar3 = puVar3 + 4;
    } while (iVar5 < (int)(uint)(byte)param_1[8]);
  }
  param_1[0x2b] = 0;
  param_1[4] = param_1[4] + '\x01';
  return;
}

