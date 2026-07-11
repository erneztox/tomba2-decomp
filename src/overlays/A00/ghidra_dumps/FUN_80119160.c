// FUN_80119160

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80119160(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 7) == '\0') {
    bVar1 = false;
    if (0x18 < DAT_1f800207) {
      iVar3 = func_0x800519e0(param_1,0x12,_DAT_800ecfcc,0x8014c02c);
      bVar1 = true;
      if (iVar3 == 0) {
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        if (DAT_800bf8f6 != -1) {
          func_0x80077c40(param_1,&DAT_8014e4ec,0xf);
          FUN_801224fc();
          return;
        }
        FUN_801224c0(param_1,&DAT_8014e4ec,4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 7) != '\x01') {
      FUN_801224fc();
      return;
    }
    bVar1 = true;
    if (DAT_1f800207 < 0x19) {
      func_0x8007addc(param_1);
      bVar1 = false;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -1;
    }
  }
  if (bVar1) {
    uVar2 = 1;
    if (((DAT_1f800137 != '\0') || (uVar2 = 1, DAT_800e7eaa - 0x20 < 4)) ||
       ((*(char *)(param_1 + 0x47) == '\x03' && (uVar2 = 2, _DAT_1f800162 < -0xce3)))) {
      *(undefined1 *)(param_1 + 1) = uVar2;
      func_0x80077e7c(param_1);
    }
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x8004190c(param_1);
      func_0x800518fc(param_1);
    }
  }
  else if (DAT_800bf8f7 == -1) {
    *(undefined1 *)(param_1 + 4) = 3;
    FUN_80122598();
    return;
  }
  return;
}

