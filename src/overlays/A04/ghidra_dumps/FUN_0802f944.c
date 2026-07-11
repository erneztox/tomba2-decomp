// FUN_0802f944

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802f944(int param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 0x10);
  if ((((*(char *)(param_1 + 0xbf) == '\0') && (pcVar1 != (char *)0x0)) &&
      (*(char *)(param_1 + 0x2b) == '\0')) && ((pcVar1[0x2b] != '\0' || (*pcVar1 == '\x02')))) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    func_0x00129b54(param_1,0,0xc,3);
    *(undefined2 *)(param_1 + 0x62) = 0x3c;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0xff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0802f9f4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5f44))(param_1);
    return;
  }
  return;
}

