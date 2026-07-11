// FUN_0801d130

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801d130(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_1f800137 == '\0') {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 100);
      if (*(int *)(param_1 + 100) == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0x8013f60c;
      }
      if (param_1[0x5f] == '\0') {
        cVar2 = param_1[6];
        param_1[6] = cVar2 + -1;
        if ((cVar2 == '\0') || (func_0x00077a4c(param_1,0,0,0), param_1[1] == '\0')) {
          param_1[4] = 3;
        }
        else {
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x4e) * 0x100;
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x52) * 0x100;
          func_0x0004766c(param_1);
          iVar4 = func_0x000495dc(param_1,(int)*(short *)(param_1 + 0x80),0);
          if (iVar4 != 0) {
            param_1[4] = 2;
            param_1[5] = 1;
          }
          func_0x00077e7c(param_1);
        }
      }
      else {
        param_1[4] = 2;
        param_1[5] = 1;
        func_0x00077e7c();
      }
    }
    else {
      iVar4 = func_0x0007778c(param_1);
      if (iVar4 == 0) {
        return;
      }
      func_0x000518fc(param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[0xb] = 0x20;
    *(undefined4 *)(param_1 + 0x18) = 0x8013788c;
    *param_1 = 1;
    uVar3 = _DAT_8013f608;
    *(undefined4 *)(param_1 + 100) = 0x8013f60c;
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined2 *)(param_1 + 0x82) = 0x50;
    *(undefined2 *)(param_1 + 0x86) = 0x50;
    *(undefined2 *)(param_1 + 0x80) = 0x28;
    *(undefined2 *)(param_1 + 0x84) = 0x28;
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0x3c;
    param_1[0x5f] = 0;
    halt_baddata();
  }
  if (bVar1 == 2) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      func_0x00116518(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x001164d0(param_1);
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    func_0x001165bc(param_1);
  }
  else if (bVar1 != 3) {
    halt_baddata();
  }
  func_0x0007a624(param_1);
  return;
}

