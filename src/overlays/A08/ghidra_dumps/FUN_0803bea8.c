// FUN_0803bea8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803bea8(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = func_0x00135158();
  if (iVar3 != -1) {
    iVar3 = func_0x00134904(param_1);
    func_0x00135574(param_1,100,300);
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      if (0 < iVar3) {
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 != 1) {
          return;
        }
        *(undefined2 *)(param_1 + 0x40) = 6;
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x19,1);
        func_0x00135630(param_1,1,6);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (iVar3 < 1) {
            return;
          }
          *(undefined1 *)(param_1 + 6) = 1;
          *(undefined2 *)(param_1 + 0x40) = 0x4b;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 1;
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}

