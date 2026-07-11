// FUN_08029f04

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08029f5c) */
/* WARNING: Removing unreachable block (ram,0x08029f6c) */
/* WARNING: Removing unreachable block (ram,0x08029f74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08029f04(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    iVar3 = (int)_DAT_1f800160;
    *(undefined2 *)(param_1 + 0x40) = 0x10;
    iVar2 = (int)*(short *)(param_1 + 0x40);
    iVar1 = ((int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36)) * 0x10;
    if (iVar2 == 0) {
      trap(0x1c00);
    }
    if ((iVar2 == -1) && (iVar1 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 0x48) = (short)(((iVar3 - *(short *)(param_1 + 0x2e)) * 0x10) / 0x10);
    *(short *)(param_1 + 0x4c) = (short)(iVar1 / iVar2);
    func_0x00041768(param_1,3,4);
  }
  else if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(short *)(param_1 + 0x40) != 0) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x1000;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x1000;
      *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + -0x100;
      *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + -0x100;
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x100;
      return 0;
    }
    *(undefined2 *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xba) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    func_0x0004d4c4(0x5f,1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

