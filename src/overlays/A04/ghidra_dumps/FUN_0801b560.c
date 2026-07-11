// FUN_0801b560

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b560(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar6 = (uint)*(short *)(param_1 + 0x44);
        if ((int)uVar6 < 0) {
          uVar6 = -uVar6;
        }
        sVar4 = (short)uVar6;
        if (((uVar6 & 0xffff) != 0) &&
           (sVar4 = (short)(uVar6 - 0x80), (int)((uVar6 - 0x80) * 0x10000) < 1)) {
          sVar4 = 0;
        }
        if (*(char *)(param_1 + 0x147) == '\0') {
          *(short *)(param_1 + 0x44) = sVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 0x44) = -sVar4;
        func_0x00056b48(param_1,1);
        func_0x00055d5c(param_1);
        func_0x00076d68(param_1);
        sVar4 = *(short *)(param_1 + 0x4a) + 800;
        *(short *)(param_1 + 0x4a) = sVar4;
        if (0x3e00 < sVar4) {
          *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        if (0 < *(short *)(param_1 + 0x4a)) {
          if (*(char *)(param_1 + 7) == '\0') {
            *(undefined1 *)(param_1 + 0x144) = 1;
            *(undefined1 *)(param_1 + 7) = 1;
          }
          func_0x0005444c(param_1);
          if (*(char *)(param_1 + 0x29) != '\0') {
            func_0x0005314c(param_1);
            if (*(byte *)(param_1 + 0x144) < 2) {
              *(undefined1 *)(param_1 + 0x144) = 0;
            }
            *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
            func_0x00054198(param_1);
            func_0x00054d14(param_1,0x66,4);
            halt_baddata();
          }
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        iVar5 = func_0x00076d68(param_1);
        if (iVar5 != 2) {
          *(undefined1 *)(param_1 + 0x16a) = 0;
          *(undefined1 *)(param_1 + 5) = 0;
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 7) = 0;
        }
      }
      goto LAB_0801ba00;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x00074590(0x82,0,0);
    *(undefined1 *)(param_1 + 0x145) = 0;
    *(undefined1 *)(param_1 + 0x146) = 0;
    func_0x00053d90(param_1);
    func_0x00054e24(param_1,1,0);
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    func_0x0005444c(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (*(short *)(param_1 + 0x142) == 0) {
      if ((*(short *)(param_1 + 0x44) != 0) || (uVar3 = 0xec00, *(char *)(param_1 + 0x147) == '\0'))
      {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      uVar3 = 0x1400;
      if (*(short *)(param_1 + 0x142) < 1) {
        uVar3 = 0xec00;
      }
    }
    *(undefined2 *)(param_1 + 0x44) = uVar3;
    if (-1 < *(short *)(param_1 + 0x44)) {
      *(undefined1 *)(param_1 + 0x147) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x147) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0;
    cVar2 = *(char *)(param_1 + 0x147) + '\x02';
    *(char *)(param_1 + 0x14a) = cVar2;
    *(char *)(param_1 + 0x149) = cVar2;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  sVar4 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar4 + 1;
  if (0xb < sVar4) {
    func_0x00074590(0x83,0,0);
    *(undefined2 *)(param_1 + 0x40) = 0;
  }
  func_0x00056b48(param_1,1);
  func_0x00055d5c(param_1);
  func_0x00076d68(param_1);
  iVar5 = (int)*(short *)(param_1 + 0x44);
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + (iVar5 / 2) * 0x100;
  func_0x0005444c(param_1);
  if (*(char *)(param_1 + 0x29) == '\0') {
    iVar5 = (int)*(short *)(param_1 + 0x44);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -8;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + (iVar5 / 2) * -0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x30) =
       *(int *)(param_1 + 0x30) + (int)*(short *)(param_1 + 0x4a) * (int)*(short *)(param_1 + 0x44);
  func_0x00056c00(param_1,1);
  if (*(short *)(param_1 + 0x142) == 0) {
    if (*(short *)(param_1 + 0x44) == 0) {
      sVar4 = *(short *)(param_1 + 0x44) + -0x200;
      if (*(char *)(param_1 + 0x147) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      sVar4 = *(short *)(param_1 + 0x44) + 0x200;
      if (*(short *)(param_1 + 0x44) < 1) {
        halt_baddata();
      }
    }
  }
  else {
    sVar4 = *(short *)(param_1 + 0x44) + (*(short *)(param_1 + 0x142) >> 1);
  }
  *(short *)(param_1 + 0x44) = sVar4;
  if (0x2400 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(param_1 + 0x44) < -0x2400) {
    *(undefined2 *)(param_1 + 0x44) = 0xdc00;
  }
  if (*(char *)(param_1 + 0x148) != '\0') {
    *(undefined1 *)(param_1 + 0x16a) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    iVar5 = func_0x00055824();
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0x16a) = 0;
      *(undefined1 *)(param_1 + 5) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (((int)*(short *)(param_1 + 0x6a) & 0xf000U) != 0x4000) {
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0xe000;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x00054d14(param_1,0x69,6);
      halt_baddata();
    }
  }
LAB_0801ba00:
  func_0x000551c4(param_1);
  return;
}

