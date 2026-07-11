// FUN_80110384

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80110384(int param_1)

{
  bool bVar1;
  short sVar2;
  short extraout_var;
  short extraout_var_00;
  int iVar3;
  uint uVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(char *)(param_1 + 3) == '\x03') {
    FUN_80119570();
    return;
  }
  if (*(char *)(param_1 + 3) != '\x04') {
    FUN_80119570();
    return;
  }
  if (*(short *)(param_1 + 0x32) < -0x1280) {
    uVar4 = (uint)*(byte *)(param_1 + 3);
    iVar3 = 4;
    if ((uVar4 == 3) || (iVar3 = -0x7ff40000, uVar4 != 4)) {
                    /* WARNING: Could not recover jumptable at 0x801195f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar4 * 4 + iVar3 + -0x64c0))();
      return;
    }
    sVar2 = -7000;
    if (DAT_800bf8bf == -1) {
      sVar2 = -0x1280;
    }
    if ((*(short *)(param_1 + 0x32) < sVar2) && (*(char *)(param_1 + 5) != '\x02')) {
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      FUN_80119614();
      return;
    }
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
    *(undefined1 *)(param_1 + 5) = 1;
    FUN_80119608();
    return;
  }
  if (*(char *)(param_1 + 5) != '\x04') {
    if (DAT_800e7fe4 == '\x01') {
      if (*(char *)(param_1 + 3) == '\x03') {
        bVar1 = true;
        if (0x382 < _DAT_1f800160 - 0x42cd) {
          DAT_00000007 = 0;
          goto LAB_8011969c;
        }
      }
      else {
        if (*(char *)(param_1 + 3) != '\x04') {
LAB_8011969c:
          FUN_801208b4();
          FUN_801226ac();
          return;
        }
        bVar1 = true;
        if (0x1a8f < _DAT_1f800164) goto LAB_801106f8;
      }
    }
    else {
LAB_801106f8:
      bVar1 = false;
    }
    if (bVar1) {
      sVar2 = *(short *)(param_1 + 0x72) + 1;
      *(short *)(param_1 + 0x72) = sVar2;
      if (sVar2 < 0x3d) goto LAB_80110750;
      iVar3 = func_0x8009a450();
      if (iVar3 < 0xa000) {
        *(undefined1 *)(param_1 + 5) = 4;
        *(undefined1 *)(param_1 + 6) = 0;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x72) = 0;
LAB_80110750:
  iVar3 = func_0x80083f50((int)*(short *)(param_1 + 0x70));
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar3 >> 9);
  iVar3 = func_0x8009a450();
  iVar3 = (uint)*(ushort *)(param_1 + 0x70) + (iVar3 >> 0xb);
  *(short *)(param_1 + 0x70) = (short)iVar3;
  func_0x80083f50(iVar3 * 0x10000 >> 0x10);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x74) + extraout_var;
  func_0x80083e80((int)*(short *)(param_1 + 0x70));
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x76) + extraout_var_00;
  return;
}

