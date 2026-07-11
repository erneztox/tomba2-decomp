// FUN_0802b18c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802b18c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    iVar3 = *(int *)(param_1 + 200);
    uVar2 = 0;
    if (-0x200 < *(short *)(iVar3 + 2)) {
      sVar1 = *(short *)(iVar3 + 2) + -8;
      *(short *)(iVar3 + 2) = sVar1;
      if (sVar1 < -0x1ff) {
        func_0x00074590(0x1a,0x10,0xffffffe2);
        *(undefined2 *)(*(int *)(param_1 + 200) + 2) = 0xfe00;
      }
      uVar2 = 0;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 200);
    if (-0x1c1 < *(short *)(iVar3 + 2)) {
      *(undefined2 *)(param_1 + 0x40) = 0xf;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = *(short *)(iVar3 + 2) + 8;
    *(short *)(iVar3 + 2) = sVar1;
    uVar2 = 1;
    if (-0x1c1 < sVar1) {
      func_0x00074590(0x1a,10,0);
      *(undefined2 *)(*(int *)(param_1 + 200) + 2) = 0xfe40;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return uVar2;
}

