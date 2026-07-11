// FUN_08024770

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08024a3c) */

void FUN_08024770(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  undefined4 local_20;
  undefined2 local_1c;
  short sStack_1a;
  undefined4 local_18;
  
  iVar5 = func_0x0007778c();
  if (iVar5 == 0) {
    return;
  }
  bVar3 = *(byte *)(param_1 + 5);
  if (bVar3 == 1) {
    uVar4 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar4;
    if (-1 < (int)((uint)uVar4 << 0x10)) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else if (bVar3 < 2) {
    if (bVar3 == 0) {
      uVar6 = func_0x0009a450();
      if ((uVar6 & 1) == 0) {
        uVar6 = func_0x0009a450();
        if ((uVar6 & 0xe) == 0) {
          uVar4 = func_0x0009a450(param_1);
          func_0x00074590(0x8a,0,0xffffffec);
          func_0x00077c40(param_1,0x80142108,3);
          *(undefined2 *)(param_1 + 0x50) = 0x380;
          *(ushort *)(param_1 + 0x4a) = -0x2000 - (uVar4 & 0x3ff);
          *(undefined1 *)(param_1 + 7) = 0;
          *(undefined1 *)(param_1 + 5) = 3;
        }
        else {
          func_0x00077c40(param_1,0x80142108,4);
          uVar2 = func_0x0009a450();
          *(undefined1 *)(param_1 + 0x46) = uVar2;
          bVar3 = func_0x0009a450();
          *(byte *)(param_1 + 0x47) = (bVar3 & 0x3f) + 0x40;
          *(undefined1 *)(param_1 + 5) = 2;
        }
      }
      else {
        local_20 = *(undefined4 *)(param_1 + 0x2c);
        local_18 = *(undefined4 *)(param_1 + 0x34);
        sStack_1a = (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 0x10);
        _local_1c = CONCAT22(sStack_1a + -0x20,(short)*(undefined4 *)(param_1 + 0x30));
        iVar5 = func_0x0003116c(0x60a,&local_20,0xffffffec);
        if (iVar5 != 0) {
          *(byte *)(iVar5 + 0x28) = *(byte *)(iVar5 + 0x28) | 0x80;
        }
        func_0x00077c40(param_1,0x80142108,4);
        uVar4 = func_0x0009a450();
        *(ushort *)(param_1 + 0x40) = (uVar4 & 0x1f) + 0x20;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
    }
  }
  else if (bVar3 == 2) {
    iVar5 = func_0x00041438(param_1,(uint)*(byte *)(param_1 + 0x46) << 4,
                            *(undefined1 *)(param_1 + 0x47));
    if (iVar5 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else if (bVar3 == 3) {
    sVar1 = *(short *)(((*(byte *)(param_1 + 3) - 4) * 3 + 1) * 2 + -0x7fec1dc0);
    if (*(short *)(param_1 + 0x4a) == 0) {
      return;
    }
    sVar7 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x4a) = sVar7;
    if (sVar7 == 0) {
      *(undefined2 *)(param_1 + 0x4a) = 1;
    }
    if (*(char *)(param_1 + 7) == '\0') {
      if (*(short *)(param_1 + 0x4a) < 0) {
        return;
      }
      iVar5 = (int)*(short *)(param_1 + 0x50);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(short *)(param_1 + 0x50) = (short)(iVar5 >> 2);
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 7) == '\x01') {
      iVar5 = (int)sVar1;
      if (*(short *)(param_1 + 0x32) < iVar5) {
        return;
      }
      *(undefined2 *)(param_1 + 0x50) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(int *)(param_1 + 0x30) = iVar5 << 0x10;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

