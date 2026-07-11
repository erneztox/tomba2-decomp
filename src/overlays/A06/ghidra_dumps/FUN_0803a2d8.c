// FUN_0803a2d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803a2d8(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = func_0x00132ed0();
  uVar2 = 4;
  if (iVar5 < 1) {
    if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
      bVar1 = *(byte *)(param_1 + 0xbe);
      uVar6 = func_0x0013b7dc(param_1);
      uVar2 = 6;
      if (bVar1 != uVar6) goto LAB_0803a4ec;
    }
    if ((((*(byte *)(param_1 + 3) & 0x80) == 0) && (*(char *)(param_1 + 1) == '\0')) &&
       (iVar5 = func_0x0013b738(param_1,&DAT_800e7eac,0), 7 < iVar5)) {
      func_0x00041718(param_1,0xe,0);
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x74);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x76);
      func_0x00041194(param_1,0x80,*(undefined1 *)(param_1 + 0xbe),0);
      *(undefined2 *)(param_1 + 0x66) = 0;
      func_0x00048894(param_1);
      iVar5 = (uint)_DAT_1f8001a4 - (uint)*(ushort *)(param_1 + 0x32);
      uVar3 = (undefined2)iVar5;
      iVar7 = iVar5 * 0x10000 >> 0x10;
      if (iVar7 < 0x281) {
        iVar5 = iVar5 * 0x10000;
        if (iVar7 < 0x80) {
          uVar3 = 0x80;
          iVar5 = 0x800000;
        }
        if ((iVar5 >> 0x10 != 0x280) || (*(short *)(param_1 + 0x66) != 0x280)) {
          *(undefined2 *)(param_1 + 0x66) = uVar3;
          *(short *)(*(int *)(param_1 + 0x104) + 0x3a) = (short)((iVar5 >> 0x10) * 0x333 >> 7);
        }
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 != 1) {
      if (1 < bVar1) {
        if (bVar1 != 2) {
          halt_baddata();
        }
        uVar4 = func_0x0009a450();
        uVar4 = *(short *)(param_1 + 0x42) + (uVar4 & 0x3f) & 0xfff;
        *(ushort *)(param_1 + 0x42) = uVar4;
        if (*(short *)(param_1 + 0x40) == 0) {
          if (uVar4 < 0x40) {
            *(undefined2 *)(param_1 + 0x42) = 0;
            *(undefined1 *)(param_1 + 6) = 0;
            *(undefined1 *)(param_1 + 5) = 5;
          }
          iVar5 = func_0x00083e80((int)*(short *)(param_1 + 0x42));
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x72) + (short)(iVar5 >> 6);
          func_0x00048894(param_1);
          iVar5 = (uint)_DAT_1f8001a4 - (uint)*(ushort *)(param_1 + 0x32);
          uVar3 = (undefined2)iVar5;
          iVar7 = iVar5 * 0x10000 >> 0x10;
          if (0x280 < iVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          iVar5 = iVar5 * 0x10000;
          if (iVar7 < 0x80) {
            uVar3 = 0x80;
            iVar5 = 0x800000;
          }
          if ((iVar5 >> 0x10 != 0x280) || (*(short *)(param_1 + 0x66) != 0x280)) {
            *(undefined2 *)(param_1 + 0x66) = uVar3;
            *(short *)(*(int *)(param_1 + 0x104) + 0x3a) = (short)((iVar5 >> 0x10) * 0x333 >> 7);
          }
          return;
        }
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 0) {
        halt_baddata();
      }
      uVar6 = func_0x0009a450();
      if ((uVar6 & 3) != 0) {
        func_0x00041768(param_1,0,0);
        *(undefined1 *)(param_1 + 6) = 2;
        uVar4 = func_0x0009a450();
        *(ushort *)(param_1 + 0x40) = (uVar4 & 0x3f) + 0x20;
        *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(*(int *)(param_1 + 0x104) + 0x3a);
        halt_baddata();
      }
      func_0x00041768(param_1,10,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar4;
    uVar2 = 5;
    if (-1 < (int)((uint)uVar4 << 0x10)) {
      uVar6 = (uint)**(ushort **)(param_1 + 0x38) - (uint)*(byte *)(param_1 + 0x47);
      if (0xb < uVar6) {
        *(undefined2 *)(*(int *)(param_1 + 0x104) + 0x3a) = *(undefined2 *)(param_1 + 0x68);
        halt_baddata();
      }
                    /* WARNING: Could not emulate address calculation at 0x0803a528 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar6 * 4 + -0x7fef5ec4))();
      return;
    }
  }
LAB_0803a4ec:
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 5) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

