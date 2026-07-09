// FUN_80132770

/* WARNING: Removing unreachable block (ram,0x801327d4) */
/* WARNING: Removing unreachable block (ram,0x801327f4) */
/* WARNING: Removing unreachable block (ram,0x80132804) */
/* WARNING: Removing unreachable block (ram,0x80132820) */
/* WARNING: Removing unreachable block (ram,0x80132834) */
/* WARNING: Removing unreachable block (ram,0x8013285c) */
/* WARNING: Removing unreachable block (ram,0x801328a8) */
/* WARNING: Removing unreachable block (ram,0x80132878) */

void FUN_80132770(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (DAT_800bf883 != 0) {
    puVar1 = &DAT_800bf870;
    iVar3 = iVar2;
    do {
      iVar2 = iVar3 + 1;
      if (((byte)puVar1[0x14] & 0x7f) == *(ushort *)(param_1 + 0x7e)) {
        FUN_8013b768();
        return;
      }
      puVar1 = &DAT_800bf871 + iVar3;
      iVar3 = iVar2;
    } while (iVar2 < (int)(uint)DAT_800bf883);
  }
  *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Subroutine does not return */
  *(undefined2 *)(iVar2 + 2) = 3;
  FUN_801402b8();
}

