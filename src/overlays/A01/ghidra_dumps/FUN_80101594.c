// FUN_80101594

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80101594(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x160) = 0;
  if (param_3 == 0) {
    if (*(byte *)(param_1 + 7) < 7) {
                    /* WARNING: Jumptable at 0x801015e0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef7060))();
      return uVar1;
    }
  }
  else {
    func_0x80062a30(param_1,param_2,3);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  uVar1 = 1;
  if (*(int *)(param_1 + 0x158) == 0) {
    *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x30) + *(short *)(param_1 + 0x156);
  }
  else {
    iVar3 = (int)((*(ushort *)(param_1 + 0x56) + 0x800) * 0x10000) >> 0x10;
    iVar2 = func_0x80083f50(iVar3);
    *(short *)(param_1 + 0x2e) =
         *(short *)(iVar4 + 0x2c) + (short)(iVar2 * *(short *)(param_1 + 0x152) >> 0xc);
    iVar2 = func_0x80083e80(iVar3);
    *(short *)(param_1 + 0x36) =
         *(short *)(iVar4 + 0x34) - (short)(iVar2 * *(short *)(param_1 + 0x152) >> 0xc);
    *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x30) + *(short *)(param_1 + 0x156);
    if ((((*(char *)(param_1 + 5) == '\x04') && (1 < *(byte *)(param_1 + 7))) ||
        (uVar1 = 0, *(char *)(param_1 + 5) == '\t')) &&
       ((uVar1 = 0, (_DAT_800bfe56 & 2) == 0 && (uVar1 = 0, -0xb7c < *(short *)(param_1 + 0x32)))))
    {
      *(undefined1 *)(param_1 + 5) = 4;
      *(undefined1 *)(param_1 + 6) = 3;
      *(undefined1 *)(param_1 + 7) = 0;
      uVar1 = FUN_8010aa08();
      return uVar1;
    }
  }
  return uVar1;
}

