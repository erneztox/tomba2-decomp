// FUN_801122cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801122cc(undefined1 *param_1)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar3 = (ushort)(byte)param_1[6];
  if (uVar3 != 1) {
    if (1 < uVar3) {
      if (uVar3 != 2) goto LAB_8011b3b0;
      param_1[0x5e] = 0;
      param_1[4] = 1;
      param_1[5] = 0;
      param_1[6] = 0;
      *param_1 = 1;
      goto LAB_80112414;
    }
    if (uVar3 != 0) {
LAB_8011b3b0:
      *(undefined2 *)(param_1 + 0x42) = 0xffff;
      if (uVar3 != 0xffff) {
        return;
      }
      *(undefined2 *)(param_1 + 0x52) = 0xffa0;
      param_1[5] = param_1[5] + '\x01';
      func_0x800310f4(0x207,0xfffffff6);
      func_0x80074590(0x99,0,0);
      FUN_801244d4();
      return;
    }
    param_1[6] = 1;
    *(undefined2 *)(param_1 + 0x40) = 4;
    *(undefined2 *)(param_1 + 0xe) = 0;
    func_0x80074590(0x93,0,0);
  }
  uVar4 = *(ushort *)(param_1 + 0xe) + 1 & 7;
  *(short *)(param_1 + 0xe) = (short)uVar4;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = *(undefined2 *)(uVar4 * 6 + -0x7fec9ef4);
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) =
       *(undefined2 *)(*(short *)(param_1 + 0xe) * 6 + -0x7fec9ef2);
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) =
       *(undefined2 *)(*(short *)(param_1 + 0xe) * 6 + -0x7fec9ef0);
  if ((*(short *)(param_1 + 0xe) == 0) &&
     (sVar1 = *(short *)(param_1 + 0x40), *(short *)(param_1 + 0x40) = sVar1 + -1, sVar1 == 1)) {
    param_1[6] = param_1[6] + '\x01';
    FUN_8011b3ac();
    return;
  }
LAB_80112414:
  iVar2 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                       0x10000) >> 0x10);
  if (iVar2 != 0) {
    func_0x80051844(param_1);
  }
  return;
}

