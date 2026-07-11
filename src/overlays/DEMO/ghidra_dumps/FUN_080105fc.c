// FUN_080105fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080105fc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  uVar1 = _DAT_800ecf58;
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0007e998((int)*(short *)(param_2 * 2 + param_1 * 4 + -0x7fef88fc),0xb0,4);
  local_38 = 0x50;
  local_30 = 0x5a;
  local_37 = 4;
  local_36 = 0;
  local_2e = 0xb4;
  local_2c = 0;
  local_2a = 0;
  func_0x0007e1b8(&local_30,_DAT_80017574,uVar1,&local_38);
  local_30 = 0xe6;
  local_37 = 4;
  local_38 = 0;
  local_36 = 0;
  local_2e = 0xb4;
  local_2c = 0;
  local_2a = 0;
  func_0x0007e1b8(&local_30,_DAT_80017578,uVar1,&local_38);
  return;
}

