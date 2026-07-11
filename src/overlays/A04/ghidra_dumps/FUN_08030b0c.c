// FUN_08030b0c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030b0c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  func_0x00129744(param_1,param_2 + 1);
  if (*(short *)(param_1 + (param_2 + 1) * 2 + 0x60) != 2) {
    *(undefined2 *)(param_1 + param_2 * 2 + 0x60) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x38) + 4);
  iVar2 = param_1 + param_2 * 2;
  if ((int)((uint)uVar1 << 0x10) >> 0x14 != (int)*(short *)(iVar2 + 0x60)) {
    func_0x00051b04(*(undefined4 *)(param_1 + 200),0x23);
    *(short *)(iVar2 + 0x60) = (short)uVar1 >> 4;
  }
  return;
}

