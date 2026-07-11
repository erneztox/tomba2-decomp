// FUN_08020214

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08020214(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  short local_22;
  short local_1e;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    iVar3 = func_0x0006cdcc(0x800e8008);
    if (iVar3 == 0) {
      return;
    }
    DAT_800e807e = 1;
    local_26 = *(undefined2 *)(param_1 + 0x2e);
    local_22 = *(short *)(param_1 + 0x32) + -0xb4;
    local_1e = *(short *)(param_1 + 0x36) + -200;
    iVar3 = func_0x0003116c(0x301,auStack_28,0xffffffd8);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x10) = iVar3;
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
      *(byte *)(iVar3 + 0x2b) = DAT_800bf901 >> 7;
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x00119e68(param_1,2);
      *(undefined2 *)(param_1 + 0x42) = 6;
      func_0x0006cc1c(0x800e8008,0x80129df4,0x1e);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      iVar3 = func_0x0006cdcc(0x800e8008);
      if (iVar3 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
    if ((_DAT_1f80017c & 7) == 0) {
      func_0x00074590(0x86,0,0);
    }
    iVar3 = func_0x00076d68(param_1);
    if ((iVar3 != 1) ||
       (sVar2 = *(short *)(param_1 + 0x42), *(short *)(param_1 + 0x42) = sVar2 + -1, sVar2 != 1)) {
      return;
    }
    func_0x00074590(0x2a,0x11,0);
    DAT_800e807e = 0;
    func_0x0006cc1c(0x800e8008,0x80129de8,0x1e);
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 2;
    }
  }
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

