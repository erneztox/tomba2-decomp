// FUN_08038d38

/* WARNING: Control flow encountered bad instruction data */

void FUN_08038d38(undefined1 *param_1)

{
  short sVar1;
  int iVar2;
  
  if (param_1[6] == '\0') {
    if ((DAT_800e7e85 == '\x18') && (DAT_800e7e80 == '\x06')) {
      DAT_800e7e86 = 2;
    }
    *param_1 = 2;
    func_0x00041768(param_1,5,4);
    *(undefined2 *)(param_1 + 0x40) = 0x10;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] == '\x01') {
    sVar1 = *(short *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x40) = sVar1 - 1U;
    if ((int)((uint)(ushort)(sVar1 - 1U) << 0x10) < 0) {
      func_0x00074590(0x1b,0,0);
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 6) = 0;
        *(undefined1 *)(iVar2 + 5) = 0;
        *(undefined1 *)(iVar2 + 4) = 3;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      func_0x0003116c(0x706,param_1 + 0x2c,0xffffffe2);
      param_1[5] = 0;
      param_1[4] = 4;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

