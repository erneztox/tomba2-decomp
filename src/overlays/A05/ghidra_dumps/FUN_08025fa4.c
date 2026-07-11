// FUN_08025fa4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08025fa4(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_800bf816 == '\0') {
    func_0x0007778c();
    iVar2 = func_0x0012b118(param_1);
    if ((((iVar2 != 0) && (*(char *)(param_1 + 1) != '\0')) && (DAT_800bf809 == '\0')) &&
       ((DAT_1f800137 == '\0' && (*(byte *)(param_1 + 5) < 0xc)))) {
                    /* WARNING: Could not emulate address calculation at 0x08026034 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6594))();
      return;
    }
    cVar1 = *(char *)(param_1 + 0x2a);
    if (cVar1 == '\x01') {
      if (*(short *)(param_1 + 0x36) < 0x2d6e) {
        *(undefined2 *)(param_1 + 0x36) = 0x2d6e;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (cVar1 == '\b') {
      if (0x2630 < *(short *)(param_1 + 0x36)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x36) < 0x1d5f) {
        *(undefined2 *)(param_1 + 0x36) = 0x1d5f;
        halt_baddata();
      }
    }
    else if (cVar1 == '\x06') {
      if (0x2760 < *(short *)(param_1 + 0x36)) {
        halt_baddata();
      }
      if (*(short *)(param_1 + 0x36) < 0x1e91) {
        *(undefined2 *)(param_1 + 0x36) = 0x1e91;
        *(undefined2 *)(param_1 + 0x66) = 1;
      }
    }
    func_0x000493e8(param_1,0,(int)-*(short *)(param_1 + 0x84));
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x00076d68(param_1);
      func_0x000518fc(param_1);
      if ((*(short *)(*(int *)(param_1 + 0x38) + 2) == 1) && ((_DAT_1f80017c & 7) == 0)) {
        func_0x00074590(6,0x1e,0xffffffd8);
      }
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
  }
  return;
}

