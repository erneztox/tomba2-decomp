// FUN_0802dd38

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802dd38(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x4a);
    uVar4 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(ushort *)(param_1 + 0x4a) = uVar4;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
    if ((int)((uint)uVar4 << 0x10) < 1) {
      return;
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      iVar3 = func_0x0009a450();
      if (iVar3 == (iVar3 / 3) * 3) {
        *(undefined2 *)(param_1 + 0x4a) = 0xec00;
        *(undefined2 *)(param_1 + 0x50) = 0x180;
      }
      else {
        *(undefined2 *)(param_1 + 0x4a) = 0xf400;
        *(undefined2 *)(param_1 + 0x50) = 0x200;
      }
    }
  }
  else if (bVar1 == 2) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    func_0x0004766c(param_1);
    iVar3 = func_0x00049250(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
    if (iVar3 == 0) {
      return;
    }
    local_16 = *(undefined2 *)(param_1 + 0x2e);
    local_12 = (*(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x86)) -
               *(short *)(param_1 + 0x84);
    local_e = *(undefined2 *)(param_1 + 0x36);
    func_0x0003116c(8,auStack_18,0xfffffff6);
    *(undefined1 *)(param_1 + 5) = 0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

