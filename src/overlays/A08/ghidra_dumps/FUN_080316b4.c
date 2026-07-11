// FUN_080316b4

void FUN_080316b4(void)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *unaff_s2;
  short sStack00000010;
  short sStack00000012;
  
  iVar6 = 0;
  if (0 < unaff_s2[2]) {
    do {
      sStack00000010 = *unaff_s2 + (short)iVar6;
      sStack00000012 = unaff_s2[1];
      iVar5 = 0;
      if (0 < unaff_s2[3]) {
        do {
          func_0x00081278(&stack0x00000010,&stack0x00000018);
          func_0x00080f6c(0);
          iVar4 = 0;
          puVar3 = (ushort *)&stack0x00000018;
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
          func_0x00081218(&stack0x00000010,&stack0x00000018);
          func_0x00080f6c(0);
          sStack00000012 = sStack00000012 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < unaff_s2[3]);
      }
      iVar6 = iVar6 + 0x10;
    } while (iVar6 < unaff_s2[2]);
  }
  return;
}

