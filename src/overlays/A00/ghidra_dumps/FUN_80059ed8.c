// FUN_80059ed8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80059ed8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  pcVar7 = *(char **)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (pcVar7[0x181] == '\0') {
      _DAT_1f80019e = 0;
    }
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    if (*(short *)(pcVar7 + 0x17e) < 0) {
      *(undefined2 *)(param_1 + 0x40) = 0x28;
      uVar4 = 0x37;
    }
    else {
      *(undefined2 *)(param_1 + 0x40) = 0x50;
      uVar4 = 0x6e;
    }
    *(undefined2 *)(param_1 + 0x42) = uVar4;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    *(undefined1 *)(param_1 + 0x46) = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    return;
  }
  if (*pcVar7 == '\0') {
    return;
  }
  cVar2 = pcVar7[1];
  *(char *)(param_1 + 1) = cVar2;
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_800bfe55 != '\0') {
    iVar5 = (int)*(short *)(pcVar7 + 0x44);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if ((0xc00 < iVar5) && ((_DAT_1f80017c & 7) == 0)) {
      FUN_800312d4(0x2c,pcVar7 + 0x2c,0xffffffec);
    }
  }
  if (*(short *)(pcVar7 + 0x17e) < 0) {
    *(undefined2 *)(param_1 + 0x40) = 0x28;
    uVar4 = 0x37;
  }
  else {
    *(undefined2 *)(param_1 + 0x40) = 0x50;
    uVar4 = 0x6e;
  }
  *(undefined2 *)(param_1 + 0x42) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(pcVar7 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(pcVar7 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(pcVar7 + 0x34);
  *(char *)(param_1 + 0x2a) = pcVar7[0x2a];
  if ((pcVar7[0x29] == '\0') || (pcVar7[0x78] != '\0')) {
    if (pcVar7[0x16b] == '\b') {
      *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x2e);
      uVar3 = _DAT_800bf812;
      uVar4 = _DAT_1f800210;
      *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x36);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = uVar4;
      *(undefined2 *)(param_1 + 0x4a) = uVar3;
      goto LAB_8005a1ac;
    }
    iVar5 = FUN_800489e4(param_1,(int)*(short *)(param_1 + 0x32));
    uVar3 = _DAT_1f8001a2;
    uVar4 = _DAT_1f8001a0;
    if (iVar5 != 0) {
      uVar6 = (int)((uint)_DAT_1f8001a6 << 0x10) >> 0x18 & 0xf;
      if ((((uVar6 != 2) && (uVar6 != 7)) &&
          (((int)((uint)_DAT_1f8001a6 << 0x10) >> 0x10 & 0x8000U) == 0)) &&
         (*(short *)(param_1 + 0x32) <= _DAT_1f8001a4)) {
        *(short *)(param_1 + 0x4a) = _DAT_1f8001a4;
        *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x36);
        *(undefined2 *)(param_1 + 0x56) = uVar4;
        *(undefined2 *)(param_1 + 0x58) = uVar3;
        goto LAB_8005a1ac;
      }
    }
  }
  else if ((*(ushort *)(pcVar7 + 0x6a) >> 8 & 0xf) != 2) {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(pcVar7 + 0x2e);
    *(short *)(param_1 + 0x4a) = *(short *)(pcVar7 + 0x32) + *(short *)(pcVar7 + 0x84);
    *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(pcVar7 + 0x36);
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(pcVar7 + 0x140);
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(pcVar7 + 0x142);
    goto LAB_8005a1ac;
  }
  *(undefined1 *)(param_1 + 1) = 0;
LAB_8005a1ac:
  if (*(char *)(param_1 + 1) != '\0') {
    iVar5 = 0x80 - (((int)*(short *)(param_1 + 0x4a) - (int)*(short *)(pcVar7 + 0x32)) + -0x78 >> 2)
    ;
    *(short *)(param_1 + 0x4e) = (short)iVar5;
    iVar5 = iVar5 * 0x10000 >> 0x10;
    if (iVar5 < 0) {
      *(undefined2 *)(param_1 + 0x4e) = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else if (0x80 < iVar5) {
      *(undefined2 *)(param_1 + 0x4e) = 0x80;
    }
    iVar5 = 0x100 - (((int)*(short *)(param_1 + 0x4a) - (int)*(short *)(pcVar7 + 0x32)) + -0x78 >> 2
                    );
    *(short *)(param_1 + 0x50) = (short)iVar5;
    iVar5 = iVar5 * 0x10000 >> 0x10;
    if (iVar5 < 0) {
      *(undefined2 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else if (0x100 < iVar5) {
      *(undefined2 *)(param_1 + 0x50) = 0x100;
    }
  }
  if (((DAT_800bf873 == '\0') && (DAT_800bf80d == '\0')) && (*(int *)(pcVar7 + 0x158) == 0)) {
    switch(DAT_800bf870) {
    case 0:
      if (DAT_800bf816 == '\0') {
        func_0x8010c5a8(param_1,pcVar7);
      }
      break;
    case 4:
      if (DAT_800bf816 == '\0') {
        func_0x80115afc(param_1,pcVar7);
      }
      break;
    case 6:
      if (DAT_800bf816 == '\0') {
        func_0x80114294(param_1,pcVar7);
      }
      break;
    case 8:
      if (pcVar7[0x16b] == '\0') {
        func_0x8011332c(param_1,pcVar7);
      }
      break;
    case 0xb:
      func_0x8010bc10(param_1,pcVar7);
      break;
    case 0xe:
      func_0x8010b238(param_1,pcVar7);
    }
  }
  return;
}

