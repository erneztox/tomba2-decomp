// FUN_80101a84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80101a84(byte *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint extraout_v1;
  int unaff_s0;
  int iVar8;
  int unaff_s1;
  int iVar9;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  uVar7 = (uint)param_1[7];
  uVar3 = 1;
  if (uVar7 == 0) {
    param_1[0x146] = 0;
    func_0x80058304(param_1,1);
    if ((DAT_800bfad6 == '\0') && (*param_1 == 1)) {
      *param_1 = 7;
      func_0x80022c0c(param_1,1);
      if (*(short *)(param_1 + 0x16e) < 1) {
        param_1[0x16e] = 0;
        param_1[0x16f] = 0;
        *param_1 = 3;
        param_1[0x164] = 0;
        param_1[0x2b] = (byte)(*(short *)(param_1 + 0x56) + 0x800 >> 4);
      }
    }
    func_0x80054d14(param_1,0x34,0);
    param_1[0x40] = 0x28;
    param_1[0x41] = 0;
    local_1e = *(undefined2 *)(param_1 + 0x2e);
    param_1[7] = param_1[7] + 1;
    local_1a = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x62);
    local_16 = *(undefined2 *)(param_1 + 0x36);
    uVar3 = func_0x8003116c(0xe,auStack_20,0xffffffb0);
    uVar7 = extraout_v1;
  }
  else if (uVar7 == 1) {
    func_0x80062a30(param_1,*(undefined4 *)(param_1 + 0x158),2);
    iVar9 = *(int *)(param_1 + 0x10);
    iVar8 = (int)((*(ushort *)(param_1 + 0x56) + 0x800) * 0x10000) >> 0x10;
    iVar6 = func_0x80083f50(iVar8);
    *(short *)(param_1 + 0x2e) =
         *(short *)(iVar9 + 0x2c) + (short)(iVar6 * *(short *)(param_1 + 0x152) >> 0xc);
    iVar6 = func_0x80083e80(iVar8);
    *(short *)(param_1 + 0x36) =
         *(short *)(iVar9 + 0x34) - (short)(iVar6 * *(short *)(param_1 + 0x152) >> 0xc);
    uVar2 = _DAT_1f80017c & 3;
    *(short *)(param_1 + 0x32) = *(short *)(iVar9 + 0x30) + *(short *)(param_1 + 0x156);
    if (uVar2 == 0) {
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      local_1a = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x62);
      local_16 = *(undefined2 *)(param_1 + 0x36);
      func_0x8003116c(0xe,auStack_20,0xffffffb0);
    }
    func_0x80076d68(param_1);
    func_0x80076d68(param_1);
    sVar5 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar5 + -1;
    if (sVar5 == 1) {
      param_1[6] = 0;
      param_1[7] = 0;
      *param_1 = *param_1 & 3;
    }
    return;
  }
  *(undefined1 *)(unaff_s0 + 0x47) = 0;
  *(undefined2 *)(unaff_s0 + 0x5a) = 0;
  *(undefined1 *)(unaff_s0 + 8) = uVar3;
  *(undefined2 *)(unaff_s0 + 0x44) = 0;
  *(uint *)(unaff_s0 + 0x3c) = uVar7;
  func_0x80077b38();
  cVar1 = *(char *)(unaff_s1 + 2);
  if (cVar1 == '\x19') {
    uVar4 = 0xff56;
    if (*(char *)(unaff_s1 + 3) == '\0') {
      FUN_80113c24();
      return;
    }
  }
  else {
    if ((byte *)(uint)*(byte *)(unaff_s1 + 3) != param_1) {
      *(undefined2 *)(unaff_s0 + 0x40) = 0xff80;
      sVar5 = 2;
      *(undefined2 *)(unaff_s0 + 0x42) = 2;
      goto LAB_80113c9c;
    }
    uVar4 = 0xff60;
  }
  *(undefined2 *)(unaff_s0 + 0x40) = uVar4;
  sVar5 = 4;
  *(undefined2 *)(unaff_s0 + 0x42) = 4;
LAB_80113c9c:
  *(short *)(unaff_s1 + 0x40) = sVar5 + 0x5a;
  *(char *)(unaff_s1 + 6) = cVar1 + '\x01';
  FUN_8011cca0();
  return;
}

