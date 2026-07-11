// FUN_80111be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80111be0(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char unaff_s2;
  
  bVar1 = param_1[4];
  pcVar5 = (char *)(uint)bVar1;
  uVar3 = (uint)(pcVar5 < (char *)0x2);
  if (pcVar5 == (char *)0x1) {
    unaff_s2 = param_1[5];
    if (unaff_s2 == '\0') {
      func_0x8007778c(param_1);
      if (param_1[0x2b] == '\x03') {
        func_0x80042354(1,3);
        func_0x80040d68(param_1,0x800a3cf0);
        param_1[0x70] = 2;
        param_1[6] = 0;
        param_1[5] = bVar1;
        return;
      }
    }
    else {
      if (unaff_s2 != '\x01') {
        return;
      }
      param_1[1] = 1;
      func_0x80077e7c(param_1);
      func_0x80041098(param_1);
      if (param_1[0x70] == -1) {
        if (param_1[6] == '\0') {
          param_1[0x7a] = 0;
          func_0x80040d68(param_1,0x801360fc);
          param_1[0x70] = 2;
          param_1[6] = 1;
          return;
        }
        if (param_1[6] != '\x01') {
          return;
        }
        param_1[5] = 0;
      }
    }
    func_0x8004190c(param_1);
    uVar3 = 0;
    if (param_1[1] != '\0') {
      uVar3 = func_0x800518fc(param_1);
    }
    param_1[0x2b] = 0;
  }
  else {
    if (uVar3 == 0) {
      uVar3 = 3;
      if (pcVar5 != (char *)0x2) {
        if (pcVar5 != (char *)0x3) goto LAB_8011ad88;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x800ecf58;
      iVar4 = func_0x800519e0(param_1,0xf,_DAT_800ecf94,0x80136084);
      if (iVar4 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfcc;
      func_0x80040cdc(param_1,0x8001b4dc,0x800a3d18);
      param_1[0x7b] = 5;
      func_0x80041718(param_1,5,0);
      *(undefined2 *)(param_1 + 0xb8) = 0x800;
      *(undefined2 *)(param_1 + 0xba) = 0x800;
      *(undefined2 *)(param_1 + 0xbc) = 0x800;
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x5a;
      *(undefined2 *)(param_1 + 0x82) = 0xb4;
      *(undefined2 *)(param_1 + 0x84) = 0x50;
      uVar3 = 0x90;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x90;
      param_1[0x2b] = 0;
      param_1[4] = param_1[4] + '\x01';
    }
  }
LAB_8011ad88:
  if (uVar3 != 0) {
    if (param_1 == (undefined1 *)0x0) {
      pcVar5[4] = unaff_s2;
      uVar2 = _DAT_800ecf80;
      pcVar5[0xd] = '\0';
      pcVar5[0xb] = '\x10';
      pcVar5[0x5a] = '\0';
      pcVar5[0x5b] = '\0';
      pcVar5[8] = '\0';
      pcVar5[0x5c] = '\0';
      pcVar5[0x5d] = '\0';
      pcVar5[0x5e] = unaff_s2;
      pcVar5[3] = '\x02';
      *(undefined4 *)(pcVar5 + 0x3c) = uVar2;
      func_0x80077b38(pcVar5,0x80139294,10);
      pcVar5[0x47] = '\0';
      func_0x8004766c(pcVar5);
      pcVar5[0x80] = '\x1e';
      pcVar5[0x81] = '\0';
      pcVar5[0x82] = '<';
      pcVar5[0x83] = '\0';
      pcVar5[0x84] = '<';
      pcVar5[0x85] = '\0';
      *pcVar5 = unaff_s2;
      pcVar5[0x86] = 'Z';
      pcVar5[0x87] = '\0';
      pcVar5[0x4a] = '\0';
      pcVar5[0x4b] = '\0';
      pcVar5[5] = unaff_s2;
      pcVar5[6] = '\x02';
      pcVar5[0x60] = '\0';
      pcVar5[0x61] = '\0';
      *(undefined2 *)(pcVar5 + 100) = *(undefined2 *)(pcVar5 + 0x32);
      FUN_80123f10();
      return;
    }
    FUN_80123f10();
    return;
  }
  if (param_1 != (undefined1 *)0x2) {
    if (param_1 == (undefined1 *)0x3) {
      func_0x8007a624(pcVar5);
      return;
    }
    FUN_80123f10();
    return;
  }
  if ((1 < (byte)pcVar5[5]) && ((byte)pcVar5[5] < 4)) {
    DAT_800bf9d4 = 0;
    DAT_800bf936 = DAT_800bf936 | 4;
    func_0x8004d4c4(0x41,1);
    func_0x8004b0d8(pcVar5);
    pcVar5[4] = '\x03';
  }
  func_0x8007778c(pcVar5);
  FUN_80123f10();
  return;
}

