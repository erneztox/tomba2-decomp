// FUN_08013ef4

/* WARNING: Control flow encountered bad instruction data */

void FUN_08013ef4(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x158) + 2);
  if (cVar1 == 'G') {
    func_0x0010c268();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cVar1 == '\x01') {
    func_0x0010c7ec(param_1,*(int *)(param_1 + 0x158),param_2);
  }
  return;
}

