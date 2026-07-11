// FUN_08023b98

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023b98(undefined1 *param_1)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  
  bVar2 = param_1[4];
  if (bVar2 == 1) {
    if (('\0' < (char)DAT_800bf8db) && ((DAT_800bf8db & 2) != 0)) {
      *param_1 = 3;
      param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = 1;
    iVar6 = func_0x0007778c(param_1);
    if ((iVar6 != 0) && ((byte)param_1[5] < 6)) {
                    /* WARNING: Could not emulate address calculation at 0x08023d78 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6894))();
      return;
    }
    param_1[0x2b] = 0;
    if (param_1[1] == '\0') {
      return;
    }
    func_0x000517f8(param_1);
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
      param_1[8] = 2;
      if (_DAT_800ed098 < 2) {
        param_1[4] = 3;
      }
      else {
        iVar6 = 0;
        param_1[9] = 2;
        *(undefined2 *)(param_1 + 0x80) = 0x50;
        *(undefined2 *)(param_1 + 0x82) = 0xa0;
        *(undefined2 *)(param_1 + 0x84) = 300;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x86) = 600;
        param_1[0xd] = 0;
        param_1[0xb] = 0;
        if (param_1[8] != '\0') {
          puVar5 = (undefined2 *)&DAT_80133240;
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
            psVar1 = puVar5 + 4;
            puVar5 = puVar5 + 5;
            func_0x00051b04(*(undefined4 *)(puVar4 + 0xc0),0xc,(int)*psVar1);
            puVar4 = puVar4 + 4;
          } while (iVar6 < (int)(uint)(byte)param_1[8]);
        }
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0xff00;
        param_1[0x2b] = 0;
        param_1[4] = param_1[4] + '\x01';
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

