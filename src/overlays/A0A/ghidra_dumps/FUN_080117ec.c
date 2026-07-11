// FUN_080117ec

/* WARNING: Control flow encountered bad instruction data */

void FUN_080117ec(undefined4 param_1,int param_2)

{
  if (*(char *)(param_2 + 0x47) == '\x02') {
    func_0x001097fc(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0001f650(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
  return;
}

