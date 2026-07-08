
void FUN_8001dcdc(undefined2 *param_1,ushort param_2)

{
  undefined2 uVar1;
  int iVar2;
  int in_v0;
  undefined2 in_v1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_s1;
  
  *(undefined2 *)(in_v0 + 0x1a6) = in_v1;
  FUN_8001dd04();
  iVar2 = DAT_80026d88;
  for (; DAT_80026d88 = iVar2, unaff_s1 != 0; unaff_s1 = unaff_s1 - uVar5) {
    uVar5 = 0x40;
    if (unaff_s1 < 0x41) {
      uVar5 = unaff_s1;
    }
    iVar3 = 0;
    if (0 < (int)uVar5) {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        iVar3 = iVar3 + 2;
        *(undefined2 *)(iVar2 + 0x1a8) = uVar1;
      } while (iVar3 < (int)uVar5);
    }
    *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) & 0xffcf | 0x10;
    FUN_8001dd04();
    if ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x400) != 0) {
      uVar4 = 1;
      do {
        if (0xf00 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,s_ClearImage2_80010a64);
        }
        uVar4 = uVar4 + 1;
      } while ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x400) != 0);
    }
    FUN_8001dd04();
    FUN_8001dd04();
    iVar2 = DAT_80026d88;
  }
  *(ushort *)(iVar2 + 0x1aa) = *(ushort *)(iVar2 + 0x1aa) & 0xffcf;
  if ((*(ushort *)(iVar2 + 0x1ae) & 0x7ff) != (param_2 & 0x7ff)) {
    uVar5 = 1;
    do {
      if (0xf00 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,s_LoadImage_80010a70 + 8);
      }
      uVar5 = uVar5 + 1;
    } while ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x7ff) != (param_2 & 0x7ff));
  }
  return;
}

