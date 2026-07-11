// FUN_0801f3b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f3b8(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    param_1[1] = 1;
    func_0x00077ebc(param_1);
    if (param_1[5] == '\0') {
      if (DAT_800bf8be != -1) {
        return;
      }
      param_1[5] = 1;
      *(undefined2 *)(param_1 + 0x40) = 0;
    }
    else if (param_1[5] == '\x01') {
      func_0x001255c0(0xc);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      param_1[8] = 0xe;
      if (_DAT_800ed098 < 0xe) {
        param_1[4] = 3;
      }
      else {
        param_1[9] = 0xe;
        *param_1 = 1;
        param_1[4] = param_1[4] + '\x01';
        iVar3 = _DAT_800ecfd0;
        param_1[0xd] = 4;
        iVar7 = 0;
        param_1[0xb] = 0;
        if (param_1[8] != '\0') {
          puVar5 = &DAT_80129c6c;
          puVar6 = param_1;
          do {
            iVar7 = iVar7 + 1;
            puVar4 = (undefined2 *)func_0x0007aae8();
            *(undefined2 **)(puVar6 + 0xc0) = puVar4;
            puVar4[3] = 0xffff;
            uVar2 = *puVar5;
            *(undefined1 *)((int)puVar4 + 0x3f) = 0x1e;
            *(undefined1 *)(puVar4 + 0x1f) = uVar2;
            *puVar4 = *(undefined2 *)(puVar5 + 2);
            puVar4[1] = *(undefined2 *)(puVar5 + 4);
            puVar4[2] = *(undefined2 *)(puVar5 + 6);
            puVar4[4] = *(undefined2 *)(puVar5 + 8);
            puVar4[5] = *(undefined2 *)(puVar5 + 10);
            puVar4[6] = *(undefined2 *)(puVar5 + 0xc);
            puVar6 = puVar6 + 4;
            *(int *)(puVar4 + 0x20) = iVar3 + *(int *)(*(short *)(puVar5 + 0xe) * 4 + iVar3 + 4);
            puVar4[0x1c] = *(undefined2 *)(puVar5 + 0xe);
            puVar5 = puVar5 + 0x10;
          } while (iVar7 < (int)(uint)(byte)param_1[8]);
        }
        *(undefined2 *)(param_1 + 0x80) = 0x23a;
        *(undefined2 *)(param_1 + 0x82) = 0x474;
        *(undefined2 *)(param_1 + 0x84) = 0x80;
        *(undefined2 *)(param_1 + 0x86) = 0xd2;
        func_0x00051c8c();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

