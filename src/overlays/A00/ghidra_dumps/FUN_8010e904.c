// FUN_8010e904

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010e904(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ushort in_v0;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int unaff_s1;
  int unaff_s2;
  undefined8 uVar6;
  
  *(ushort *)(unaff_s2 + 0x16) = in_v0;
  if ((int)((uint)in_v0 << 0x10) < 0) {
    func_0x8009a450();
    return;
  }
  uVar4 = (uint)*(byte *)(unaff_s1 + 3);
  if (uVar4 == 0) {
    psVar5 = *(short **)(unaff_s1 + 0x10);
    iVar3 = func_0x8007778c();
    uVar2 = _DAT_1f800164;
    uVar1 = _DAT_1f800162;
    if (iVar3 == 0) {
      return;
    }
    if (*(char *)(unaff_s1 + 5) == '\x02') {
      *(ushort *)(unaff_s1 + 0x2e) = _DAT_1f800160;
      *(undefined2 *)(unaff_s1 + 0x32) = uVar1;
      *(undefined2 *)(unaff_s1 + 0x36) = uVar2;
      return;
    }
    *(short *)(unaff_s1 + 0x2e) = *psVar5 + -0x20;
    *(short *)(unaff_s1 + 0x32) = psVar5[1] + 0x50;
    func_0x80077b5c();
    uVar6 = func_0x8004b374();
  }
  else {
    uVar6 = CONCAT44(uVar4,0x1f800000);
    if (uVar4 == 1) {
      psVar5 = *(short **)(unaff_s1 + 0x10);
      if (4 < DAT_1f800207) {
        return;
      }
      iVar3 = func_0x8007778c();
      uVar2 = _DAT_1f800164;
      uVar1 = _DAT_1f800162;
      if (iVar3 == 0) {
        return;
      }
      if (*(char *)(unaff_s1 + 5) == '\x02') {
        uVar4 = (uint)_DAT_1f800160;
        *(ushort *)(unaff_s1 + 0x2e) = _DAT_1f800160;
        *(undefined2 *)(unaff_s1 + 0x32) = uVar1;
        *(undefined2 *)(unaff_s1 + 0x36) = uVar2;
        psVar5[0x24] = (short)((int)uVar4 >> 4);
        iVar3 = func_0x80083e80((int)psVar5[0x2b]);
        psVar5[0x26] = (short)(-iVar3 >> 4);
        psVar5[0x25] = -0x200;
        psVar5[0x22] = 0x1000;
        *(char *)(psVar5 + 3) = (char)psVar5[3] + '\x01';
        FUN_801217f4(psVar5);
        if (*(char *)((int)psVar5 + 5) == '\a') {
          func_0x80077e20(psVar5,0x20,0x30,0xff);
        }
        else if (*(char *)((int)psVar5 + 5) == '\b') {
          func_0x80077e20(psVar5,0xf0,0x40,0x40);
        }
        return;
      }
      *(short *)(unaff_s1 + 0x2e) =
           *psVar5 + (short)((uint)(*(short *)(*(int *)(unaff_s1 + 0xc0) + 0x1a) * 9) >> 8);
      *(short *)(unaff_s1 + 0x32) =
           psVar5[1] + (short)((uint)(*(short *)(*(int *)(unaff_s1 + 0xc0) + 0x20) * 9) >> 8);
      *(short *)(unaff_s1 + 0x58) = -psVar5[6];
      func_0x800517f8();
      uVar6 = func_0x8004b374();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x80117cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)((ulonglong)uVar6 >> 0x20) + (int)uVar6))();
  return;
}

