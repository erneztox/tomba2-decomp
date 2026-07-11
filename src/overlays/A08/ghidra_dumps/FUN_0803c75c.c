// FUN_0803c75c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803c75c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x00137920(param_1);
    if (param_1[0x2b] != '\0') {
      param_1[0x2b] = param_1[0x2b] + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf809 != '\0') {
      return;
    }
    if (DAT_1f800137 != '\0') {
      return;
    }
    if ((param_1[5] != '\0') && (DAT_1f800207 == '\n')) {
      *param_1 = 2;
      param_1[6] = 3;
      param_1[5] = 0;
      param_1[0x46] = 1;
      if (*(short *)(param_1 + 0x6e) == -1) {
        param_1[0xbf] = 1;
        func_0x00077cfc(param_1,0x80149588,0,0x10);
        func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
        *(undefined2 *)(param_1 + 0x7a) = _DAT_1f8001a4;
      }
    }
    uVar3 = func_0x00076d68(param_1);
    *(undefined2 *)(param_1 + 0x6a) = uVar3;
    if (4 < (byte)param_1[5]) {
      if (param_1[1] != '\0') {
        func_0x000518fc(param_1);
        func_0x0013698c(param_1);
      }
      param_1[0x47] = 0;
      halt_baddata();
    }
                    /* WARNING: Could not emulate address calculation at 0x0803ca4c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5d40))();
    return;
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      if ((param_1[0x1b] & 0x40) != 0) {
        param_1[0x1b] = param_1[0x1b] & 0xbf;
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    bVar1 = param_1[5];
    if (bVar1 < 7) {
      if (bVar1 < 4) {
        if (bVar1 == 1) {
          func_0x00137920(param_1);
          func_0x00076d68(param_1);
          func_0x00137780(param_1);
          halt_baddata();
        }
        if (1 < bVar1) {
          if (bVar1 != 2) {
            halt_baddata();
          }
          goto LAB_0803cbd4;
        }
        if (bVar1 != 0) {
          halt_baddata();
        }
      }
      func_0x00137920(param_1);
      if ((DAT_800bf809 == '\0') && (DAT_1f800137 == '\0')) {
        if (*(short *)(param_1 + 0x74) == 0) {
          func_0x00076d68(param_1);
        }
        func_0x00136de0(param_1);
        halt_baddata();
      }
LAB_0803ccc0:
      param_1[0x29] = 0;
      param_1[0x5f] = 0;
      if (param_1[1] != '\0') {
        func_0x000518fc(param_1);
        halt_baddata();
      }
      return;
    }
    if (bVar1 == 9) {
      func_0x001371cc(param_1);
      if ((param_1[3] == '\0') && (iVar4 = func_0x0011629c(param_1), iVar4 != 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x40) = 0;
        DAT_800bfa33 = '\x01';
      }
LAB_0803ccb8:
      param_1[4] = 3;
      halt_baddata();
    }
    if (8 < bVar1) {
      if (bVar1 != 0xb) {
        if (bVar1 != 0xff) {
          halt_baddata();
        }
        func_0x00137920(param_1);
        if (param_1[6] == '\0') {
          sVar2 = *(short *)(param_1 + 0x40);
          *(short *)(param_1 + 0x40) = sVar2 + -1;
          if (sVar2 == 1) {
            param_1[6] = param_1[6] + '\x01';
            halt_baddata();
          }
        }
        else {
          if (param_1[6] != '\x01') {
            halt_baddata();
          }
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
          iVar4 = func_0x00076d68(param_1);
          if (iVar4 == 1) {
            func_0x00137b18(param_1,6,0);
            param_1[4] = 3;
            halt_baddata();
          }
        }
        goto LAB_0803ccc0;
      }
      iVar4 = func_0x00080750(param_1,*(undefined4 *)(param_1 + 0xc0),2);
      if (iVar4 != 0) goto LAB_0803ccb8;
      param_1[5] = 2;
    }
LAB_0803cbd4:
    func_0x00137920(param_1);
    func_0x00136f5c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 != 0) {
    halt_baddata();
  }
  iVar4 = func_0x000519e0(param_1,0x12,_DAT_800ecfb4,0x8014175c);
  if (iVar4 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfb8;
  if (param_1[3] == '\0') {
    if (DAT_800bfa33 != '\0') {
      param_1[3] = 1;
    }
    if (param_1[3] == '\0') goto LAB_0803c848;
  }
  func_0x00051b04(*(undefined4 *)(param_1 + 0xcc),0x17,0x13);
  func_0x00051b04(*(undefined4 *)(param_1 + 0xd0),0x17,0x14);
  func_0x00051b04(*(undefined4 *)(param_1 + 0xd4),0x17,0x15);
LAB_0803c848:
  param_1[4] = param_1[4] + '\x01';
  func_0x00077c40(param_1,0x80149588,0);
  *(undefined2 *)(param_1 + 0x82) = 0xf0;
  *(undefined2 *)(param_1 + 0x84) = 100;
  *(undefined2 *)(param_1 + 0x80) = 0x78;
  *(undefined2 *)(param_1 + 0x86) = 0x78;
  param_1[0x47] = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  param_1[0x2a] = *(undefined1 *)((byte)param_1[3] + 0x80146e9c);
  func_0x0004766c(param_1);
  func_0x00049250(param_1,0,0x212);
  func_0x00049674(param_1);
  sVar2 = _DAT_1f8001a0;
  param_1[0xbe] = 0;
  *(short *)(param_1 + 0x60) = sVar2;
  *(short *)(param_1 + 0x56) = sVar2;
  iVar4 = func_0x00137898(param_1);
  if (iVar4 != 0) {
    *(ushort *)(param_1 + 0x56) = _DAT_1f8001a0 + 0x800U & 0xfff;
    param_1[0xbe] = param_1[0xbe] ^ 1;
  }
  param_1[0x46] = 1;
  param_1[0xbf] = 1;
  iVar4 = func_0x00138398(param_1);
  *(int *)(param_1 + 0x10) = iVar4;
  if (iVar4 == 0) {
    param_1[0x5e] = 1;
    func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
    *(undefined2 *)(param_1 + 0x7a) = _DAT_1f8001a4;
    *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[0x5e] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

