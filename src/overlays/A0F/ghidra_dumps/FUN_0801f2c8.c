// FUN_0801f2c8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801f2c8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar2 = func_0x0003116c(0x1005,param_1 + 0x2c,0xfffffff6);
    if (iVar2 == 0) {
      return 0;
    }
    func_0x00074590(0x84,0x18,0);
    *(int *)(param_1 + 0x10) = iVar2;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    sVar1 = *(short *)(param_1 + 0x40) + 1;
    *(short *)(param_1 + 0x40) = sVar1;
    if (sVar1 < 10) {
      return 0;
    }
    iVar3 = 0;
    iVar2 = param_1;
    if (*(char *)(param_1 + 9) != '\0') {
      do {
        func_0x00051b04(*(undefined4 *)(iVar2 + 0xc0),0x14,iVar3);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 9));
    }
    *(undefined2 *)(param_1 + 0x56) = 0x60e;
    func_0x00041718(param_1,6,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

