// FUN_0801ba54

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ba54(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x00114760(param_1);
    param_1[0x29] = 0;
    param_1[1] = 1;
    func_0x00077ebc(param_1);
    func_0x000517f8(param_1);
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
      param_1[8] = 9;
      if (_DAT_800ed098 < 9) {
        param_1[4] = 3;
      }
      else {
        param_1[9] = 9;
        *(undefined2 *)(param_1 + 0x80) = 0x60;
        *(undefined2 *)(param_1 + 0x82) = 0xc0;
        *param_1 = 1;
        iVar5 = 0;
        param_1[0xd] = 0;
        param_1[0xb] = 0;
        param_1[4] = param_1[4] + '\x01';
        if (param_1[8] != '\0') {
          puVar4 = (undefined2 *)&DAT_8011cc6c;
          puVar3 = param_1;
          do {
            iVar5 = iVar5 + 1;
            iVar2 = func_0x0007aae8();
            *(int *)(puVar3 + 0xc0) = iVar2;
            *(undefined2 *)(iVar2 + 6) = 0xffff;
            **(undefined2 **)(puVar3 + 0xc0) = *puVar4;
            *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 2) = puVar4[1];
            *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 4) = puVar4[2];
            *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 8) = 0;
            *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 10) = 0;
            *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 0xc) = 0;
            func_0x00051b04(*(undefined4 *)(puVar3 + 0xc0),0xc,(int)(short)puVar4[3]);
            *(undefined1 *)(*(int *)(puVar3 + 0xc0) + 0x3e) = 0;
            puVar4 = puVar4 + 4;
            *(undefined1 *)(*(int *)(puVar3 + 0xc0) + 0x3f) = 0;
            puVar3 = puVar3 + 4;
          } while (iVar5 < (int)(uint)(byte)param_1[8]);
        }
        *(undefined2 *)(param_1 + 0x60) = 0xffff;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

