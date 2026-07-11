// FUN_0802dfe8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802dfe8(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      param_1[4] = 1;
      uVar2 = _DAT_800ecf80;
      param_1[0xb] = 0x10;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      param_1[0xd] = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      param_1[8] = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      func_0x00077b38(param_1,0x8013ff68,*(undefined1 *)((byte)param_1[3] + 0x80134dcb));
      param_1[0x47] = 0;
      *param_1 = 2;
      param_1[0x5e] = param_1[3] & 1;
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        func_0x0007a624(param_1);
        return;
      }
      halt_baddata();
    }
    *(short *)(*(int *)(param_1 + 0x10) + 0x40) = *(short *)(*(int *)(param_1 + 0x10) + 0x40) + -1;
LAB_0802e1f8:
    param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf816 == '\0') goto LAB_0802e1f8;
  func_0x00077b5c(param_1);
  param_1[1] = 1;
  func_0x00077e7c(param_1);
  bVar1 = param_1[5];
  iVar4 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_0x001273f8(param_1,1);
        if (param_1[0x5e] != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00074590(0xf,0x11,0xffffffe2);
        param_1[0x5e] = param_1[0x5e] ^ 1;
        param_1[5] = param_1[5] + '\x01';
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      iVar3 = func_0x001271bc(param_1,1);
      if (iVar3 == 0) {
        return;
      }
      if (*(char *)(iVar4 + 0xbf) != '\x03') {
        param_1[5] = 0;
        halt_baddata();
      }
      goto LAB_0802e1cc;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x001273f8(param_1,0);
    param_1[5] = param_1[5] + '\x01';
  }
  iVar3 = func_0x001271bc(param_1,0);
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(iVar4 + 0xbf) != '\x03') {
    param_1[5] = param_1[5] + '\x01';
    halt_baddata();
  }
LAB_0802e1cc:
  param_1[4] = 2;
  halt_baddata();
}

