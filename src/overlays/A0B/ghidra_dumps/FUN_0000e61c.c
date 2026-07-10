// FUN_0000e61c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000e61c(int param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x0007a980(1,2,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80116f00;
    *(undefined1 *)(iVar1 + 2) = 0x4f;
    *(char *)(iVar1 + 3) = param_2;
    if (param_2 == '\0') {
      _DAT_1f8000c0 = 0xfe0c;
      _DAT_1f8000c2 = 0;
      _DAT_1f8000c4 = 0;
      func_0x000844c0(*(int *)(param_1 + 0xe4) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
      *(short *)(iVar1 + 0x2e) = *(short *)(*(int *)(param_1 + 0xe4) + 0x2c) + _DAT_1f8000c8;
      *(short *)(iVar1 + 0x32) = *(short *)(*(int *)(param_1 + 0xe4) + 0x30) + _DAT_1f8000ca;
      *(short *)(iVar1 + 0x36) = *(short *)(*(int *)(param_1 + 0xe4) + 0x34) + _DAT_1f8000cc;
      if (param_3 != 0) {
        *(undefined2 *)(iVar1 + 0x44) = 0xff00;
        *(undefined1 *)(iVar1 + 0xbe) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(iVar1 + 0x44) = 0x100;
      *(undefined1 *)(iVar1 + 0xbe) = 0;
      DAT_1f80025a = DAT_1f80025a + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    iVar2 = iVar1;
  }
  return iVar2;
}

