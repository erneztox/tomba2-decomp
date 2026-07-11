// FUN_08017158

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080179cc) */
/* WARNING: Removing unreachable block (ram,0x08017a1c) */
/* WARNING: Removing unreachable block (ram,0x08017a2c) */
/* WARNING: Removing unreachable block (ram,0x08017a34) */
/* WARNING: Removing unreachable block (ram,0x08017a7c) */
/* WARNING: Removing unreachable block (ram,0x08017a94) */
/* WARNING: Removing unreachable block (ram,0x08017a58) */
/* WARNING: Removing unreachable block (ram,0x00110a34) */
/* WARNING: Removing unreachable block (ram,0x08017a98) */
/* WARNING: Removing unreachable block (ram,0x08017aa0) */
/* WARNING: Removing unreachable block (ram,0x08017adc) */
/* WARNING: Removing unreachable block (ram,0x080179dc) */
/* WARNING: Removing unreachable block (ram,0x001109a0) */
/* WARNING: Removing unreachable block (ram,0x08017a00) */
/* WARNING: Removing unreachable block (ram,0x08017a0c) */
/* WARNING: Removing unreachable block (ram,0x080173c8) */
/* WARNING: Removing unreachable block (ram,0x08017418) */
/* WARNING: Removing unreachable block (ram,0x08017428) */
/* WARNING: Removing unreachable block (ram,0x08017430) */
/* WARNING: Removing unreachable block (ram,0x08017478) */
/* WARNING: Removing unreachable block (ram,0x08017490) */
/* WARNING: Removing unreachable block (ram,0x08017454) */
/* WARNING: Removing unreachable block (ram,0x00110430) */
/* WARNING: Removing unreachable block (ram,0x08017494) */
/* WARNING: Removing unreachable block (ram,0x080173d8) */
/* WARNING: Removing unreachable block (ram,0x0011039c) */
/* WARNING: Removing unreachable block (ram,0x080173fc) */
/* WARNING: Removing unreachable block (ram,0x08017408) */
/* WARNING: Removing unreachable block (ram,0x0801769c) */
/* WARNING: Removing unreachable block (ram,0x080176ec) */
/* WARNING: Removing unreachable block (ram,0x080176fc) */
/* WARNING: Removing unreachable block (ram,0x08017704) */
/* WARNING: Removing unreachable block (ram,0x0801774c) */
/* WARNING: Removing unreachable block (ram,0x08017764) */
/* WARNING: Removing unreachable block (ram,0x08017728) */
/* WARNING: Removing unreachable block (ram,0x00110704) */
/* WARNING: Removing unreachable block (ram,0x08017768) */
/* WARNING: Removing unreachable block (ram,0x08017770) */
/* WARNING: Removing unreachable block (ram,0x00110a7c) */
/* WARNING: Removing unreachable block (ram,0x08017ae8) */
/* WARNING: Removing unreachable block (ram,0x08017af0) */
/* WARNING: Removing unreachable block (ram,0x080176ac) */
/* WARNING: Removing unreachable block (ram,0x00110670) */
/* WARNING: Removing unreachable block (ram,0x080176d0) */
/* WARNING: Removing unreachable block (ram,0x080176dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017158(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
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
            func_0x00056b48(param_1,0);
            func_0x0010ff9c(param_1);
            iVar4 = (int)*(short *)(param_1 + 0x182);
            *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar4
            ;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar4
            ;
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar4
            ;
            if ((*(char *)(param_1 + 0x16b) == '\0') && (*(char *)(param_1 + 0x61) == '\0')) {
              func_0x00054650(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xfb;
            func_0x0010fb44(param_1,0);
            func_0x00055d5c(param_1);
            func_0x00055284(param_1);
            *(undefined2 *)(param_1 + 0x16c) = 0;
            *(undefined2 *)(param_1 + 0x6a) = 0;
            iVar4 = func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
            uVar3 = _DAT_1f8001a8;
            if ((iVar4 != 0) && (_DAT_1f8001a4 + -500 <= (int)_DAT_1f80019e)) {
              _DAT_1f80019e = _DAT_1f8001a4;
              *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
              *(undefined2 *)(param_1 + 0x16c) = uVar3;
              func_0x00049674(param_1);
              *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            func_0x00056d44(param_1,0);
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
      if ((*(byte *)(param_1 + 0x14a) & 2) != 0) {
        func_0x00054d14(param_1,0xdc,6);
        *(undefined1 *)(param_1 + 6) = 1;
        func_0x00056878(param_1,*(undefined1 *)(param_1 + 0x14a),0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
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
      func_0x00056b48(param_1,0);
      func_0x0010ff9c(param_1);
      iVar4 = (int)*(short *)(param_1 + 0x182);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar4;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar4;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar4;
      if ((*(char *)(param_1 + 0x16b) == '\0') && (*(char *)(param_1 + 0x61) == '\0')) {
        func_0x00054650(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xfb;
      func_0x0010fb44(param_1,1);
      func_0x00055d5c(param_1);
      func_0x00055284(param_1);
      *(undefined2 *)(param_1 + 0x16c) = 0;
      *(undefined2 *)(param_1 + 0x6a) = 0;
      iVar4 = func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
      uVar3 = _DAT_1f8001a8;
      if ((iVar4 != 0) && (_DAT_1f8001a4 + -500 <= (int)_DAT_1f80019e)) {
        _DAT_1f80019e = _DAT_1f8001a4;
        *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
        *(undefined2 *)(param_1 + 0x16c) = uVar3;
        func_0x00049674(param_1);
        *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00056d44(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x16a) = 0;
    *(undefined2 *)(param_1 + 0x182) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x17b) = 1;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x145) = 0;
    func_0x00053d90(param_1);
    *(undefined1 *)(param_1 + 0x181) = 1;
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x0010fb44(param_1,0);
    func_0x00054d14(param_1,0xdc,4);
    *(undefined2 *)(param_1 + 0x4a) = 0;
  }
  *(undefined2 *)(param_1 + 0x58) = 0;
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
  func_0x00056b48(param_1,0);
  func_0x0010ff9c(param_1);
  iVar4 = (int)*(short *)(param_1 + 0x182);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar4;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar4;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar4;
  if ((*(char *)(param_1 + 0x16b) == '\0') && (*(char *)(param_1 + 0x61) == '\0')) {
    func_0x00054650(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xfb;
  func_0x0010fb44(param_1,0);
  func_0x00055d5c(param_1);
  func_0x00055284(param_1);
  *(undefined2 *)(param_1 + 0x16c) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  iVar4 = func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
  uVar3 = _DAT_1f8001a8;
  if ((iVar4 != 0) && (_DAT_1f8001a4 + -500 <= (int)_DAT_1f80019e)) {
    _DAT_1f80019e = _DAT_1f8001a4;
    *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
    *(undefined2 *)(param_1 + 0x16c) = uVar3;
    func_0x00049674(param_1);
    *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00056d44(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

