// FUN_80126dec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80126dec(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  undefined1 uVar4;
  short sVar5;
  undefined2 uVar6;
  short *psVar7;
  uint uVar8;
  uint extraout_v1;
  int iVar9;
  undefined1 *puVar10;
  undefined1 unaff_s1;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    iVar9 = *(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0);
    *(short *)(iVar9 + 0xc) = *(short *)(iVar9 + 0xc) + *(short *)(iVar9 + 0x14);
    iVar9 = *(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0);
    if (((*(short *)(iVar9 + 0x14) < 1) || (*(short *)(iVar9 + 0xc) < *(short *)(param_1 + 0x6e)))
       && ((-1 < *(short *)(iVar9 + 0x14) || (*(short *)(param_1 + 0x6e) < *(short *)(iVar9 + 0xc)))
          )) {
      sVar5 = *(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x14);
      *(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x14) =
           sVar5 - (sVar5 >> 3);
      FUN_801303f8();
      return;
    }
    iVar9 = (uint)*(ushort *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x14) <<
            0x10;
    *(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x12) =
         (short)((iVar9 >> 0x10) - (iVar9 >> 0x1f) >> 1);
    *(undefined2 *)(param_1 + 0x74) = 0;
    param_1[6] = param_1[6] + '\x01';
    param_1[0x5e] = param_1[0x5e] | 0x80;
    FUN_801303f8();
    return;
  }
  if (bVar1 < 2) {
    uVar6 = 0;
    if (bVar1 != 0) {
      FUN_801303f8();
      return;
    }
    *(ushort *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0xc) =
         *(ushort *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0xc) & 0xfff;
    iVar9 = (uint)(byte)param_1[0x46] << 4;
    uVar4 = func_0x80077768(iVar9,(int)*(short *)(*(int *)(param_1 +
                                                          *(short *)(param_1 + 0x6c) * 4 + 0xc0) +
                                                 10));
    param_1[0x46] = uVar4;
    if ((param_1[0x47] & 0x80) != 0) {
      *(undefined2 *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x14) = 0x380;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x12) = 0xe;
      FUN_8012fe94();
      return;
    }
    *(undefined2 *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x14) = 0x240;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x12) = 0x10;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x14) = 0xfff8;
    *(undefined2 *)(param_1 + 0x74) = 1;
    if (param_1[0x46] != '\0') {
      *(short *)(*(int *)(param_1 + 0xc4) + 0x12) = -*(short *)(*(int *)(param_1 + 0xc4) + 0x12);
      *(short *)(*(int *)(param_1 + 0xc4) + 0x14) = -*(short *)(*(int *)(param_1 + 0xc4) + 0x14);
    }
    if ((param_1[0x47] & 1) == 0) {
      param_1[0x46] = param_1[0x46] ^ 1;
    }
    if (param_1[0x46] != '\0') {
      param_1[0x5e] = 3;
      sVar5 = *(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0xc) + 0x800;
      *(short *)(param_1 + 0x6e) = sVar5;
      param_1[5] = (char)sVar5 + (char)iVar9;
      *(undefined2 *)(param_1 + 0xb8) = 3;
      *(undefined2 *)(param_1 + 0xba) = uVar6;
      *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 100);
      func_0x80042354();
      puVar10 = param_1;
      uVar6 = func_0x80040cdc(param_1,0,0x8014aa00);
      param_1[0x70] = unaff_s1;
      iVar9 = (extraout_v1 & 0xfff) - 0xc00;
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      *(undefined2 *)(param_1 + 0x4e) = uVar6;
      *(short *)(param_1 + 0x4e) = (short)(puVar10 + (0x400 - iVar9 >> 6) * -0x100);
      if (0 < (int)(puVar10 + (0x400 - iVar9 >> 6) * -0x100) * 0x10000) {
        return;
      }
      *(undefined2 *)(param_1 + 0x4e) = 0;
      FUN_80142120();
      return;
    }
    param_1[0x5e] = 2;
    *(short *)(param_1 + 0x6e) =
         *(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0xc) + -0x800;
    *(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x14) =
         -*(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x14);
    bVar1 = *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e);
    if ((bVar1 & 1) != 0) {
      *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) = bVar1 | 0x80;
      FUN_80130054();
      return;
    }
    if ((bVar1 & 0x10) == 0) {
      if (((int)*(short *)(param_1 + 0x62) & 0xff00U) != 0xff00) {
        uVar8 = (*(ushort *)(param_1 + 0x62) & 0x7f00) >> 8;
        if ((*(short *)(param_1 + 0x6c) == 3) && (((int)*(short *)(param_1 + 0x62) & 0x8000U) == 0))
        {
          uVar8 = uVar8 + 1;
        }
        if (uVar8 < 5) {
          func_0x8004cbd8(param_1,uVar8 + 1);
          iVar9 = *(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0);
          if ((*(byte *)(iVar9 + 0x3e) | 0x80) == 0) {
            if (iVar9 == 2) {
              return;
            }
            if (iVar9 == 3) {
              func_0x8007a624(param_1);
              return;
            }
          }
          else if (iVar9 == 0) {
            iVar9 = func_0x80051b70(param_1,0xc,*(undefined1 *)((byte)param_1[3] + 0x8014a9a8));
            if (iVar9 != 0) {
              return;
            }
            param_1[4] = param_1[4] + '\x01';
            param_1[0xbf] = unaff_s1;
            *(undefined2 *)(param_1 + 0x50) = 0;
            param_1[0x29] = 0;
            *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
            param_1[0x28] = param_1[0x28] | 0x80;
            if (*(char *)((byte)param_1[3] + 0x8014a9b0) != '\0') {
              param_1[0x2a] = *(char *)((byte)param_1[3] + 0x8014a9b0);
              psVar7 = (short *)((uint)(byte)param_1[3] * 0xc + -0x7feb5648);
              sVar5 = *psVar7;
              if (*psVar7 != 0) {
                *(short *)(param_1 + 0x60) = sVar5 - *(short *)(param_1 + 0x2e);
                FUN_801390d8();
                return;
              }
              *(short *)(param_1 + 0x60) = sVar5;
              sVar5 = *(short *)((uint)(byte)param_1[3] * 0xc + -0x7feb5644);
              if (*(short *)((uint)(byte)param_1[3] * 0xc + -0x7feb5644) != 0) {
                *(short *)(param_1 + 100) = sVar5 - *(short *)(param_1 + 0x36);
                FUN_8013911c();
                return;
              }
              *(short *)(param_1 + 100) = sVar5;
              uVar8 = (uint)(byte)param_1[3];
              *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(uVar8 * 0xc + -0x7feb5646);
              param_1[0x5f] = *(undefined1 *)(uVar8 * 0xc + -0x7feb5642);
              uVar2 = *(ushort *)(uVar8 * 0xc + -0x7feb5640);
              *(ushort *)(param_1 + 0x82) = uVar2;
              iVar9 = (uint)uVar2 << 0x10;
              *(short *)(param_1 + 0x80) = (short)((iVar9 >> 0x10) - (iVar9 >> 0x1f) >> 1);
              uVar2 = *(ushort *)((uint)(byte)param_1[3] * 0xc + -0x7feb563e);
              *param_1 = 1;
              *(ushort *)(param_1 + 0x86) = uVar2;
              iVar9 = (uint)uVar2 << 0x10;
              *(short *)(param_1 + 0x84) = (short)((iVar9 >> 0x10) - (iVar9 >> 0x1f) >> 1);
            }
            uVar8 = (uint)(byte)param_1[3];
            bVar3 = uVar8 < 6;
            goto LAB_80130240;
          }
LAB_801395ac:
          func_0x8009a450();
          return;
        }
        *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) =
             *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) | 0x10;
      }
    }
    if (param_1[1] == '\0') {
      param_1[6] = param_1[6] + '\x01';
      FUN_801303f8(0x83);
      return;
    }
    func_0x80074590(0x83,0,0);
    return;
  }
  if (bVar1 != 2) {
    FUN_801303f8();
    return;
  }
  iVar9 = *(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0);
  *(short *)(iVar9 + 0xc) = *(short *)(iVar9 + 0xc) + *(short *)(iVar9 + 0x14);
  if ((param_1[0x5e] & 1) == 0) {
    if (*(short *)(param_1 + 0x6e) <
        *(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0xc)) {
      *(ushort *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0xc) =
           *(ushort *)(param_1 + 0x6e) & 0xfff;
      if (((int)*(short *)(param_1 + 0x62) & 0xff00U) != 0xff00) {
        uVar8 = (*(ushort *)(param_1 + 0x62) & 0x7f00) >> 8;
        if ((*(short *)(param_1 + 0x6c) == 3) && (((int)*(short *)(param_1 + 0x62) & 0x8000U) == 0))
        {
          uVar8 = uVar8 + 1;
        }
        if (*(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0xc) == 0) {
          if (*(char *)(~(1 << (uVar8 & 0x1f)) + 0xf) == param_1[3]) {
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
          goto LAB_801395ac;
        }
        DAT_800bf9d2 = DAT_800bf9d2 | (byte)(1 << (uVar8 & 0x1f));
      }
      *(undefined2 *)(param_1 + 0x76) = 0;
      *(undefined2 *)(param_1 + 0x78) = 0;
      *(undefined2 *)(param_1 + 0x48) = 0;
      *(undefined2 *)(param_1 + 0x4e) = 0;
      bVar1 = *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e);
      if ((bVar1 & 0x80) != 0) {
        if ((bVar1 & 1) != 0) {
          sVar5 = FUN_80127384(param_1);
          if (sVar5 == 0) {
            *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) =
                 *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) & 0x7f;
            FUN_801303bc(param_1);
            return;
          }
          *(undefined2 *)(param_1 + 0x7a) = 0;
          *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) =
               *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) & 0xfe;
          FUN_801303b0();
          return;
        }
        if ((bVar1 & 0x10) == 0) {
          *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) = bVar1 | 0x10
          ;
          FUN_80131768(param_1,(int)*(short *)(param_1 + 0x6c),0);
        }
      }
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[0x5e] = 0;
      FUN_801303f8();
      return;
    }
  }
  else {
    uVar8 = (uint)*(short *)(param_1 + 0x6e);
    bVar3 = true;
    if ((int)*(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0xc) <
        (int)uVar8) {
LAB_80130240:
      if (!bVar3) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x8013025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar8 * 4 + -0x7fef60bc))();
      return;
    }
  }
  iVar9 = *(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0);
  *(short *)(iVar9 + 0x14) = *(short *)(iVar9 + 0x14) - *(short *)(iVar9 + 0x12);
  iVar9 = FUN_801308e0(param_1);
  if (iVar9 != 0) {
    *(ushort *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0xc) =
         *(ushort *)(param_1 + 0x6e) & 0xfff;
    uVar8 = (*(ushort *)(param_1 + 0x62) & 0x7f00) >> 8;
    if ((*(short *)(param_1 + 0x6c) == 3) && ((*(ushort *)(param_1 + 0x62) & 0x8000) == 0)) {
      uVar8 = uVar8 + 1;
    }
    if (*(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0xc) == 0) {
      FUN_801304a8((uint)DAT_800bf9d2 & ~(1 << (uVar8 & 0x1f)));
      return;
    }
    DAT_800bf9d2 = DAT_800bf9d2 | (byte)(1 << (uVar8 & 0x1f));
  }
  if (*(short *)(param_1 + 0x74) == 0) {
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = *(undefined2 *)(param_1 + 0x70);
    FUN_80130514();
    return;
  }
  if (*(short *)(param_1 + 0x74) == 1) {
    iVar9 = *(int *)(param_1 + 0xc4);
    *(short *)(iVar9 + 10) = *(short *)(iVar9 + 10) + *(short *)(iVar9 + 0x12);
    iVar9 = *(int *)(param_1 + 0xc4);
    *(short *)(iVar9 + 0x12) = *(short *)(iVar9 + 0x12) + *(short *)(iVar9 + 0x14);
    return;
  }
  FUN_80130514();
  return;
}

