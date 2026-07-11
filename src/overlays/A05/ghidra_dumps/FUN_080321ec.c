// FUN_080321ec

/* WARNING: Control flow encountered bad instruction data */

void FUN_080321ec(int param_1)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined2 local_14;
  short sStack_12;
  undefined4 local_10;
  
  local_18 = *(undefined4 *)(param_1 + 0x2c);
  local_10 = *(undefined4 *)(param_1 + 0x34);
  sStack_12 = (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 0x10);
  _local_14 = CONCAT22(sStack_12 + 0xa0,(short)*(undefined4 *)(param_1 + 0x30));
  func_0x0003116c(0xd,&local_18,0xffffff9c);
  if (*(char *)(param_1 + 2) == '/') {
    uVar1 = 0xfffffffb;
    if (*(short *)(param_1 + 0x66) != 0) {
      *(undefined2 *)(param_1 + 0x66) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar1 = 0xfffffff8;
  }
  func_0x00074590(0x32,uVar1,0);
  return;
}

