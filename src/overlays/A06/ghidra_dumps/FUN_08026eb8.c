// FUN_08026eb8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026eb8(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (param_1[3] == 'c') {
        param_1[3] = 0;
        *(undefined2 *)(param_1 + 0x66) = 99;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x66) = 0;
      iVar4 = func_0x00051b70(param_1,0xc,*(undefined1 *)((byte)param_1[3] + 0x80144f20));
      if (iVar4 == 0) {
        param_1[4] = param_1[4] + '\x01';
        param_1[0x28] = param_1[0x28] | 0x80;
        if (*(char *)((byte)param_1[3] + 0x80144f30) != '\0') {
          param_1[0x2a] = *(char *)((byte)param_1[3] + 0x80144f30);
          psVar5 = (short *)((uint)(byte)param_1[3] * 0xc + -0x7febb0c0);
          sVar2 = *psVar5;
          if (*psVar5 != 0) {
            *(short *)(param_1 + 0x60) = sVar2 - *(short *)(param_1 + 0x2e);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(short *)(param_1 + 0x60) = sVar2;
          sVar2 = *(short *)((uint)(byte)param_1[3] * 0xc + -0x7febb0bc);
          if (*(short *)((uint)(byte)param_1[3] * 0xc + -0x7febb0bc) != 0) {
            *(short *)(param_1 + 100) = sVar2 - *(short *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(short *)(param_1 + 100) = sVar2;
          uVar6 = (uint)(byte)param_1[3];
          *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(uVar6 * 0xc + -0x7febb0be);
          param_1[0x5f] = *(undefined1 *)(uVar6 * 0xc + -0x7febb0ba);
          uVar3 = *(ushort *)(uVar6 * 0xc + -0x7febb0b8);
          *(ushort *)(param_1 + 0x82) = uVar3;
          iVar4 = (uint)uVar3 << 0x10;
          *(short *)(param_1 + 0x80) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
          uVar3 = *(ushort *)((uint)(byte)param_1[3] * 0xc + -0x7febb0b6);
          *param_1 = 1;
          *(ushort *)(param_1 + 0x86) = uVar3;
          iVar4 = (uint)uVar3 << 0x10;
          *(short *)(param_1 + 0x84) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
        }
        *(undefined2 *)(param_1 + 0x50) = 0;
        param_1[0x29] = 0;
        param_1[0xbf] = 1;
        *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
        if ((byte)param_1[3] < 0xd) {
                    /* WARNING: Could not emulate address calculation at 0x08027104 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef6424))();
          return;
        }
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
    return;
  }
  if (DAT_800bf816 == '\0') {
    func_0x0007778c(param_1);
  }
  else if (DAT_800bf817 == param_1[3]) {
    func_0x00077ebc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0xc < (byte)param_1[3]) {
    if (param_1[1] != '\0') {
      func_0x000517f8(param_1);
    }
    param_1[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not emulate address calculation at 0x08027304 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef63ec))();
  return;
}

