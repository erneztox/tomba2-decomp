
void FUN_8001e48c(undefined4 param_1,uint param_2)

{
  ushort *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  ushort uVar8;
  
  puVar7 = (undefined2 *)0x30000;
  puVar1 = (ushort *)(DAT_80026d88 + 0x1ae);
  *(undefined2 *)(DAT_80026d88 + 0x1a6) = DAT_80026da0;
  uVar8 = *puVar1 & 0x7ff;
  FUN_8001dd04();
  iVar3 = DAT_80026d88;
  for (; DAT_80026d88 = iVar3, param_2 != 0; param_2 = param_2 - uVar6) {
    uVar6 = 0x40;
    if (param_2 < 0x41) {
      uVar6 = param_2;
    }
    iVar4 = 0;
    if (0 < (int)uVar6) {
      do {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 + 2;
        *(undefined2 *)(iVar3 + 0x1a8) = uVar2;
      } while (iVar4 < (int)uVar6);
    }
    *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) & 0xffcf | 0x10;
    FUN_8001dd04();
    if ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x400) != 0) {
      uVar5 = 1;
      do {
        if (0xf00 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,s_ClearImage2_80010a64);
        }
        uVar5 = uVar5 + 1;
      } while ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x400) != 0);
    }
    FUN_8001dd04();
    FUN_8001dd04();
    iVar3 = DAT_80026d88;
  }
  *(ushort *)(iVar3 + 0x1aa) = *(ushort *)(iVar3 + 0x1aa) & 0xffcf;
  if ((*(ushort *)(iVar3 + 0x1ae) & 0x7ff) != uVar8) {
    uVar6 = 1;
    do {
      if (0xf00 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,s_LoadImage_80010a70 + 8);
      }
      uVar6 = uVar6 + 1;
    } while ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x7ff) != uVar8);
  }
  return;
}

