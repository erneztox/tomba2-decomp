// FUN_0802deb0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802deb0(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      bVar1 = param_1[0x5e];
      if (bVar1 == 1) {
        func_0x00126b34(param_1);
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((DAT_800bf9cc & 0x80) != 0) {
          param_1[0x5e] = 2;
          param_1[5] = 0;
          param_1[6] = 0;
          *param_1 = 1;
          halt_baddata();
        }
        if ((*(char *)(*(int *)(param_1 + 0x10) + 0x5f) != '\0') &&
           (*(short *)(*(int *)(param_1 + 0x10) + 0x62) != 0)) {
          param_1[0x5e] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 2) {
          halt_baddata();
        }
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
        func_0x0004766c(param_1);
        iVar3 = func_0x00049250(param_1,0,
                                (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                      (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
        if (iVar3 != 0) {
          func_0x0003116c(8,param_1 + 0x2c,0xfffffff6);
          param_1[3] = 1;
          *param_1 = 1;
          param_1[0x5e] = 0;
          param_1[5] = 0;
          param_1[6] = 0;
          halt_baddata();
        }
      }
    }
    else {
      if (param_1[3] != '\x01') {
        halt_baddata();
      }
      func_0x00126cd4(param_1);
    }
    func_0x0007778c(param_1);
    func_0x00077b5c(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar3 = func_0x0007778c(param_1);
        if (iVar3 != 0) {
          func_0x00077b5c(param_1);
        }
        if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0802e150 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef63c0))();
          return;
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      param_1[4] = 1;
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
      func_0x00077b38(param_1,0x80140e40,5);
      param_1[0xd] = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      param_1[0xb] = 0x10;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      param_1[0x47] = 0;
      param_1[8] = 0;
      if (param_1[3] == '\0') {
        iVar4 = *(int *)(param_1 + 0x10);
        *(undefined2 *)(param_1 + 0x60) = 0;
        uVar2 = *(ushort *)(iVar4 + 0x84);
        *(undefined2 *)(param_1 + 100) = 0;
        iVar3 = (uint)uVar2 << 0x10;
        *(short *)(param_1 + 0x62) = -(short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar4 + 0x2e);
        *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x32) + *(short *)(param_1 + 0x62);
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar4 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x3a80;
      *(undefined2 *)(param_1 + 0x32) = 0xd3aa;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x36) = 0x2936;
      *(undefined2 *)(param_1 + 0x80) = 0x20;
      *(undefined2 *)(param_1 + 0x82) = 0x40;
      *(undefined2 *)(param_1 + 0x84) = 0x40;
      *(undefined2 *)(param_1 + 0x86) = 0x80;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

