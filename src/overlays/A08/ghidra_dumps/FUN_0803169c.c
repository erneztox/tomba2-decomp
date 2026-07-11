// FUN_0803169c

void FUN_0803169c(short *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sStack_40;
  short sStack_3e;
  undefined2 local_3c;
  undefined2 uStack_3a;
  ushort auStack_38 [16];
  
  local_3c = 0x10;
  uStack_3a = 1;
  iVar6 = 0;
  if (0 < param_1[2]) {
    do {
      sStack_40 = *param_1 + (short)iVar6;
      sStack_3e = param_1[1];
      iVar5 = 0;
      if (0 < param_1[3]) {
        do {
          func_0x00081278(&sStack_40,auStack_38);
          func_0x00080f6c(0);
          iVar4 = 0;
          puVar3 = auStack_38;
          do {
            uVar1 = *puVar3;
            uVar2 = (uint)((ushort)((uVar1 & 0x1f) * 0x4d + (uVar1 >> 5 & 0x1f) * 0x96 +
                                   (uVar1 >> 10 & 0x1f) * 0x1d) >> 8);
            if (0x1f < uVar2) {
              uVar2 = 0x1f;
            }
            *puVar3 = (ushort)uVar2 | uVar1 & 0x8000 | (ushort)(uVar2 << 10) | (ushort)(uVar2 << 5);
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < 0x10);
          func_0x00081218(&sStack_40,auStack_38);
          func_0x00080f6c(0);
          sStack_3e = sStack_3e + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1[3]);
      }
      iVar6 = iVar6 + 0x10;
    } while (iVar6 < param_1[2]);
  }
  return;
}

