// FUN_0801e9a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801e9a0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined2 *puVar5;
  
  bVar1 = *(byte *)(param_1 + 5);
  puVar5 = (undefined2 *)(param_1 + 0x60);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x60) == 0) {
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 5) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_0801eb08:
    *puVar5 = 0;
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(short *)(param_1 + 0x60) == 1) {
        *(undefined1 *)(param_1 + 5) = 1;
        halt_baddata();
      }
      goto LAB_0801eb08;
    }
    *puVar5 = 0;
  }
  else {
    if (bVar1 == 2) {
      if (*(short *)(param_1 + 0x60) == 0) {
        if (*(char *)(param_1 + 6) == '\0') {
          *(undefined2 *)(param_1 + 0x68) = 0x400;
          *(short *)(param_1 + 0x66) = -0xc80 - *(short *)(param_1 + 100);
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          halt_baddata();
        }
        if (*(char *)(param_1 + 6) == '\x01') {
          sVar3 = *(short *)(param_1 + 0x68) + 0xf0;
          *(short *)(param_1 + 0x68) = sVar3;
          if (0xfff < sVar3) {
            uVar2 = *(ushort *)(param_1 + 0x66);
            *(short *)(param_1 + 0x66) = (short)uVar2 >> 1;
            if ((int)((uint)uVar2 << 0x10) >> 0x11 == 0) {
              *(undefined2 *)(param_1 + 0x66) = 0;
              *(undefined2 *)(param_1 + 0x68) = 0;
              *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) & 0xfff;
          }
          iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x68));
          *(short *)(param_1 + 100) = (short)(iVar4 * *(short *)(param_1 + 0x66) >> 0xc) + -0xc80;
          halt_baddata();
        }
        *puVar5 = 0;
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x60) = 1;
      goto LAB_0801eb08;
    }
    *puVar5 = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

