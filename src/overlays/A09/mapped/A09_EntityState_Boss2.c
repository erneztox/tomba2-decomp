// A09_EntityState_Boss2 - Boss entity state: phase transition

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08011ac0) */
/* WARNING: Removing unreachable block (ram,0x08011ae0) */
/* WARNING: Removing unreachable block (ram,0x08011af0) */
/* WARNING: Removing unreachable block (ram,0x08011b0c) */
/* WARNING: Removing unreachable block (ram,0x0010ab24) */
/* WARNING: Removing unreachable block (ram,0x08011b48) */
/* WARNING: Removing unreachable block (ram,0x08011b94) */
/* WARNING: Removing unreachable block (ram,0x08011b64) */

void A09_EntityState_Boss2(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_800bf883 != 0) {
    puVar1 = (undefined1 *)0x800bf870;
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

