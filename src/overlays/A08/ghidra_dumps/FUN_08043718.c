// FUN_08043718

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08043718(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[0x5e] == '\0') {
      func_0x0013c354(param_1);
    }
    else if (param_1[0x5e] == '\x01') {
      func_0x0013c530(param_1);
      if (param_1[1] == '\0') {
        return;
      }
      func_0x000518fc(param_1);
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
    return;
  }
  if (bVar1 == 0) {
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfd0,0x80141524);
    if (iVar2 != 0) {
      return;
    }
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x1e,0x11);
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
    func_0x00040cdc(param_1,0x80148790,0x800a3d18);
    param_1[0x7b] = 2;
    func_0x00041718(param_1,2,0);
    *param_1 = 9;
    *(undefined2 *)(param_1 + 0x82) = 0x100;
    *(undefined2 *)(param_1 + 0x84) = 0xa0;
    *(undefined2 *)(param_1 + 0x86) = 0x136;
    *(undefined2 *)(param_1 + 0x56) = 0x6d2;
    param_1[0xb] = 0x80;
    *(undefined2 *)(param_1 + 0x80) = 0x80;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    if (DAT_800bfa36 != '\x02') {
      param_1[0x5e] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0x5e] = 1;
    param_1[0x2b] = 0;
    param_1[4] = param_1[4] + '\x01';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

