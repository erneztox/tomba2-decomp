// FUN_080402c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08040308) */

void FUN_080402c4(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  pbVar6 = (byte *)(param_1 + 0x50);
  if (2 < bVar1) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
    return;
  }
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 4) = 1;
  }
  if (*(char *)(param_1 + 4) == '\x02') {
    if (*(char *)(param_1 + 5) == '\0') {
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x52) =
         *(short *)(param_1 + 0x52) + (short)(0x800 - *(short *)(param_1 + 0x52) >> 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      bVar1 = *pbVar6;
      *pbVar6 = bVar1 - 1;
      if ((int)((uint)(byte)(bVar1 - 1) << 0x18) < 0) {
        *pbVar6 = 0x28;
        *(undefined1 *)(param_1 + 0x54) = 0x10;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)(param_1 + 0x51);
      }
      goto LAB_08040458;
    }
    iVar5 = 0;
    if (bVar1 != 0) {
      halt_baddata();
    }
    *pbVar6 = 0;
    pbVar4 = pbVar6;
    do {
      iVar5 = iVar5 + 1;
      uVar3 = func_0x0009a450();
      *(ushort *)(pbVar4 + 0xc) = ~(uVar3 & 0x3ff);
      pbVar4 = pbVar4 + 2;
    } while (iVar5 < 0xc);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  if ('0' < *(char *)(param_1 + 0x51)) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08040458:
  *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) - (*(short *)(param_1 + 0x52) >> 3);
  *(char *)(param_1 + 0x51) =
       *(char *)(param_1 + 0x51) + (char)(0x38 - *(char *)(param_1 + 0x51) >> 3);
  iVar5 = 0;
  if ('\0' < *(char *)(param_1 + 0x55)) {
    *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x88;
    *(char *)(param_1 + 0x55) = *(char *)(param_1 + 0x55) + -2;
  }
  do {
    sVar2 = *(short *)(pbVar6 + 0xc);
    if ((*(short *)(pbVar6 + 0xc) < 0) &&
       (*(short *)(pbVar6 + 0xc) = sVar2 + -0x1e, (short)(sVar2 + -0x1e) < -900)) {
      if (*(char *)(param_1 + 4) == '\x01') {
        uVar3 = func_0x0009a450();
        *(ushort *)(pbVar6 + 0xc) = ~(uVar3 & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pbVar6[0xc] = 0;
      pbVar6[0xd] = 0;
    }
    iVar5 = iVar5 + 1;
    pbVar6 = pbVar6 + 2;
  } while (iVar5 < 0xc);
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0xd;
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -0x3a;
  *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

