// FUN_08026ac0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026ac0(int param_1)

{
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  short local_e;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x0011f700(param_1);
    func_0x00074590(0x87,0,0);
    if (*(char *)(param_1 + 3) == '\x06') {
      local_16 = *(undefined2 *)(param_1 + 0x2e);
      local_12 = *(undefined2 *)(param_1 + 0x32);
      local_e = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(0x506,auStack_18,0xffffff9c);
      local_e = *(short *)(param_1 + 0x36) + -200;
      func_0x0003116c(0x506,auStack_18,0xffffff9c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0003116c(0x506,param_1 + 0x2c,0xffffffb0);
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(char *)(param_1 + 3) == '\x06') && ((_DAT_1f80017c & 3) == 0)) {
    local_16 = *(undefined2 *)(param_1 + 0x2e);
    local_12 = *(short *)(param_1 + 0x32) + -200;
    local_e = *(short *)(param_1 + 0x36) + (_DAT_1f80017c & 0xc) * 0x20 + -0xc0;
    func_0x0003116c(0x504,auStack_18,0xffffff9c);
  }
  *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) = *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + -0x100
  ;
  if (*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) < 0x101) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  func_0x00051844(param_1);
  return;
}

