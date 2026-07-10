// FUN_00001a5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00001ac0) */
/* WARNING: Removing unreachable block (ram,0x00001ae0) */
/* WARNING: Removing unreachable block (ram,0x00001af0) */
/* WARNING: Removing unreachable block (ram,0x00001b0c) */
/* WARNING: Removing unreachable block (ram,0x00001b20) */
/* WARNING: Removing unreachable block (ram,0x00001b48) */
/* WARNING: Removing unreachable block (ram,0x00001b94) */
/* WARNING: Removing unreachable block (ram,0x00001b64) */

void FUN_00001a5c(int param_1)

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

