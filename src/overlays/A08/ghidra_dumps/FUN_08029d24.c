// FUN_08029d24

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08029d24(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  func_0x00077870();
  iVar4 = func_0x0007778c(param_1);
  if ((iVar4 == 0) && ((param_1[0x2a] == '\t' || (_DAT_1f800160 - 9000 < 0xbb9)))) {
    func_0x0007703c(param_1);
  }
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x48000;
    if (-0xdc1 < *(short *)(param_1 + 0x32)) {
      iVar4 = func_0x0012963c(param_1);
      if (iVar4 == 0) {
        *(undefined2 *)(param_1 + 0x32) = 0xf240;
      }
      else {
        *(undefined2 *)(param_1 + 0x60) = 7;
        *(int *)(param_1 + 0x10) = iVar4;
        param_1[5] = param_1[5] + '\x01';
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (DAT_800bfa3a != '\x04') {
        return;
      }
      param_1[5] = 1;
      iVar4 = func_0x00031220(0x912,0,0xffffffe2);
      if (iVar4 == 0) {
        return;
      }
      *(undefined1 **)(iVar4 + 0x10) = param_1;
      halt_baddata();
    }
    if (bVar1 == 2) {
      iVar4 = *(int *)(param_1 + 0x10);
      *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + -0x60000;
      if (*(short *)(iVar4 + 0x32) < 0xa1) {
        DAT_800bfa3a = '\x05';
        param_1[5] = param_1[5] + '\x01';
      }
      uVar3 = _DAT_1f80017c & 7;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x48000;
      if (uVar3 == 0) {
        func_0x00074590(3,0xffffffe2,0xffffffd8);
      }
      iVar4 = (int)*(short *)(param_1 + 0x60);
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      if ((iVar4 == -1) && (_DAT_1f80017c == 0x80000000)) {
        trap(0x1800);
      }
      sVar2 = *(short *)(param_1 + 0x60);
      if ((int)(uint)_DAT_1f80017c % iVar4 != 0) {
        return;
      }
      *(short *)(param_1 + 0x60) = sVar2 + 1;
      if (9 < (short)(sVar2 + 1)) {
        *(undefined2 *)(param_1 + 0x60) = 7;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = *(int *)(param_1 + 0x10);
    *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + -0x60000;
    if (*(short *)(iVar4 + 0x32) < 0) {
      *(undefined2 *)(iVar4 + 0x32) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = (int)*(short *)(param_1 + 0x60);
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (_DAT_1f80017c == 0x80000000)) {
      trap(0x1800);
    }
    sVar2 = *(short *)(param_1 + 0x60);
    if ((int)(uint)_DAT_1f80017c % iVar4 == 0) {
      *(short *)(param_1 + 0x60) = sVar2 + 1;
      if (9 < (short)(sVar2 + 1)) {
        *(undefined2 *)(param_1 + 0x60) = 7;
      }
      func_0x00074590(0x88,7,0);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x48000;
    if (-0xcc1 < *(short *)(param_1 + 0x32)) {
      *param_1 = 2;
      DAT_800bfa3a = 10;
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x59);
      *(undefined2 *)(param_1 + 0x32) = 0xf340;
      param_1[0xd] = param_1[0xd] | 4;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0xf6;
      param_1[5] = 10;
      halt_baddata();
    }
  }
  if ((_DAT_1f80017c & 7) == 0) {
    func_0x00074590(3,0xffffffe2,0xffffffd8);
  }
  return;
}

