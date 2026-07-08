
void FUN_800190e8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = *DAT_800267c4 >> 0x18 & 0x7f;
  if (uVar2 != 0) {
    do {
      puVar3 = &DAT_800267c8;
      for (iVar1 = 0; (uVar2 != 0 && (iVar1 < 7)); iVar1 = iVar1 + 1) {
        if ((uVar2 & 1) != 0) {
          *DAT_800267c4 = *DAT_800267c4 & (1 << (iVar1 + 0x18U & 0x1f) | 0xffffffU);
          if ((code *)*puVar3 != (code *)0x0) {
            (*(code *)*puVar3)();
          }
        }
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 >> 1;
      }
      uVar2 = *DAT_800267c4 >> 0x18 & 0x7f;
    } while (uVar2 != 0);
  }
  if (((*DAT_800267c4 & 0xff000000) != 0x80000000) && ((*DAT_800267c4 & 0x8000) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_8001e5ec(&DAT_80010524,*DAT_800267c4);
}

