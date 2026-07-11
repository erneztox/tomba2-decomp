// FUN_80144b50

/* WARNING: Removing unreachable block (ram,0x80144b60) */
/* WARNING: Removing unreachable block (ram,0x80144b68) */

void FUN_80144b50(void)

{
  code *pcVar1;
  
  trap(5);
  trap(5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)trap(5);
  (*pcVar1)();
}

