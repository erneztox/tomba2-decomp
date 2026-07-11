// FUN_0803b5c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803b5c8(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((param_1[3] & 0x80) == 0) {
      if (0xd < DAT_1f800207) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_1f800207 < 0xe) {
      return;
    }
    iVar3 = func_0x000778e4(param_1,0x100);
    if (iVar3 != 0) {
      func_0x0004190c(param_1);
    }
    if ((DAT_1f800137 == '\0') && (DAT_800bf809 == '\0')) {
      if (param_1[0x2b] == '\0') {
        if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0803b750 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5e94))();
          return;
        }
      }
      else {
        if ((_DAT_1f80017c & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + -0x80;
        cVar2 = param_1[0x2b];
        param_1[0x2b] = cVar2 + -1;
        if (((char)(cVar2 + -1) == '\0') && (param_1[5] != '\x06')) {
          func_0x0004130c(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    if (param_1[1] == '\0') goto LAB_0803bb7c;
    bVar1 = param_1[0x46];
    if ((1 < bVar1) && ((bVar1 < 6 || ((bVar1 < 0xd && (7 < bVar1)))))) {
      iVar4 = (int)*(short *)(param_1 + 0x44);
      iVar3 = iVar4;
      if (iVar4 < 0) {
        iVar3 = -iVar4;
      }
      iVar3 = (iVar3 >> 7) + 8;
      if (-1 < iVar4) {
        iVar3 = -iVar3;
      }
      func_0x0013d6bc(iVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x00132d84(param_1);
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      *param_1 = 2;
      if ((param_1[0x1b] & 0x40) != 0) {
        param_1[0x1b] = param_1[0x1b] & 0xbf;
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 != 0) {
      func_0x0004190c(param_1);
    }
    if ((byte)param_1[5] < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x0803ba54 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5e74))();
      return;
    }
    if (param_1[1] == '\0') goto LAB_0803bb7c;
  }
  func_0x000518fc(param_1);
LAB_0803bb7c:
  param_1[0x5f] = 0;
  param_1[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

