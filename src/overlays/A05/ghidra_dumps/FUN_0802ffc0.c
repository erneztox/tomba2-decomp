// FUN_0802ffc0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802ffc0(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar4 = func_0x00051b70(param_1,0xc,*(undefined1 *)((byte)param_1[3] + 0x8013ef58));
    if (iVar4 != 0) {
      return;
    }
    param_1[4] = param_1[4] + '\x01';
    param_1[0x28] = param_1[0x28] | 0x80;
    if (*(char *)((byte)param_1[3] + 0x8013ef64) != '\0') {
      param_1[0x2a] = *(char *)((byte)param_1[3] + 0x8013ef64);
      psVar5 = (short *)((uint)(byte)param_1[3] * 0xc + -0x7fec1090);
      sVar2 = *psVar5;
      if (*psVar5 != 0) {
        *(short *)(param_1 + 0x60) = sVar2 - *(short *)(param_1 + 0x2e);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x60) = sVar2;
      sVar2 = *(short *)((uint)(byte)param_1[3] * 0xc + -0x7fec108c);
      if (*(short *)((uint)(byte)param_1[3] * 0xc + -0x7fec108c) != 0) {
        *(short *)(param_1 + 100) = sVar2 - *(short *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 100) = sVar2;
      uVar6 = (uint)(byte)param_1[3];
      *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(uVar6 * 0xc + -0x7fec108e);
      param_1[0x5f] = *(undefined1 *)(uVar6 * 0xc + -0x7fec108a);
      uVar3 = *(ushort *)(uVar6 * 0xc + -0x7fec1088);
      *(ushort *)(param_1 + 0x82) = uVar3;
      iVar4 = (uint)uVar3 << 0x10;
      *(short *)(param_1 + 0x80) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
      uVar3 = *(ushort *)((uint)(byte)param_1[3] * 0xc + -0x7fec1086);
      *param_1 = 1;
      *(ushort *)(param_1 + 0x86) = uVar3;
      iVar4 = (uint)uVar3 << 0x10;
      *(short *)(param_1 + 0x84) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
    }
    *(undefined2 *)(param_1 + 0x50) = 0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
    if (8 < (byte)param_1[3]) {
      *(undefined2 *)(param_1 + 0x7e) = 0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      halt_baddata();
    }
                    /* WARNING: Could not emulate address calculation at 0x080301dc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef6300))();
    return;
  }
  if (*(short *)(param_1 + 0x7c) == 0) {
    if (DAT_800bf816 != '\0') {
      if (DAT_800bf817 != param_1[3]) {
        *param_1 = 3;
        *(short *)(param_1 + 0x7c) = *(short *)(param_1 + 0x7c) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08030378;
    }
LAB_080303b0:
    func_0x0007778c(param_1);
  }
  else {
    if (*(short *)(param_1 + 0x7c) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf816 == '\0') {
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x7c) = 0;
LAB_08030378:
      if (DAT_800bf816 == '\0') goto LAB_080303b0;
    }
    if (DAT_800bf817 == param_1[3]) {
      func_0x00077ebc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (8 < (byte)param_1[3]) {
    if (param_1[1] != '\0') {
      func_0x000517f8(param_1);
    }
    param_1[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not emulate address calculation at 0x080303d8 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef62d8))();
  return;
}

