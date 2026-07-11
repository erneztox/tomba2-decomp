// FUN_0801dc90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801dc90(undefined1 *param_1)

{
  short *psVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  
  bVar2 = param_1[4];
  if (bVar2 == 1) {
    func_0x001175b8(param_1);
    func_0x0007703c(param_1);
    if (param_1[1] == '\0') {
      return;
    }
    func_0x00116e5c(param_1);
    func_0x000517f8(param_1);
    func_0x00116abc(param_1);
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
      if (_DAT_800ed098 < 4) {
        param_1[4] = 3;
      }
      else {
        param_1[8] = 4;
        param_1[9] = 4;
        *(undefined2 *)(param_1 + 0x80) = 0x1e;
        *(undefined2 *)(param_1 + 0x82) = 0x3c;
        *(undefined2 *)(param_1 + 0x84) = 0x32;
        *(undefined2 *)(param_1 + 0x86) = 100;
        iVar7 = 0;
        param_1[0xd] = 0;
        param_1[0xb] = 0;
        *param_1 = 1;
        param_1[4] = param_1[4] + '\x01';
        if (param_1[8] != '\0') {
          puVar6 = (undefined2 *)&DAT_8012093c;
          puVar5 = param_1;
          do {
            iVar7 = iVar7 + 1;
            iVar4 = func_0x0007aae8();
            *(int *)(puVar5 + 0xc0) = iVar4;
            *(undefined2 *)(iVar4 + 6) = 0xffff;
            **(undefined2 **)(puVar5 + 0xc0) = *puVar6;
            *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 2) = puVar6[1];
            *(undefined2 *)(*(int *)(puVar5 + 0xc0) + 4) = puVar6[2];
            *(undefined4 *)(*(int *)(puVar5 + 0xc0) + 8) = 0;
            *(undefined4 *)(*(int *)(puVar5 + 0xc0) + 0xc) = 0;
            psVar1 = puVar6 + 3;
            puVar6 = puVar6 + 4;
            func_0x00051b04(*(undefined4 *)(puVar5 + 0xc0),0xc,(int)*psVar1);
            puVar5 = puVar5 + 4;
          } while (iVar7 < (int)(uint)(byte)param_1[8]);
        }
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7fedf6a4);
        uVar3 = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7fedf6a2);
        *(undefined2 *)(param_1 + 0x32) = uVar3;
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7fedf6a0);
        *(undefined2 *)(param_1 + 0x60) = uVar3;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

