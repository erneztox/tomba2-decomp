// FUN_08026a70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026a70(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = _DAT_800ecf90;
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      param_1[0xb] = 0x80;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      if ((_DAT_800bfe56 & 0x80) == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0xc0;
        *(undefined2 *)(param_1 + 0x82) = 0x180;
        *(undefined2 *)(param_1 + 0x84) = 0xe0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x82) = 0x100;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x80) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0x145;
      if ((param_1[3] & 0x40) != 0) {
        *(undefined2 *)(param_1 + 0x86) = 0x140;
      }
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[0x5e] = 0;
      if ((param_1[3] & 0x80) != 0) {
        func_0x00040cdc(param_1,0x8014005c,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
        func_0x00041718(param_1,param_1[0x7b],0);
        param_1[4] = param_1[4] + '\x01';
        halt_baddata();
      }
      func_0x0011ef34(param_1);
      iVar3 = *(int *)(((byte)param_1[3] & 0x1f) * 4 + -0x7fecc4e0);
      *(int *)(param_1 + 0x1c) = iVar3;
      if (iVar3 != 0) {
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
  if ((param_1[0x5f] & 0xf) == 0) {
    func_0x0011f6a4(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0011f7f4(param_1);
  if (param_1[0x5e] == '\0') {
    if (param_1[1] == '\0') goto LAB_08026c7c;
    iVar3 = func_0x0011ef34(param_1);
    if (iVar3 != 0) {
      param_1[0x5e] = 1;
      halt_baddata();
    }
LAB_08026c60:
    if (param_1[1] == '\0') goto LAB_08026c7c;
  }
  else {
    if (param_1[0x5e] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[1] == '\0') {
      func_0x0007addc(param_1);
      param_1[0x5e] = 0;
      goto LAB_08026c60;
    }
  }
  func_0x000518fc(param_1);
LAB_08026c7c:
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  if (DAT_800bf9d9 != '\x02') {
    return;
  }
  param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

