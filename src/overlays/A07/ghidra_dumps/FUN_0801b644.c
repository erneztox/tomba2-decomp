// FUN_0801b644

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801b684) */

void FUN_0801b644(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  pbVar4 = (byte *)(param_1 + 0x50);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      iVar3 = 0x1d;
      iVar2 = param_1 + 0x6d;
      *(undefined4 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 0x50) = 0;
      *(undefined1 *)(param_1 + 0x51) = 0x3c;
      do {
        *(undefined1 *)(iVar2 + 2) = 0xff;
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar3);
    }
    iVar2 = 0;
    do {
      iVar3 = (uint)pbVar4[iVar2 + 2] << 0x18;
      if (iVar3 < 0) {
        if ((*(char *)(param_1 + 4) == '\x01') &&
           (bVar1 = *pbVar4, *pbVar4 = bVar1 - 1, (int)((uint)(byte)(bVar1 - 1) << 0x18) < 0)) {
          bVar1 = func_0x0009a450();
          *pbVar4 = (bVar1 & 0xf) + 9;
          pbVar4[iVar2 + 2] = 0;
        }
      }
      else {
        iVar3 = (uint)pbVar4[iVar2 + 2] + (iVar3 >> 0x1b) + 1;
        pbVar4[iVar2 + 2] = (byte)iVar3;
        if (0x3f < iVar3 * 0x1000000 >> 0x18) {
          pbVar4[iVar2 + 2] = 0xff;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    bVar1 = *(char *)(param_1 + 0x51) - 1;
    *(byte *)(param_1 + 0x51) = bVar1;
    if ((int)((uint)bVar1 << 0x18) < 1) {
      if (*(char *)(param_1 + 4) == '\x01') {
        *(undefined1 *)(param_1 + 0x51) = 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 4) = 3;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

