// FUN_08030bb8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08030bb8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    func_0x00077c40(param_1,0x80145a00,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00077cfc(param_1,0x80145a00,param_2,(int)(short)param_3);
  func_0x00129744(param_1,param_4 + 1);
  if (*(short *)(param_1 + (param_4 + 1) * 2 + 0x60) != 2) {
    *(undefined2 *)(param_1 + param_4 * 2 + 0x60) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x38) + 4);
  iVar2 = param_1 + param_4 * 2;
  if ((int)((uint)uVar1 << 0x10) >> 0x14 != (int)*(short *)(iVar2 + 0x60)) {
    func_0x00051b04(*(undefined4 *)(param_1 + 200),0x23);
    *(short *)(iVar2 + 0x60) = (short)uVar1 >> 4;
  }
  return;
}

