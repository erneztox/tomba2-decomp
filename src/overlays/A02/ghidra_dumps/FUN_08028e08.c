// FUN_08028e08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028e08(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x2b) == '\x02') {
    if ((DAT_800bf80a != '\x01') || (iVar3 = func_0x001222dc(param_1), iVar3 == 0)) {
      sVar1 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar1 + -1;
      if (sVar1 != 1) {
        return;
      }
      if (*(char *)(param_1 + 6) == '\0') {
        func_0x00041768(param_1,0x17,0xc);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      else if (*(char *)(param_1 + 6) == '\x01') {
        func_0x00041768(param_1,3,0xc);
        *(undefined1 *)(param_1 + 6) = 0;
        uVar2 = func_0x0009a450();
        *(ushort *)(param_1 + 0x40) = (uVar2 & 0xff) + 0x1e;
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_800bf844 = func_0x0006fb0c(param_1,DAT_800bf80b);
    if (_DAT_800bf844 != 0) {
      *(undefined1 *)(_DAT_800bf844 + 0x5e) = 0;
    }
    func_0x00040d68(param_1,0x8012c298);
  }
  else if (*(char *)(param_1 + 0x2b) != '\x03') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

