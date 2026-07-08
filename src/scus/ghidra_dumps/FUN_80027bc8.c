
/* WARNING: Control flow encountered bad instruction data */

void FUN_80027bc8(void)

{
  uint uVar1;
  uint *puVar2;
  int extraout_v1;
  int in_a3;
  int in_t8;
  undefined4 in_f7;
  
  func_0x89073c10();
  uVar1 = in_a3 + 0x18f8U & 3;
  puVar2 = (uint *)((in_a3 + 0x18f8U) - uVar1);
  *puVar2 = *puVar2 & 0xffffffffU >> (4 - uVar1) * 8 | extraout_v1 << uVar1 * 8;
  *(undefined4 *)(in_t8 + 0x471c) = in_f7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

