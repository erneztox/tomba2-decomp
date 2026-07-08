
void FUN_80018ad8(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (DAT_800256ec == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(&DAT_800104e8,*DAT_80026778);
  }
  DAT_800256ee = 1;
  uVar2 = (uint)(*DAT_8002677c & DAT_8002571c & *DAT_80026778);
  if (uVar2 != 0) {
    do {
      puVar5 = &DAT_800256f0;
      for (uVar4 = 0; (uVar2 != 0 && ((int)uVar4 < 0xb)); uVar4 = uVar4 + 1) {
        if ((uVar2 & 1) != 0) {
          *DAT_80026778 = ~(ushort)(1 << (uVar4 & 0x1f));
          if ((code *)*puVar5 != (code *)0x0) {
            (*(code *)*puVar5)();
          }
        }
        puVar5 = puVar5 + 1;
        uVar2 = uVar2 >> 1;
      }
      uVar2 = (uint)(*DAT_8002677c & DAT_8002571c & *DAT_80026778);
    } while (uVar2 != 0);
  }
  if ((*DAT_80026778 & *DAT_8002677c) == 0) {
    DAT_80026784 = 0;
  }
  else {
    iVar3 = DAT_80026784 + 1;
    bVar1 = 0x800 < DAT_80026784;
    DAT_80026784 = iVar3;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_8001e5ec(&DAT_80010504,*DAT_80026778,*DAT_8002677c);
    }
  }
  DAT_800256ee = 0;
  FUN_8001874c();
  return;
}

