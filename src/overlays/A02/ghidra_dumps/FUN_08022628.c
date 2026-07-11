// FUN_08022628

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022628(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
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
      param_1[8] = 5;
      if (_DAT_800ed098 < 5) {
        param_1[4] = 3;
      }
      else {
        param_1[9] = 5;
        iVar6 = 0;
        param_1[0xd] = 0;
        param_1[0xb] = 0;
        param_1[4] = param_1[4] + '\x01';
        if (param_1[8] != '\0') {
          puVar4 = (undefined2 *)&DAT_8012a160;
          puVar5 = param_1;
          do {
            iVar6 = iVar6 + 1;
            puVar3 = (undefined2 *)func_0x0007aae8();
            *(undefined2 **)(puVar5 + 0xc0) = puVar3;
            puVar3[3] = *puVar4;
            *puVar3 = puVar4[1];
            puVar3[1] = puVar4[2];
            uVar2 = puVar4[3];
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[2] = uVar2;
            puVar5 = puVar5 + 4;
            func_0x00051b04(puVar3,0xc,(int)(short)puVar4[4]);
            puVar4 = puVar4 + 5;
          } while (iVar6 < (int)(uint)(byte)param_1[8]);
        }
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x80) = 300;
        *(undefined2 *)(param_1 + 0x82) = 600;
        *(undefined2 *)(param_1 + 0x84) = 0xb4;
        *(undefined2 *)(param_1 + 0x86) = 0x168;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        if (param_1[3] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_1[3] == '\x01') {
          if (DAT_800bf871 == '\b') {
            *(undefined2 *)(param_1 + 0x2e) = 0x38a4;
            param_1[5] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(param_1 + 0x2e) = 0x2c00;
          *(undefined2 *)(param_1 + 0x32) = 0xf2c2;
          *(undefined2 *)(param_1 + 0x36) = 0x2d82;
        }
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[3] == '\0') {
    func_0x0011ac40(param_1);
  }
  else if (param_1[3] == '\x01') {
    bVar1 = param_1[5];
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        iVar6 = func_0x0007778c(param_1);
        if ((iVar6 != 0) && (param_1[0x2b] != '\0')) {
          param_1[0x2b] = 0;
          DAT_800e7e80 = 2;
          func_0x00040cdc(param_1,0,0x8012a194);
          param_1[0x70] = 2;
          param_1[6] = 0;
          param_1[5] = param_1[5] + '\x01';
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 2) {
          halt_baddata();
        }
        param_1[1] = 1;
        func_0x00077ebc(param_1);
        func_0x0011b1fc(param_1);
      }
      if (param_1[1] != '\0') {
        func_0x000517f8(param_1);
        halt_baddata();
      }
      return;
    }
    param_1[1] = 1;
    func_0x00077ebc(param_1);
    func_0x0011aef0(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

