// FUN_080171b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080171b0(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar4 = func_0x00051b70(param_1,1,0x18);
    if (iVar4 == 0) {
      *(undefined2 *)(param_1 + 0x80) = 0xa0;
      *(undefined2 *)(param_1 + 0x82) = 0x140;
      *(undefined2 *)(param_1 + 0x84) = 0x15e;
      *(undefined2 *)(param_1 + 0x86) = 0x15e;
      *param_1 = 1;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      param_1[4] = param_1[4] + '\x01';
      uVar3 = *(undefined2 *)((uint)(byte)param_1[3] * 2 + -0x7fee38a8);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = uVar3;
      func_0x000517f8();
      halt_baddata();
    }
    return;
  }
  func_0x0007778c(param_1);
  bVar1 = param_1[5];
  if (bVar1 == 2) {
    if ((_DAT_800e7e68 & _DAT_1f800174) != 0) {
      param_1[5] = 3;
      halt_baddata();
    }
    goto LAB_0801759c;
  }
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      if (bVar1 != 1) {
        param_1[0x2b] = 0;
        halt_baddata();
      }
      iVar4 = func_0x00042728();
      if (iVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0801759c;
    }
  }
  else {
    if (bVar1 == 4) {
      if (1 < *(byte *)(*(int *)(param_1 + 0x14) + 4)) {
        *param_1 = 2;
        func_0x00042310();
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        param_1[4] = 3;
        local_1a = *(short *)(param_1 + 0x32) -
                   (short)(((int)((uint)*(ushort *)(param_1 + 0x84) << 0x10) >> 0x10) -
                           ((int)((uint)*(ushort *)(param_1 + 0x84) << 0x10) >> 0x1f) >> 1);
        local_16 = *(undefined2 *)(param_1 + 0x36);
        func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),auStack_20,0x800,0x18);
        func_0x00074590(0xc,0,0);
        func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),auStack_20,0x800,8);
        func_0x00074590(0xc,0,0);
        func_0x00040c00(0x39);
        uVar6 = (uint)DAT_800bfa23;
        uVar5 = 1 << ((byte)param_1[3] & 0x1f);
        DAT_800bfa23 = DAT_800bfa23 | (byte)uVar5;
        if (DAT_800bf8ee == '\0') {
          func_0x00040b48(0x3a);
          param_1[0x2b] = 0;
          halt_baddata();
        }
        if ((uVar6 | uVar5 & 0xff) == 0x1f) {
          func_0x00040c00(0x3a);
        }
      }
      goto LAB_0801759c;
    }
    if (bVar1 < 4) {
      if (*(byte *)(*(int *)(param_1 + 0x14) + 4) < 2) {
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      if (_DAT_800bf874 < *(uint *)((uint)(byte)param_1[3] * 4 + -0x7fee3890)) {
        *param_1 = 2;
        param_1[5] = 99;
        func_0x00042310();
        param_1[0x2b] = 0;
        halt_baddata();
      }
      iVar4 = func_0x00072ddc(param_1,0,5,4);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x1c) = 0x8004c930;
        *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
        *(short *)(iVar4 + 0x32) =
             *(short *)(param_1 + 0x32) -
             (short)(((int)((uint)*(ushort *)(param_1 + 0x84) << 0x10) >> 0x10) -
                     ((int)((uint)*(ushort *)(param_1 + 0x84) << 0x10) >> 0x1f) >> 1);
        *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)(param_1 + 0x36);
        cVar2 = param_1[3];
        *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
        *(char *)(iVar4 + 3) = cVar2 + '+';
      }
      *(int *)(param_1 + 0x14) = iVar4;
      if (iVar4 != 0) {
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
      goto LAB_0801759c;
    }
    if (bVar1 != 99) goto LAB_0801759c;
    *param_1 = 1;
    param_1[5] = 0;
  }
  if (param_1[0x2b] == '\x01') {
    iVar4 = func_0x0007e110((int)*(short *)((uint)(byte)param_1[3] * 2 + -0x7fee389c),0);
    *(int *)(param_1 + 0x14) = iVar4;
    if (iVar4 != 0) {
      if (DAT_800bf8ed == '\0') {
        param_1[5] = param_1[5] + '\x01';
        func_0x00040b48(0x39);
        param_1[0x2b] = 0;
        halt_baddata();
      }
      param_1[5] = param_1[5] + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
LAB_0801759c:
  param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

