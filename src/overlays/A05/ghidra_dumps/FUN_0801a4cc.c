// FUN_0801a4cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801a4cc(int param_1,short param_2)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    if (0x1643 < *(short *)(param_1 + 0x36)) {
      *(undefined2 *)(param_1 + 0x36) = 0x1644;
    }
    if (0x1517 < *(short *)(param_1 + 0x36)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(short *)(param_1 + 0x36) < 0x128f) {
      *(undefined2 *)(param_1 + 0x36) = 0x128e;
    }
    if (*(short *)(param_1 + 0x36) < 0x13bb) {
      bVar1 = true;
    }
  }
  if ((bVar1) || (param_2 == 0)) {
    uVar2 = *(short *)(param_1 + 0x52) - 0x280;
    *(ushort *)(param_1 + 0x52) = uVar2;
    if ((int)((uint)uVar2 << 0x10) < 1) {
      if (*(short *)(param_1 + 0x4a) != 0) {
        *(undefined2 *)(param_1 + 0x52) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
      if (param_2 != 0) {
        *(undefined2 *)(param_1 + 0x52) = 0x1a00;
        *(char *)(param_1 + 0xbe) = '\x01' - *(char *)(param_1 + 0xbe);
        if (*(char *)(param_1 + 0x46) == '\x1e') {
          return 0;
        }
        func_0x000416a8(param_1,0xe,0x80140f7c);
        func_0x00041718(param_1,0x1e,4);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x4a) == 0) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
      if ((_DAT_1f80017c & 3) == 0) {
        local_16 = *(undefined2 *)(param_1 + 0x2e);
        local_12 = *(short *)(param_1 + 0x32) +
                   (*(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84));
        local_e = *(undefined2 *)(param_1 + 0x36);
        iVar4 = func_0x0003116c(0,auStack_18,0xffffffa6);
        if (iVar4 != 0) {
          *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
        }
      }
      if (*(char *)(param_1 + 0x46) != '\x1f') {
        func_0x000416a8(param_1,0xe,0x80140f7c);
        func_0x00041718(param_1,0x1f,8);
        halt_baddata();
      }
    }
  }
  else {
    sVar3 = *(short *)(param_1 + 0x52) + 0x60;
    *(short *)(param_1 + 0x52) = sVar3;
    if (0x1dff < sVar3) {
      *(undefined2 *)(param_1 + 0x52) = 0x1e00;
    }
  }
  return 0;
}

