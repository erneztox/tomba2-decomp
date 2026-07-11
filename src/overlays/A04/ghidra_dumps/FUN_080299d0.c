// FUN_080299d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080299d0(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x000778e4(param_1,(int)(((uint)_DAT_1f8000e2 - (uint)*(ushort *)(param_1 + 0x32)) *
                                 0x10000) >> 0x10);
    if ((byte)param_1[5] < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08029d9c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef60d4))();
      return;
    }
    if (param_1[1] != '\0') {
      func_0x00051844(param_1);
      param_1[0x5f] = 0;
      halt_baddata();
    }
LAB_08029d54:
    param_1[0x5f] = 0;
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
    if (bVar1 != 0) {
      halt_baddata();
    }
    cVar3 = param_1[3];
    if (cVar3 == 'b') {
      if (DAT_800bf871 == '\a') {
        cVar3 = param_1[3];
        goto LAB_08029a68;
      }
    }
    else {
LAB_08029a68:
      if (((cVar3 != 'c') || (DAT_800bf871 != '\a')) && (param_1[8] = 2, 1 < _DAT_800ed098)) {
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0xb8) = 0x1000;
        *(undefined2 *)(param_1 + 0xba) = 0x1000;
        *(undefined2 *)(param_1 + 0xbc) = 0x1000;
        iVar6 = 0;
        param_1[0xd] = 0;
        param_1[0xb] = 0;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        param_1[4] = param_1[4] + '\x01';
        param_1[9] = param_1[8];
        if (param_1[8] != '\0') {
          puVar5 = (undefined2 *)&DAT_80141454;
          puVar4 = param_1;
          do {
            iVar6 = iVar6 + 1;
            iVar2 = func_0x0007aae8();
            *(int *)(puVar4 + 0xc0) = iVar2;
            *(undefined2 *)(iVar2 + 6) = *puVar5;
            **(undefined2 **)(puVar4 + 0xc0) = puVar5[1];
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 2) = puVar5[2];
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 4) = puVar5[3];
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 8) = 0;
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 10) = 0;
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0xc) = 0;
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0x38) = 0x1000;
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0x3a) = 0x1000;
            puVar5 = puVar5 + 4;
            *(undefined2 *)(*(int *)(puVar4 + 0xc0) + 0x3c) = 0x1000;
            puVar4 = puVar4 + 4;
          } while (iVar6 < (int)(uint)(byte)param_1[8]);
        }
        if ((DAT_800bf9b4 & 0x20) == 0) {
          func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x2e);
          *(undefined4 *)(*(int *)(param_1 + 0xc4) + 0x40) = 0;
          *(undefined2 *)(param_1 + 0x80) = 0x50;
          *(undefined2 *)(param_1 + 0x82) = 0x50;
          *(undefined2 *)(param_1 + 0x84) = 200;
          *(undefined2 *)(param_1 + 0x86) = 200;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x30);
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0xc,0x31);
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x7fff;
        *(undefined2 *)(param_1 + 0x80) = 0x30;
        *(undefined2 *)(param_1 + 0x82) = 0x30;
        *(undefined2 *)(param_1 + 0x84) = 0xfc0;
        *(undefined2 *)(param_1 + 0x86) = 0xfc0;
        param_1[5] = 1;
        param_1[2] = 1;
        func_0x00051844(param_1);
        if (param_1[3] == 'b') {
          _DAT_800e7e90 = *(undefined4 *)(param_1 + 0xc0);
          DAT_800e7e85 = 4;
          DAT_800e7e86 = 0;
          DAT_800e7e87 = 0;
          DAT_800e7fdc = 0;
          DAT_800e7fe4 = 1;
          DAT_800e7fca = DAT_800e7fc7 | 2;
          _DAT_800e7fd2 = *(short *)(param_1 + 0x80) + _DAT_800e7f00 + -0xc;
          _DAT_800e7fd6 = _DAT_800e7eb2 - *(short *)(*(int *)(param_1 + 0xc0) + 0x30);
          _DAT_800e7fd8 = param_1;
          param_1[0x29] = 1;
          param_1[5] = 4;
          halt_baddata();
        }
        if ((param_1[3] == 'c') && (DAT_800bf871 == '\b')) {
          _DAT_800e7e90 = *(undefined4 *)(param_1 + 0xc0);
          DAT_800e7e85 = 4;
          DAT_800e7e86 = 0;
          DAT_800e7e87 = 0;
          DAT_800e7fdc = 0;
          DAT_800e7fe4 = 1;
          DAT_800e7fca = DAT_800e7fc7 | 2;
          _DAT_800e7fd2 = *(short *)(param_1 + 0x80) + _DAT_800e7f00 + -0xc;
          _DAT_800e7fd6 = _DAT_800e7eb2 - *(short *)(*(int *)(param_1 + 0xc0) + 0x30);
          _DAT_800e7fd8 = param_1;
          param_1[0x29] = 1;
          param_1[5] = 5;
          param_1[6] = 0;
        }
        param_1[0xbf] = 0;
        goto LAB_08029d54;
      }
    }
    param_1[4] = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

