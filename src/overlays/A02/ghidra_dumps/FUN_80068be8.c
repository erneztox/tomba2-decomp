// FUN_80068be8

void FUN_80068be8(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  bVar4 = *(byte *)(param_1 + 5);
  if (bVar4 != 1) {
    if (1 < bVar4) {
      if (bVar4 == 2) {
        return;
      }
      if (bVar4 != 3) {
        return;
      }
      func_0x8012c7cc(param_1);
      iVar3 = FUN_80077a4c(param_1,0,0,0);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 4) = 3;
        return;
      }
      bVar4 = *(byte *)(param_1 + 3);
      goto joined_r0x80068de0;
    }
    if (bVar4 != 0) {
      return;
    }
    FUN_80074590((&DAT_800a4a58)[*(byte *)(param_1 + 3) & 0x7f],0,0);
    bVar4 = *(byte *)(param_1 + 3) & 0x7f;
    if ((bVar4 == 7) || (bVar4 == 0xb)) {
      *(undefined1 *)(param_1 + 5) = 3;
      *(undefined1 *)(param_1 + 6) = 0;
      func_0x8012c7cc();
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    *(undefined2 *)(param_1 + 0x4a) = 0xe000;
    *(undefined2 *)(param_1 + 0x44) = 0xffec;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  sVar1 = *(short *)(param_1 + 0x4a) + 0x200;
  *(short *)(param_1 + 0x4a) = sVar1;
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -0x200;
  if (0x3000 < sVar1) {
    *(undefined2 *)(param_1 + 0x4a) = 0x3000;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  iVar3 = FUN_80083f50((int)*(short *)(param_1 + 0xbe));
  iVar5 = iVar3 * *(short *)(param_1 + 0x44) >> 4;
  iVar3 = *(short *)(param_1 + 0x4c) * iVar5;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar5;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar3;
  if ((*(byte *)(param_1 + 0x46) & 8) == 0) {
    uVar2 = FUN_80085690(-iVar3);
    *(undefined2 *)(param_1 + 0x56) = uVar2;
  }
  iVar3 = FUN_80069858(param_1,1,0);
  if ((iVar3 != 0) ||
     (sVar1 = *(short *)(param_1 + 0x40), *(short *)(param_1 + 0x40) = sVar1 + -1, sVar1 == 1)) {
    FUN_80074590(0x1b,0,0);
    FUN_800315d4(param_1 + 0x2c);
    *(undefined1 *)(param_1 + 4) = 3;
  }
  iVar3 = FUN_80077a4c(param_1,0,0,0);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 4) = 3;
    return;
  }
  bVar4 = *(byte *)(param_1 + 3);
joined_r0x80068de0:
  if ((bVar4 & 0x80) == 0) {
    FUN_800518fc(param_1);
  }
  else {
    FUN_800517f8(param_1);
  }
  return;
}

