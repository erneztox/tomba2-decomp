// FUN_0801dbac

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0801dbac(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x2a);
  if ((((((6 < uVar3 - 1) && (uVar3 != 8)) && (uVar3 != 9)) &&
       ((2 < uVar3 - 10 && (1 < uVar3 - 0xd)))) &&
      ((6 < uVar3 - 0xf && ((3 < uVar3 - 0x16 && (3 < uVar3 - 0x27)))))) && (5 < uVar3 - 0x21)) {
    uVar4 = (uint)DAT_1f800207;
    if (((6 < uVar4 - 1) && (uVar4 != 8)) && (uVar4 != 9)) {
      bVar1 = false;
      if (((2 < uVar4 - 10) && (bVar1 = false, 1 < uVar4 - 0xd)) &&
         ((bVar1 = false, 6 < uVar4 - 0xf &&
          ((bVar1 = false, 3 < uVar4 - 0x16 && (bVar1 = false, 3 < uVar4 - 0x27)))))) {
        if (uVar4 - 0x21 < 6) {
          halt_baddata();
        }
        bVar1 = uVar4 - 0x1a < 7;
      }
      uVar2 = 0;
      if ((bool)(uVar3 - 0x1a < 7 & bVar1)) {
        uVar2 = func_0x0007778c();
      }
      return uVar2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

