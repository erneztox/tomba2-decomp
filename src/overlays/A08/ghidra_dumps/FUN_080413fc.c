// FUN_080413fc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080413fc(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      func_0x00139e58(param_1);
    }
    else if (param_1[3] == '\x01') {
      func_0x0013a208(param_1);
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
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfd0,0x80141524);
    if (iVar2 == 0) {
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0x1e,0xf);
      func_0x00051b04(*(undefined4 *)(param_1 + 0xe0),0x1e,0x10);
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x80148790,0x800a3d18);
      param_1[0x7b] = 0;
      func_0x00041718(param_1,0,0);
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      *(undefined2 *)(param_1 + 0x86) = 0x156;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if (param_1[3] == '\0') {
        *(undefined2 *)(param_1 + 0x56) = 0x400;
        uVar3 = func_0x0012b89c(param_1,0);
        *(undefined4 *)(param_1 + 0x14) = uVar3;
      }
      else if (param_1[3] == '\x01') {
        func_0x001291bc(param_1);
        *(undefined2 *)(param_1 + 0x56) = 0x2a8;
        param_1[0xb] = param_1[0xb] & 0xc0 | 0x80;
        param_1[0x2b] = 0;
        param_1[4] = param_1[4] + '\x01';
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

