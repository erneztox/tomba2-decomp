// FUN_0802da84

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802e11c) */
/* WARNING: Removing unreachable block (ram,0x001270c8) */

undefined4 FUN_0802da84(int param_1)

{
  undefined4 uVar1;
  
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x50);
  if (*(byte *)(param_1 + 7) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0802dad4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef6060))();
    return uVar1;
  }
  if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
    return 0;
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) - (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

