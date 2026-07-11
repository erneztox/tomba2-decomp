// FUN_08038e74

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08038e74(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if ((*(ushort *)(param_1 + 0x40) & 7) == 0) {
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      local_1a = *(short *)(param_1 + 0x32) + -200;
      local_16 = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(0x60a,auStack_20,0xffffffc4);
    }
    if ((_DAT_1f80017c & 3) == 0) {
      func_0x00132a80(param_1);
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      local_1a = *(short *)(param_1 + 0x32) + -100;
      local_16 = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(3,auStack_20,0xffffffc4);
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      func_0x0006cba8(param_1 + 0x2c);
      return;
    }
    DAT_800bfa11 = '\x03';
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x0003116c(0x15,param_1 + 0x2c,0xffffffc4);
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x56);
    func_0x00074590(0xc,0xfffffff1,0);
  }
  else {
    if (((1 < bVar1) || (bVar1 != 0)) || (DAT_800bfa11 != '\x02')) {
      return;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    DAT_800e806c = 8;
    func_0x0006cba8(param_1 + 0x2c);
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

