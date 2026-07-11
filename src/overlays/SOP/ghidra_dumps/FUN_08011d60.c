// FUN_08011d60

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011d60(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 != 0) {
      func_0x000518fc(param_1);
    }
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
  }
  else {
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
      func_0x00067da8(0x800e7e80);
      iVar3 = func_0x000519e0(param_1,0x11,_DAT_800ed014,0x800a3fa8);
      uVar2 = _DAT_800ecf68;
      if (iVar3 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0x47) = 0xff;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      func_0x00040cdc(param_1,0x80017fe8,0x8010ca28);
      func_0x00054d14(param_1,8,0);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      func_0x0010ae30();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

