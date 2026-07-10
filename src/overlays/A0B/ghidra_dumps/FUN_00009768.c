// FUN_00009768

/* WARNING: Control flow encountered bad instruction data */

void FUN_00009768(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    uVar2 = func_0x0009a450();
    sVar3 = (uVar2 & 0x1ff) + 0x180;
    *(short *)(param_1 + 0x4a) = sVar3;
    *(short *)(param_1 + 0x48) = sVar3;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    iVar4 = func_0x0002b278(param_1);
    if (iVar4 != 0) {
      return;
    }
    func_0x00031780(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

