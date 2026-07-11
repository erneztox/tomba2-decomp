// FUN_08021ca4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08021ca4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    uVar2 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar2;
    if (0 < (int)((uint)uVar2 << 0x10)) {
      return;
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bfa03 != '\x05') {
        return;
      }
      DAT_800e806c = 8;
      func_0x0006cba8(param_1 + 0x2c);
      *(undefined2 *)(param_1 + 0x40) = 0x3c;
      *(undefined2 *)(param_1 + 0x48) = 0x5000;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  else if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077ebc(param_1);
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      *(short *)(param_1 + 0x58) = (*(short *)(param_1 + 0x32) + 0xd3e) * 2;
      uVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(ushort *)(param_1 + 0x4a) = uVar2;
      iVar3 = *(int *)(param_1 + 0x30) + ((int)((uint)uVar2 << 0x10) >> 8);
      *(int *)(param_1 + 0x30) = iVar3;
      if (-0xd3e0001 < iVar3) {
        *(undefined4 *)(param_1 + 0x30) = 0xf2c20000;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x4a) = 0xd800;
        *(ushort *)(param_1 + 0x50) =
             ((ushort)*(byte *)(param_1 + 6) * 0x20 + (ushort)*(byte *)(param_1 + 6) * -4) * 0x80;
        bVar1 = *(char *)(param_1 + 6) + 1;
        *(byte *)(param_1 + 6) = bVar1;
        if (3 < bVar1) {
          DAT_800e806c = 7;
          DAT_800bfa03 = '\x06';
          *(undefined1 *)(param_1 + 6) = 0;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        }
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * -0x100;
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 < 0x2c000001) {
        DAT_800bfa03 = 7;
        *(undefined2 *)(param_1 + 0x4a) = 0xd800;
        *(undefined4 *)(param_1 + 0x2c) = 0x2c000000;
        *(undefined2 *)(param_1 + 0x50) = 0x380;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
    }
    else if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
    iVar4 = 1;
    iVar3 = param_1;
    if (*(byte *)(param_1 + 8) < 2) {
      return;
    }
    do {
      *(short *)(*(int *)(iVar3 + 0xc4) + 0xc) =
           *(short *)(*(int *)(iVar3 + 0xc4) + 0xc) - (*(short *)(param_1 + 0x48) >> 3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
  }
  else if (bVar1 == 3) {
    if (DAT_1f800137 == '\0') {
      *(undefined1 *)(param_1 + 3) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077ebc(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

