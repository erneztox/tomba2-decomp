// FUN_08027c78

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08027c78(undefined1 *param_1)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  
  bVar2 = param_1[4];
  if (bVar2 == 1) {
    bVar2 = param_1[5];
    if (bVar2 == 1) {
      func_0x00120544(param_1);
    }
    else if (bVar2 < 2) {
      if (bVar2 == 0) {
        if (DAT_800bf9bb < 5) {
          param_1[5] = 1;
        }
        else {
          *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 0x400;
          param_1[5] = 2;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (bVar2 == 2) {
      func_0x00120940(param_1);
      param_1[0x29] = 0;
      param_1[1] = 1;
      func_0x00077ebc(param_1);
      func_0x00051844(param_1);
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (param_1[5] == '\0') {
        param_1[8] = 2;
        if (_DAT_800ed098 < 2) {
          param_1[4] = 3;
        }
        else {
          *(undefined2 *)(param_1 + 0x80) = 0xe0;
          *(undefined2 *)(param_1 + 0x82) = 0x1c0;
          *(undefined2 *)(param_1 + 0x84) = 0x226;
          *(undefined2 *)(param_1 + 0x86) = 0x226;
          *(undefined2 *)(param_1 + 0xb8) = 0x1000;
          *(undefined2 *)(param_1 + 0xba) = 0x1000;
          *(undefined2 *)(param_1 + 0xbc) = 0x1000;
          param_1[9] = 2;
          *param_1 = 2;
          iVar4 = 0;
          param_1[0xd] = 0;
          param_1[0xb] = 0;
          param_1[0x29] = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0;
          param_1[5] = param_1[5] + '\x01';
          if (param_1[8] != '\0') {
            puVar6 = (undefined2 *)&DAT_80141428;
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
              *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 0x38) = 0x1000;
              *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 0x3a) = 0x1000;
              *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 0x3c) = 0x1000;
              psVar1 = puVar6 + 4;
              puVar6 = puVar6 + 5;
              func_0x00051b04(*(undefined4 *)(puVar5 + 0xc0),0xc,(int)*psVar1);
              puVar5 = puVar5 + 4;
            } while (iVar4 < (int)(uint)(byte)param_1[8]);
          }
          if (DAT_800bf9bb < 5) {
            return;
          }
          *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 0x400;
        }
      }
      else if (param_1[5] == '\x01') {
        iVar4 = func_0x001206dc(param_1);
        if (iVar4 != 0) {
          param_1[4] = 1;
          param_1[5] = 0;
          param_1[6] = 0;
        }
        func_0x0007778c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 != 2) {
    if (bVar2 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

