
/* WARNING: Control flow encountered bad instruction data */

void FUN_80022e60(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int in_t0;
  
  uVar1 = in_t0 * 0x40000000 - 0xd;
  uVar2 = uVar1 & 3;
  puVar3 = (uint *)(uVar1 - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (uint)(in_t0 * 0x40000000) >> (3 - uVar2) * 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

