// FUN_08017148

/* WARNING: Control flow encountered bad instruction data */

void FUN_08017148(undefined4 param_1,int param_2)

{
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  if (*(char *)(param_2 + 3) == '\0') {
    local_16 = *(undefined2 *)(param_2 + 4);
    local_12 = *(undefined2 *)(param_2 + 6);
    local_e = *(undefined2 *)(param_2 + 8);
    func_0x00110a98(auStack_18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00074590(0x82,0,0);
  return;
}

