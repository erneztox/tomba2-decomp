// FUN_0801b1dc

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b1dc(int param_1,uint param_2,short param_3,int param_4)

{
  if ((uint)*(byte *)(param_1 + 0x46) != (param_2 & 0xff)) {
    if (param_4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x000416a8(param_1,0xe,0x80140f7c);
    func_0x00041718(param_1,param_2,(int)param_3);
  }
  return;
}

