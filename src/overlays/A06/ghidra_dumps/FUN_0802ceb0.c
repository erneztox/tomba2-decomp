// FUN_0802ceb0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802ceb0(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_20 [2];
  undefined2 uStack_1e;
  short sStack_1a;
  undefined2 uStack_16;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if (param_1[5] == '\0') {
      func_0x00125338(param_1);
    }
    else if (param_1[5] == '\x01') {
      func_0x00125d14(param_1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar2 = func_0x00051b70(param_1,0xc,0x60);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 0x80) = 300;
      *(undefined2 *)(param_1 + 0x82) = 600;
      *(undefined2 *)(param_1 + 0x84) = 1000;
      *(undefined2 *)(param_1 + 0x86) = 1000;
      *(undefined2 *)(param_1 + 0x56) = 64000;
      uStack_1e = *(undefined2 *)(param_1 + 0x2e);
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[4] = param_1[4] + '\x01';
      sStack_1a = *(short *)(param_1 + 0x32) + -0x118;
      uStack_16 = *(undefined2 *)(param_1 + 0x36);
      iVar2 = func_0x0003116c(0x702,auStack_20,0xffffffd0);
      if (iVar2 != 0) {
        *(undefined1 **)(iVar2 + 0x10) = param_1;
      }
      func_0x000517f8(param_1);
      if ((DAT_800bfa14 & 7) == 7) {
        func_0x00132cf8(param_1,1);
        param_1[5] = 1;
        halt_baddata();
      }
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

