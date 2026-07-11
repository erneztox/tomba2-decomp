// FUN_080452e8

/* WARNING: Control flow encountered bad instruction data */

int FUN_080452e8(short param_1,int param_2,undefined4 *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x0007a980(2,2,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8013dfe4;
    *(int *)(iVar1 + 0x10) = param_2;
    *(undefined1 *)(iVar1 + 2) = 0x43;
    *(char *)(iVar1 + 3) = (char)param_1;
    *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
    if (param_1 == 1) {
      *(undefined4 *)(iVar1 + 0x2c) = *param_3;
      *(undefined4 *)(iVar1 + 0x30) = param_3[1];
      *(undefined4 *)(iVar1 + 0x34) = param_3[2];
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(iVar1 + 0x2c) = *param_3;
    *(undefined4 *)(iVar1 + 0x30) = param_3[1];
    *(undefined4 *)(iVar1 + 0x34) = param_3[2];
    *(short *)(iVar1 + 0x4e) = *param_4 * 0x32;
    *(short *)(iVar1 + 0x50) = param_4[1] * 0x32;
    *(short *)(iVar1 + 0x52) = param_4[2] * 0x32;
    iVar2 = iVar1;
  }
  return iVar2;
}

