// FUN_08031ac8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08031ac8(undefined1 *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  if (param_1[6] == '\0') {
    sVar1 = *(short *)(param_1 + 100);
    *(ushort *)(param_1 + 100) = sVar1 + (ushort)(byte)param_1[7];
    if ((short)(sVar1 + (ushort)(byte)param_1[7]) < 2) {
      if ((param_1[3] & 0x1f) == 0x18) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x25);
      param_1[4] = 1;
      if (*(short *)(param_1 + 0x44) != 0) {
        param_1[5] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[5] = 0;
      func_0x00074590(0x82,0,0);
      *param_1 = 1;
    }
    else {
      if (param_1[1] != '\0') {
        func_0x001327f8(param_1,0);
        func_0x001327f8(param_1,1);
        func_0x001327f8(param_1,2);
        func_0x00074590(0x83,0,0);
      }
      *(undefined2 *)(param_1 + 0x40) = 4;
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else if (param_1[6] == '\x01') {
    sVar1 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar1;
    if (sVar1 != 0) {
      sVar2 = 0x1e;
      if (1 < sVar1) {
        sVar2 = 0x3c;
      }
      *(short *)(param_1 + 0x58) = sVar2;
      if ((*(ushort *)(param_1 + 0x40) & 1) != 0) {
        *(short *)(param_1 + 0x58) = -sVar2;
      }
      return;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 5) = 0;
      *(undefined1 *)(iVar3 + 4) = 2;
    }
    param_1[4] = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

