// FUN_8013002c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8013002c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (DAT_800bf816 == '\0') {
      if ((param_1[3] == '\x02') && (0x1c < DAT_1f800207)) {
        func_0x8007703c(param_1);
        switchD_801391e4::default();
        return;
      }
      func_0x8007778c(param_1);
    }
    else if (DAT_800bf817 == param_1[3]) {
      func_0x80077ebc(param_1);
      switchD_801391e4::default();
      return;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[3]) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[1] != '\0') {
      func_0x800517f8(param_1);
    }
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
LAB_801395ac:
    func_0x8009a450();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_801395ac;
    iVar4 = func_0x80051b70(param_1,0xc,*(undefined1 *)((byte)param_1[3] + 0x8014a9a8));
    if (iVar4 == 0) {
      param_1[4] = param_1[4] + '\x01';
      param_1[0xbf] = 1;
      *(undefined2 *)(param_1 + 0x50) = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
      param_1[0x28] = param_1[0x28] | 0x80;
      if (*(char *)((byte)param_1[3] + 0x8014a9b0) != '\0') {
        param_1[0x2a] = *(char *)((byte)param_1[3] + 0x8014a9b0);
        psVar5 = (short *)((uint)(byte)param_1[3] * 0xc + -0x7feb5648);
        sVar2 = *psVar5;
        if (*psVar5 != 0) {
          *(short *)(param_1 + 0x60) = sVar2 - *(short *)(param_1 + 0x2e);
          FUN_801390d8();
          return;
        }
        *(short *)(param_1 + 0x60) = sVar2;
        sVar2 = *(short *)((uint)(byte)param_1[3] * 0xc + -0x7feb5644);
        if (*(short *)((uint)(byte)param_1[3] * 0xc + -0x7feb5644) != 0) {
          *(short *)(param_1 + 100) = sVar2 - *(short *)(param_1 + 0x36);
          FUN_8013911c();
          return;
        }
        *(short *)(param_1 + 100) = sVar2;
        uVar6 = (uint)(byte)param_1[3];
        *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(uVar6 * 0xc + -0x7feb5646);
        param_1[0x5f] = *(undefined1 *)(uVar6 * 0xc + -0x7feb5642);
        uVar3 = *(ushort *)(uVar6 * 0xc + -0x7feb5640);
        *(ushort *)(param_1 + 0x82) = uVar3;
        iVar4 = (uint)uVar3 << 0x10;
        *(short *)(param_1 + 0x80) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
        uVar3 = *(ushort *)((uint)(byte)param_1[3] * 0xc + -0x7feb563e);
        *param_1 = 1;
        *(ushort *)(param_1 + 0x86) = uVar3;
        iVar4 = (uint)uVar3 << 0x10;
        *(short *)(param_1 + 0x84) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
      }
      if ((byte)param_1[3] < 6) {
                    /* WARNING: Jumptable at 0x8013025c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef60bc))();
        return;
      }
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) goto LAB_801395ac;
    func_0x8007a624(param_1);
  }
  return;
}

