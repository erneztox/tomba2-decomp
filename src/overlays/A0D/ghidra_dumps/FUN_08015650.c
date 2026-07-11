// FUN_08015650

/* WARNING: Control flow encountered bad instruction data */

void FUN_08015650(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      DAT_1f80025b = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[4] = 1;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x14;
  }
  iVar3 = func_0x00077acc(param_1,(int)*(short *)(param_1 + 0x2e),
                          (int)((*(ushort *)(param_1 + 0x32) - 300) * 0x10000) >> 0x10,
                          (int)*(short *)(param_1 + 0x36));
  if (iVar3 != 0) {
    func_0x000518fc(param_1);
  }
  if ((DAT_1f800259 == '\0') && (DAT_800bf80d == '\0')) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      if (DAT_800bf809 != '\0') {
        return;
      }
      sVar2 = *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x50) = sVar2 + 0x20;
      if (0x200 < (short)(sVar2 + 0x20)) {
        *(undefined2 *)(param_1 + 0x50) = 0x200;
      }
      sVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x4a) = sVar2;
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x50);
      if (0x800 < sVar2) {
        *(undefined2 *)(param_1 + 0x4a) = 0;
        func_0x00074590(0x8b,0,0);
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) - (*(short *)(param_1 + 0x50) >> 4);
      if (param_1[1] != '\0') {
        return;
      }
      param_1[5] = param_1[5] + '\x01';
      DAT_800e807e = bVar1;
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (DAT_800bf809 == '\0') {
          sVar2 = *(short *)(param_1 + 0x50);
          *(short *)(param_1 + 0x50) = sVar2 + 0x20;
          if (0x200 < (short)(sVar2 + 0x20)) {
            *(undefined2 *)(param_1 + 0x50) = 0x200;
          }
          sVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
          *(short *)(param_1 + 0x4a) = sVar2;
          *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x50);
          if (0x800 < sVar2) {
            *(undefined2 *)(param_1 + 0x4a) = 0;
            func_0x00074590(0x8b,0,0);
          }
          sVar2 = *(short *)(param_1 + 0x40);
          *(short *)(param_1 + 0x40) = sVar2 + -1;
          *(short *)(param_1 + 0x32) =
               *(short *)(param_1 + 0x32) - (*(short *)(param_1 + 0x50) >> 4);
          if (sVar2 == 1) {
            param_1[5] = param_1[5] + '\x01';
            halt_baddata();
          }
        }
        return;
      }
    }
    else if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x40);
      param_1[1] = 0;
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      param_1[4] = 2;
      DAT_800e807e = 0;
      func_0x00117378(0);
      func_0x00117378(1);
      func_0x00117378(2);
      func_0x00117378(3);
    }
  }
  else {
    *param_1 = 2;
    param_1[4] = 2;
    DAT_800e807e = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

