// FUN_0801989c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801989c(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  
  func_0x00076d68();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_0x00055e28(param_1,1);
        if ((*(byte *)(param_1 + 0x14a) & 2) == 0) {
          func_0x00054d14(param_1,0xdb,6);
          if ((_DAT_800e7e68 & _DAT_1f800170) == 0) {
            func_0x00056878(param_1,*(undefined1 *)(param_1 + 0x14a),0);
            func_0x0011237c(param_1,0);
            func_0x00056b48(param_1,1);
            func_0x00055d5c(param_1);
            func_0x00055390(param_1);
            *(undefined2 *)(param_1 + 0x16c) = 0;
            *(undefined2 *)(param_1 + 0x6a) = 0;
            iVar4 = func_0x000489e4(param_1,(int)*(short *)(param_1 + 0x32));
            uVar3 = _DAT_1f8001a8;
            if (iVar4 != 0) {
              *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
              *(undefined2 *)(param_1 + 0x16c) = uVar3;
            }
            if ((uint)_DAT_1f80017c % 0xf != 0) {
              return;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(param_1 + 0x40) = 8;
          *(undefined2 *)(param_1 + 0x42) = 1;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        }
        else {
          func_0x00054d14(param_1,0xdc,6);
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + -1;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x00076d68(param_1);
      func_0x00055e28(param_1,1);
      if ((*(byte *)(param_1 + 0x14a) & 2) == 0) {
        if ((_DAT_800e7e68 & _DAT_1f800170) != 0) {
          *(undefined2 *)(param_1 + 0x40) = 8;
          *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00056878(param_1,*(undefined1 *)(param_1 + 0x14a),0);
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 == 1) {
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + -1;
        }
        func_0x0011237c(param_1,1);
        func_0x00056b48(param_1,1);
        func_0x00055d5c(param_1);
        func_0x00055390(param_1);
        *(undefined2 *)(param_1 + 0x16c) = 0;
        *(undefined2 *)(param_1 + 0x6a) = 0;
        iVar4 = func_0x000489e4(param_1,(int)*(short *)(param_1 + 0x32));
        uVar3 = _DAT_1f8001a8;
        if (iVar4 != 0) {
          *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
          *(undefined2 *)(param_1 + 0x16c) = uVar3;
        }
        uVar5 = (uint)_DAT_1f80017c;
        if ((uVar5 + (uVar5 / 7 + (uVar5 - uVar5 / 7 >> 1) >> 2) * -7 & 0xffff) != 0) {
          return;
        }
        func_0x00074590(0x33,0,0);
        return;
      }
      func_0x00054d14(param_1,0xdc,6);
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00056878(param_1,*(undefined1 *)(param_1 + 0x14a),0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x16a) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x17b) = 1;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x145) = 0;
    func_0x00053d90(param_1);
    *(undefined1 *)(param_1 + 0x181) = 1;
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x00054d14(param_1,0xdc,4);
  }
  func_0x00055e28(param_1,1);
  if ((*(byte *)(param_1 + 0x14a) & 2) == 0) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(byte *)(param_1 + 0x149) & 2) != 0) {
    func_0x00054d14(param_1,0xdd,6);
  }
  func_0x00056878(param_1,*(undefined1 *)(param_1 + 0x14a),0);
  func_0x00056b48(param_1,1);
  func_0x00055d5c(param_1);
  func_0x0011237c(param_1,0);
  func_0x00055390(param_1);
  *(undefined2 *)(param_1 + 0x16c) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  iVar4 = func_0x000489e4(param_1,(int)*(short *)(param_1 + 0x32));
  uVar3 = _DAT_1f8001a8;
  if (iVar4 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
  *(undefined2 *)(param_1 + 0x16c) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

