// FUN_80130054

void FUN_80130054(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  int in_v1;
  uint uVar5;
  undefined1 *unaff_s0;
  undefined1 unaff_s1;
  
  if (in_v1 != 0) {
    func_0x8009a450();
    return;
  }
  iVar3 = func_0x80051b70();
  if (iVar3 == 0) {
    unaff_s0[4] = unaff_s0[4] + '\x01';
    unaff_s0[0xbf] = unaff_s1;
    *(undefined2 *)(unaff_s0 + 0x50) = 0;
    unaff_s0[0x29] = 0;
    *(undefined2 *)(unaff_s0 + 0x5a) = *(undefined2 *)(unaff_s0 + 0x56);
    unaff_s0[0x28] = unaff_s0[0x28] | 0x80;
    if (*(char *)((byte)unaff_s0[3] + 0x8014a9b0) != '\0') {
      unaff_s0[0x2a] = *(char *)((byte)unaff_s0[3] + 0x8014a9b0);
      psVar4 = (short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5648);
      sVar1 = *psVar4;
      if (*psVar4 != 0) {
        *(short *)(unaff_s0 + 0x60) = sVar1 - *(short *)(unaff_s0 + 0x2e);
        FUN_801390d8();
        return;
      }
      *(short *)(unaff_s0 + 0x60) = sVar1;
      sVar1 = *(short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5644);
      if (*(short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5644) != 0) {
        *(short *)(unaff_s0 + 100) = sVar1 - *(short *)(unaff_s0 + 0x36);
        FUN_8013911c();
        return;
      }
      *(short *)(unaff_s0 + 100) = sVar1;
      uVar5 = (uint)(byte)unaff_s0[3];
      *(undefined2 *)(unaff_s0 + 0x62) = *(undefined2 *)(uVar5 * 0xc + -0x7feb5646);
      unaff_s0[0x5f] = *(undefined1 *)(uVar5 * 0xc + -0x7feb5642);
      uVar2 = *(ushort *)(uVar5 * 0xc + -0x7feb5640);
      *(ushort *)(unaff_s0 + 0x82) = uVar2;
      iVar3 = (uint)uVar2 << 0x10;
      *(short *)(unaff_s0 + 0x80) = (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
      uVar2 = *(ushort *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb563e);
      *unaff_s0 = 1;
      *(ushort *)(unaff_s0 + 0x86) = uVar2;
      iVar3 = (uint)uVar2 << 0x10;
      *(short *)(unaff_s0 + 0x84) = (short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
    }
    if ((byte)unaff_s0[3] < 6) {
                    /* WARNING: Jumptable at 0x8013025c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)unaff_s0[3] * 4 + -0x7fef60bc))();
      return;
    }
  }
  return;
}

