// FUN_8012c6ac

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012c6ac(undefined2 param_1)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int in_lo;
  
  *(short *)(unaff_s1 + 0x32) = *(short *)(unaff_s1 + 0x60) + (short)(in_lo >> 0xc);
  *(undefined2 *)(unaff_s0 + 0x4e) = param_1;
  *(short *)(unaff_s0 + 0x50) = *(short *)(unaff_s1 + 0x32) + 0x3c;
  *(undefined2 *)(unaff_s0 + 0x52) = *(undefined2 *)(unaff_s1 + 0x36);
  if (*(char *)(unaff_s1 + 0x29) == '\0') {
    *(undefined1 *)(unaff_s1 + 6) = 7;
  }
  else {
    uVar5 = (uint)*(byte *)(unaff_s1 + 3);
    *(undefined2 *)(unaff_s1 + 0x44) = *(undefined2 *)(unaff_s2 + 0x44);
    if (uVar5 < 2) {
      if (*(char *)(unaff_s2 + 0x147) != '\0') {
        sVar1 = -*(short *)(unaff_s2 + 0x58);
        uVar3 = sVar1 * -3 >> 1;
        *(short *)(*(int *)(unaff_s1 + 0xc0) + 0xc) = sVar1;
        *(short *)(*(int *)(unaff_s1 + 0xc4) + 0xc) = sVar1;
        *(short *)(*(int *)(unaff_s1 + 200) + 0xc) = (short)uVar3;
        *(short *)(*(int *)(unaff_s1 + 0xcc) + 0xc) = (short)uVar3;
        *(uint *)(uVar5 + 100) = uVar3 - (uVar3 >> 2);
        uVar3 = *(uint *)(uVar5 + 0x6c) - (*(uint *)(uVar5 + 0x6c) >> 2);
        *(uint *)(uVar5 + 0x6c) = uVar3;
        *(uint *)(uVar5 + 0x68) = *(uint *)(uVar5 + 0x68) - (*(uint *)(uVar5 + 0x68) >> 2);
        if (uVar3 < 9) {
          *(undefined1 *)(uVar5 + 4) = 3;
        }
        bVar2 = *(char *)(uVar5 + 7) + 1;
        *(byte *)(uVar5 + 7) = bVar2;
        if (5 < bVar2) {
          *(undefined1 *)(uVar5 + 7) = 0;
        }
        *(uint *)(uVar5 + 0x50) =
             *(int *)(uVar5 + 0x60) * (uint)(byte)(&stack0x00000010)[(uint)*(byte *)(uVar5 + 7) * 4]
             >> 4;
        *(uint *)(uVar5 + 0x54) =
             *(int *)(uVar5 + 100) * (uint)(byte)(&stack0x00000011)[(uint)*(byte *)(uVar5 + 7) * 4]
             >> 4;
        *(uint *)(uVar5 + 0x58) =
             *(int *)(uVar5 + 0x68) * (uint)(byte)(&stack0x00000012)[(uint)*(byte *)(uVar5 + 7) * 4]
             >> 4;
        bVar2 = (&stack0x00000013)[(uint)*(byte *)(uVar5 + 7) * 4];
        *(undefined1 *)(uVar5 + 1) = 1;
        *(uint *)(uVar5 + 0x5c) = *(int *)(uVar5 + 0x6c) * (uint)bVar2 >> 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar1 = *(short *)(unaff_s2 + 0x58);
      uVar4 = *(undefined2 *)(unaff_s2 + 0x58);
      *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 0xc) = uVar4;
      *(undefined2 *)(*(int *)(unaff_s1 + 0xc4) + 0xc) = uVar4;
      uVar4 = (undefined2)(sVar1 * -3 >> 1);
      *(undefined2 *)(*(int *)(unaff_s1 + 200) + 0xc) = uVar4;
      *(undefined2 *)(*(int *)(unaff_s1 + 0xcc) + 0xc) = uVar4;
    }
    if (*(byte *)(unaff_s2 + 0x168) < 3) {
      return;
    }
    *(undefined1 *)(unaff_s1 + 6) = 4;
  }
  FUN_8013ecf8();
  return;
}

