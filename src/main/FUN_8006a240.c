
void FUN_8006a240(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  
  bVar1 = param_1[7];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return;
        }
        if (param_1[2] == '\x01') {
          uVar4 = *(ushort *)(param_1 + 0x44);
          *(short *)(param_1 + 0x44) = (short)((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x76));
          if ((int)(((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x76)) * 0x10000) < 0)
          goto LAB_8006a368;
        }
        else {
          uVar4 = *(ushort *)(param_1 + 0x44);
          *(short *)(param_1 + 0x44) = (short)((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x76));
          if ((int)(((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x76)) * 0x10000) >> 0x10 < 0x46)
          goto LAB_8006a368;
        }
        if (param_1[0x2b] == '\0') {
          return;
        }
LAB_8006a368:
        *(undefined2 *)(param_1 + 0x44) = 0;
        *param_1 = 2;
        param_1[6] = param_1[6] + '\x01';
        return;
      }
      if (param_1[0x2b] == '\0') {
        sVar3 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar3 + -1;
        if (sVar3 != 1) {
          return;
        }
        cVar2 = param_1[7];
        goto LAB_8006a2b8;
      }
      goto LAB_8006a2a0;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1[7] = 1;
    *(undefined2 *)(param_1 + 0x66) = 3;
  }
  if (param_1[0x2b] == '\0') {
    cVar2 = param_1[7];
    *(undefined2 *)(param_1 + 0x40) = 1;
LAB_8006a2b8:
    param_1[7] = cVar2 + '\x01';
    return;
  }
LAB_8006a2a0:
  param_1[6] = 8;
  *(undefined2 *)(param_1 + 0x44) = 0;
  return;
}

