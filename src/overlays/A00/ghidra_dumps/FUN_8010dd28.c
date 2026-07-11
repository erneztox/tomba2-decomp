// FUN_8010dd28

void FUN_8010dd28(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)0x2;
      if (bVar1 != 2) {
        param_1[0x29] = 0;
        goto switchD_80116e2c_switchD;
      }
      iVar3 = func_0x8007778c(param_1);
      if (iVar3 != 0) {
        func_0x80051844(param_1);
      }
      goto LAB_8010de8c;
    }
    UNRECOVERED_JUMPTABLE = (code *)&LAB_000039e0;
    if (bVar1 != 0) {
      param_1[0x29] = 0;
      goto switchD_80116e2c_switchD;
    }
    *(undefined2 *)(param_1 + 0x2e) = 0x39e0;
    *(undefined2 *)(param_1 + 0x32) = 0xf286;
    *(undefined2 *)(param_1 + 0x36) = 0x20e0;
    *(undefined2 *)(param_1 + 0xba) = 0x2000;
    *(undefined2 *)(param_1 + 0xb8) = 0x1800;
    *(undefined2 *)(param_1 + 0xbc) = 0x1800;
    param_1[6] = 1;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = 0x1000;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x1000;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) = 0x1000;
    func_0x8004766c(param_1);
  }
  iVar3 = func_0x8007778c(param_1);
  if (iVar3 != 0) {
    func_0x80051844(param_1);
    if (param_1[0x29] == '\0') {
      sVar2 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = sVar2 + 0x100;
      if (0x3000 < (short)(sVar2 + 0x100)) {
        *(undefined2 *)(param_1 + 0x4a) = 0x3000;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      func_0x8004766c(param_1);
      return;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0;
  }
  if (-0x55f < *(short *)(param_1 + 0x32)) {
    *(undefined2 *)(param_1 + 0x32) = 0xfaa1;
    UNRECOVERED_JUMPTABLE = (code *)((byte)param_1[6] + 1);
    param_1[6] = (char)UNRECOVERED_JUMPTABLE;
switchD_80116e2c_switchD:
                    /* WARNING: Could not recover jumptable at 0x80116e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_8010de8c:
  param_1[0x29] = 0;
  return;
}

