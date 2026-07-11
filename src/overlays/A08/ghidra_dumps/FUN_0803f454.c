// FUN_0803f454

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0803f6b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803f454(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0013900c(param_1);
    uVar5 = func_0x00076d68(param_1);
    *(undefined2 *)(param_1 + 0x6a) = uVar5;
    if ((DAT_800bf809 == '\0') && (DAT_1f800137 == '\0')) {
      uVar4 = 3;
      if ((param_1[0x29] != '\0') || (uVar4 = 2, (param_1[0x2b] & 2) != 0)) {
        param_1[5] = uVar4;
        param_1[6] = 0;
      }
      bVar1 = param_1[5];
      if (bVar1 == 1) {
        func_0x00138b08(param_1);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x00138784(param_1);
        }
      }
      else if (bVar1 == 2) {
        func_0x00138f00(param_1);
      }
      else if (bVar1 == 3) {
        func_0x00138cfc(param_1);
        param_1[0x2b] = 0;
        param_1[0x29] = 0;
        if (param_1[1] == '\0') {
          return;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar6 = func_0x000519e0(param_1,5,_DAT_800ecfac,0x801417ec);
      uVar3 = _DAT_800ecfb0;
      if (iVar6 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x6e;
      *(undefined2 *)(param_1 + 0x82) = 0xdc;
      *(undefined2 *)(param_1 + 0x84) = 0xaa;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 0xcd;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      param_1[4] = param_1[4] + '\x01';
      func_0x00077c40(param_1,0x80149a50,0);
      param_1[0x2a] = *(undefined1 *)((byte)param_1[3] + 0x80146ea0);
      func_0x0004766c(param_1);
      func_0x00049760(param_1);
      sVar2 = _DAT_1f8001a0;
      param_1[0xbe] = 0;
      *(short *)(param_1 + 0x60) = sVar2;
      *(short *)(param_1 + 0x56) = sVar2;
      iVar6 = func_0x001391c4(param_1);
      if (iVar6 != 0) {
        *(ushort *)(param_1 + 0x56) = _DAT_1f8001a0 + 0x800U & 0xfff;
        param_1[0xbe] = param_1[0xbe] ^ 1;
      }
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x4e) = 0;
      *(undefined2 *)(param_1 + 0x6e) = 0xffff;
      *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)(param_1 + 0x36);
    }
  }
  else if (bVar1 == 2) {
    func_0x0013900c(param_1);
    if ((param_1[5] == '\v') &&
       (iVar6 = func_0x00080750(param_1,*(undefined4 *)(param_1 + 0xc0),0), iVar6 != 0)) {
      param_1[4] = 3;
    }
    else {
      if (param_1[1] != '\0') {
        func_0x00074590(0x8c,0,0);
        func_0x000315d4(param_1 + 0x2c);
      }
      func_0x001247c4(param_1);
      param_1[4] = 3;
      if (param_1[1] == '\0') {
        return;
      }
      func_0x000518fc(param_1);
    }
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

