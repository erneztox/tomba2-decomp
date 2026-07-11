// FUN_08025528

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08025528(int param_1)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xfe | 0x80;
  }
  func_0x0007778c(param_1);
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 0x2a) = DAT_1f800207;
    if (DAT_800bf839 != '\0') {
      *(char *)(param_1 + 0xbe) = '\x01' - DAT_800e7fc7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar1 = func_0x0009a450();
    *(byte *)(param_1 + 0xbe) = *(char *)(param_1 + 3) + cVar1 & 1;
    func_0x00041ac0(param_1);
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(short *)(param_1 + 0x56) = _DAT_1f8001a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(param_1 + 0x56) = _DAT_1f8001a0 + 0x800U & 0xfff;
    *(undefined2 *)(param_1 + 0x58) = 0;
    sVar2 = (ushort)*(byte *)(param_1 + 3) * 0x480 + 0x980;
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(short *)(param_1 + 0x44) = sVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x44) = -sVar2;
    *(undefined2 *)(param_1 + 0x50) = 0x380;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(ushort *)(param_1 + 0x4a) = (ushort)*(byte *)(param_1 + 3) * 0x400 + -0x2400;
    func_0x00074590(0x8a,0,0xffffffec);
    func_0x00041768(param_1,3,4);
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    sVar2 = *(short *)(param_1 + 0x40) + 2;
    *(short *)(param_1 + 0x40) = sVar2;
    if (599 < sVar2) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    sVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(short *)(param_1 + 0x4a) = sVar2;
    if (0x27ff < sVar2) {
      *(undefined2 *)(param_1 + 0x4a) = 0x2800;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    func_0x0010e5c4(param_1);
    if ((*(byte *)(param_1 + 0x29) & 0x80) == 0) {
      func_0x0004766c(param_1);
      iVar4 = func_0x00049250(param_1,0,
                              (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                    (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
      if (iVar4 == 1) {
        *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x40;
      }
    }
    if (((*(uint *)(param_1 + 0x28) & 0xc000) != 0) && (0 < *(short *)(param_1 + 0x4a))) {
      func_0x00049674(param_1);
      sVar2 = _DAT_1f8001a2;
      if (*(char *)(param_1 + 0xbe) == '\0') {
        *(short *)(param_1 + 0x56) = _DAT_1f8001a0;
        *(short *)(param_1 + 0x58) = sVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(param_1 + 0x56) = _DAT_1f8001a0 + 0x800U & 0xfff;
      *(ushort *)(param_1 + 0x58) = 0x1000U - _DAT_1f8001a2 & 0xfff;
      sVar2 = *(short *)(param_1 + 0x44);
      if (sVar2 < 0) {
        sVar2 = -sVar2;
      }
      if (*(char *)(param_1 + 0xbe) != '\0') {
        sVar2 = -sVar2;
      }
      *(short *)(param_1 + 0x44) = sVar2;
      uVar3 = func_0x0009a450();
      *(ushort *)(param_1 + 0x4a) = -0x3400 - (uVar3 & 0x4ff);
    }
    if (((*(byte *)(param_1 + 0x5f) & 3) != 0) ||
       (iVar4 = func_0x0004954c(param_1,(int)((*(ushort *)(param_1 + 0x80) + 0x1e) * 0x10000) >>
                                        0x10,0), iVar4 != 0)) {
      cVar1 = '\x01' - *(char *)(param_1 + 0xbe);
      *(char *)(param_1 + 0xbe) = cVar1;
      if (cVar1 == '\0') {
        *(short *)(param_1 + 0x56) = _DAT_1f8001a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(param_1 + 0x56) = _DAT_1f8001a0 + 0x800U & 0xfff;
      sVar2 = *(short *)(param_1 + 0x44);
      if (sVar2 < 0) {
        sVar2 = -sVar2;
      }
      *(undefined2 *)(param_1 + 0x58) = 0;
      if (*(char *)(param_1 + 0xbe) != '\0') {
        sVar2 = -sVar2;
      }
      *(short *)(param_1 + 0x44) = sVar2;
    }
    func_0x00041a1c(param_1,1);
    func_0x000518fc(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

