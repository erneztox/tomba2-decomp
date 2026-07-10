// FUN_00009318

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0000947c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00009318(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = *(int *)(param_1 + 0x6c);
  bVar1 = *(byte *)(param_1 + 0x78);
  sVar2 = *(short *)(iVar9 + 10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      goto LAB_00009528;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    DAT_800e7e85 = 0x21;
    DAT_800e7e86 = 0;
    iVar5 = (int)((uint)*(ushort *)(param_1 + 100) << 0x10) >> 0x18;
    if (iVar5 == 0) {
      iVar5 = 10;
    }
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x74) - _DAT_800e7eae;
    iVar8 = (uint)*(ushort *)(param_1 + 0x76) - (uint)_DAT_800e7eb6;
    iVar6 = iVar8 * 0x10000 >> 0x10;
    *(short *)(param_1 + 0x4c) = (short)iVar8;
    sVar3 = func_0x00084080(iVar6 * iVar6 +
                            (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x48));
    iVar5 = (int)(short)iVar5;
    uVar10 = (int)sVar3 / iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (sVar3 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 100) = (short)uVar10;
    if ((uVar10 & 0xffff) == 0) {
      *(undefined2 *)(param_1 + 100) = 1;
    }
    if (*(short *)(param_1 + 100) == 0) {
      trap(0x1c00);
    }
    *(undefined2 *)(param_1 + 0x44) = 0x1000;
    *(short *)(param_1 + 100) = (short)(0x1000 / (int)*(short *)(param_1 + 100));
    if (sVar2 == -1) {
      _DAT_800e7ed6 =
           func_0x00085690(-(int)*(short *)(param_1 + 0x4c),(int)*(short *)(param_1 + 0x48));
      _DAT_800e7ed6 = _DAT_800e7ed6 & 0xfff;
    }
    else if (sVar2 == 0) {
      *(undefined1 *)(param_1 + 0x78) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = func_0x00085690(-(int)*(short *)(param_1 + 0x4c),(int)*(short *)(param_1 + 0x48));
    *(ushort *)(param_1 + 0x66) = uVar4 & 0xfff;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  iVar5 = func_0x00041438(&DAT_800e7e80,(int)*(short *)(param_1 + 0x66),0x100);
  if (iVar5 != 0) {
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  if (sVar2 == 1) {
    return 0;
  }
LAB_00009528:
  func_0x00054d14(&DAT_800e7e80,*(ushort *)(param_1 + 0x72) & 0xfff,4);
  iVar5 = (uint)*(ushort *)(param_1 + 0x44) - (uint)*(ushort *)(param_1 + 100);
  *(short *)(param_1 + 0x44) = (short)iVar5;
  if (iVar5 * 0x10000 < 1) {
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
  iVar5 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xfff;
  }
  _DAT_800e7eae = *(short *)(iVar9 + 4) - (short)(iVar5 >> 0xc);
  iVar5 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xfff;
  }
  _DAT_800e7eb6 = *(short *)(iVar9 + 6) - (short)(iVar5 >> 0xc);
  if (*(short *)(param_1 + 0x44) == 0) {
    uVar7 = 1;
    if (((int)*(short *)(param_1 + 0x72) & 0x8000U) == 0) {
      func_0x00054dac(&DAT_800e7e80,2,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar4 = *(ushort *)(param_1 + 0x68);
    uVar7 = 0;
    if ((int)*(short *)(param_1 + 0x68) != 0) {
      if ((uVar4 & 0x3f) == 0) {
        uVar7 = 0;
        if ((uVar4 & 0x80) != 0) {
          if (*(char *)(_DAT_800e7eb8 + 4) == '\0') {
            *(ushort *)(param_1 + 0x68) = uVar4 & 0xffbf;
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            if ((uVar4 & 0x40) == 0) {
              *(ushort *)(param_1 + 0x68) = uVar4 | 0x40;
              func_0x00074590(*(undefined1 *)(param_1 + 0x6a),0,
                              (int)(char)((ushort)*(undefined2 *)(param_1 + 0x6a) >> 8));
              halt_baddata();
            }
          }
        }
      }
      else {
        uVar7 = 0;
        if (((uint)_DAT_1f80017c & (int)*(short *)(param_1 + 0x68)) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  return uVar7;
}

