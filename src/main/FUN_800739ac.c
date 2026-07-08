
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800739ac(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    iVar4 = FUN_80051b70(param_1,0xc,(int)*(short *)(&DAT_800a4c80 + (uint)DAT_800bf870 * 2));
    if (iVar4 != 0) {
      return;
    }
    *param_1 = 1;
    param_1[4] = param_1[4] + '\x01';
    if (((DAT_800bf870 == 2) || (DAT_800bf870 == 7)) || (DAT_800bf870 == 0x14)) {
      *(undefined2 *)(param_1 + 0x80) = 0xa0;
      uVar3 = 0x140;
    }
    else {
      *(undefined2 *)(param_1 + 0x80) = 300;
      uVar3 = 600;
    }
    *(undefined2 *)(param_1 + 0x82) = uVar3;
    *(undefined2 *)(param_1 + 0x84) = 0xed;
    *(undefined2 *)(param_1 + 0x86) = 0xed;
    param_1[0x2b] = 0;
    if (DAT_800bf870 != 5) {
      return;
    }
    if (param_1[3] != '\x05') {
      return;
    }
    param_1[0xb] = 0xf;
    return;
  }
  iVar5 = FUN_8007778c(param_1);
  iVar4 = _DAT_1f800138;
  if (iVar5 == 0) {
    param_1[0x2b] = 0;
    return;
  }
  switch(param_1[5]) {
  case 0:
    goto switchD_80073b0c_caseD_0;
  case 1:
    if (((DAT_800bf870 == 2) || (DAT_800bf870 == 7)) && (cVar2 = '\x04', DAT_800e7e85 != '\x1f'))
    goto LAB_80073ca0;
    FUN_800737f8(param_1[3]);
    if ((_DAT_800e7e68 & 0x2000) != 0) goto LAB_80073be0;
    break;
  case 2:
    FUN_800738b0();
    if ((_DAT_800e7e68 & 0x4000) != 0) {
LAB_80073be0:
      param_1[5] = param_1[5] + '\x01';
      FUN_80074590(0x11,0,0);
      param_1[0x2b] = 0;
      goto LAB_80073ca8;
    }
    if ((_DAT_800e7e68 & 0x2000) != 0) {
      param_1[5] = 4;
      FUN_80074bf8(1);
      param_1[0x2b] = 0;
      goto LAB_80073ca8;
    }
    break;
  case 3:
    DAT_1f800136 = 2;
    DAT_800bf84a = 0;
    _DAT_800bf890 = _DAT_800e7eac;
    _DAT_800bf894 = _DAT_800e7eb0;
    _DAT_800bf898 = _DAT_800e7eb4;
    DAT_800bfe38 = DAT_800e7eaa;
    *(undefined2 *)(_DAT_1f800138 + 0x50) = 0;
    *(undefined1 *)(iVar4 + 0x6b) = 8;
    param_1[5] = param_1[5] + '\x01';
    FUN_8005082c(0,0,0);
    param_1[0x2b] = 0;
    goto LAB_80073ca8;
  case 4:
    *param_1 = 2;
    cVar2 = param_1[5] + '\x01';
LAB_80073ca0:
    param_1[5] = cVar2;
    break;
  case 5:
    *param_1 = 1;
    param_1[5] = 0;
switchD_80073b0c_caseD_0:
    if (param_1[0x2b] == '\x03') {
      DAT_800bf871 = param_1[3];
      param_1[5] = param_1[5] + '\x01';
      FUN_800782f0(DAT_800bf870,DAT_800bf871);
      param_1[0x2b] = 0;
      goto LAB_80073ca8;
    }
  }
  param_1[0x2b] = 0;
LAB_80073ca8:
  FUN_800517f8(param_1);
  return;
}

