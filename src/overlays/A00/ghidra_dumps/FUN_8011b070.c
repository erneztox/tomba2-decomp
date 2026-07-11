// FUN_8011b070

void FUN_8011b070(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = func_0x8007778c();
  if (iVar4 != 0) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      param_1[5] = 2;
      func_0x8009a450();
      return;
    }
    iVar4 = 2;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        param_1[5] = 1;
        iVar4 = func_0x80077b38(param_1,0x8014c808,4);
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
      }
code_r0x801241a4:
      if (iVar4 != 0) {
        return;
      }
      func_0x8009a450();
      return;
    }
    iVar4 = 3;
    if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x4a);
      sVar3 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = sVar3 + *(short *)(param_1 + 0x50);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
      if (0 < (int)((uint)(ushort)(sVar3 + *(short *)(param_1 + 0x50)) << 0x10)) {
        iVar4 = (byte)param_1[5] + 1;
        param_1[5] = (char)iVar4;
        goto code_r0x801241a4;
      }
    }
    else {
      if (bVar1 != 3) goto code_r0x801241a4;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      func_0x8004766c(param_1);
      iVar4 = func_0x80049250(param_1,0,
                              (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                    (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
      if (iVar4 != 0) {
        func_0x80074590(0x8f,0,0);
        return;
      }
    }
    func_0x80077b5c(param_1);
  }
  return;
}

