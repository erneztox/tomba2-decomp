// FUN_08010b70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08010c54) */
/* WARNING: Removing unreachable block (ram,0x08010c94) */

void FUN_08010b70(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x82) + 800 <
      (int)((uint)*(ushort *)(param_1 + 0x80) +
            ((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(*(int *)(param_2 + 0xc0) + 0x34))
            + 400 & 0xffff)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)(param_2 + 8);
  iVar2 = 0;
  if (*pbVar1 != 0) {
    do {
      if ((*(char *)(*(int *)(param_2 + 0xc0) + 0x3f) != '\x01') &&
         ((int)((uint)*(ushort *)(param_1 + 0x80) +
                ((uint)*(ushort *)(param_1 + 0x2e) -
                (uint)*(ushort *)(*(int *)(param_2 + 0xc0) + 0x2c)) + 0x60 & 0xffff) <=
          *(short *)(param_1 + 0x82) + 0xc0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 4;
    } while (iVar2 < (int)(uint)*pbVar1);
  }
  return;
}

