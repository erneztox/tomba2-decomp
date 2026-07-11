// FUN_0801e314

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e314(undefined1 *param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  
  bVar2 = param_1[4];
  if (bVar2 == 1) {
    if (param_1[5] == '\0') {
      sVar3 = *(short *)(param_1 + 0x40);
      *(ushort *)(param_1 + 0x40) = sVar3 - 1U;
      if (0 < (int)((uint)(ushort)(sVar3 - 1U) << 0x10)) {
        return;
      }
      *param_1 = 1;
      param_1[5] = param_1[5] + '\x01';
    }
    else if (param_1[5] != '\x01') {
      halt_baddata();
    }
    func_0x0007778c(param_1);
    uVar5 = func_0x00076d68(param_1);
    bVar1 = DAT_1f800259 != '\0';
    *(undefined2 *)(param_1 + 0x6a) = uVar5;
    if (bVar1) {
      *param_1 = 2;
      param_1[4] = 2;
      param_1[5] = 0;
      param_1[6] = 0;
      halt_baddata();
    }
    if ((DAT_800bf809 == '\0') && (DAT_1f800137 == '\0')) {
      bVar2 = param_1[6];
      if (bVar2 == 1) {
        iVar6 = func_0x0011787c(param_1);
        if (iVar6 != 0) {
          *(undefined2 *)(param_1 + 0x40) = 0x7f;
          param_1[6] = param_1[6] + '\x01';
          func_0x00117788(param_1);
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar2 < 2) {
        if (bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar3 = *(short *)(param_1 + 0x40);
        *(ushort *)(param_1 + 0x40) = sVar3 - 1U;
        if ((int)((uint)(ushort)(sVar3 - 1U) << 0x10) < 1) {
          iVar6 = func_0x00117b84(param_1);
          if (iVar6 != 0) {
            *(undefined2 *)(param_1 + 0x6e) = 0;
            param_1[6] = param_1[6] + '\x01';
            halt_baddata();
          }
          param_1[6] = 2;
          *(undefined2 *)(param_1 + 0x40) = 0x7f;
          func_0x00117788(param_1);
          halt_baddata();
        }
      }
      else {
        if (bVar2 != 2) {
          halt_baddata();
        }
        sVar3 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar3 + -1;
        if (sVar3 == 1) {
          sVar3 = *(short *)(param_1 + 0x42);
          *(ushort *)(param_1 + 0x42) = sVar3 - 1U;
          if ((int)((uint)(ushort)(sVar3 - 1U) << 0x10) < 1) {
            *param_1 = 2;
            param_1[4] = 2;
            param_1[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(param_1 + 0x40) = 0xf;
          param_1[6] = 0;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        *(int *)(param_1 + 0x2c) =
             *(int *)(param_1 + 0x2c) +
             (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
        *(int *)(param_1 + 0x34) =
             *(int *)(param_1 + 0x34) +
             (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
      }
      func_0x0011796c(param_1);
    }
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 0x40;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x18;
    if (param_1[1] != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        func_0x0007778c(param_1);
        uVar5 = func_0x00076d68(param_1);
        *(undefined2 *)(param_1 + 0x6a) = uVar5;
        if (param_1[5] == '\x01') {
          if (param_1[6] == '\0') {
            *(undefined2 *)(param_1 + 0x84) = 0x3c;
            *(undefined2 *)(param_1 + 0x86) = 0xa0;
            func_0x00077cfc(param_1,0x801270bc,3,4);
            param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if (param_1[6] == '\0') {
            *(undefined2 *)(param_1 + 0x40) = 10;
            *param_1 = 2;
            param_1[6] = param_1[6] + '\x01';
            if (param_1[1] != '\0') {
              func_0x00074590(0x8b,0,0);
              func_0x0003116c(0xd00,param_1 + 0x2c,0xfffffff6);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            param_1[4] = 3;
          }
          else if (param_1[6] != '\x01') {
            halt_baddata();
          }
          sVar3 = *(short *)(param_1 + 0x40);
          *(ushort *)(param_1 + 0x40) = sVar3 - 1U;
          if ((int)((uint)(ushort)(sVar3 - 1U) << 0x10) < 0) {
            param_1[4] = 3;
          }
        }
        if (param_1[1] == '\0') {
          return;
        }
        func_0x000518fc(param_1);
      }
      else if (bVar2 == 3) {
        DAT_1f80025a = DAT_1f80025a + -1;
        func_0x0007a624(param_1);
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar2 != 0) {
      halt_baddata();
    }
    iVar6 = func_0x000519e0(param_1,7,_DAT_800ecfb0,0x8011c13c);
    uVar4 = _DAT_800ecfb4;
    if (iVar6 == 0) {
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 100;
      *(undefined2 *)(param_1 + 0x86) = 200;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar4;
      param_1[4] = param_1[4] + '\x01';
      func_0x00077c40(param_1,0x801270bc,0);
      func_0x0004766c(param_1);
      func_0x00049760(param_1);
      sVar3 = _DAT_1f8001a0;
      param_1[0xbe] = 0;
      *(short *)(param_1 + 0x60) = sVar3;
      *(short *)(param_1 + 0x56) = sVar3;
      iVar6 = func_0x00117b84(param_1);
      if (iVar6 != 0) {
        *(ushort *)(param_1 + 0x56) = _DAT_1f8001a0 + 0x800U & 0xfff;
        param_1[0xbe] = param_1[0xbe] ^ 1;
      }
      *(undefined2 *)(param_1 + 0x6e) = 0xffff;
      *(undefined2 *)(param_1 + 0x40) = 0xf;
      *(undefined2 *)(param_1 + 0x52) = 0;
      *(undefined2 *)(param_1 + 0x4e) = 0;
      *(undefined2 *)(param_1 + 0x42) = 3;
      halt_baddata();
    }
  }
  return;
}

