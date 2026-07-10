// FUN_80064ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80064ba0(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort local_18;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      FUN_8006483c(param_1,0);
      if (*(char *)(param_1 + 0x29) == '\0') {
        if (0x2800 < *(short *)(param_1 + 0x4a)) {
          *(undefined2 *)(param_1 + 0x44) = 0;
          *(undefined4 *)(param_1 + 0x158) = 0;
          *(undefined1 *)(param_1 + 0x164) = 0;
          *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x4a);
          FUN_80056d44(param_1,0);
          *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x50);
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x4a) = 0;
        *(undefined2 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 0x144) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined1 *)(param_1 + 0x164) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        *(undefined2 *)(param_1 + 0x44) = 0;
        *(undefined1 *)(param_1 + 0x145) = 0;
        FUN_8005314c();
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 6) = 2;
        FUN_80054d14(param_1,0x17,1);
      }
      FUN_800551c4(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x6a) = 0;
    FUN_80054d14(param_1,0x1a,0);
    *(undefined1 *)(param_1 + 0x169) = 0x18;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)(param_1 + 0x168) = 1;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    if ((*(uint *)(param_1 + 0x17c) & 0x4400200) == 0x200) {
      *(undefined1 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x14e) + *(short *)(param_1 + 100);
      FUN_80056d44(param_1,0);
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x158);
  if (iVar2 == 1) {
    local_18 = FUN_800634a8(param_1);
  }
  else {
    switch(DAT_800bf870) {
    case 0:
      local_18 = func_0x8010b600(param_1);
      break;
    case 1:
      local_18 = func_0x8010ac3c(param_1);
      break;
    case 4:
      local_18 = func_0x801161ec(param_1);
      break;
    case 6:
      local_18 = func_0x80114784(param_1);
      break;
    case 8:
      local_18 = func_0x801136c4(param_1);
      break;
    case 10:
      local_18 = func_0x8010b42c(param_1);
      break;
    case 0xc:
      local_18 = func_0x8010cda4(param_1);
    }
  }
  if ((local_18 & 0x40) == 0) {
    if ((local_18 & (_DAT_1f800172 | 0x10)) != 0) {
      if (iVar2 != 1) {
        *(undefined1 *)(iVar2 + 0x29) = 0;
      }
      *(undefined1 *)(param_1 + 7) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else {
    if (iVar2 != 1) {
      *(undefined1 *)(iVar2 + 0x29) = 0;
    }
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    FUN_80056d44(param_1,0);
  }
  return;
}

