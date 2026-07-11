// FUN_0802aec4

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802aec4(int param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(param_1 + 0x29) == '\0') {
      iVar3 = *(int *)(param_1 + 200);
      bVar1 = false;
      if (-0x200 < *(short *)(iVar3 + 2)) {
        sVar2 = *(short *)(iVar3 + 2) + -8;
        *(short *)(iVar3 + 2) = sVar2;
        if (sVar2 < -0x1ff) {
          func_0x00074590(0x1a,0x10,0xffffffe2);
          *(undefined2 *)(*(int *)(param_1 + 200) + 2) = 0xfe00;
        }
        bVar1 = false;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 200);
      if (-0x1c1 < *(short *)(iVar3 + 2)) {
        *(undefined2 *)(param_1 + 0x40) = 0xf;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar2 = *(short *)(iVar3 + 2) + 8;
      *(short *)(iVar3 + 2) = sVar2;
      bVar1 = true;
      if (-0x1c1 < sVar2) {
        func_0x00074590(0x1a,10,0);
        *(undefined2 *)(*(int *)(param_1 + 200) + 2) = 0xfe40;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (((!bVar1) || (DAT_800bf93e != -1)) || (DAT_800bf8df != -1)) goto LAB_0802b0c0;
    DAT_800bfa3f = DAT_800bfa3f | 8;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    if (*(char *)(param_1 + 0x29) == '\0') {
      iVar3 = *(int *)(param_1 + 200);
      sVar2 = *(short *)(iVar3 + 2) + -8;
      if ((-0x200 < *(short *)(iVar3 + 2)) && (*(short *)(iVar3 + 2) = sVar2, sVar2 < -0x1ff)) {
        func_0x00074590(0x1a,0x10,0xffffffe2);
        *(undefined2 *)(*(int *)(param_1 + 200) + 2) = 0xfe00;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 200);
      sVar2 = *(short *)(iVar3 + 2) + 8;
      if (-0x1c1 < *(short *)(iVar3 + 2)) {
        *(undefined2 *)(param_1 + 0x40) = 0xf;
        halt_baddata();
      }
      *(short *)(iVar3 + 2) = sVar2;
      if (-0x1c1 < sVar2) {
        func_0x00074590(0x1a,10,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
LAB_0802b0c0:
    func_0x00123d10(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

