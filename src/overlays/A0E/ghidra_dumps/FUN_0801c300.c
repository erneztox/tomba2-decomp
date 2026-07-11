// FUN_0801c300

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c300(undefined1 *param_1)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  
  bVar2 = param_1[4];
  if (bVar2 == 1) {
    bVar2 = param_1[5];
    if (bVar2 == 1) {
      *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
           *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + -0x200;
      if (*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) < 0x200) {
        param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          if (param_1[0x29] != '\0') {
            param_1[5] = 1;
          }
          *(undefined2 *)(param_1 + 0x84) = 0;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar2 != 2) {
        halt_baddata();
      }
      *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
           *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + 0x200;
      if (0xfff < *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a)) {
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x1000;
        param_1[5] = 0;
        param_1[0x29] = 0;
      }
    }
    if (param_1[0x29] == '\x01') {
      iVar6 = 0x100 - (uint)(*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) >> 4);
      *(short *)(param_1 + 0x84) =
           (short)((ulonglong)((longlong)iVar6 * 0x2aaaaaab) >> 0x20) - (short)(iVar6 >> 0x1f);
    }
    if ((param_1[3] == '\a') && (1 < _DAT_800bf850)) {
      return;
    }
    func_0x0007703c(param_1);
    if (param_1[1] == '\0') {
      return;
    }
    func_0x00051844(param_1);
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
        *param_1 = 1;
        param_1[9] = 2;
        *(undefined2 *)(param_1 + 0x80) = 0x72;
        *(undefined2 *)(param_1 + 0x82) = 0xe4;
        *(undefined2 *)(param_1 + 0x84) = 0x100;
        *(undefined2 *)(param_1 + 0x86) = 0x420;
        *(undefined2 *)(param_1 + 0xb8) = 0x1000;
        *(undefined2 *)(param_1 + 0xba) = 0x1000;
        *(undefined2 *)(param_1 + 0xbc) = 0x1000;
        iVar6 = 0;
        param_1[0xd] = 0;
        param_1[0xb] = 0;
        param_1[0x29] = 0;
        param_1[4] = param_1[4] + '\x01';
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x100;
        if (param_1[8] != '\0') {
          puVar5 = (undefined2 *)&DAT_8011cfb4;
          puVar4 = param_1;
          do {
            iVar6 = iVar6 + 1;
            iVar3 = func_0x0007aae8();
            *(int *)(puVar4 + 0xc0) = iVar3;
            *(undefined2 *)(iVar3 + 6) = *puVar5;
            **(undefined2 **)(puVar4 + 0xc0) = puVar5[1];
            *(short *)(*(int *)(puVar4 + 0xc0) + 2) = puVar5[2] + 0x100;
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
            puVar4 = puVar4 + 4;
          } while (iVar6 < (int)(uint)(byte)param_1[8]);
        }
        func_0x0004766c(param_1);
        func_0x00048750(param_1);
        *(short *)(param_1 + 0x56) = _DAT_1f8001a0 + 0x800;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

