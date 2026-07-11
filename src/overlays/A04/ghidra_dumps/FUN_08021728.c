// FUN_08021728

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08021728(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  undefined2 local_18;
  short sStack_16;
  undefined2 local_14;
  short sStack_12;
  undefined4 local_10;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (((_DAT_1f80017c & 3) == 0) &&
       (iVar4 = func_0x0003116c(0x503,param_1 + 0x2c,0xffffffce), iVar4 != 0)) {
      *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
    }
    uVar3 = *(short *)(*(int *)(param_1 + 0xc4) + 0x3a) - 0x100;
    *(ushort *)(*(int *)(param_1 + 0xc4) + 0x3a) = uVar3;
    if (uVar3 < 0x81) {
      DAT_800bfa00 = '\x05';
      _DAT_800bf860 = param_1;
      *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -1;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    iVar4 = *(int *)(param_1 + 0xc4);
    uVar2 = (undefined2)(((uint)*(ushort *)(param_1 + 0xba) * 0xf) / 10);
    *(undefined2 *)(iVar4 + 0x3c) = uVar2;
    *(undefined2 *)(iVar4 + 0x38) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa00 == '\x04') {
        func_0x00074590(0x95,0xf,0);
        local_10 = *(undefined4 *)(param_1 + 0x34);
        sStack_16 = (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x10);
        sStack_12 = (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 0x10);
        _local_18 = CONCAT22(sStack_16 + 0x32,(short)*(undefined4 *)(param_1 + 0x2c));
        _local_14 = CONCAT22(sStack_12 + 0x50,(short)*(undefined4 *)(param_1 + 0x30));
        iVar4 = func_0x0003116c(0x24,&local_18,0xffffff6a);
        if (iVar4 != 0) {
          *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
        }
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
LAB_080218e8:
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00051844(param_1);
      return;
    }
  }
  else if (bVar1 == 2) {
    if (DAT_800bfa00 == '\x06') {
      *(undefined1 *)(param_1 + 4) = 2;
    }
    goto LAB_080218e8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

