// FUN_08040774

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08040774(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      func_0x0013924c(param_1);
    }
    else if (param_1[3] == '\x01') {
      func_0x00139458(param_1);
      if (param_1[1] != '\0') {
        func_0x000518fc(param_1);
      }
      param_1[0x2b] = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = func_0x000519e0(param_1,0xf,_DAT_800ecfc8,0x80141434);
      if (iVar3 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x80148790,0x800a3d18);
      param_1[0x7b] = 1;
      func_0x00041718(param_1,1,0);
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      *(undefined2 *)(param_1 + 0x86) = 0x180;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      param_1[0xb] = param_1[0xb] & 0xc0 | 0x80;
      if (param_1[3] == '\0') {
        uVar2 = 0x52e;
        if (DAT_800bfa3a == '\0') {
          uVar2 = 0xe60;
        }
      }
      else {
        uVar2 = 0x400;
        if (param_1[3] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(undefined2 *)(param_1 + 0x56) = uVar2;
      param_1[0x2b] = 0;
      param_1[4] = param_1[4] + '\x01';
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

