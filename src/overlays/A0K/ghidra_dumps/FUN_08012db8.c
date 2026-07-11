// FUN_08012db8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08012db8(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  short local_22;
  undefined2 local_1e;
  
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    if (*(char *)(param_1 + 0x29) == '\x03') {
      local_26 = *(undefined2 *)(param_1 + 0x2e);
      local_22 = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x84);
      local_1e = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(8,auStack_28,0xffffffb0);
      func_0x00074590(2,0,0);
      if (*(char *)(param_1 + 0x46) == '\x10') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      uVar2 = *(byte *)(param_1 + 0x46) - 4;
      if (uVar2 < 0xd) {
                    /* WARNING: Could not emulate address calculation at 0x08012e70 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar2 * 4 + -0x7fef7000))(8);
        return;
      }
    }
    *(undefined2 *)(param_1 + 0x40) = 9;
  }
  return;
}

