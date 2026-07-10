// FUN_00040b48

void FUN_00040b48(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)trap(0x40);
  (*pcVar1)();
}

