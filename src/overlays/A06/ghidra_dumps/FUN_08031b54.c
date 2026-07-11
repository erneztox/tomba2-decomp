// FUN_08031b54

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08031b54(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined2 local_14;
  short sStack_12;
  undefined4 local_10;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x79) == '\x01') {
      func_0x00041768(param_1,0,4);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (*(short *)(*(int *)(param_1 + 0x38) + 4) == 1) {
        if (*(int *)(param_1 + 0x14) != 0) {
          *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 3;
        }
        func_0x000440e4(&DAT_800e7e80,0xbd,4);
        *(undefined2 *)(param_1 + 100) = 0;
        *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
        halt_baddata();
      }
      return 0;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(param_1 + 100) < 0x1f) {
        *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + 1;
      }
      else {
        uVar4 = 0x21;
        if (*(char *)(param_1 + 0x5f) == '>') {
          uVar4 = 0x22;
        }
        iVar3 = func_0x0006ff10(param_1,uVar4);
        uVar2 = _DAT_800e7eb4;
        uVar4 = _DAT_800e7eb0;
        _DAT_800bf844 = iVar3;
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x2c) = _DAT_800e7eac;
          *(undefined4 *)(iVar3 + 0x30) = uVar4;
          *(undefined4 *)(iVar3 + 0x34) = uVar2;
          halt_baddata();
        }
      }
      return 0;
    }
  }
  if (0x1e < *(short *)(param_1 + 100)) {
    func_0x00041768(param_1,0,4);
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0x78) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(ushort *)(param_1 + 100) & 0xf) == 0) {
    func_0x00074590(0x38,0,0);
  }
  uVar4 = 0x713;
  if (((int)*(short *)(param_1 + 100) % 3 & 0xffffU) == 0) {
    local_18 = _DAT_800e7eac;
    local_10 = _DAT_800e7eb4;
    sStack_12 = (short)((uint)_DAT_800e7eb0 >> 0x10);
    _local_14 = CONCAT22(sStack_12 + -0xa0,(short)_DAT_800e7eb0);
    if (*(char *)(param_1 + 0x5f) == '>') {
      uVar4 = 0x712;
    }
    iVar3 = func_0x0003116c(uVar4,&local_18,0xffffffec);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

