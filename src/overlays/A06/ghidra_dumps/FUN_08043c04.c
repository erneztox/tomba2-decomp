// FUN_08043c04

void FUN_08043c04(short *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short local_40;
  short local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  ushort local_38 [16];
  
  local_3c = 0x10;
  local_3a = 1;
  iVar6 = 0;
  if (0 < param_1[2]) {
    do {
      local_40 = *param_1 + (short)iVar6;
      local_3e = param_1[1];
      iVar5 = 0;
      if (0 < param_1[3]) {
        do {
          func_0x00081278(&local_40,local_38);
          func_0x00080f6c(0);
          iVar4 = 0;
          puVar3 = local_38;
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
          func_0x00081218(&local_40,local_38);
          func_0x00080f6c(0);
          local_3e = local_3e + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1[3]);
      }
      iVar6 = iVar6 + 0x10;
    } while (iVar6 < param_1[2]);
  }
  return;
}

