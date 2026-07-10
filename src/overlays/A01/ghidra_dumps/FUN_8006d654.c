// FUN_8006d654

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006d654(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  switch(DAT_800e7fe4) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 6:
  case 9:
  case 10:
  case 0xb:
    if (DAT_800bf821 == '\0') {
      iVar4 = _DAT_800e7eb0;
      if (DAT_800e7fc5 == '\x02') {
        if (((int)_DAT_800e7ffe & 0x8000U) == 0) {
          iVar4 = _DAT_800e7eb0 + 0xc80000;
        }
      }
      else if (((int)_DAT_800e7ffe & 0x8000U) != 0) {
        iVar4 = _DAT_800e7eb0 + -0x460000;
      }
    }
    else if (DAT_800bf821 == '\x01') {
      iVar4 = _DAT_800e7eb0 + -0xc80000;
    }
    else if (DAT_800e7fc5 == '\x02') {
      if (((int)_DAT_800e7ffe & 0x8000U) != 0) goto LAB_8006d700;
      iVar4 = _DAT_800e7eb0 + 0x280000;
    }
    else if (((int)_DAT_800e7ffe & 0x8000U) == 0) {
LAB_8006d700:
      iVar4 = _DAT_800e7eb0 + -0xf00000;
    }
    else {
      iVar4 = _DAT_800e7eb0 + -0x1360000;
    }
    goto LAB_8006d7d4;
  case 2:
    iVar4 = *(int *)(_DAT_800e7e90 + 0x30) << 0x10;
    break;
  case 3:
    iVar4 = *(int *)(_DAT_800e7e90 + 0x30) << 0x10;
    goto LAB_8006d7d4;
  default:
    iVar4 = _DAT_800e7eb0;
    break;
  case 0xc:
    iVar4 = (_DAT_1f800202 * 0x10000 + _DAT_800e7eb0) / 2;
  }
  iVar4 = iVar4 + 0xc80000;
LAB_8006d7d4:
  if (_DAT_800e7ffe < 0) {
    iVar5 = 0x140000;
    iVar3 = 0x2440000;
  }
  else {
    iVar5 = 0x8c0000;
    iVar3 = 0x1cc0000;
  }
  iVar2 = ((iVar4 + -0x2580000) - *(int *)(param_1 + 0xc)) + iVar3;
  bVar1 = false;
  if (iVar2 < 0) {
    iVar2 = iVar2 + iVar5;
    bVar1 = true;
    if (-1 < iVar2) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
  }
  if (bVar1) {
    if (DAT_800e7fc5 == '\0') {
      if (iVar2 < -0x160000) {
        if (iVar2 <= *(int *)(param_1 + 0x18)) {
          if (0 < *(int *)(param_1 + 0x18)) {
            *(undefined4 *)(param_1 + 0x18) = 0;
          }
          iVar4 = *(int *)(param_1 + 0x18);
          iVar3 = -0x16000;
          goto LAB_8006d878;
        }
        if (iVar2 < -0x15ffff) {
          *(undefined4 *)(param_1 + 0x18) = 0xffea0000;
          goto LAB_8006d918;
        }
      }
    }
    else {
      if (-0x1000001 < iVar2) {
        return;
      }
      iVar2 = iVar2 + 0x1000000;
      if (iVar2 < -0x5fffff) {
        *(undefined4 *)(param_1 + 0x18) = 0xffa00000;
        goto LAB_8006d918;
      }
    }
LAB_8006d90c:
    *(int *)(param_1 + 0x18) = iVar2;
  }
  else {
    iVar4 = iVar4 + iVar3;
    if (iVar2 < 0x80001) {
      iVar3 = -0x2580000;
      goto code_r0x8006d924;
    }
    if (iVar2 < *(int *)(param_1 + 0x18)) {
      if (iVar2 < 0x500000) goto LAB_8006d90c;
      *(undefined4 *)(param_1 + 0x18) = 0x500000;
    }
    else {
      if (*(int *)(param_1 + 0x18) < 0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x18);
      iVar3 = 0x100000;
LAB_8006d878:
      *(int *)(param_1 + 0x18) = iVar4 + iVar3;
    }
  }
LAB_8006d918:
  iVar4 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x18);
code_r0x8006d924:
  *(int *)(param_1 + 0xc) = iVar4 + iVar3;
  return;
}

