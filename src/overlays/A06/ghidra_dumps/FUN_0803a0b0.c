// FUN_0803a0b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803a0b0(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_18 [2];
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
LAB_0803a12c:
    iVar4 = (int)*(short *)(param_1 + 0x72) - (int)*(short *)(param_1 + 0x32) >> 3;
    if (-0x10 < iVar4) {
      func_0x00041768(param_1,0xc,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar4 < -0x30) {
      iVar4 = -0x30;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)iVar4;
    func_0x00048894(param_1);
    iVar4 = (uint)_DAT_1f8001a4 - (uint)*(ushort *)(param_1 + 0x32);
    uVar3 = (undefined2)iVar4;
    iVar6 = iVar4 * 0x10000 >> 0x10;
    if (iVar6 < 0x281) {
      iVar4 = iVar4 * 0x10000;
      if (iVar6 < 0x80) {
        uVar3 = 0x80;
        iVar4 = 0x800000;
      }
      if ((iVar4 >> 0x10 != 0x280) || (*(short *)(param_1 + 0x66) != 0x280)) {
        *(undefined2 *)(param_1 + 0x66) = uVar3;
        *(short *)(*(int *)(param_1 + 0x104) + 0x3a) = (short)((iVar4 >> 0x10) * 0x333 >> 7);
      }
      if (*(short *)(param_1 + 0x72) <= *(short *)(param_1 + 0x32)) {
        return;
      }
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x72);
      param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    *param_1 = 3;
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    func_0x00041768(param_1,0xb,4);
    param_1[6] = param_1[6] + '\x01';
    goto LAB_0803a12c;
  }
  if (bVar1 != 2) {
    halt_baddata();
  }
  if (param_1[0x79] != '\x01') {
    return;
  }
  *param_1 = 1;
  param_1[6] = 0;
  if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
    bVar1 = param_1[0xbe];
    uVar5 = func_0x0013b7dc(param_1);
    uVar2 = 6;
    if (bVar1 != uVar5) goto code_r0x0803a2c0;
  }
  local_18[0] = _DAT_8010a134;
  uVar5 = func_0x0009a450();
  uVar2 = *(undefined1 *)((int)local_18 + (uVar5 & 3));
code_r0x0803a2c0:
  param_1[5] = uVar2;
  return;
}

