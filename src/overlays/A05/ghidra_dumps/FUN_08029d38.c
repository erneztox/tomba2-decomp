// FUN_08029d38

/* WARNING: Control flow encountered bad instruction data */

void FUN_08029d38(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 2) == '.') {
    bVar2 = *(byte *)(param_1 + 0x5f) & 7;
    if (bVar2 == 2) {
      if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08029de4;
    }
    if ((bVar2 == 3) && (*(char *)(param_1 + 0xbe) == '\x01')) {
      return;
    }
  }
  if (*(char *)(param_1 + 0xbe) == '\0') {
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08029de4:
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) - (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) - (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
  if (param_2 == 0) {
    iVar1 = (int)*(short *)(param_1 + 0x44);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar1;
  }
  func_0x0004954c(param_1,(int)((*(ushort *)(param_1 + 0x80) + 0x20) * 0x10000) >> 0x10,0);
  return;
}

