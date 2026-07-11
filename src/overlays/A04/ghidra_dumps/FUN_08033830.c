// FUN_08033830

/* WARNING: Control flow encountered bad instruction data */

void FUN_08033830(int param_1)

{
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 1;
    local_16 = *(undefined2 *)(param_1 + 0x2e);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    local_12 = *(undefined2 *)(param_1 + 0x32);
    local_e = *(undefined2 *)(param_1 + 0x36);
    func_0x0003116c(0x506,auStack_18,0xffffffce);
    if ((*(byte *)(param_1 + 3) & 0x7f) == 0xb) {
      func_0x00127d70(param_1,1 - (uint)*(byte *)(param_1 + 0x46),0);
    }
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) = *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + -0x100
  ;
  if (*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) < 0x101) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}

