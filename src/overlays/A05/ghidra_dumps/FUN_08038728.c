// FUN_08038728

/* WARNING: Control flow encountered bad instruction data */

void FUN_08038728(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined2 *)(param_1 + 0x40) = 0x20;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x4a) = 0xd000;
    uVar1 = 0x480;
    if (*(char *)(param_1 + 0x5e) == '\0') {
      uVar1 = 0x380;
    }
    *(undefined2 *)(param_1 + 0x50) = uVar1;
    *(undefined2 *)(param_1 + 0x48) = 0x10;
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(short *)(*(int *)(param_1 + 0xc0) + 4) =
         *(short *)(*(int *)(param_1 + 0xc0) + 4) - *(short *)(param_1 + 0x48);
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + 0x40;
    *(short *)(*(int *)(param_1 + 200) + 4) =
         *(short *)(*(int *)(param_1 + 200) + 4) + *(short *)(param_1 + 0x48);
    *(short *)(*(int *)(param_1 + 200) + 0xc) = *(short *)(*(int *)(param_1 + 200) + 0xc) + -0x40;
    *(short *)(*(int *)(param_1 + 0xc4) + 10) = *(short *)(*(int *)(param_1 + 0xc4) + 10) + -0x20;
    *(short *)(*(int *)(param_1 + 0xc4) + 0xc) = *(short *)(*(int *)(param_1 + 0xc4) + 0xc) + -0x40;
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    func_0x000518fc(param_1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

