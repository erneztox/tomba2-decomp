// FUN_00002e84

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002e84(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(undefined2 *)(param_1 + 0x40) = 0x3c;
      local_16 = *(undefined2 *)(param_1 + 0x2e);
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      iVar3 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
      local_12 = *(short *)(param_1 + 0x32) - (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
      local_e = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(0x37,auStack_18,0xffffffe0);
      func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),auStack_18,0x300,8);
      func_0x00074590(0xc,0,0);
      func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x300,8);
      func_0x00074590(0xc,0,0);
      if (*(int *)(param_1 + 0x10) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
        halt_baddata();
      }
    }
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa40 != '\x02') {
        return;
      }
      *(undefined1 *)(param_1 + 7) = 1;
      *(undefined2 *)(param_1 + 0x40) = 8;
      func_0x0006e1c0(2);
      _DAT_800e8076 = 0xc0;
      _DAT_800e8078 = 0x300;
      _DAT_800e8074 = _DAT_801003f8 << 2;
      _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
      iVar3 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
      _DAT_800e8046 = *(short *)(param_1 + 0x32) - (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
      _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
      func_0x00074590(0x2d,0xffffffef,0x14);
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(undefined1 *)(param_1 + 4) = 3;
      DAT_800bfa40 = '\x03';
    }
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

