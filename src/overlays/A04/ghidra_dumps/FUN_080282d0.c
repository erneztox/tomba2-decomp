// FUN_080282d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080282d0(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      iVar4 = func_0x0004a2a0(param_1);
      if (iVar4 != 0) {
        DAT_800bf9b4 = DAT_800bf9b4 | 8;
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
    }
    else if ((((bVar1 < 2) && (bVar1 == 0)) && ((_DAT_800e7e84 & 0xffff00) == 0xb1800)) &&
            (iVar4 = func_0x00022f04(&DAT_800e7e80,param_1), iVar4 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        param_1[4] = 1;
        iVar4 = 0;
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
        func_0x00077b38(param_1,0x80144360,7);
        psVar3 = (short *)&DAT_80141448;
        param_1[0xb] = 0x11;
        *(undefined2 *)(param_1 + 0x7a) = 0x1c00;
        *(undefined2 *)(param_1 + 0x7c) = 0x1c00;
        *(undefined2 *)(param_1 + 0x7e) = 0x1c00;
        param_1[8] = 0xe0;
        *(undefined2 *)(param_1 + 0x80) = 0x100;
        *(undefined2 *)(param_1 + 0x82) = 0x200;
        *(undefined2 *)(param_1 + 0x84) = 0x40;
        param_1[0xd] = 1;
        *(undefined2 *)(param_1 + 0x5c) = 0;
        *(undefined2 *)(param_1 + 0x5a) = 0;
        param_1[0x47] = 0;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x86) = 0x80;
        do {
          iVar2 = func_0x00072ddc(param_1,0,3,0x10);
          if (iVar2 != 0) {
            *(undefined1 *)(iVar2 + 3) = 6;
            *(undefined4 *)(iVar2 + 0x1c) = 0x8011a9e4;
            *(short *)(iVar2 + 0x2e) = *(short *)(param_1 + 0x2e) + *psVar3;
            *(short *)(iVar2 + 0x32) = *(short *)(param_1 + 0x32) + psVar3[1];
            *(short *)(iVar2 + 0x36) = *(short *)(param_1 + 0x36) + psVar3[2];
          }
          iVar4 = iVar4 + 1;
          psVar3 = psVar3 + 3;
        } while (iVar4 < 2);
        if ((DAT_800bf9b4 & 8) == 0) {
          return;
        }
        param_1[5] = 2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
  }
  return;
}

