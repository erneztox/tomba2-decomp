// FUN_08011f48

/* WARNING: Control flow encountered bad instruction data */

void FUN_08011f48(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00022f04();
  if (iVar1 != 0) {
    if ((*(byte *)(param_2 + 0x46) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_1 + 0x2b) = (char)(*(ushort *)(param_1 + 0x140) >> 4);
    func_0x00022d08(param_1,param_2,1,0);
  }
  return;
}

