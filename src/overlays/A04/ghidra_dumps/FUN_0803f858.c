// FUN_0803f858

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803f858(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x00116b48(param_1);
    if (param_1[0x2b] == '\0') {
      if (DAT_1f800137 == '\0') {
        func_0x001384ec(param_1);
      }
      if (param_1[1] == '\0') {
        return;
      }
      func_0x000518fc(param_1);
    }
    else {
      param_1[4] = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = func_0x00051b70(param_1,0xc,DAT_80141ab7);
      if (iVar3 != 0) {
        return;
      }
      *param_1 = 1;
      param_1[0x2b] = 0;
      uVar2 = 0x1400;
      if (*(short *)(*(int *)(param_1 + 0x10) + 0xb8) == 0x1200) {
        uVar2 = 0x1800;
      }
      *(undefined2 *)(param_1 + 0x60) = uVar2;
      *(undefined2 *)(param_1 + 0xbc) = 0x200;
      *(undefined2 *)(param_1 + 0xba) = 0x200;
      *(undefined2 *)(param_1 + 0xb8) = 0x200;
      *(undefined2 *)(param_1 + 0x80) = 100;
      *(undefined2 *)(param_1 + 0x82) = 200;
      *(undefined2 *)(param_1 + 0x84) = 100;
      *(undefined2 *)(param_1 + 0x86) = 200;
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0xbf) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar3 = func_0x00116b48(param_1);
    if (iVar3 != 0) {
      func_0x000518fc(param_1);
    }
    func_0x0003116c(0x504,param_1 + 0x2c,0xffffffce);
    func_0x0003116c(0x503,param_1 + 0x2c,0xffffffce);
    param_1[4] = 3;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

