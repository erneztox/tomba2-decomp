// FUN_0803c694

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803c694(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    func_0x00077c40(param_1,0x80149190,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00077cfc(param_1,0x80149190,param_2,(int)(short)param_3);
  iVar1 = *(short *)(param_2 * 2 + -0x7feb91a4) * 6;
  *(short *)(param_1 + 0x80) = *(short *)(iVar1 + -0x7feb9178);
  *(short *)(param_1 + 0x82) = *(short *)(iVar1 + -0x7feb9178) << 1;
  *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)(iVar1 + -0x7feb9176);
  *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)(iVar1 + -0x7feb9174);
  return;
}

