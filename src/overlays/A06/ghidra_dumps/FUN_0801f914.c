// FUN_0801f914

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801f914(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (((int)(uint)DAT_800bf9cb >> (*(byte *)(param_1 + 0x5e) & 0x1f) & 1U) == 0) {
LAB_0801fa34:
      func_0x00118664(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 5) = 1;
    DAT_1f800137 = 2;
    *(undefined2 *)(param_1 + 0x40) = 0;
    DAT_800bf841 = 1;
    DAT_800bf809 = 1;
    func_0x0006e1c0(8);
    func_0x001182f4(param_1);
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    iVar1 = func_0x001182f4(param_1);
    if (iVar1 == 0) {
      if ((*(ushort *)(param_1 + 0x40) & 7) == 0) {
        uVar2 = func_0x0003116c(0x715,param_1 + 0x2c,0xffffffa6);
        *(undefined4 *)(param_1 + 0x10) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined2 *)(iVar1 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_1 + 0x36);
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
      goto LAB_0801fa34;
    }
    *(undefined1 *)(param_1 + 4) = 3;
    DAT_800bfa4c = DAT_800bfa4c + '\x01';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

