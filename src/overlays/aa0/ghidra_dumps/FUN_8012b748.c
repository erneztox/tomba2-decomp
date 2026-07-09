// FUN_8012b748

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8012b748(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  byte bVar3;
  undefined2 in_v0;
  short sVar4;
  undefined4 uVar5;
  int in_v1;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 in_t0;
  undefined4 in_t2;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  *(undefined2 *)(in_v1 + 8) = in_v0;
  *(undefined2 *)(unaff_s0 + 0x2e) = 0x3845;
  *(undefined2 *)(unaff_s0 + 0x32) = 0xf86c;
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  *(undefined2 *)(unaff_s0 + 0x36) = 0x1176;
  if (*(char *)(unaff_s0 + 8) != '\0') {
    puVar8 = (undefined2 *)&DAT_8014a76c;
    iVar7 = unaff_s0;
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      *(undefined2 *)(*(int *)(iVar7 + 0xc0) + 8) = uVar1;
      param_3 = param_3 + 1;
      iVar7 = iVar7 + 4;
    } while (param_3 < (int)(uint)*(byte *)(unaff_s0 + 8));
  }
  *(undefined2 *)(unaff_s0 + 0x4a) = 0x18;
  *(undefined2 *)(unaff_s0 + 0x50) = 0xfffc;
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  uVar2 = *(ushort *)(unaff_s0 + 0x4a);
  iVar7 = (uint)uVar2 + (uint)*(ushort *)(unaff_s0 + 0x50);
  *(short *)(unaff_s0 + 0x4a) = (short)iVar7;
  *(ushort *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + uVar2;
  if (iVar7 * 0x10000 >> 0x10 < -0x17) {
    *(undefined2 *)(unaff_s0 + 0x4a) = 0x18;
    uVar6 = *(ushort *)(unaff_s0 + 0x50) - 4;
    *(short *)(unaff_s0 + 0x50) = (short)uVar6;
    sVar4 = *(byte *)(unaff_s0 + 6) + 1;
    *(char *)(unaff_s0 + 6) = (char)sVar4;
    *(char *)(unaff_s0 + 5) = (char)uVar6;
    *(short *)(unaff_s0 + 6) = sVar4;
    if ((uVar6 & 0xff) == 0) {
      *(char *)(unaff_s1 + 5) = *(char *)(unaff_s1 + 5) + '\x01';
      uVar5 = FUN_8013d798();
      return uVar5;
    }
    *(undefined2 *)(unaff_s1 + 0x2e) = *(undefined2 *)(unaff_s2 + 0x30);
    *(char *)(unaff_s1 + 7) = *(char *)(unaff_s0 + 4) << 5;
    bVar3 = *(char *)(unaff_s0 + 4) + 1;
    *(byte *)(unaff_s0 + 4) = bVar3;
    if (5 < bVar3) {
      *(undefined1 *)(unaff_s0 + 4) = 0;
    }
    func_0x8002b278();
    iVar7 = (int)*(short *)(unaff_s2 + 0x16);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 3;
    }
    *(short *)(unaff_s1 + 0x4a) = *(short *)(unaff_s1 + 0x4a) + (short)(iVar7 >> 2);
    _DAT_800bf544 = in_t2;
    return in_t0;
  }
  return 0;
}

