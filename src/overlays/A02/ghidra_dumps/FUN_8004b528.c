// FUN_8004b528

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8004b528(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x58) < 0x400) {
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x40;
    }
    FUN_800517f8(param_1);
    if (*(short *)(param_1 + 0x40) == 0xe) {
      iVar4 = FUN_800310f4(0x20,0);
      if (iVar4 != 0) {
        *(undefined2 *)(iVar4 + 0x50) = *(undefined2 *)(_DAT_800e7f50 + 0x2c);
        *(undefined2 *)(iVar4 + 0x52) = *(undefined2 *)(_DAT_800e7f50 + 0x30);
        *(undefined2 *)(iVar4 + 0x54) = *(undefined2 *)(_DAT_800e7f50 + 0x34);
        if (param_2 == 0) {
          *(undefined2 *)(iVar4 + 0x58) = *(undefined2 *)(param_1 + 0x60);
          *(undefined2 *)(iVar4 + 0x5a) = *(undefined2 *)(param_1 + 0x62);
          *(undefined2 *)(iVar4 + 0x5c) = *(undefined2 *)(param_1 + 100);
        }
        else {
          *(undefined2 *)(iVar4 + 0x58) = *(undefined2 *)(param_2 + 0x2e);
          *(undefined2 *)(iVar4 + 0x5a) = *(undefined2 *)(param_2 + 0x32);
          *(undefined2 *)(iVar4 + 0x5c) = *(undefined2 *)(param_2 + 0x36);
        }
        *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
      }
      if (*(short *)(param_1 + 0x5c) != 2) {
        FUN_80051b04(*(undefined4 *)(param_1 + 0xc0),1,0);
      }
      FUN_80074590(7,0,0);
    }
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    uVar3 = 0;
    if (sVar2 == -1) {
      uVar3 = 1;
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    uVar3 = 0;
    if (bVar1 == 0) {
      if (DAT_800bf80a == '\0') {
        DAT_800e7e84 = 4;
        DAT_800e7e85 = 0x21;
        DAT_800e7e86 = 0;
        FUN_80054d14(&DAT_800e7e80,0xcc,0);
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      FUN_800517f8(param_1);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
    if (bVar1 == 2) {
      if (*(short *)(param_1 + 0x58) < 0x400) {
        *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x40;
      }
      FUN_800517f8(param_1);
      sVar2 = *(short *)(param_1 + 0x40) + -1;
      *(short *)(param_1 + 0x40) = sVar2;
      uVar3 = 0;
      if (sVar2 == -1) {
        FUN_80054d14(&DAT_800e7e80,2,0);
        uVar3 = 2;
      }
    }
  }
  return uVar3;
}

