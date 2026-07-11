// FUN_0802d898

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802d8fc) */
/* WARNING: Removing unreachable block (ram,0x0802d91c) */
/* WARNING: Removing unreachable block (ram,0x0802d92c) */
/* WARNING: Removing unreachable block (ram,0x0802d948) */
/* WARNING: Removing unreachable block (ram,0x00126960) */
/* WARNING: Removing unreachable block (ram,0x0802d984) */
/* WARNING: Removing unreachable block (ram,0x0802d9d0) */
/* WARNING: Removing unreachable block (ram,0x0802d9a0) */

void FUN_0802d898(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_800bf883 != 0) {
    puVar1 = &DAT_800bf870;
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 1;
      if (((byte)puVar1[0x14] & 0x7f) == *(ushort *)(param_1 + 0x7e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar1 = &DAT_800bf871 + iVar2;
      iVar2 = iVar3;
    } while (iVar3 < (int)(uint)DAT_800bf883);
  }
  *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

