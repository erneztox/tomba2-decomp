// FUN_0802ce3c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802ce3c(int param_1,int param_2)

{
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  
  if (*(ushort *)(param_1 + 0x36) - 0x2560 < 0x87f) {
    if (param_2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_10 = 0x25b2;
    uStack_e = 0xf600;
    local_c = *(undefined2 *)(param_1 + 0x36);
    func_0x0002ae0c(&local_10,0x60,1);
  }
  return;
}

