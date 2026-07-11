// FUN_0802765c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802765c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
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
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar3 = func_0x000519e0(param_1,3,_DAT_800ecfd4,0x80145400);
    if (iVar3 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfd8;
    if (DAT_800bf873 != '\0') {
      param_1[4] = 3;
      halt_baddata();
    }
    if (((int)(uint)DAT_800bfa13 >> ((byte)param_1[3] & 0x1f) & 1U) != 0) {
      param_1[0x5e] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0012022c(param_1,1,0x1f);
    func_0x00077c40(param_1,0x8001b7b0,1);
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 400;
    *(undefined2 *)(param_1 + 0x82) = 800;
    *(undefined2 *)(param_1 + 0x84) = 0xb4;
    *(undefined2 *)(param_1 + 0x86) = 0xb4;
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    param_1[4] = param_1[4] + '\x01';
    if (param_1[0x5e] == '\0') {
      param_1[5] = 4;
      halt_baddata();
    }
    return;
  }
  iVar3 = func_0x0007778c(param_1);
  if (iVar3 == 0) goto LAB_08027884;
  func_0x00076d68(param_1);
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *param_1 = 2;
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 2) goto LAB_08027874;
      *param_1 = 1;
      param_1[6] = 0;
      DAT_800bf809 = 0;
    }
    if (param_1[0x2b] == '\x03') {
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      param_1[6] = param_1[6] + '\x01';
      uVar4 = 0x61;
      if (param_1[0x5e] == '\0') {
        uVar4 = 0x62;
      }
      func_0x0004ed94(uVar4,0x41);
      DAT_800bf809 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
LAB_08027874:
  func_0x00120338(param_1,0x1f);
  func_0x000518fc(param_1);
LAB_08027884:
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

