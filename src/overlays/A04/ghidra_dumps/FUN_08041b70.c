// FUN_08041b70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041b70(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  puVar6 = (ushort *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x52) = 0x155;
    *(undefined2 *)(param_1 + 0x58) = 0x1000;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x505050;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 100) = 0x800;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if ((DAT_800e7eaa < 0x2c) && ((_DAT_800bfe56 & 0x10) == 0)) {
    if (*(char *)(param_1 + 5) == '\0') {
      if (0x155 < *(short *)(param_1 + 0x52)) {
        *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -3;
      }
      if ((*(short *)(param_1 + 0x54) < -8) && ((*puVar6 & 3) == 0)) {
        *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (*(short *)(param_1 + 0x52) < 0x400) {
        *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 3;
      }
      if ((-0x28 < *(short *)(param_1 + 0x54)) && ((*puVar6 & 3) == 0)) {
        *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + -1;
      }
    }
    *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + -8;
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 8;
    *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + *(short *)(param_1 + 0x54);
    uVar2 = *puVar6;
    *puVar6 = uVar2 - 1;
    if ((int)((uint)(ushort)(uVar2 - 1) << 0x10) < 0) {
      iVar4 = func_0x0009a450();
      if (0x6000 < iVar4) {
        *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 1;
      uVar5 = func_0x0009a450();
      func_0x00074590(0x81,(int)(((uVar5 & 0xf) - 7) * 0x1000000) >> 0x18,0xffffffc4);
      iVar4 = func_0x0009a450();
      uVar5 = iVar4 >> 10 & 0xf;
      uVar2 = 0x96;
      if ((3 < uVar5) && (uVar2 = 300, 9 < uVar5)) {
        uVar2 = 0x1c2;
      }
      *puVar6 = uVar2;
    }
  }
  sVar3 = *(short *)(param_1 + 0x60) + 0x33;
  *(short *)(param_1 + 0x60) = sVar3;
  iVar4 = func_0x00083e80((int)sVar3);
  *(short *)(param_1 + 0x62) = (short)((iVar4 >> 1) + 0x1000 >> 1);
  sVar3 = *(short *)(param_1 + 100) + 0x33;
  *(short *)(param_1 + 100) = sVar3;
  iVar4 = func_0x00083e80((int)sVar3);
  *(short *)(param_1 + 0x66) = (short)((iVar4 >> 1) + 0x1000 >> 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

