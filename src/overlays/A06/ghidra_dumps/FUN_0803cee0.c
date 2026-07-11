// FUN_0803cee0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803cee0(undefined1 *param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 4) == '\x02') {
    *param_1 = 2;
    param_1[6] = 0;
    param_1[5] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((byte)param_1[6] < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0803cf3c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)(byte)param_1[6] * 4 + -0x7fef5e44))();
    return;
  }
  sVar1 = *(short *)(param_1 + 0x40) + 0xc0;
  *(short *)(param_1 + 0x40) = sVar1;
  if (*(short *)(param_1 + 0x48) == 0) {
    iVar2 = func_0x00083e80((int)sVar1);
    **(undefined2 **)(param_1 + 0xc0) = (short)((uint)(iVar2 * 0xd) >> 9);
    iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x40));
    **(undefined2 **)(param_1 + 0xc4) = (short)(iVar2 * -0x68 >> 0xc);
    iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x40));
    *(short *)(*(int *)(param_1 + 0xc0) + 4) = (short)((uint)(iVar2 * 0xd) >> 9);
    iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x40));
    *(short *)(*(int *)(param_1 + 0xc4) + 4) = (short)(iVar2 * -0x68 >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = func_0x00083e80((int)sVar1);
  **(undefined2 **)(param_1 + 0xc0) =
       (short)((uint)((iVar2 * 0x68 >> 0xc) * (int)*(short *)(param_1 + 0x48)) >> 8);
  iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x40));
  **(undefined2 **)(param_1 + 0xc4) =
       (short)((uint)(-(iVar2 * 0x68 >> 0xc) * (int)*(short *)(param_1 + 0x48)) >> 8);
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x40));
  *(short *)(*(int *)(param_1 + 0xc0) + 4) =
       (short)((uint)((iVar2 * 0x68 >> 0xc) * (int)*(short *)(param_1 + 0x4c)) >> 8);
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x40));
  *(short *)(*(int *)(param_1 + 0xc4) + 4) =
       (short)((uint)(-(iVar2 * 0x68 >> 0xc) * (int)*(short *)(param_1 + 0x4c)) >> 8);
  iVar2 = *(int *)(param_1 + 0xc0);
  if (0 < *(short *)(iVar2 + 2)) {
    *(short *)(iVar2 + 2) = *(short *)(iVar2 + 2) + -8;
    if (*(short *)(*(int *)(param_1 + 0xc0) + 2) < 1) {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0;
    }
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2);
  }
  *(ushort *)(*(int *)(param_1 + 0xc0) + 0xc) = *(ushort *)(param_1 + 0x40) & 0xfff;
  *(ushort *)(*(int *)(param_1 + 0xc4) + 0xc) = -(*(ushort *)(param_1 + 0x40) & 0xfff);
  if (param_1[1] != '\0') {
    func_0x000518fc(param_1);
  }
  return;
}

