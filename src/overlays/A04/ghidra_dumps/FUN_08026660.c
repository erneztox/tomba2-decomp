// FUN_08026660

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08026660(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_2 = param_2 * 10;
  iVar2 = func_0x0004d7ec((int)*(short *)(param_2 + -0x7febebea),1);
  uVar3 = 0;
  if (iVar2 == 0) {
    iVar2 = func_0x00072ddc(param_1,2,2,8);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0x80040558;
      *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
      uVar1 = *(undefined1 *)(param_1 + 0x2a);
      *(undefined1 *)(iVar2 + 0x5e) = 1;
      *(undefined1 *)(iVar2 + 0x2a) = uVar1;
      *(undefined2 *)(iVar2 + 0xe) = *(undefined2 *)(param_2 + -0x7febebea);
      *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(param_2 + -0x7febebe8);
      *(undefined2 *)(iVar2 + 0x68) = *(undefined2 *)(param_2 + -0x7febebe6);
      *(undefined2 *)(iVar2 + 0x60) = *(undefined2 *)(param_2 + -0x7febebe4);
      if (*(short *)(iVar2 + 0x68) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(iVar2 + 0x62) = 4;
      *(undefined2 *)(iVar2 + 100) = 2;
    }
    uVar3 = 1;
  }
  return uVar3;
}

