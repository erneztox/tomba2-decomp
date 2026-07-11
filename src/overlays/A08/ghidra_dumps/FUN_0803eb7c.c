// FUN_0803eb7c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803eb7c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  if (param_3 == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 < 2) {
    if (param_3 == 0) {
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      local_16 = *(undefined2 *)(param_1 + 0x36);
      local_1a = *(undefined2 *)(*(int *)(param_1 + param_2 * 4 + 0xc0) + 0x30);
      func_0x00074590(0x1b,0,0);
      func_0x000315d4(auStack_20);
    }
  }
  else {
    if (param_3 == 2) {
      halt_baddata();
    }
    if (param_3 == 3) {
      iVar1 = param_1 + param_2 * 4;
      local_10 = *(undefined2 *)(*(int *)(iVar1 + 0xc0) + 0x2c);
      local_c = *(undefined2 *)(*(int *)(iVar1 + 0xc0) + 0x34);
      local_e = *(undefined2 *)(param_1 + 0x7a);
      func_0x0011bd98(8,&local_10,0x10);
      func_0x00074590(7,7,0xffffffd8);
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

