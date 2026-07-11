// FUN_08024f58

/* WARNING: Control flow encountered bad instruction data */

void FUN_08024f58(undefined1 *param_1)

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
      iVar4 = func_0x00051b70(param_1,0xc,*(undefined1 *)((byte)param_1[3] + 0x80141374));
      if (iVar4 == 0) {
        param_1[4] = param_1[4] + '\x01';
        param_1[0x28] = param_1[0x28] | 0x80;
        if (*(char *)((byte)param_1[3] + 0x8014137c) != '\0') {
          param_1[0x2a] = *(char *)((byte)param_1[3] + 0x8014137c);
          psVar5 = (short *)((uint)(byte)param_1[3] * 0xc + -0x7febec7c);
          sVar2 = *psVar5;
          if (*psVar5 != 0) {
            *(short *)(param_1 + 0x60) = sVar2 - *(short *)(param_1 + 0x2e);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(short *)(param_1 + 0x60) = sVar2;
          sVar2 = *(short *)((uint)(byte)param_1[3] * 0xc + -0x7febec78);
          if (*(short *)((uint)(byte)param_1[3] * 0xc + -0x7febec78) != 0) {
            *(short *)(param_1 + 100) = sVar2 - *(short *)(param_1 + 0x36);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(short *)(param_1 + 100) = sVar2;
          uVar6 = (uint)(byte)param_1[3];
          *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(uVar6 * 0xc + -0x7febec7a);
          param_1[0x5f] = *(undefined1 *)(uVar6 * 0xc + -0x7febec76);
          uVar3 = *(ushort *)(uVar6 * 0xc + -0x7febec74);
          *(ushort *)(param_1 + 0x82) = uVar3;
          iVar4 = (uint)uVar3 << 0x10;
          *(short *)(param_1 + 0x80) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
          uVar3 = *(ushort *)((uint)(byte)param_1[3] * 0xc + -0x7febec72);
          *param_1 = 1;
          *(ushort *)(param_1 + 0x86) = uVar3;
          iVar4 = (uint)uVar3 << 0x10;
          *(short *)(param_1 + 0x84) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
        }
        *(undefined2 *)(param_1 + 0x50) = 0;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
        if ((byte)param_1[3] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08025174 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef6160))();
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
  if (4 < (byte)param_1[3]) {
    if (param_1[1] != '\0') {
      func_0x000517f8(param_1);
    }
    param_1[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not emulate address calculation at 0x080252b8 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef6148))();
  return;
}

