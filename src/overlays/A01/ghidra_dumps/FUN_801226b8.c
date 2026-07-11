// FUN_801226b8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_801226b8(int param_1,int param_2)

{
  int iVar1;
  int *unaff_s2;
  
  iVar1 = func_0x80072ddc(0,1,4,0x1f);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0x8012b464;
  *(char *)(iVar1 + 3) = (char)param_2;
  *(undefined2 *)(iVar1 + 0x58) = 0;
  *(undefined2 *)(iVar1 + 0x56) = 0;
  *(undefined2 *)(iVar1 + 0x54) = 0;
  *(int *)(iVar1 + 0x10) = param_1;
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  if (iVar1 <= *(short *)(param_2 + 0x76)) {
    *unaff_s2 = (int)*(short *)(param_2 + 0x76) << 0x10;
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
  func_0x80056b48(param_1,0);
  func_0x80055d5c(param_1);
  if (*(short *)(param_1 + 0x44) == 0) {
    func_0x80054198(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

