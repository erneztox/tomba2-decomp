// FUN_80124550

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80124550(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((0x15 < DAT_1f800207) && ((DAT_1f800207 != 0x16 || (0x2a2f < _DAT_800e7eb6)))) {
      if (DAT_800bf80d != '\0') {
        param_1[1] = 1;
        FUN_8012d8f4();
        return;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(param_1[3]) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8012d8f4();
      return;
    }
    iVar2 = func_0x80051b70(param_1,0xc,(byte)param_1[3] + 0x48);
    if (iVar2 == 0) {
      *param_1 = 1;
      param_1[4] = param_1[4] + '\x01';
      if ((byte)param_1[3] < 2 == 0) {
        param_1[0xb] = 2;
      }
      else {
        if (DAT_800bf9df != '\0') {
          param_1[4] = 3;
          FUN_8012d8f4();
          return;
        }
        param_1[0xb] = 0;
      }
      *(uint *)(param_1 + 0x1c) = (uint)((byte)param_1[3] < 2);
      func_0x80084660();
      func_0x80084690(param_1);
      FUN_801365c4();
      return;
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      FUN_8012d8f4();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

