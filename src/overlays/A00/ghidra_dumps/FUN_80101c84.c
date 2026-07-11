// FUN_80101c84

/* WARNING: Removing unreachable block (ram,0x80125d64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80101c84(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  
  func_0x8006f0e4();
  if (DAT_800bf89c != '\x02') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x80055d5c();
    *(undefined2 *)(param_1 + 0x142) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    func_0x80054198(param_1);
    func_0x80055284(param_1);
    func_0x80054d14(param_1,2,0);
    func_0x8003315c(param_1);
    cVar3 = DAT_800bf817;
    if ((DAT_800bf816 != '\0') && (DAT_800bf817 == '\x02')) {
      DAT_800bf81f = *(char *)(param_1 + 0x147) << 4;
      *(undefined1 *)(param_1 + 5) = 0x24;
      *(undefined1 *)(param_1 + 6) = 0;
      iVar4 = _DAT_1f800138;
      DAT_800e806c = 0x80;
      _DAT_1f800184 = 0;
      DAT_1f80019c = 3;
      *(undefined2 *)(_DAT_1f800138 + 0x4c) = 3;
      *(undefined2 *)(iVar4 + 0x4e) = 1;
      DAT_800bf818 = cVar3;
      func_0x8001cf2c();
      func_0x80044bd4(0x8010c740,0x1c,0,3);
      DAT_1f80019c = 0;
      func_0x80074f24(DAT_800bf870);
    }
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 5;
  func_0x80054d14(param_1,0xa7,0);
  FUN_801138e8();
  puVar6 = _DAT_1f800154;
  DAT_1f800183 = DAT_1f80015c;
joined_r0x8010ad74:
  do {
    puVar2 = puVar6;
    if (DAT_1f800183 == '\0') {
      FUN_80112c0c();
      FUN_80112f14();
      FUN_8010e904(2);
      return;
    }
    pbVar5 = (byte *)*puVar2;
    DAT_1f800183 = DAT_1f800183 + -1;
    puVar6 = puVar2 + 1;
  } while ((*pbVar5 & 2) != 0);
  bVar1 = pbVar5[2];
  if (bVar1 == 1) goto LAB_8010ade0;
  iVar4 = 4;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
LAB_80113d98:
      if (iVar4 == 0x1f800000) {
        if (*(char *)((int)puVar2 + 5) == '\0') {
          func_0x8007addc(puVar6);
          *(char *)((int)puVar2 + 0xb) = *(char *)((int)puVar2 + 0xb) + -1;
        }
        return;
      }
      DAT_00000061 = 1;
      _DAT_0000007a = 0x8002;
      if (_DAT_0000004a < 1) {
        if (_DAT_0000004a < 0) {
          _DAT_00000050 = 0x80;
        }
        if (DAT_00000005 == '\0') {
          func_0x80146348(2,_DAT_000000ca);
        }
        if (cRam00000003 != '\0') {
          FUN_8012e8a8(2);
        }
        DAT_0000002d = 0;
        FUN_8012ed70();
        return;
      }
      FUN_8012ed28();
      return;
    }
  }
  else {
    iVar4 = 7;
    if ((bVar1 != 4) && (bVar1 != 7)) goto LAB_80113d98;
  }
  goto LAB_8010adf0;
LAB_8010ade0:
  if (pbVar5[3] == 1) {
LAB_8010adf0:
    FUN_80112a60();
  }
  goto joined_r0x8010ad74;
}

