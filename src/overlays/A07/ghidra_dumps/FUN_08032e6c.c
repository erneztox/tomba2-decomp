// FUN_08032e6c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08032e6c(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_800bf816 == '\0') {
      bVar1 = param_1[0x5e];
      if (bVar1 == 1) {
        func_0x0007778c(param_1);
        func_0x00130ebc(param_1);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (DAT_800bf8d8 == '\0') {
            iVar5 = *(int *)(param_1 + 0x10);
            cVar2 = *(char *)(iVar5 + 1);
            param_1[1] = cVar2;
            if (cVar2 != '\0') {
              func_0x00077efc(param_1);
            }
            uVar3 = *(undefined4 *)(iVar5 + 0x30);
            uVar4 = *(undefined4 *)(iVar5 + 0x34);
            *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar5 + 0x2c);
            *(undefined4 *)(param_1 + 0x30) = uVar3;
            *(undefined4 *)(param_1 + 0x34) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *param_1 = 1;
          *(undefined2 *)(param_1 + 0x56) = 0;
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
          param_1[0x5e] = 1;
          param_1[6] = 0;
          param_1[5] = 0;
        }
      }
      else if (bVar1 == 2) {
        func_0x0012b49c(param_1);
      }
      else if (bVar1 == 3) {
        iVar5 = *(int *)(param_1 + 0x10);
        cVar2 = *(char *)(iVar5 + 1);
        param_1[1] = cVar2;
        if (cVar2 != '\0') {
          func_0x00077efc(param_1);
        }
        uVar3 = *(undefined4 *)(iVar5 + 0x30);
        uVar4 = *(undefined4 *)(iVar5 + 0x34);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar5 + 0x2c);
        *(undefined4 *)(param_1 + 0x30) = uVar3;
        *(undefined4 *)(param_1 + 0x34) = uVar4;
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0xf5;
        *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar5 + 0x56);
        *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
             *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + (*(short *)(iVar5 + 0x44) >> 5);
        if (param_1[1] == '\0') {
          return;
        }
        func_0x000517f8(param_1);
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[0x5e] == '\x03') {
      return;
    }
    if ((DAT_800bfa45 & 1) == 0) {
      if (param_1[0x5e] != '\x01') {
        return;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x2040;
      *(undefined2 *)(param_1 + 0x32) = 0xf59c;
      *(undefined2 *)(param_1 + 0x36) = 0x1c69;
      param_1[6] = 0;
      param_1[5] = 0;
    }
    else {
      param_1[4] = 3;
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
      func_0x00051b70(param_1,0xc,0x27);
      bVar1 = param_1[3];
      param_1[0xd] = 0;
      param_1[0xb] = 0;
      *(undefined2 *)(param_1 + 0x80) = 100;
      *(undefined2 *)(param_1 + 0x82) = 200;
      *(undefined2 *)(param_1 + 0x84) = 100;
      *(undefined2 *)(param_1 + 0x86) = 200;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if (bVar1 == 1) {
        *param_1 = 2;
        param_1[0x5e] = 0;
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          *param_1 = 1;
          param_1[0x5e] = 1;
        }
      }
      else if (bVar1 == 3) {
        *param_1 = 2;
        param_1[0x5e] = 3;
        param_1[3] = 0;
        param_1[4] = param_1[4] + '\x01';
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

