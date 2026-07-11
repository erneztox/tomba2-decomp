// FUN_0803ea54

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803ea54(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        uVar3 = *(short *)(param_1 + 0x4e) + 1;
        *(ushort *)(param_1 + 0x4e) = uVar3;
        if (-1 < (int)((uint)uVar3 << 0x10)) {
          *(undefined1 *)(param_1 + 5) = 1;
        }
LAB_0803eb60:
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x62);
        iVar5 = -0x2b76 - *(short *)(param_1 + 0x62);
        iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x4e));
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x60);
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 100);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar4 * iVar5 * 0x10;
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
        iVar4 = iVar4 * iVar5 >> 4;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar4;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar4;
        *(short *)(*(int *)(param_1 + 0xc4) + 0xc) = -*(short *)(param_1 + 0x4e);
        iVar4 = func_0x000778e4(param_1,(int)(((uint)_DAT_1f800162 -
                                              (uint)*(ushort *)(param_1 + 0x32)) * 0x10000) >> 0x10)
        ;
        if (iVar4 != 0) {
          func_0x00051844(param_1);
        }
        return;
      }
      sVar2 = *(short *)(param_1 + 0x4e) + -1;
      *(short *)(param_1 + 0x4e) = sVar2;
      if (-0x20 < sVar2) goto LAB_0803eb60;
      goto LAB_0803eb2c;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0xb8) = 0x1c00;
    *(undefined2 *)(param_1 + 0xba) = 0x1c00;
    *(undefined2 *)(param_1 + 0xbc) = 0x1c00;
    *(undefined2 *)(param_1 + 0x80) = 0x50;
    *(undefined2 *)(param_1 + 0x82) = 0xa0;
    *(undefined2 *)(param_1 + 0x84) = 0xa0;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x86) = 0xae;
  }
  sVar2 = *(short *)(param_1 + 0x4e) + 1;
  *(short *)(param_1 + 0x4e) = sVar2;
  if (sVar2 < 0x20) {
    halt_baddata();
  }
LAB_0803eb2c:
  *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

