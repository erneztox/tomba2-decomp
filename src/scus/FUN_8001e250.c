
undefined4 FUN_8001e250(undefined4 param_1,undefined4 param_2)

{
  if (DAT_80026da4 == 0) {
    FUN_8001d7d0(2,(uint)DAT_80026da0 << (DAT_80026db0 & 0x1f));
    FUN_8001d7d0(1);
    FUN_8001d7d0(3,param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,&DAT_80010a54);
  }
  FUN_8001d4ac(param_1,param_2);
  return param_2;
}

