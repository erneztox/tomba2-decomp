/**
 * @brief Entity follow state: entity[0x62] target, follows
 * @note Original: func_800702C0 at 0x800702C0
 */
// Entity_State_Follow



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800702c0(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  
  sVar6 = *(short *)(param_1 + 0x62);
  iVar4 = *(int *)(param_1 + 0x10);
  sVar5 = *(short *)(iVar4 + 0x56);
  switch(*(undefined1 *)(param_1 + 0x5e)) {
  case 0:
    *(short *)(param_1 + 0x2e) =
         (short)((*(int *)(_DAT_800e7f50 + 0x2c) + *(int *)(_DAT_800e7f5c + 0x2c)) / 2);
    *(short *)(param_1 + 0x32) =
         (short)((*(int *)(_DAT_800e7f50 + 0x30) + *(int *)(_DAT_800e7f5c + 0x30)) / 2);
    iVar4 = *(int *)(_DAT_800e7f50 + 0x34);
    iVar2 = *(int *)(_DAT_800e7f5c + 0x34);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x60);
    *(short *)(param_1 + 0x36) = (short)((iVar4 + iVar2) / 2);
    sVar6 = 0x20;
    sVar5 = _DAT_800e7ed6;
    goto switchD_8007030c_default;
  case 1:
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar4 + 0xdc) + 0x2c);
    sVar1 = *(short *)(*(int *)(iVar4 + 0xdc) + 0x30);
    *(short *)(param_1 + 0x32) = sVar1;
    iVar4 = *(int *)(iVar4 + 0xdc);
    break;
  case 2:
    *(short *)(param_1 + 0x2e) =
         (short)((*(int *)(*(int *)(iVar4 + 0xd0) + 0x2c) + *(int *)(*(int *)(iVar4 + 0xdc) + 0x2c))
                / 2);
    *(short *)(param_1 + 0x32) =
         (short)((*(int *)(*(int *)(iVar4 + 0xd0) + 0x30) + *(int *)(*(int *)(iVar4 + 0xdc) + 0x30))
                / 2);
    iVar2 = *(int *)(*(int *)(iVar4 + 0xd0) + 0x34);
    iVar4 = *(int *)(*(int *)(iVar4 + 0xdc) + 0x34);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x60);
    *(short *)(param_1 + 0x36) = (short)((iVar2 + iVar4) / 2);
    goto switchD_8007030c_default;
  case 3:
    iVar2 = FUN_80083f50((int)*(short *)(iVar4 + 0x56));
    iVar2 = iVar2 * *(short *)(iVar4 + 0x80);
    *(short *)(param_1 + 0x2e) =
         *(short *)(*(int *)(iVar4 + 0xc0) + 0x2c) - (short)(iVar2 - (iVar2 >> 0x1f) >> 0xd);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar4 + 0xc0) + 0x30);
    iVar2 = FUN_80083e80((int)*(short *)(iVar4 + 0x56));
    iVar2 = iVar2 * *(short *)(iVar4 + 0x80);
    sVar3 = *(short *)(*(int *)(iVar4 + 0xc0) + 0x34);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x60);
    sVar3 = sVar3 + (short)(iVar2 - (iVar2 >> 0x1f) >> 0xd);
    goto LAB_800705dc;
  case 4:
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar4 + 0xd0) + 0x2c);
    sVar1 = *(short *)(*(int *)(iVar4 + 0xd0) + 0x30);
    *(short *)(param_1 + 0x32) = sVar1;
    iVar4 = *(int *)(iVar4 + 0xd0);
    break;
  case 5:
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(_DAT_800e7f5c + 0x2c);
    sVar1 = *(short *)(_DAT_800e7f5c + 0x30);
    *(short *)(param_1 + 0x32) = sVar1;
    iVar4 = _DAT_800e7f5c;
    break;
  case 6:
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(_DAT_800e7f50 + 0x2c);
    sVar1 = *(short *)(_DAT_800e7f50 + 0x30);
    *(short *)(param_1 + 0x32) = sVar1;
    iVar4 = _DAT_800e7f50;
    break;
  case 7:
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar4 + 0xe4) + 0x2c);
    sVar1 = *(short *)(*(int *)(iVar4 + 0xe4) + 0x30);
    *(short *)(param_1 + 0x32) = sVar1;
    iVar4 = *(int *)(iVar4 + 0xe4);
    break;
  default:
    goto switchD_8007030c_default;
  }
  sVar3 = *(short *)(iVar4 + 0x34);
  *(short *)(param_1 + 0x32) = sVar1 + *(short *)(param_1 + 0x60);
LAB_800705dc:
  *(short *)(param_1 + 0x36) = sVar3;
switchD_8007030c_default:
  iVar4 = FUN_80083f50((int)sVar5);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar4 * sVar6 >> 0xc);
  iVar4 = FUN_80083e80((int)sVar5);
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(-iVar4 * (int)sVar6 >> 0xc);
  return;
}
