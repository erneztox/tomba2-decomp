// FUN_0802a244

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802a2a8) */
/* WARNING: Removing unreachable block (ram,0x0802a2c8) */
/* WARNING: Removing unreachable block (ram,0x0802a2d8) */
/* WARNING: Removing unreachable block (ram,0x0802a2f4) */
/* WARNING: Removing unreachable block (ram,0x0012330c) */
/* WARNING: Removing unreachable block (ram,0x0802a330) */
/* WARNING: Removing unreachable block (ram,0x0802a37c) */
/* WARNING: Removing unreachable block (ram,0x0802a34c) */

void FUN_0802a244(int param_1)

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

