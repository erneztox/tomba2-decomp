// FUN_08026430

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026430(undefined1 *param_1)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  
  bVar2 = param_1[4];
  if (bVar2 == 1) {
    func_0x0011f0cc(param_1);
    iVar4 = func_0x0007778c(param_1);
    if (iVar4 != 0) {
      func_0x000517f8(param_1);
    }
    param_1[0x29] = 0;
  }
  else {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        if (bVar2 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar2 == 0) {
      if (param_1[5] == '\0') {
        param_1[8] = 5;
        if (_DAT_800ed098 < 5) {
          param_1[4] = 3;
        }
        else {
          iVar4 = 0;
          param_1[9] = 5;
          *(undefined2 *)(param_1 + 0x80) = 0xdc;
          *(undefined2 *)(param_1 + 0x82) = 0x1b8;
          param_1[0xd] = 0;
          param_1[0xb] = 0;
          *param_1 = 1;
          *(undefined2 *)(param_1 + 0x84) = 0;
          *(undefined2 *)(param_1 + 0x86) = 0x80;
          if (param_1[8] != '\0') {
            puVar6 = (undefined2 *)&DAT_801413c8;
            puVar5 = param_1;
            do {
              iVar4 = iVar4 + 1;
              iVar3 = func_0x0007aae8();
              *(int *)(puVar5 + 0xc0) = iVar3;
              *(undefined2 *)(iVar3 + 6) = *puVar6;
              **(undefined2 **)(puVar5 + 0xc0) = puVar6[1];
              *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 2) = puVar6[2];
              *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 4) = puVar6[3];
              *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 8) = 0;
              *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 10) = 0;
              *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 0xc) = 0;
              psVar1 = puVar6 + 4;
              puVar6 = puVar6 + 5;
              func_0x00051b04(*(undefined4 *)(puVar5 + 0xc0),0xc,(int)*psVar1);
              puVar5 = puVar5 + 4;
            } while (iVar4 < (int)(uint)(byte)param_1[8]);
          }
          func_0x0004766c(param_1);
          func_0x00048750(param_1);
          *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
          param_1[5] = param_1[5] + '\x01';
        }
      }
      else if (param_1[5] == '\x01') {
        iVar4 = func_0x0011ecb0(param_1);
        if (iVar4 != 0) {
          param_1[4] = 1;
          param_1[5] = 0;
          param_1[6] = 0;
        }
        func_0x0007778c(param_1);
        func_0x000517f8(param_1);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

