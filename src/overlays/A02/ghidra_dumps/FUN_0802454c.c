// FUN_0802454c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802454c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_800bfa05 == '\x02') {
      param_1[4] = 3;
    }
    if ((param_1[0x5f] & 0xf) == 0) {
      if (param_1[5] == '\0') {
        iVar2 = func_0x0007778c(param_1);
        if (((iVar2 != 0) && (func_0x00076d68(param_1), DAT_1f800137 == '\0')) &&
           (param_1[0x2b] == '\x03')) {
          func_0x00042354(1,1);
          param_1[6] = 0;
          param_1[5] = param_1[5] + '\x01';
          halt_baddata();
        }
      }
      else {
        if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar2 = func_0x0011cd14(param_1);
        if (iVar2 != 0) {
          param_1[5] = 0;
          halt_baddata();
        }
      }
    }
    else {
      func_0x0011d390(param_1);
    }
    if (param_1[1] != '\0') {
      func_0x000518fc(param_1);
    }
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
    uVar3 = 0xf;
    if ((param_1[3] & 0x20) != 0) {
      uVar3 = 0x10;
    }
    if ((param_1[3] & 0x40) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x000519e0(param_1,uVar3,_DAT_800ecfa8,0x80129158);
    if (iVar2 == 0) {
      param_1[0xb] = 0x40;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0xaa;
      *(undefined2 *)(param_1 + 0x82) = 0x154;
      *(undefined2 *)(param_1 + 0x84) = 200;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x168;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
    }
    if ((param_1[3] & 0x80) != 0) {
      if (*(char *)(*(int *)(param_1 + 0x14) + 3) != -1) {
        func_0x00051b04(*(undefined4 *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0),0x1b,
                        *(char *)(*(int *)(param_1 + 0x14) + 3));
      }
      func_0x00040cdc(param_1,0x80139240,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
      func_0x00041718(param_1,param_1[0x7b],0);
      func_0x00126c18(param_1);
      param_1[4] = param_1[4] + '\x01';
      halt_baddata();
    }
    iVar2 = *(int *)(((byte)param_1[3] & 0x1f) * 4 + -0x7fed52f4);
    *(int *)(param_1 + 0x1c) = iVar2;
    if (iVar2 != 0) {
      *(undefined2 *)(param_1 + 0x56) = 0;
      halt_baddata();
    }
  }
  else {
    if (bVar1 == 2) {
      return;
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
  }
  func_0x0007a624(param_1);
  return;
}

