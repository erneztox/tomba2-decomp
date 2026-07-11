// FUN_08037b04

/* WARNING: Control flow encountered bad instruction data */

void FUN_08037b04(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    func_0x000310f4(param_2,0xffffffec);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = func_0x0003116c(param_2,param_1,0xffffffec);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return;
}

