// FUN_8005a714

void FUN_8005a714(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (uint)*(ushort *)(param_1 + 0x6a) << 0x10;
  switch(iVar3 >> 0x18 & 0xf) {
  case 1:
  case 2:
    FUN_80074590(2,0,0);
    uVar2 = 9;
    if (*(char *)(param_1 + 0x46) == '\x10') {
      uVar2 = 0xb;
    }
    goto LAB_8005a8fc;
  case 5:
  case 6:
    if ((iVar3 >> 0x1c & 7U) == 0) {
      FUN_80074590(0x8a,1,0xffffffc4);
      uVar2 = 9;
      if (*(char *)(param_1 + 0x46) == '\x10') {
        uVar2 = 0xb;
      }
      goto LAB_8005a8fc;
    }
    break;
  case 10:
    FUN_80074590(0x90,1,0xffffffc4);
    uVar2 = 9;
    if (*(char *)(param_1 + 0x46) == '\x10') {
      uVar2 = 0xb;
    }
    goto LAB_8005a8fc;
  }
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 != 10) {
    if (10 < bVar1) {
      if (bVar1 != 0xe) {
        if (bVar1 < 0xf) {
          if (bVar1 != 0xc) {
            *(undefined2 *)(param_1 + 0x40) = 9;
            return;
          }
        }
        else {
          if (bVar1 == 0x10) {
            FUN_80074590(1,0,0);
            *(undefined2 *)(param_1 + 0x40) = 0xb;
            FUN_800538e0(param_1,param_1 + 0x2c,0);
            return;
          }
          if (bVar1 != 0xe0) {
            *(undefined2 *)(param_1 + 0x40) = 9;
            return;
          }
        }
      }
      FUN_80074590(1,0,0);
      uVar2 = 9;
LAB_8005a8fc:
      *(undefined2 *)(param_1 + 0x40) = uVar2;
      return;
    }
    if (bVar1 != 6) {
      if (bVar1 < 7) {
        if (bVar1 != 4) {
          *(undefined2 *)(param_1 + 0x40) = 9;
          return;
        }
      }
      else if (bVar1 != 8) {
        *(undefined2 *)(param_1 + 0x40) = 9;
        return;
      }
    }
  }
  if (*(short *)(param_1 + 0x42) == 0) {
    uVar4 = 0xfffffffd;
  }
  else {
    uVar4 = 5;
  }
  FUN_80074590(0,uVar4,0);
  *(undefined2 *)(param_1 + 0x40) = 9;
  *(ushort *)(param_1 + 0x42) = ~*(ushort *)(param_1 + 0x42) & 1;
  return;
}

