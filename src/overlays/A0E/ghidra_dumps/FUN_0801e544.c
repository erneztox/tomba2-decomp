// FUN_0801e544

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0801e544(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    cVar2 = func_0x00049250(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
    *(char *)(param_1 + 0x29) = cVar2;
    if (cVar2 != '\0') {
      func_0x00049674(param_1);
      uVar1 = _DAT_1f8001a2;
      *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x62) = uVar1;
    }
    if (*(char *)(param_1 + 0x29) == '\x02') {
      *(undefined2 *)(param_1 + 100) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
      sVar3 = *(short *)(param_1 + 0x4a) + 0x30;
      *(short *)(param_1 + 0x4a) = sVar3;
      if (0x300 < sVar3) {
        *(undefined2 *)(param_1 + 0x4a) = 0x300;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0801e64c;
    }
  }
  iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x62));
  iVar4 = (iVar4 << 2) >> 0xc;
  if (0 < *(short *)(param_1 + 0x44)) {
    iVar4 = -iVar4;
  }
  iVar4 = *(short *)(param_1 + 0x44) + iVar4;
  iVar5 = iVar4;
  if (iVar4 < 0) {
    iVar5 = -iVar4;
  }
  if (iVar5 - 0x81U < 0x37f) {
    *(short *)(param_1 + 0x44) = (short)iVar4;
  }
  *(undefined2 *)(param_1 + 0x4a) = 0x100;
LAB_0801e64c:
  return *(undefined1 *)(param_1 + 0x29);
}

