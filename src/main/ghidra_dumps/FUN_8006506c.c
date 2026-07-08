
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006506c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_80076d68(param_1);
        if (((_DAT_800e7e68 & 0x10) == 0) && (iVar2 = FUN_80055824(), iVar2 == 0)) {
          if ((_DAT_800ecf54 & 0x40) == 0) {
            return;
          }
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
          FUN_80062d8c(param_1,1);
          *(undefined1 *)(param_1 + 6) = 1;
          return;
        }
        *(undefined1 *)(param_1 + 5) = 7;
        *(undefined1 *)(param_1 + 6) = 2;
        *(undefined1 *)(param_1 + 7) = 0;
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_80076d68(param_1);
      FUN_80062d8c(param_1,0x81);
      if ((_DAT_1f80017c & 3) != 0) {
        return;
      }
      FUN_80074590(5,0xfffffffe,0xffffffc4);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    FUN_80054198(param_1);
    *(undefined2 *)(param_1 + 0x6a) = 0;
    if ((*(uint *)(param_1 + 0x17c) & 0x4400200) == 0x200) {
      *(undefined1 *)(param_1 + 6) = 3;
      *(undefined1 *)(param_1 + 7) = 0;
      FUN_80054d14(param_1,0x40);
      if ((*(byte *)(param_1 + 0x15c) & 2) == 0) {
        return;
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x20;
      FUN_80062d8c(param_1,0x81);
      return;
    }
    if ((*(byte *)(param_1 + 0x15c) & 2) != 0) {
      FUN_80054d14(param_1,0x18,3);
      *(undefined1 *)(param_1 + 6) = 2;
      *(undefined1 *)(param_1 + 7) = 0;
      return;
    }
    FUN_80054d14(param_1,0x40,3);
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  FUN_80076d68(param_1);
  if ((_DAT_800ecf54 & 0x10) == 0) {
    if ((_DAT_800ecf54 & 0x40) == 0) {
      FUN_80054d14(param_1,0x40,4);
      FUN_80062d8c(param_1,2);
      goto LAB_80065238;
    }
    FUN_80062d8c(param_1,1);
    if ((_DAT_1f80017c & 3) != 0) goto LAB_80065238;
    uVar3 = 0xfffffffe;
  }
  else {
    FUN_80054d14(param_1,0x41,0);
    FUN_80062d8c(param_1,0);
    if ((_DAT_1f80017c & 3) != 0) goto LAB_80065238;
    uVar3 = 3;
  }
  FUN_80074590(5,uVar3,0xffffffc4);
LAB_80065238:
  iVar2 = FUN_80055824();
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 5) = 4;
    *(undefined1 *)(param_1 + 6) = 2;
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x40) = 8;
    FUN_80074590(0x1d,0,0);
    FUN_80055e28(param_1,0);
    *(byte *)(param_1 + 0x149) = (*(byte *)(param_1 + 0x14a) & 1) + 2;
    FUN_80054d14(param_1,0x14,0);
  }
  return;
}

