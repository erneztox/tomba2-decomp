// FUN_08019be4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019be4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = param_2 + 0x12;
  if (param_2 == 3) {
    iVar1 = *(byte *)(param_1 + 3) + 0xf;
  }
  if (_DAT_1f800264 != iVar1) {
    _DAT_1f800264 = (short)iVar1;
    func_0x00051b04(*(undefined4 *)(param_1 + 0xe4),0x12);
  }
  return;
}

