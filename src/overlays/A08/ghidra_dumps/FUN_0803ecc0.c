// FUN_0803ecc0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803ecc0(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined1 *puVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 != 0) {
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x2c);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x30);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x34);
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar4 + 0x56);
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) =
           *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc);
      *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(iVar4 + 0x60);
      param_1[0xbe] = *(undefined1 *)(iVar4 + 0xbe);
      param_1[0xbf] = *(undefined1 *)(iVar4 + 0xbf);
      if (param_1[4] == '\x01') {
        *(undefined1 *)(iVar4 + 0x47) = param_1[0x47];
        *(undefined1 *)(iVar4 + 0x2b) = param_1[0x2b];
      }
      if (*(char *)(iVar4 + 1) != '\0') {
        param_1[1] = 1;
        func_0x00077e7c(param_1);
        func_0x000517f8(param_1);
      }
    }
    param_1[0x47] = 0;
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[4] = 1;
    iVar4 = func_0x00051b70(param_1,0x17,0x12);
    if (iVar4 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfb8;
    param_1[0xd] = param_1[0xd] | 4;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xfd;
    iVar4 = *(int *)(param_1 + 0x10);
    *(undefined2 *)(param_1 + 0x80) = 0x78;
    *(undefined2 *)(param_1 + 0x82) = 0xf0;
    *(undefined2 *)(param_1 + 0x84) = 0x8c;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x86) = 0xa0;
    param_1[0x47] = 0;
    param_1[0x2b] = 0;
    if (iVar4 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x2c);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x30);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x34);
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar4 + 0x56);
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc);
    *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(iVar4 + 0x60);
    param_1[0xbe] = *(undefined1 *)(iVar4 + 0xbe);
    param_1[0xbf] = *(undefined1 *)(iVar4 + 0xbf);
    if (param_1[4] == '\x01') {
      *(undefined1 *)(iVar4 + 0x47) = param_1[0x47];
      *(undefined1 *)(iVar4 + 0x2b) = param_1[0x2b];
    }
    if (*(char *)(iVar4 + 1) != '\0') {
      param_1[1] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
    return;
  }
  bVar1 = param_1[5];
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  if (bVar1 == 1) {
    bVar1 = param_1[6];
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 == 2) {
          *(undefined4 *)(puVar5 + 0x10) = 0;
          puVar5[0x5e] = 1;
          param_1[0x2a] = puVar5[0x2a];
          uVar2 = *(undefined2 *)(puVar5 + 0x56);
          *(undefined4 *)(param_1 + 0x10) = 0;
          param_1[6] = param_1[6] + '\x01';
          *(undefined2 *)(param_1 + 0x56) = uVar2;
        }
        else if (bVar1 != 3) {
          halt_baddata();
        }
        iVar4 = func_0x0007778c(param_1);
        if (iVar4 != 0) {
          func_0x00077e7c(param_1);
          func_0x000517f8(param_1);
          halt_baddata();
        }
        return;
      }
      if (bVar1 != 0) {
        halt_baddata();
      }
      puVar5[6] = 0x80;
      puVar5[4] = 2;
      puVar5[5] = 1;
      *puVar5 = 2;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0xb4;
      param_1[0xd] = param_1[0xd] | 4;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 3;
      param_1[6] = param_1[6] + '\x01';
    }
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x2c);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x30);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x34);
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar4 + 0x56);
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0xc);
    *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(iVar4 + 0x60);
    param_1[0xbe] = *(undefined1 *)(iVar4 + 0xbe);
    param_1[0xbf] = *(undefined1 *)(iVar4 + 0xbf);
    if (param_1[4] == '\x01') {
      *(undefined1 *)(iVar4 + 0x47) = param_1[0x47];
      *(undefined1 *)(iVar4 + 0x2b) = param_1[0x2b];
    }
    if (*(char *)(iVar4 + 1) == '\0') {
      return;
    }
    param_1[1] = 1;
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 0xb) {
      halt_baddata();
    }
    goto LAB_0803f2ac;
  }
  iVar4 = func_0x0007778c(param_1);
  if (iVar4 != 0) {
    func_0x00077e7c(param_1);
    func_0x000517f8(param_1);
  }
  if (param_1[6] == '\0') {
    *(undefined4 *)(puVar5 + 0x10) = 0;
    puVar5[0x5e] = 1;
    param_1[0x2a] = puVar5[0x2a];
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(puVar5 + 0x56);
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar4 = func_0x00077768((uint)(byte)param_1[0x2b] << 4,(int)*(short *)(param_1 + 0x56),0);
    if (iVar4 == 0) {
      iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x48) = (short)(iVar4 >> 4);
      iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x4c) = (short)(-iVar4 >> 4);
      *(undefined2 *)(param_1 + 0x4a) = 0xfe00;
      *(undefined2 *)(param_1 + 0x44) = 0x1000;
      *(undefined2 *)(param_1 + 0x40) = 0x14;
      param_1[6] = param_1[6] + '\x01';
      halt_baddata();
    }
    iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x48) = (short)(-iVar4 >> 4);
    func_0x00083e80((int)*(short *)(param_1 + 0x56));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[6] != '\x01') {
    halt_baddata();
  }
  iVar4 = (int)*(short *)(param_1 + 0x44);
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x180;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar4;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar4;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar4;
  func_0x0004766c(param_1);
  if (*(short *)(param_1 + 0x40) != 0) {
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = func_0x000495dc(param_1,0x5a,0x5a);
  if (iVar4 == 0) {
    sVar3 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x4a) = sVar3 + 0x30;
    if (0x1000 < (short)(sVar3 + 0x30)) {
      *(undefined2 *)(param_1 + 0x4a) = 0x1000;
      halt_baddata();
    }
    return;
  }
  if (param_1[1] != '\0') {
    func_0x00074590(0x1b,0,0);
    func_0x000315d4(param_1 + 0x2c);
  }
LAB_0803f2ac:
  param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

