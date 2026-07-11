// FUN_8011e000

/* WARNING: Removing unreachable block (ram,0x80127090) */
/* WARNING: Removing unreachable block (ram,0x801270c8) */
/* WARNING: Removing unreachable block (ram,0x801270d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011e000(undefined1 *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined1 *puVar5;
  short *psVar6;
  byte bVar7;
  int iVar8;
  
  bVar7 = param_1[6];
  uVar4 = (uint)(bVar7 < 2);
  if (bVar7 == 1) {
    uVar4 = 0x20;
    if ((*(ushort *)(param_1 + 0x68) & 1) == 0) {
      uVar4 = 2;
    }
    if ((DAT_800bf8f2 & uVar4) == 0) {
      if (DAT_800e7eaa == '\x03') {
        sVar3 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar3 + -1;
        if (sVar3 != 1) {
          return;
        }
        uVar4 = 1;
        if (param_1[1] != '\0') {
          func_0x8009a450();
          return;
        }
        *(undefined2 *)(param_1 + 0x40) = 1;
        param_1[6] = 0;
      }
      else {
        uVar4 = 0x1f800000;
        if ((DAT_800e7eaa == '\n') && (uVar4 = 0, _DAT_1f800160 < 0x170d)) {
          return;
        }
        param_1[4] = 3;
      }
    }
    else {
      DAT_800bf8f2 = DAT_800bf8f2 | (byte)(uVar4 << 1);
      DAT_800bf9f3 = DAT_800bf9f3 | (byte)(uVar4 << 2);
      func_0x8003116c(0x10f,param_1 + 0x2c,0xfffffff6);
      *(undefined2 *)(param_1 + 0x40) = 2;
      uVar4 = (byte)param_1[6] + 1;
      param_1[6] = (char)uVar4;
    }
    goto LAB_80127370;
  }
  if (uVar4 == 0) {
    uVar4 = 3;
    if (bVar7 != 2) {
      if (bVar7 == 3) {
        bVar7 = 0x40;
        if (*(short *)(param_1 + 0x68) == 0) {
          bVar7 = 4;
        }
        if ((DAT_800bf8f2 & bVar7) != 0) {
          if (((*(short *)(param_1 + 0x68) != 0) &&
              (func_0x80040c00(0x3e), ((int)_DAT_800e7ffe & 0x8000U) != 0)) &&
             (DAT_800bfb08 != '\0')) {
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x24) = 0x78;
          }
          *(int *)(*(int *)(param_1 + 0x10) + 0x18) = *(int *)(*(int *)(param_1 + 0x10) + 0x18) + -1
          ;
          param_1[4] = 3;
        }
        return;
      }
      goto LAB_80127370;
    }
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 != 1) {
      return;
    }
    FUN_80121918(*(undefined4 *)(param_1 + 0x10),*(ushort *)(param_1 + 0x68) & 1,param_1[0x5e]);
    puVar5 = (undefined1 *)0x3;
  }
  else {
    if (bVar7 != 0) goto LAB_80127370;
    func_0x80077b5c(param_1);
    if (*(short *)(param_1 + 100) == 1) {
      if (-1 < *(short *)(param_1 + 0x4a)) {
        *(short *)(param_1 + 100) = *(short *)(param_1 + 100) + 1;
      }
    }
    else if (*(short *)(param_1 + 100) != 2) {
      func_0x8004cbd8(param_1,param_2 + 1);
      iVar8 = *(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0);
      if ((*(byte *)(iVar8 + 0x3e) | 0x80) == 0) {
        if (iVar8 != 2) {
          if (iVar8 != 3) goto LAB_801395bc;
          func_0x8007a624(param_1);
        }
      }
      else {
        if (iVar8 != 0) {
LAB_801395bc:
          func_0x8009a450();
          return;
        }
        iVar8 = func_0x80051b70(param_1,0xc,*(undefined1 *)((byte)param_1[3] + 0x8014a9a8));
        if (iVar8 == 0) {
          param_1[4] = param_1[4] + '\x01';
          param_1[0xbf] = 1;
          *(undefined2 *)(param_1 + 0x50) = 0;
          param_1[0x29] = 0;
          *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
          param_1[0x28] = param_1[0x28] | 0x80;
          if (*(char *)((byte)param_1[3] + 0x8014a9b0) != '\0') {
            param_1[0x2a] = *(char *)((byte)param_1[3] + 0x8014a9b0);
            psVar6 = (short *)((uint)(byte)param_1[3] * 0xc + -0x7feb5648);
            sVar3 = *psVar6;
            if (*psVar6 != 0) {
              *(short *)(param_1 + 0x60) = sVar3 - *(short *)(param_1 + 0x2e);
              FUN_801390d8();
              return;
            }
            *(short *)(param_1 + 0x60) = sVar3;
            sVar3 = *(short *)((uint)(byte)param_1[3] * 0xc + -0x7feb5644);
            if (*(short *)((uint)(byte)param_1[3] * 0xc + -0x7feb5644) != 0) {
              *(short *)(param_1 + 100) = sVar3 - *(short *)(param_1 + 0x36);
              FUN_8013911c();
              return;
            }
            *(short *)(param_1 + 100) = sVar3;
            uVar4 = (uint)(byte)param_1[3];
            *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(uVar4 * 0xc + -0x7feb5646);
            param_1[0x5f] = *(undefined1 *)(uVar4 * 0xc + -0x7feb5642);
            uVar2 = *(ushort *)(uVar4 * 0xc + -0x7feb5640);
            *(ushort *)(param_1 + 0x82) = uVar2;
            iVar8 = (uint)uVar2 << 0x10;
            *(short *)(param_1 + 0x80) = (short)((iVar8 >> 0x10) - (iVar8 >> 0x1f) >> 1);
            uVar2 = *(ushort *)((uint)(byte)param_1[3] * 0xc + -0x7feb563e);
            *param_1 = 1;
            *(ushort *)(param_1 + 0x86) = uVar2;
            iVar8 = (uint)uVar2 << 0x10;
            *(short *)(param_1 + 0x84) = (short)((iVar8 >> 0x10) - (iVar8 >> 0x1f) >> 1);
          }
          if ((byte)param_1[3] < 6) {
                    /* WARNING: Jumptable at 0x8013025c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef60bc))();
            return;
          }
        }
      }
      return;
    }
    sVar3 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x4a) = sVar3 + *(short *)(param_1 + 0x50);
    if (0x2000 < (short)(sVar3 + *(short *)(param_1 + 0x50))) {
      *(undefined2 *)(param_1 + 0x4a) = 0x2000;
    }
    sVar3 = FUN_80126aa8(param_1);
    if (sVar3 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0xf000;
    *(undefined2 *)(param_1 + 0x50) = 0x200;
    sVar3 = *(short *)(param_1 + 0x40);
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 100) = 1;
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 != 1) {
      return;
    }
    cVar1 = param_1[3];
    if (cVar1 == '\x02') {
      *(int *)(*(int *)(param_1 + 0x10) + 0x18) = *(int *)(*(int *)(param_1 + 0x10) + 0x18) + -1;
      param_1[3] = param_1[3] + '\x01';
      if (*(short *)(param_1 + 0x68) == 0) {
        _DAT_800bf87c = (DAT_800bf9f3 | 2) + 1;
        iVar8 = *(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0);
        if (((*(short *)(iVar8 + 0x14) < 1) ||
            (*(short *)(iVar8 + 0xc) < *(short *)(param_1 + 0x6e))) &&
           ((-1 < *(short *)(iVar8 + 0x14) || (*(short *)(param_1 + 0x6e) < *(short *)(iVar8 + 0xc))
            ))) {
          sVar3 = *(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x14);
          *(short *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x14) =
               sVar3 - (sVar3 >> 3);
          FUN_801303f8();
          return;
        }
        uVar4 = (uint)*(short *)(param_1 + 0x6c);
      }
      else {
        DAT_800bf9f3 = DAT_800bf9f3 | 0x20;
        uVar4 = *(ushort *)(param_1 + 0x68) | 2;
        *(short *)(param_1 + 0x68) = (short)uVar4;
      }
      iVar8 = (uint)*(ushort *)(*(int *)(param_1 + uVar4 * 4 + 0xc0) + 0x14) << 0x10;
      *(short *)(*(int *)(param_1 + uVar4 * 4 + 0xc0) + 0x12) =
           (short)((iVar8 >> 0x10) - (iVar8 >> 0x1f) >> 1);
      *(undefined2 *)(param_1 + 0x74) = 0;
      param_1[6] = param_1[6] + '\x01';
      param_1[0x5e] = param_1[0x5e] | 0x80;
      FUN_801303f8();
      return;
    }
    if (cVar1 == '\x04') {
      if (*(short *)(param_1 + 0x68) == 0) {
        FUN_80127158();
        return;
      }
      DAT_800bf8f2 = DAT_800bf8f2 | 0x20;
      uVar4 = 3;
      param_1[6] = 3;
      goto LAB_80127370;
    }
    puVar5 = &LAB_800c0000;
    if (cVar1 != '\x05') {
      func_0x8009a450();
      return;
    }
    DAT_800bfa47 = 1;
    *(undefined2 *)(param_1 + 0x4e) = 0;
  }
  uVar4 = (int)puVar5 << 2;
LAB_80127370:
  bVar7 = *(byte *)(*(int *)(param_1 + uVar4 + 0xc0) + 0x3e);
  if ((bVar7 & 0x80) != 0) {
    if ((bVar7 & 1) != 0) {
      sVar3 = FUN_80127384(param_1);
      if (sVar3 != 0) {
        *(undefined2 *)(param_1 + 0x7a) = 0;
        *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) =
             *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) & 0xfe;
        FUN_801303b0();
        return;
      }
      *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) =
           *(byte *)(*(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0) + 0x3e) & 0x7f;
      FUN_801303bc(param_1);
      return;
    }
    if ((bVar7 & 0x10) == 0) {
      *(byte *)(*(int *)(param_1 + uVar4 + 0xc0) + 0x3e) = bVar7 | 0x10;
      FUN_80131768(param_1,(int)*(short *)(param_1 + 0x6c),0);
    }
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x5e] = 0;
  FUN_801303f8();
  return;
}

