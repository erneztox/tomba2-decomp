// FUN_8011b220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011b220(undefined1 *param_1)

{
  char cVar1;
  undefined2 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  UNRECOVERED_JUMPTABLE = (code *)0x1;
  if (param_1[0x5e] == '\0') {
    iVar3 = *(int *)(param_1 + 0x10);
    if (((int)(uint)DAT_800bf9cc >> (*(byte *)(iVar3 + 3) & 0x1f) & 1U) == 0) {
      cVar1 = *(char *)(iVar3 + 1);
      param_1[1] = cVar1;
      if (cVar1 != '\0') {
        func_0x80077e7c(param_1);
        iVar3 = FUN_80123c94(param_1);
        if (iVar3 == 0) {
          iVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x84) << 0x10;
          *(short *)(param_1 + 0x66) = -(short)((iVar3 >> 0x10) - (iVar3 >> 0x1f) >> 1);
          FUN_80123e9c(param_1);
          func_0x80051d90(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc0),param_1 + 100,
                          &DAT_1f8000c0);
          *(undefined2 *)(param_1 + 0x2e) = _DAT_1f8000c0;
          *(undefined2 *)(param_1 + 0x32) = _DAT_1f8000c2;
          *(undefined2 *)(param_1 + 0x36) = _DAT_1f8000c4;
          UNRECOVERED_JUMPTABLE = (code *)(*(short *)(param_1 + 0x6c) * 0x100);
          *(code **)(param_1 + 0x30) = UNRECOVERED_JUMPTABLE + *(int *)(param_1 + 0x30);
          goto switchD_80124310_switchD;
        }
      }
      return;
    }
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar3 + 0x2e);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar3 + 0x32);
    uVar2 = *(undefined2 *)(iVar3 + 0x36);
    UNRECOVERED_JUMPTABLE = (code *)0x1;
    param_1[0x5e] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x36) = uVar2;
  }
  else if (param_1[0x5e] == '\x01') {
    FUN_8012400c(param_1);
    return;
  }
switchD_80124310_switchD:
                    /* WARNING: Could not recover jumptable at 0x80124310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

