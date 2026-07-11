// FUN_080343a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080343a4(undefined1 *param_1)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  
  bVar2 = param_1[4];
  if (bVar2 == 1) {
    if (_DAT_800bf858 == 0) {
      *param_1 = 2;
    }
    if ((*(short *)(param_1 + 0x60) != 0) && (*(short *)(param_1 + 0x60) == 1)) {
      func_0x0012d0c8(param_1);
    }
    param_1[1] = 1;
    func_0x00077ebc(param_1);
    func_0x00051844(param_1);
    param_1[0x2b] = 0;
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
      if (_DAT_800ed098 < 3) {
        param_1[4] = 3;
      }
      else {
        param_1[8] = 3;
        param_1[9] = 3;
        param_1[0xd] = 4;
        *(undefined2 *)(param_1 + 0xb8) = 0x1000;
        *(undefined2 *)(param_1 + 0xba) = 0x1000;
        *(undefined2 *)(param_1 + 0xbc) = 0x1000;
        iVar6 = 0;
        param_1[0xb] = 0;
        param_1[4] = param_1[4] + '\x01';
        if (param_1[8] != '\0') {
          puVar5 = (undefined2 *)&DAT_8013f1e8;
          puVar4 = param_1;
          do {
            iVar6 = iVar6 + 1;
            iVar3 = func_0x0007aae8();
            *(int *)(puVar4 + 0xc0) = iVar3;
            *(undefined2 *)(iVar3 + 6) = *puVar5;
            **(undefined2 **)(puVar4 + 0xc0) = puVar5[1];
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 2) = puVar5[2];
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 4) = puVar5[3];
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 8) = 0;
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 10) = 0;
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0xc) = 0;
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0x38) = 0x1000;
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0x3a) = 0x1000;
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0x3c) = 0x1000;
            psVar1 = puVar5 + 4;
            puVar5 = puVar5 + 5;
            func_0x00051b04(*(undefined4 *)(puVar4 + 0xc0),0xc,(int)*psVar1);
            *(undefined1 *)(*(int *)(puVar4 + 0xc0) + 0x3f) = 0x18;
            puVar4 = puVar4 + 4;
          } while (iVar6 < (int)(uint)(byte)param_1[8]);
        }
        *(undefined2 *)(param_1 + 0x80) = 0x20;
        *(undefined2 *)(param_1 + 0x82) = 0x40;
        *(undefined2 *)(param_1 + 0x84) = 0x78;
        *(undefined2 *)(param_1 + 0x86) = 0xf0;
        param_1[0x2b] = 0;
        if ((DAT_800bf9c3 & 0x80) == 0) {
          *(undefined2 *)(param_1 + 0x60) = 0;
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x280;
        }
        else {
          *param_1 = 1;
          *(undefined2 *)(param_1 + 0x60) = 1;
          *(undefined2 *)(param_1 + 0x62) = 0;
          *(undefined2 *)(param_1 + 100) = 0;
        }
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

