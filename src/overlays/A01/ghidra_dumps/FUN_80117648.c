// FUN_80117648

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80117648(int param_1)

{
  short sVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined2 *)(param_1 + 0x40) = 8;
    UNRECOVERED_JUMPTABLE = (code *)(*(byte *)(param_1 + 0x78) + 1);
    *(char *)(param_1 + 0x78) = (char)UNRECOVERED_JUMPTABLE;
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    if (*(char *)(param_1 + 0x78) == '\x01') {
      if (*(char *)(param_1 + 0x79) != '\x01') {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x5e) & 1) != 0) {
        func_0x80074590(0x92,(int)*(char *)(param_1 + 0x40),0);
        sVar1 = *(short *)(param_1 + 0x40) + 1;
        *(short *)(param_1 + 0x40) = sVar1;
        if (sVar1 < 0x10) {
          return 0;
        }
        if ((*(byte *)(param_1 + 0x5e) & 1) != 0) {
          return 1;
        }
        if (_DAT_800bf844 != 0) {
          func_0x80051b04(*(undefined4 *)(_DAT_800bf844 + 0xc0),1,0);
          UNRECOVERED_JUMPTABLE = (code *)0x1;
          goto switchD_801206c8_switchD;
        }
      }
      UNRECOVERED_JUMPTABLE = (code *)0x1;
    }
  }
switchD_801206c8_switchD:
                    /* WARNING: Could not recover jumptable at 0x801206c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}

