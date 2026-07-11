// FUN_0801ff40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ff40(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      func_0x001182e8(param_1);
    }
    else if (*(char *)(param_1 + 0x5e) == '\x01') {
      func_0x00118bb4(param_1);
      if (*(char *)(param_1 + 1) == '\0') {
        return;
      }
      func_0x0004190c(param_1);
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
    iVar2 = func_0x000519e0(param_1,9,_DAT_800ecfd4,0x80131c10);
    if (iVar2 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfd8;
    func_0x00040cdc(param_1,0x8014106c,0x800a3d18);
    func_0x00041718(param_1,0,0);
    if (DAT_800bf9d6 == '\0') {
      *(undefined2 *)(param_1 + 0x2e) = 0x170c;
      *(undefined2 *)(param_1 + 0x32) = 0xf254;
      *(undefined2 *)(param_1 + 0x36) = 0x2d26;
      *(undefined1 *)(param_1 + 0x5e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x2e) = 0x16ee;
    *(undefined2 *)(param_1 + 0x32) = 0xf074;
    *(undefined2 *)(param_1 + 0x36) = 0x2f3a;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    uVar3 = func_0x0012b3fc(param_1);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

