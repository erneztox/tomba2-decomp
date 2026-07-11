// FUN_08019cc4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019cc4(int param_1)

{
  int iVar1;
  
  func_0x0006f0e4();
  *(undefined1 *)(param_1 + 1) = 1;
  if (DAT_800bf816 == '\0') {
LAB_08019dec:
    if (DAT_800bf871 != '\0') {
      if ((DAT_800bf871 == '\x02') && (DAT_800bfa2b != '\0')) {
        DAT_1f800137 = DAT_800bf871;
      }
      func_0x00055d5c(param_1);
      *(undefined2 *)(param_1 + 0x142) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      func_0x00054198(param_1);
      func_0x00055284(param_1);
      func_0x00054d14(param_1,2,0);
      func_0x0003315c(param_1);
      return;
    }
    DAT_1f800137 = 2;
    *(undefined1 *)(param_1 + 4) = 4;
    *(undefined1 *)(param_1 + 5) = 0x21;
    *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf817 == '\t') {
    DAT_800bf81f = *(char *)(param_1 + 0x147) << 4;
    *(undefined2 *)(param_1 + 0x140) = 0xe00;
    iVar1 = _DAT_1f800138;
    *(undefined2 *)(param_1 + 0x142) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(iVar1 + 0x4c) = 3;
    *(undefined2 *)(iVar1 + 0x4e) = 1;
    func_0x00055284(param_1);
    func_0x00054d14(param_1,2,0);
    func_0x0001cf2c();
    func_0x00114840();
  }
  else {
    if (DAT_800bf817 != '\x04') goto LAB_08019dec;
    DAT_800bf818 = 2;
    DAT_800bf81f = *(char *)(param_1 + 0x147) << 4;
    *(undefined2 *)(param_1 + 0x140) = 0x400;
    iVar1 = _DAT_1f800138;
    *(undefined2 *)(param_1 + 0x142) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(iVar1 + 0x4c) = 3;
    *(undefined2 *)(iVar1 + 0x4e) = 1;
    func_0x00055284(param_1);
    func_0x00054d14(param_1,2,0);
    func_0x0001cf2c();
    func_0x00114840();
    DAT_800bf871 = '\x13';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

