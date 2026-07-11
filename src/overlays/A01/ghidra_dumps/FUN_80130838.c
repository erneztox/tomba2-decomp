// FUN_80130838

/* WARNING: Removing unreachable block (ram,0x8013083c) */
/* WARNING: Removing unreachable block (ram,0x80130844) */

void FUN_80130838(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)trap(1);
  (*pcVar1)();
}

