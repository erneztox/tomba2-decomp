// FUN_80137748

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80137748(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  
  sVar4 = 0;
  iVar2 = func_0x8004766c();
  if (iVar2 == 0) {
    iVar2 = FUN_80140894();
    return iVar2;
  }
  if ((*(char *)(param_1 + 0x2a) == '\f') && (*(short *)(param_1 + 0x36) < 0x58c)) {
    *(undefined2 *)(param_1 + 0x36) = 0x58c;
  }
  iVar2 = func_0x8004954c(param_1,0x50,0xffffffe2);
  if (iVar2 == 1) {
    sVar4 = 2;
    if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
      iVar2 = FUN_8014077c();
      return iVar2;
    }
    *(undefined1 *)(param_1 + 0x5f) = 3;
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    uVar3 = func_0x80049250(param_1,0,0x50);
    uVar1 = _DAT_1f8001a4;
    if ((uVar3 & 1) == 0) {
      if (uVar3 == 0) goto LAB_80137898;
      *(undefined2 *)(param_1 + 0x68) = _DAT_1f8001a6;
      *(undefined2 *)(param_1 + 0x6a) = uVar1;
    }
    else {
      *(undefined2 *)(param_1 + 0x68) = _DAT_1f8001a6;
      *(undefined2 *)(param_1 + 0x6a) = uVar1;
      *(undefined1 *)(param_1 + 0x29) = 1;
      func_0x80049674(param_1);
      *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
      if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
        *(short *)(param_1 + 0x58) = _DAT_1f8001a2;
      }
      else {
        *(ushort *)(param_1 + 0x58) = 0x1000U - _DAT_1f8001a2 & 0xfff;
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_80137898:
  func_0x80049760(param_1);
  *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
  if ((*(ushort *)(param_1 + 0x62) & 4) == 0) {
    if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
      iVar2 = FUN_80140884();
      return iVar2;
    }
    *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
  }
  return (int)sVar4;
}

