// FUN_801281b8

uint FUN_801281b8(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  uint in_v0;
  uint uVar4;
  ushort uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 in_t0;
  int unaff_s0;
  
  puVar6 = (undefined2 *)(in_v0 & 3);
  if ((puVar6 != (undefined2 *)0x0) &&
     (bVar1 = *(byte *)(*(int *)(param_3 + (int)puVar6 * 4 + 0xc0) + 0x3e), in_v0 = bVar1 & 3,
     (bVar1 & 3) == 0)) {
    if (((*(byte *)(param_3 + 0x5e) & 2) != 0) &&
       ((undefined2 *)(int)*(short *)(param_3 + 0x6c) == puVar6)) {
      return *(int *)((*(ushort *)(param_3 + 0x6e) & 0xfff) + 0x30) + 0x50 <
             (int)(short)puVar6[0x32] ^ 1;
    }
    iVar7 = ((int)puVar6 << 0x10) >> 0xe;
    if (*(short *)(*(int *)(param_3 + (((int)puVar6 << 0x10) >> 0xe) + 0xc0) + 0xc) == 0x800) {
      iVar8 = iVar7 + -2;
      *(short *)(unaff_s0 + 0x60) = (short)iVar7;
      *(undefined2 *)(unaff_s0 + 0x62) = 0xfab0;
      *(undefined2 *)(unaff_s0 + 100) = 0xfb96;
      *(undefined2 *)(unaff_s0 + 0x66) = 0x1e0;
      *(undefined2 *)(unaff_s0 + 0x68) = 0xf878;
      *(undefined2 *)(unaff_s0 + 0x50) = 0x980;
      *(undefined4 *)(unaff_s0 + 0x2c) = 0x24c30000;
      *(undefined4 *)(unaff_s0 + 0x34) = 0x14f10000;
      param_3 = 0;
      *(undefined1 *)(unaff_s0 + 0x5e) = 0;
      *(undefined2 *)(unaff_s0 + 0x54) = 0;
      *(undefined2 *)(unaff_s0 + 0x56) = 0;
      *(undefined2 *)(unaff_s0 + 0x58) = 0;
      *(int *)(unaff_s0 + 0x30) = (int)*(short *)(unaff_s0 + 0x60) << 0x10;
      if (*(char *)(unaff_s0 + 8) != '\0') {
        in_t0 = 0xffff;
        puVar9 = (undefined2 *)0xfffffffe;
        puVar6 = (undefined2 *)&DAT_8014aa58;
        goto LAB_80131278;
      }
LAB_80131318:
      if (*(char *)(unaff_s0 + 3) != '\0') {
        sVar2 = *(short *)(unaff_s0 + 0x62);
        do {
          *(int *)(unaff_s0 + 0x30) =
               *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x50) * 0x100;
          func_0x800517f8();
          FUN_80139c2c();
        } while ((int)*(short *)(unaff_s0 + 0x32) < (int)sVar2);
        *(int *)(unaff_s0 + 0x30) = (int)sVar2 << 0x10;
        return 0;
      }
      uVar4 = FUN_8013a2dc();
      return uVar4;
    }
    iVar8 = iVar7 + -4;
    if ((*(ushort *)(param_3 + 0x60) & 2) == 0) {
      iVar8 = iVar7 + -5;
    }
    iVar7 = iVar8 * 0x10000 >> 0x10;
    iVar8 = 1;
    *(undefined1 *)(*(int *)(param_3 + iVar7 * 4 + 0xc0) + 0x3e) = 1;
    *(undefined1 *)(*(int *)(param_3 + (iVar7 + 1) * 4 + 0xc0) + 0x3e) = 1;
    iVar7 = *(int *)(param_3 + (int)puVar6 * 4 + 0xc0);
    *(byte *)(iVar7 + 0x3e) = *(byte *)(iVar7 + 0x3e) | 2;
    uVar5 = *(ushort *)(param_3 + 0x7a) & 3;
    if (uVar5 == 2) {
      uVar3 = 4;
    }
    else {
      uVar3 = 8;
      puVar9 = puVar6;
      if (uVar5 != 3) {
        while( true ) {
          *(undefined2 *)(*(int *)(iVar8 + 0xc0) + 4) = puVar6[1];
          *(undefined4 *)(*(int *)(iVar8 + 0xc0) + 8) = 0;
          *(undefined4 *)(*(int *)(iVar8 + 0xc0) + 0xc) = 0;
          *(undefined2 *)(*(int *)(iVar8 + 0xc0) + 0x14) = in_t0;
          *(short *)(*(int *)(iVar8 + 0xc0) + 0x10) = (short)puVar9;
          *(undefined2 *)(*(int *)(iVar8 + 0xc0) + 0x16) = 0;
          puVar6 = puVar6 + 2;
          *(char *)(*(int *)(iVar8 + 0xc0) + 0x3e) = (char)param_3;
          *(undefined1 *)(*(int *)(iVar8 + 0xc0) + 0x3f) = 0;
          param_3 = param_3 + 1;
          iVar8 = iVar8 + 4;
          if ((int)(uint)*(byte *)(unaff_s0 + 8) <= param_3) break;
LAB_80131278:
          *(short *)(*(int *)(iVar8 + 0xc0) + 6) = (short)param_3 + -1;
          **(undefined2 **)(iVar8 + 0xc0) = 0;
          *(undefined2 *)(*(int *)(iVar8 + 0xc0) + 2) = *puVar6;
        }
        goto LAB_80131318;
      }
    }
    *(undefined2 *)(param_3 + 0x72) = uVar3;
    in_v0 = *(ushort *)(param_3 + 0x7a) & 4;
    if ((*(ushort *)(param_3 + 0x7a) & 4) != 0) {
      in_v0 = *(ushort *)(param_3 + 0x72) + 2;
      *(short *)(param_3 + 0x72) = (short)in_v0;
    }
  }
  return in_v0;
}

