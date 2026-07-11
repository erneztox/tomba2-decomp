// FUN_08023590

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023590(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    if (param_1[3] == '\0') {
      func_0x0011c2a0(param_1);
    }
    else if (param_1[3] == '\x01') {
      func_0x0011ca78(param_1);
      func_0x000518fc(param_1);
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (param_1[5] != '\0') {
        param_1[5] = 0;
        iVar3 = func_0x000519e0(param_1,0xf,_DAT_800ecfa4,0x801290e0);
        uVar2 = _DAT_800ecf90;
        if (iVar3 != 0) {
          return;
        }
        param_1[0xb] = 0x40;
        *param_1 = 9;
        *(undefined2 *)(param_1 + 0x80) = 0xaa;
        *(undefined2 *)(param_1 + 0x82) = 0x154;
        *(undefined2 *)(param_1 + 0x84) = 0x80;
        *(undefined2 *)(param_1 + 0x86) = 0xf0;
        param_1[0x2b] = 0;
        param_1[0x29] = 0;
        *(undefined4 *)(param_1 + 0x3c) = uVar2;
        if (param_1[3] == '\0') {
          *(undefined2 *)(param_1 + 0x32) = 0xf858;
          *(undefined2 *)(param_1 + 0x56) = 0x600;
          func_0x00040cdc(param_1,0x80139240,0x8012a214);
          func_0x000416a8(param_1,0xffffffff,0);
          func_0x00041718(param_1,0x58,0);
        }
        else if (param_1[3] == '\x01') {
          func_0x0011c9c8(param_1);
          param_1[0x7b] = 0x29;
          *(undefined2 *)(param_1 + 0x58) = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          param_1[4] = param_1[4] + '\x01';
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[5] = 1;
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

