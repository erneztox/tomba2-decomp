// FUN_80129790

/* WARNING: Removing unreachable block (ram,0x80129864) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80129790(undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(byte)param_1[3];
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(uVar2 * 6 + -0x7feb594c);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(uVar2 * 6 + -0x7feb594a);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(uVar2 * 6 + -0x7feb5948);
  if ((uVar2 == 0) || (uVar2 == 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_801252c0(param_1,0,param_1[3]);
  }
  uVar2 = (uint)(byte)param_1[3];
  if (((int)(uint)DAT_800bf9cc >> (uVar2 & 0x1f) & 1U) != 0) {
    param_1[4] = 3;
    FUN_80132944();
    return;
  }
  if (uVar2 < 5) {
    if (uVar2 != 0) {
      iVar1 = func_0x80051b70(param_1,0xc,5);
      if (iVar1 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x62) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = 0xc00;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x999;
      *(undefined2 *)(param_1 + 100) = 0xc00;
      *(undefined2 *)(param_1 + 0x66) = 0x999;
      *(undefined2 *)(param_1 + 0x6a) = 1;
LAB_80129900:
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0xbc) = 0x1000;
      *(undefined2 *)(param_1 + 0xba) = 0x1000;
      *(undefined2 *)(param_1 + 0xb8) = 0x1000;
      *(undefined2 *)(param_1 + 0x40) = 0x14;
      *(undefined2 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x6c) = 0;
      *(undefined2 *)(param_1 + 0x76) = 0;
      *(undefined2 *)(param_1 + 0x78) = 0;
      *(undefined2 *)(param_1 + 0x7a) = 0;
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
      param_1[0x5e] = 0;
      param_1[0x5f] = 0;
      param_1[4] = param_1[4] + '\x01';
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) =
           *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38);
      FUN_80133774(param_1);
      iVar1 = func_0x80048750(param_1);
      if ((iVar1 != 0) &&
         (*(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0, 1 < (byte)param_1[3] - 3)) {
        *(ushort *)(param_1 + 0x58) = _DAT_1f8001a2 & 0xfff;
      }
      func_0x800518fc(param_1);
      return;
    }
  }
  else if (uVar2 != 5) goto LAB_80129900;
  iVar1 = func_0x80051b70(param_1,0xc,4);
  if (iVar1 != 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x62) = 1;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = 0x1000;
  iVar1 = *(int *)(param_1 + 0xc0);
  *(undefined2 *)(iVar1 + 0x3a) = 0x1000;
  *(undefined2 *)(param_1 + 100) = 0x1000;
  *(undefined2 *)(param_1 + 0x66) = 0x1000;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x5e] = 0;
                    /* WARNING: Subroutine does not return */
  *(undefined2 *)(iVar1 + 2) = 0x1000;
  FUN_801402b8();
}

