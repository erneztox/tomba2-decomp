// FUN_08040a4c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08040a4c(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sVar4 = *(short *)(param_1 + 0x5e) + 0x88;
        *(short *)(param_1 + 0x5e) = sVar4;
        if (0xfff < sVar4) {
          *(undefined1 *)(param_1 + 4) = 3;
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 1) = 1;
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x5e) = 0;
    uVar2 = func_0x0009a450();
    *(undefined2 *)(param_1 + 0x60) = uVar2;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x44;
  *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 0x199;
  if (0x7ff < *(short *)(param_1 + 0x56)) {
    if (*(char *)(param_1 + 3) == '\0') {
      *(undefined1 *)(param_1 + 4) = 2;
    }
    *(undefined2 *)(param_1 + 0x56) = 0x800;
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x5a);
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_1 + 0x5c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x2c) =
       *(short *)(param_1 + 0x50) +
       (short)(((int)*(short *)(param_1 + 0x58) - (int)*(short *)(param_1 + 0x50)) *
               (int)*(short *)(param_1 + 0x56) >> 0xb);
  *(short *)(param_1 + 0x2e) =
       *(short *)(param_1 + 0x52) +
       (short)(((int)*(short *)(param_1 + 0x5a) - (int)*(short *)(param_1 + 0x52)) *
               (int)*(short *)(param_1 + 0x56) >> 0xb);
  *(short *)(param_1 + 0x30) =
       *(short *)(param_1 + 0x54) +
       (short)(((int)*(short *)(param_1 + 0x5c) - (int)*(short *)(param_1 + 0x54)) *
               (int)*(short *)(param_1 + 0x56) >> 0xb);
  iVar5 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(-iVar5 >> 5);
  if (*(char *)(param_1 + 3) != '\0') {
    iVar5 = func_0x00083e80((int)*(short *)(param_1 + 0x60));
    *(short *)(param_1 + 0x62) = (short)(iVar5 >> 5) + 0x200;
    uVar3 = func_0x0009a450();
    *(ushort *)(param_1 + 0x5e) = (uVar3 & 0x3ff) - 0x1ff;
    *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00083e80((int)*(short *)(param_1 + 0x60));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

