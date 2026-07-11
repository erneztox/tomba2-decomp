// FUN_0801254c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801254c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x160) = 0;
  if (param_3 == 0) {
    if (*(byte *)(param_1 + 7) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08012590 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef7040))();
      return uVar1;
    }
  }
  else {
    func_0x00062a30(param_1,param_2,3);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x158) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = (int)((*(ushort *)(param_1 + 0x56) + 0x800) * 0x10000) >> 0x10;
  iVar2 = func_0x00083f50(iVar3);
  *(short *)(param_1 + 0x2e) =
       *(short *)(iVar4 + 0x2c) + (short)(iVar2 * *(short *)(param_1 + 0x152) >> 0xc);
  iVar2 = func_0x00083e80(iVar3);
  *(short *)(param_1 + 0x36) =
       *(short *)(iVar4 + 0x34) - (short)(iVar2 * *(short *)(param_1 + 0x152) >> 0xc);
  *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x30) + *(short *)(param_1 + 0x156);
  return 0;
}

