// FUN_80113748

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80113748(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined4 extraout_v1;
  undefined1 *puVar9;
  uint uVar10;
  
  iVar7 = func_0x800519e0(param_1,5,_DAT_800ecfa4,&DAT_80135914);
  uVar4 = _DAT_800ecfa0;
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    if (((int)(uint)DAT_800bf9ec >> (((byte)param_1[3] & 0xf) << 1) & 1U) != 0) {
      uVar10 = 0x80139fe0;
      func_0x80077c40(param_1,0x80139fe0,10);
      puVar9 = param_1;
      FUN_8011dfec();
      bVar1 = param_1[3];
      param_1[3] = (char)(bVar1 | 0x80);
      uVar6 = 0;
      if (*(byte *)((bVar1 | 0x80) - 0x5c2) < 2) {
        if ((byte)param_1[5] == 0) {
          if (((param_1[0x29] == '\0') || (DAT_800e7ea9 == '\0')) || (DAT_800e7ffb != '\0')) {
LAB_8011c888:
            func_0x800735f4(param_1,0x85);
            return;
          }
          param_1[5] = (char)uVar10;
          func_0x8004ed94(0x34,0x41);
          uVar10 = 0;
          uVar6 = func_0x80074590(0x19,0,0xf);
        }
        else if ((byte)param_1[5] == uVar10) {
          if ((param_1[0x29] != '\0') || (uVar6 = DAT_800e7fc7 & 1, uVar6 != (byte)param_1[0x5f]))
          goto LAB_8011c888;
          param_1[5] = 0;
        }
      }
      else {
        param_1[0x5e] = (char)uVar10;
        *(undefined4 *)(uVar10 + 0x5c) = 0x800e0000;
        *(uint *)(uVar10 + 0x3c) = uVar10 + 0x54;
        uVar6 = 0xff74;
        *(undefined4 *)(uVar10 + 0x54) = 0;
        *(undefined4 *)(uVar10 + 0x58) = extraout_v1;
        param_1 = puVar9;
      }
      *(undefined2 *)(uVar10 + 0x48) = 0;
      *(undefined2 *)(uVar10 + 0x4a) = 0;
      *(undefined2 *)(uVar10 + 0x4c) = 0;
      *(undefined1 *)(uVar10 + 0x29) = 0;
      *(ushort *)(uVar10 + 0x32) = uVar6;
      *(char *)(uVar10 + 4) = (char)param_1;
      if ((*(uint *)(uVar10 + 0x54) & 0xffffff) < 0x808080) {
        *(undefined1 *)(uVar10 + 1) = 1;
        uVar8 = *(uint *)(uVar10 + 0x54) + *(int *)(uVar10 + 0x58) & 0xffffff;
        *(uint *)(uVar10 + 0x54) = uVar8;
        *(uint *)(uVar10 + 0x54) = uVar8 | *(int *)(uVar10 + 0x5c) << 0x18;
        *(int *)(uVar10 + 0x58) = *(int *)(uVar10 + 0x58) + -0x10101;
        *(int *)(uVar10 + 0x5c) = *(int *)(uVar10 + 0x5c) + -5;
        FUN_8012e858();
        return;
      }
      *(undefined1 *)(uVar10 + 4) = 2;
      FUN_8012e858();
      return;
    }
    func_0x80077c40(param_1,0x80139fe0,0);
    uVar5 = 30000;
    if (param_1[3] == '\0') {
      uVar5 = 500;
    }
    *(undefined2 *)(param_1 + 0x6e) = uVar5;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0x50;
    *(undefined2 *)(param_1 + 0x82) = 0xa0;
    *(undefined2 *)(param_1 + 0x84) = 0x50;
    *(undefined2 *)(param_1 + 0x86) = 0x96;
    func_0x8004766c(param_1);
    func_0x80048894(param_1);
    sVar3 = _DAT_1f8001a4;
    uVar2 = _DAT_1f8001a2;
    uVar5 = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x62) = 0x3c;
    *(undefined2 *)(param_1 + 0x68) = 0xff;
    *(undefined2 *)(param_1 + 0x6c) = 0xff;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    param_1[0x5e] = 0;
    param_1[0x2b] = 0;
    param_1[0xbf] = 0;
    *(undefined2 *)(param_1 + 0x66) = 0;
    *(undefined2 *)(param_1 + 0x72) = 0;
    *(undefined2 *)(param_1 + 0x74) = 0;
    *(short *)(param_1 + 0x32) = sVar3 + -0x46;
    *(undefined2 *)(param_1 + 0x56) = uVar5;
    *(undefined2 *)(param_1 + 0x58) = uVar2;
    param_1[4] = param_1[4] + '\x01';
  }
  return;
}

