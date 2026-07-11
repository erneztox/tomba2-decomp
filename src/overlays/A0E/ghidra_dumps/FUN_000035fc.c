// FUN_000035fc

/* WARNING: Control flow encountered bad instruction data */

void FUN_000035fc(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (DAT_800bf870 == 0xf) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (uint)*(byte *)(*(int *)((uint)(*(short *)(param_1 + 0x6e) < 2) * 4 +
                                   (DAT_800bf870 - 10) * 8 + -0x7fee52a0) +
                         (*(ushort *)(param_1 + 0x66) & 0xf));
  *(ushort *)(param_1 + 0x66) = *(ushort *)(param_1 + 0x66) + 1;
  *(undefined1 *)(param_1 + 6) = 0;
  if (uVar2 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00003694 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar2 * 4 + -0x7fef6ff0))();
    return;
  }
  *(undefined2 *)(param_1 + 100) = 5;
  uVar2 = func_0x0009a450();
  uVar1 = 3;
  if ((uVar2 & 0x40) == 0) {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 5) = uVar1;
  return;
}

