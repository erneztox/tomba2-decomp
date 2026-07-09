// FUN_80114d10

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80114d10(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = func_0x800519e0(param_1,0xf,_DAT_800ecfc0,0x80149358);
  uVar1 = _DAT_800ecfc4;
  if (iVar2 == 0) {
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0x78;
    *(undefined2 *)(param_1 + 0x82) = 0xf0;
    *(undefined2 *)(param_1 + 0x84) = 0x28;
    *(undefined2 *)(param_1 + 0x86) = 0x50;
    *(undefined2 *)(param_1 + 0xbc) = 0x1000;
    *(undefined2 *)(param_1 + 0xba) = 0x1000;
    *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    param_1[0xb] = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    param_1[4] = param_1[4] + '\x01';
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_1[3]) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x4e) = 0;
      param_1[0x2b] = 0;
      func_0x800518fc();
    }
  }
  return;
}

