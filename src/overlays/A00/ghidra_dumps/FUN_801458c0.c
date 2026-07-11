// FUN_801458c0

/* WARNING: Removing unreachable block (ram,0x801458c4) */

void FUN_801458c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)trap(0);
  (*pcVar1)();
}

