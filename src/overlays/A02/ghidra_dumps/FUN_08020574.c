// FUN_08020574

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08020574(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    iVar3 = func_0x0006cdcc(0x800e8008);
    if (iVar3 == 0) {
      return;
    }
    DAT_800e807e = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x60) = 0x48;
      func_0x00119e68(param_1,2);
      *(undefined2 *)(param_1 + 0x42) = 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    if ((_DAT_1f80017c & 7) == 0) {
      func_0x00074590(0x87,0,0);
      iVar3 = func_0x0003116c(0x302,param_1 + 0x2c,0xffffffd8);
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
      }
    }
    iVar3 = func_0x00076d68(param_1);
    if (iVar3 != 1) {
      return;
    }
    sVar2 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    DAT_800e807e = 0;
    func_0x0006cc1c(0x800e8008,0x80129e00,0x1e);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 == 3) {
    iVar3 = func_0x0006cdcc(0x800e8008);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 1;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

