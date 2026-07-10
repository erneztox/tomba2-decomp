// FUN_8003a470

void FUN_8003a470(int param_1,short *param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_2 + 0x1f);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sVar2 = param_2[8];
        param_2[1] = param_2[1] + (param_2[9] >> 4);
        param_2[8] = sVar2 + param_2[0x1c];
        *param_2 = (short)(sVar2 + param_2[0x1c]) >> 4;
        param_2[9] = param_2[9] + 0x20;
        param_2[4] = param_2[4] + 0xc;
        if (param_2[1] < 0xf0) {
          return;
        }
        *(char *)(param_2 + 0x1f) = (char)param_2[0x1f] + '\x01';
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      if (*(char *)((int)param_2 + 0x3f) != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_2 + 0x1f) = 1;
    param_2[9] = -0x180;
  }
  *(char *)(param_2 + 0x1f) = (char)param_2[0x1f] + '\x01';
  uVar3 = FUN_8009a450();
  param_2[9] = (uVar3 & 0x1f) - 0xc0;
  param_2[0xb] = 6;
  param_2[8] = *param_2 << 4;
  iVar4 = FUN_8003a1e4(param_1,param_2);
  iVar5 = (int)param_2[0xb];
  if (iVar5 == 0) {
    trap(0x1c00);
  }
  if ((iVar5 == -1) && (iVar4 << 4 == -0x80000000)) {
    trap(0x1800);
  }
  param_2[0x1c] = (short)((iVar4 << 4) / iVar5);
  return;
}

