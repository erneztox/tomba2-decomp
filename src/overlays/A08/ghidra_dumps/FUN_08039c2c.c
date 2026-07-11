// FUN_08039c2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039c2c(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = func_0x00135158();
  if (iVar4 == -1) {
    return;
  }
  iVar4 = func_0x00134904(param_1);
  func_0x00135574(param_1,0x14,200);
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    uVar3 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar3;
    if (0 < (int)((uint)uVar3 << 0x10)) {
      return;
    }
    func_0x00135630(param_1,1,2);
    *(undefined2 *)(param_1 + 0x40) = 0x5a;
    iVar4 = func_0x001352cc(param_1);
    if (iVar4 != 0) {
      *(undefined2 *)(param_1 + 0x6e) = 0;
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 6) = 3;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00135630(param_1,2,2);
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    iVar4 = func_0x00134814(param_1);
    if (iVar4 == 0) {
      return;
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 == 3) {
    iVar5 = func_0x001352cc(param_1);
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        *(undefined1 *)(param_1 + 6) = 0;
        uVar6 = func_0x0009a450();
        uVar6 = uVar6 & 0xf;
        if (((*(char *)(param_1 + 0x2a) == '\x1c') && (*(char *)(param_1 + 0xbe) == '\0')) &&
           (*(short *)(param_1 + 0x32) < -0x1d4b)) {
          iVar4 = 3;
          uVar6 = 0xf;
          *(undefined1 *)(param_1 + 0x47) = 1;
        }
        iVar4 = uVar6 + (iVar4 + -1) * 0x10;
        *(undefined1 *)(param_1 + 5) = *(undefined1 *)(iVar4 + -0x7feb921c);
        *(ushort *)(param_1 + 0x40) = (ushort)*(byte *)(iVar4 + -0x7feb91ec);
        return;
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 10;
      *(undefined1 *)(param_1 + 6) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined1 *)(param_1 + 6) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

