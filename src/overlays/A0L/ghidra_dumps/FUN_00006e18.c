// FUN_00006e18

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006e18(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 5) != '\0') {
      return;
    }
    if (DAT_800bfa55 < 2) {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 5) = 1;
    }
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
      iVar3 = func_0x000519e0(param_1,0xf,_DAT_800ecfcc,0x80117590);
      if (iVar3 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00077c40(param_1,0x8011a738,7);
      *(undefined2 *)(param_1 + 0x80) = 0x5a;
      *(undefined2 *)(param_1 + 0x82) = 0xb4;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
      iVar3 = (int)_DAT_1f800160;
      iVar4 = (int)_DAT_1f800164;
      *(undefined2 *)(param_1 + 0x86) = 0xe0;
      uVar2 = func_0x000782b0(param_1 + 0x2c,iVar3,iVar4);
      *(undefined2 *)(param_1 + 0x56) = uVar2;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

