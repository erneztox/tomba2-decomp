// FUN_0801e030

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e030(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  
  param_1[8] = 3;
  if (_DAT_800ed098 < 3) {
    param_1[4] = 3;
  }
  else {
    param_1[9] = 3;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    iVar4 = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[0xd] = param_1[0xd] | 4;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -100;
    if (param_1[8] != '\0') {
      puVar3 = (undefined2 *)&DAT_80144d08;
      puVar2 = param_1;
      do {
        iVar4 = iVar4 + 1;
        iVar1 = func_0x0007aae8();
        *(int *)(puVar2 + 0xc0) = iVar1;
        *(undefined2 *)(iVar1 + 6) = *puVar3;
        **(undefined2 **)(puVar2 + 0xc0) = puVar3[1];
        *(undefined2 *)(*(int *)(puVar2 + 0xc0) + 2) = puVar3[2];
        *(undefined2 *)(*(int *)(puVar2 + 0xc0) + 4) = puVar3[3];
        *(undefined2 *)(*(int *)(puVar2 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(puVar2 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(puVar2 + 0xc0) + 0xc) = 0;
        func_0x00051b04(*(undefined4 *)(puVar2 + 0xc0),0xc,(int)(short)puVar3[4]);
        *(undefined1 *)(*(int *)(puVar2 + 0xc0) + 0x3f) = 0xe0;
        *(undefined2 *)(*(int *)(puVar2 + 0xc0) + 0x38) = 0x1000;
        *(undefined2 *)(*(int *)(puVar2 + 0xc0) + 0x3a) = 0x1000;
        *(undefined2 *)(*(int *)(puVar2 + 0xc0) + 0x3c) = 0x1000;
        puVar3 = puVar3 + 5;
        *(short *)(*(int *)(puVar2 + 0xc0) + 2) = *(short *)(*(int *)(puVar2 + 0xc0) + 2) + 100;
        puVar2 = puVar2 + 4;
      } while (iVar4 < (int)(uint)(byte)param_1[8]);
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0x12) = _DAT_80144d16 - _DAT_80144d0c;
    *(short *)(*(int *)(param_1 + 0xc4) + 0x12) = _DAT_80144d20 - _DAT_80144d16;
    if (DAT_800bfa4c == '\0') {
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x80) = 0x168;
      *(undefined2 *)(param_1 + 0x82) = 0x2d0;
      param_1[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bfa4c == '\x01') {
      param_1[5] = 1;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0;
      *(undefined2 *)(*(int *)(param_1 + 200) + 2) =
           *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x12);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bfa4c == '\x02') {
      param_1[5] = 2;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x40) = 0;
      *(undefined2 *)(*(int *)(param_1 + 200) + 2) = 0;
      *(undefined2 *)(param_1 + 0x80) = 0x168;
      *(undefined2 *)(param_1 + 0x82) = 0x2d0;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x84) = 0xdac;
      *(undefined2 *)(param_1 + 0x86) = 0xdac;
    }
    else {
      if ((DAT_800bfa1d & 1) == 0) {
        param_1[4] = 2;
        return;
      }
      param_1[4] = 3;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

