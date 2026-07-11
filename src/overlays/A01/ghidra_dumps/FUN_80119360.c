// FUN_80119360

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80119360(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_v1;
  
  uVar5 = (uint)(byte)param_1[4];
  uVar2 = (ushort)(uVar5 < 2);
  if (uVar5 == 1) {
    if ((*(short *)(param_1 + 0x74) == 3) && (DAT_800e7eaa == '\x10')) {
      func_0x8007703c(param_1);
      FUN_80122468();
      return;
    }
    func_0x8007778c(param_1);
    if (param_1[1] != '\0') {
      if ((param_1[0xbf] == '\0') && (param_1[0x5e] == '\0')) {
        iVar4 = func_0x8003116c(0x203,0,0);
        if (iVar4 != 0) {
          *(undefined1 **)(iVar4 + 0x10) = param_1;
          *(int *)(param_1 + 0x10) = iVar4;
          *(undefined2 *)(iVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
          *(short *)(iVar4 + 0x2e) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x72);
          *(undefined2 *)(iVar4 + 0x30) = *(undefined2 *)(param_1 + 0x36);
          *(int *)(iVar4 + 0x34) = *(short *)(param_1 + 0x6a) * 0x10000 + 0x100;
          param_1[0x5e] = 1;
          FUN_80122508();
          return;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        param_1[0x5e] = 0;
      }
      uVar3 = func_0x80051844();
      *(undefined2 *)(param_1 + 0x82) = uVar3;
      *(undefined2 *)(param_1 + 0x84) = 500;
      *(undefined2 *)(param_1 + 0x86) = 1000;
      param_1[0x2a] = 0x10;
      *(undefined4 *)(param_1 + 0x2c) = 0x37400000;
      *(undefined4 *)(param_1 + 0x30) = 0xe6e70000;
      FUN_8012b55c();
      return;
    }
    uVar5 = extraout_v1;
    if (((param_1[0xbf] == '\0') && (param_1[0x5e] != '\0')) &&
       (uVar5 = *(uint *)(param_1 + 0x10), uVar5 != 0)) {
      *(undefined1 *)(uVar5 + 4) = 3;
      *(undefined4 *)(param_1 + 0x10) = 0;
      param_1[0x5e] = 0;
    }
    uVar2 = (byte)param_1[0x2b] - 1;
    if ((byte)param_1[0x2b] == 0) {
      uVar5 = (uint)(byte)param_1[5];
      uVar2 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(uVar5) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      param_1[0x2b] = (char)uVar2;
    }
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 != 0) {
      *(undefined2 *)(iVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
      uVar5 = (uint)*(ushort *)(param_1 + 0x72);
      *(ushort *)(iVar4 + 0x2e) = *(short *)(param_1 + 0x32) + *(ushort *)(param_1 + 0x72);
      uVar2 = *(ushort *)(param_1 + 0x36);
      *(ushort *)(iVar4 + 0x30) = uVar2;
    }
    param_1[0x29] = 0;
  }
  else {
    if (uVar2 == 0) {
      uVar2 = 3;
      if (uVar5 == 2) {
        func_0x8007778c(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(param_1[5]) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[0x29] = 0;
        if (param_1[1] != '\0') {
          func_0x80051844(param_1);
          iVar4 = *(int *)(param_1 + 0x10);
          if (iVar4 != 0) {
            *(undefined2 *)(iVar4 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
            uVar5 = (uint)*(ushort *)(param_1 + 0x72);
            *(ushort *)(iVar4 + 0x2e) = *(short *)(param_1 + 0x32) + *(ushort *)(param_1 + 0x72);
            uVar2 = *(ushort *)(param_1 + 0x36);
            *(ushort *)(iVar4 + 0x30) = uVar2;
            goto LAB_80122a18;
          }
        }
      }
      else {
        if (uVar5 != 3) goto LAB_80122a18;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (uVar5 == 0) {
      iVar4 = func_0x80051b70(param_1,0xc,0x14);
      if (iVar4 != 0) {
        return;
      }
      bVar1 = param_1[3];
      *(undefined2 *)(param_1 + 0x80) = 0x78;
      *(undefined2 *)(param_1 + 0x82) = 0xf0;
      *(undefined2 *)(param_1 + 0x84) = 0x3c;
      *(undefined2 *)(param_1 + 0x86) = 0x3c;
      *(undefined2 *)(param_1 + 0x6a) = 0xa0;
      *(undefined2 *)(param_1 + 0xbc) = 0x1000;
      *(undefined2 *)(param_1 + 0xba) = 0x1000;
      *(undefined2 *)(param_1 + 0xb8) = 0x1000;
      param_1[4] = param_1[4] + '\x01';
      param_1[3] = 0;
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x72) = 0;
      *(ushort *)(param_1 + 0x74) = (ushort)bVar1;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0xfc00;
      *(undefined2 *)(param_1 + 0xe) = 0;
      func_0x80041194(param_1,0,*(undefined1 *)(*(short *)(param_1 + 0x74) * 6 + -0x7fec8de7),0);
      func_0x8004130c(param_1,1);
      uVar5 = (uint)(byte)param_1[0xbe];
      uVar2 = 7;
      param_1[0x5e] = 0;
      param_1[0xbf] = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      param_1[5] = 7;
      param_1[0x47] = param_1[0xbe];
    }
  }
LAB_80122a18:
  *(ushort *)(uVar5 + 0x3a) = uVar2;
  *(undefined2 *)(uVar5 + 0x3e) = 0xe4d5;
  *(undefined2 *)(uVar5 + 0x42) = 0x35a3;
  FUN_8012ba48();
  return;
}

