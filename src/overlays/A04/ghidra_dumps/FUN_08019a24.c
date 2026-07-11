// FUN_08019a24

/* WARNING: Control flow encountered bad instruction data */

void FUN_08019a24(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 2) == '\0') {
    *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) | 1;
  }
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        *(undefined1 *)(param_1 + 7) = 0;
        halt_baddata();
      }
      if ((param_2 == 1) &&
         (sVar2 = *(short *)(param_1 + 0x14c), *(short *)(param_1 + 0x14c) = sVar2 + -1, sVar2 == 1)
         ) {
        *(undefined1 *)(param_1 + 7) = 1;
        *(ushort *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1U & 7;
      }
      uVar4 = (uint)*(byte *)(*(short *)(param_1 + 0x40) * 2 + -0x7febfc9f);
      if ((int)*(short *)(param_1 + 0x150) != uVar4) {
        uVar3 = 0;
        if (uVar4 == 1) {
          uVar3 = (uint)(*(char *)(param_1 + 0x147) != '\0');
        }
        iVar5 = uVar4 + uVar3 * 2;
        sVar2 = func_0x000776f8(iVar5 * 0x4000000 >> 0x10,(int)*(short *)(param_1 + 0x14e),0x80);
        *(short *)(param_1 + 0x14e) = sVar2;
        if ((int)sVar2 == iVar5 * 0x400) {
          *(ushort *)(param_1 + 0x150) =
               (ushort)*(byte *)(*(short *)(param_1 + 0x40) * 2 + -0x7febfc9f);
        }
      }
      return;
    }
    if (bVar1 != 0) {
      *(undefined1 *)(param_1 + 7) = 0;
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x150) = 0;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  bVar1 = *(byte *)(*(short *)(param_1 + 0x40) * 2 + -0x7febfca0);
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  *(ushort *)(param_1 + 0x14c) = (ushort)bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

