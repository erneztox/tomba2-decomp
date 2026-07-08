
void FUN_80018b50(uint param_1)

{
  int iVar1;
  ushort *in_v0;
  uint uVar2;
  uint in_v1;
  undefined4 *unaff_s1;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar2 = (uint)*in_v0 & in_v1 & param_1;
  iVar1 = DAT_80026784;
  do {
    if (uVar2 == 0) {
      if ((*DAT_80026778 & *DAT_8002677c) == 0) {
        DAT_80026784 = 0;
      }
      else {
        DAT_80026784 = iVar1 + 1;
        if (0x800 < iVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(&DAT_80010504,*DAT_80026778,*DAT_8002677c);
        }
      }
      DAT_800256ee = 0;
      FUN_8001874c();
      return;
    }
    uVar3 = 0;
    puVar4 = unaff_s1;
    DAT_80026784 = iVar1;
    for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
      puVar4 = puVar4 + 1;
      if (10 < (int)uVar3) break;
      if ((uVar2 & 1) != 0) {
        *DAT_80026778 = ~(ushort)(1 << (uVar3 & 0x1f));
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)();
        }
      }
      uVar3 = uVar3 + 1;
    }
    uVar2 = (uint)(*DAT_8002677c & DAT_8002571c & *DAT_80026778);
    iVar1 = DAT_80026784;
  } while( true );
}

