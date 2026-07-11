// FUN_08038d78

/* WARNING: Control flow encountered bad instruction data */

bool FUN_08038d78(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x3f;
    func_0x00041718(param_1,0x14,8);
    *(undefined2 *)(param_1 + 0x72) = 0xe200;
    *(undefined2 *)(param_1 + 0x44) = 0xc00;
    func_0x00041ac0(param_1);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x72) + 0x240;
  *(short *)(param_1 + 0x72) = sVar1;
  if (0x3800 < sVar1) {
    *(undefined2 *)(param_1 + 0x72) = 0x3800;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x72) * 0x100;
  func_0x00041a1c(param_1,1);
  func_0x00041ac0(param_1);
  return 0x3cbd < *(short *)(param_1 + 0x36);
}

