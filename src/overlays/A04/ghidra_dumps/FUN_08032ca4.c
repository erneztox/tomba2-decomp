// FUN_08032ca4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0803318c) */
/* WARNING: Removing unreachable block (ram,0x080331d0) */
/* WARNING: Removing unreachable block (ram,0x080331b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032ca4(char *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  ushort uVar6;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if ((_DAT_800bfe56 & 0x10) == 0) {
          param_1[0x80] = 'd';
          param_1[0x81] = '\0';
          param_1[0x82] = -0x38;
          param_1[0x83] = '\0';
          param_1[0x84] = -0x80;
          param_1[0x85] = '\0';
          param_1[0x44] = '\0';
          param_1[0x45] = '\0';
          param_1[0x46] = '\0';
          param_1[0x86] = '\0';
          param_1[0x87] = '\x01';
          if ((byte)param_1[3] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08032ddc */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef5f28))();
            return;
          }
          *param_1 = '\x01';
          param_1[4] = param_1[4] + '\x01';
          param_1[0x29] = '\0';
          param_1[0x5f] = '\0';
          param_1[0x2b] = '\0';
          param_1[0x5e] = '\0';
          param_1[0xbf] = '\0';
          param_1[0x58] = '\0';
          param_1[0x59] = '\0';
          param_1[0x62] = '\0';
          param_1[99] = '\0';
          param_1[100] = '\0';
          param_1[0x65] = '\0';
          param_1[0x66] = '\0';
          param_1[0x67] = '\0';
          param_1[0x68] = '\0';
          param_1[0x69] = '\0';
          param_1[0x6c] = '\0';
          param_1[0x6d] = '\0';
          if (param_1[3] == '\x04') {
            return;
          }
          *(short *)(param_1 + 0x6a) = _DAT_800e7f00 + *(short *)(param_1 + 0x80);
        }
        else {
          if ((param_1[3] != '\0') && (iVar5 = func_0x0007a980(3,2,0), iVar5 != 0)) {
            *(undefined4 *)(iVar5 + 0x1c) = 0x80124394;
            *(undefined1 *)(iVar5 + 2) = 0xd;
            *(undefined1 *)(iVar5 + 3) = 0;
            *(undefined1 *)(iVar5 + 0x46) = 1;
            *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
            *(undefined2 *)(iVar5 + 0x32) = *(undefined2 *)(param_1 + 0x32);
            uVar3 = *(undefined2 *)(param_1 + 0x36);
            *(undefined4 *)(iVar5 + 0x10) = 0;
            *(undefined4 *)(iVar5 + 0x14) = 0;
            *(undefined2 *)(iVar5 + 0x54) = 0;
            *(undefined2 *)(iVar5 + 0x56) = 0;
            *(undefined2 *)(iVar5 + 0x58) = 0;
            *(undefined2 *)(iVar5 + 0x36) = uVar3;
          }
          param_1[4] = '\x03';
        }
      }
    }
    else if (bVar1 == 2) {
      if ((byte)param_1[5] < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x080333c8 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5f10))();
        return;
      }
      iVar5 = func_0x0007778c(param_1);
      if (iVar5 == 0) {
        return;
      }
      func_0x00051844(param_1);
    }
    else if (bVar1 == 3) {
      func_0x0007a624(param_1);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = param_1[3];
  param_1[1] = '\0';
  if (bVar2 == 3) {
    func_0x0012b8b4(param_1);
  }
  else if (bVar2 < 4) {
    func_0x0012af9c(param_1);
  }
  else if (bVar2 == 4) {
    bVar2 = param_1[5];
    param_1[1] = '\x01';
    if (bVar2 == 1) {
      func_0x0012a714(param_1,3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar2 < 2) {
      if (bVar2 != 0) {
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x42) != 0) {
        *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + -1;
        func_0x0012a480(param_1);
        halt_baddata();
      }
      if ((uint)_DAT_1f80017c % 0x14 == 0) {
        func_0x00074590(0x86,0,0);
      }
      if (*(short *)(param_1 + 0x36) < 0x3840) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0012a714(param_1,0);
      func_0x0012a80c(param_1);
      if (param_1[0x29] != '\0') {
        iVar5 = (int)*(short *)(param_1 + 0x44);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (0x1800 < iVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((_DAT_1f80017c & 0xf) == 0) {
          local_1e = *(undefined2 *)(param_1 + 0x2e);
          local_1a = *(short *)(param_1 + 0x32) + 0x50;
          local_16 = *(undefined2 *)(param_1 + 0x36);
          func_0x0003116c(0x502,auStack_20,0xffffffce);
        }
      }
      bVar1 = param_1[0x5f];
      if (((bVar1 & 0x80) != 0) || ((bVar1 != 0 && ((bVar1 & 1) == param_1[0xbe])))) {
        *param_1 = '\x02';
        param_1[4] = '\x02';
        param_1[6] = '\0';
        if ((param_1[0x5f] & 0x80U) != 0) {
          param_1[5] = '\x03';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[5] = '\x02';
        if (param_1[0xbe] != '\0') {
          param_1[0x2b] = (char)(*(ushort *)(param_1 + 0x60) >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*param_1 == '\x01') {
        if (*(short *)(param_1 + 0x36) < 0x2b5c) {
          param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar5 = (int)*(short *)(param_1 + 0x44);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (((0x2dff < iVar5) && ((ushort)(*(short *)(param_1 + 0x36) + 0xd11fU) < 0x9c)) &&
           (0xff < *(short *)(param_1 + 0x62))) {
          param_1[5] = param_1[5] + '\x01';
          sVar4 = *(short *)(param_1 + 0x44);
          uVar6 = sVar4 + 0x1000;
          *(ushort *)(param_1 + 0x44) = uVar6;
          *(short *)(param_1 + 0x4a) = sVar4 + -0x1000;
          if (-1 < (int)((uint)uVar6 << 0x10)) {
            param_1[0x44] = '\0';
            param_1[0x45] = '\0';
          }
          param_1[0x62] = '\0';
          param_1[99] = '\0';
          param_1[0xbf] = '\x01';
          halt_baddata();
        }
      }
    }
    else {
      if (bVar2 == 2) {
        DAT_800bf821 = bVar1;
        param_1[0xbf] = '\x01';
        DAT_800e800b = DAT_800e800b + '\x01';
        param_1[0x4a] = '\0';
        param_1[0x4b] = -0x78;
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        param_1[0xbe] = '\x01';
        param_1[0x44] = '\0';
        param_1[0x45] = '\0';
        param_1[5] = param_1[5] + '\x01';
        local_1a = *(short *)(param_1 + 0x32) + 0x50;
        local_16 = *(undefined2 *)(param_1 + 0x36);
        func_0x0003116c(0x502,auStack_20,0xffffffce);
        halt_baddata();
      }
      if (bVar2 != 3) {
        halt_baddata();
      }
      func_0x0012ab58(param_1,1);
    }
    param_1[0x5e] = '\0';
    param_1[0x5f] = '\0';
    param_1[0x29] = '\0';
    if (param_1[1] == '\x01') {
      func_0x00077e7c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar5 = func_0x0007778c(param_1);
    if (iVar5 != 0) {
      func_0x000517f8(param_1);
      halt_baddata();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

