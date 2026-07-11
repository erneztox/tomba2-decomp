// FUN_80126f9c

void FUN_80126f9c(undefined4 param_1,short param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  undefined1 *unaff_s0;
  undefined1 unaff_s1;
  
  unaff_s0[0x5e] = 2;
  *(short *)(unaff_s0 + 0x6e) =
       *(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0xc) - param_2;
  *(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x14) =
       -*(short *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x14);
  bVar1 = *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e);
  if ((bVar1 & 1) != 0) {
    *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) = bVar1 | 0x80;
    FUN_80130054();
    return;
  }
  if ((bVar1 & 0x10) == 0) {
    if (((int)*(short *)(unaff_s0 + 0x62) & 0xff00U) != 0xff00) {
      uVar5 = (*(ushort *)(unaff_s0 + 0x62) & 0x7f00) >> 8;
      if ((*(short *)(unaff_s0 + 0x6c) == 3) && (((int)*(short *)(unaff_s0 + 0x62) & 0x8000U) == 0))
      {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 < 5) {
        func_0x8004cbd8();
        iVar6 = *(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0);
        if ((*(byte *)(iVar6 + 0x3e) | 0x80) == 0) {
          if (iVar6 != 2) {
            if (iVar6 != 3) goto LAB_801395bc;
            func_0x8007a624();
          }
        }
        else {
          if (iVar6 != 0) {
LAB_801395bc:
            func_0x8009a450();
            return;
          }
          iVar6 = func_0x80051b70();
          if (iVar6 == 0) {
            unaff_s0[4] = unaff_s0[4] + '\x01';
            unaff_s0[0xbf] = unaff_s1;
            *(undefined2 *)(unaff_s0 + 0x50) = 0;
            unaff_s0[0x29] = 0;
            *(undefined2 *)(unaff_s0 + 0x5a) = *(undefined2 *)(unaff_s0 + 0x56);
            unaff_s0[0x28] = unaff_s0[0x28] | 0x80;
            if (*(char *)((byte)unaff_s0[3] + 0x8014a9b0) != '\0') {
              unaff_s0[0x2a] = *(char *)((byte)unaff_s0[3] + 0x8014a9b0);
              psVar4 = (short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5648);
              sVar2 = *psVar4;
              if (*psVar4 != 0) {
                *(short *)(unaff_s0 + 0x60) = sVar2 - *(short *)(unaff_s0 + 0x2e);
                FUN_801390d8();
                return;
              }
              *(short *)(unaff_s0 + 0x60) = sVar2;
              sVar2 = *(short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5644);
              if (*(short *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb5644) != 0) {
                *(short *)(unaff_s0 + 100) = sVar2 - *(short *)(unaff_s0 + 0x36);
                FUN_8013911c();
                return;
              }
              *(short *)(unaff_s0 + 100) = sVar2;
              uVar5 = (uint)(byte)unaff_s0[3];
              *(undefined2 *)(unaff_s0 + 0x62) = *(undefined2 *)(uVar5 * 0xc + -0x7feb5646);
              unaff_s0[0x5f] = *(undefined1 *)(uVar5 * 0xc + -0x7feb5642);
              uVar3 = *(ushort *)(uVar5 * 0xc + -0x7feb5640);
              *(ushort *)(unaff_s0 + 0x82) = uVar3;
              iVar6 = (uint)uVar3 << 0x10;
              *(short *)(unaff_s0 + 0x80) = (short)((iVar6 >> 0x10) - (iVar6 >> 0x1f) >> 1);
              uVar3 = *(ushort *)((uint)(byte)unaff_s0[3] * 0xc + -0x7feb563e);
              *unaff_s0 = 1;
              *(ushort *)(unaff_s0 + 0x86) = uVar3;
              iVar6 = (uint)uVar3 << 0x10;
              *(short *)(unaff_s0 + 0x84) = (short)((iVar6 >> 0x10) - (iVar6 >> 0x1f) >> 1);
            }
            if ((byte)unaff_s0[3] < 6) {
                    /* WARNING: Jumptable at 0x8013025c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((uint)(byte)unaff_s0[3] * 4 + -0x7fef60bc))();
              return;
            }
          }
        }
        return;
      }
      *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) =
           *(byte *)(*(int *)(unaff_s0 + *(short *)(unaff_s0 + 0x6c) * 4 + 0xc0) + 0x3e) | 0x10;
    }
  }
  if (unaff_s0[1] != '\0') {
    func_0x80074590(0x83,0,0);
    return;
  }
  unaff_s0[6] = unaff_s0[6] + '\x01';
  FUN_801303f8(0x83);
  return;
}

