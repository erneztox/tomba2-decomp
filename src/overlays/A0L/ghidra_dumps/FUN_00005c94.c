// FUN_00005c94

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00005dc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00005c94(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(short *)(param_1 + 0x72) * 6;
  if (*(char *)(param_1 + 0x78) == '\0') {
    DAT_800e7e85 = 0x21;
    DAT_800e7e86 = 0;
    *(short *)(param_1 + 0x48) = *(short *)(iVar5 + -0x7fee9c14) - _DAT_800e7eae;
    *(short *)(param_1 + 0x4a) = *(short *)(iVar5 + -0x7fee9c12) - _DAT_800e7eb2;
    iVar3 = (uint)*(ushort *)(iVar5 + -0x7fee9c10) - (uint)_DAT_800e7eb6;
    iVar5 = iVar3 * 0x10000 >> 0x10;
    *(short *)(param_1 + 0x4c) = (short)iVar3;
    sVar2 = func_0x00084080(iVar5 * iVar5 +
                            (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x48));
    *(short *)(param_1 + 100) = (short)((int)sVar2 / 0x1c);
    if (((int)sVar2 / 0x1c & 0xffffU) == 0) {
      *(undefined2 *)(param_1 + 100) = 1;
    }
    if (*(short *)(param_1 + 100) == 0) {
      trap(0x1c00);
    }
    *(undefined2 *)(param_1 + 0x44) = 0x1000;
    *(short *)(param_1 + 100) = (short)(0x1000 / (int)*(short *)(param_1 + 100));
    _DAT_800e7ed6 =
         func_0x00085690(-(int)*(short *)(param_1 + 0x4c),(int)*(short *)(param_1 + 0x48));
    _DAT_800e7ed6 = _DAT_800e7ed6 & 0xfff;
    func_0x00054dac(&DAT_800e7e80,0xc,4);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0x44) - (uint)*(ushort *)(param_1 + 100);
  *(short *)(param_1 + 0x44) = (short)iVar3;
  if (iVar3 * 0x10000 < 1) {
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
  iVar3 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  _DAT_800e7eae = *(short *)(iVar5 + -0x7fee9c14) - (short)(iVar3 >> 0xc);
  iVar3 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4a);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  _DAT_800e7eb2 = *(short *)(iVar5 + -0x7fee9c12) - (short)(iVar3 >> 0xc);
  iVar3 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  _DAT_800e7eb6 = *(short *)(iVar5 + -0x7fee9c10) - (short)(iVar3 >> 0xc);
  uVar4 = 1;
  if (*(short *)(param_1 + 0x44) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x68);
    uVar4 = 0;
    if ((int)*(short *)(param_1 + 0x68) != 0) {
      if ((uVar1 & 0x3f) == 0) {
        uVar4 = 0;
        if ((uVar1 & 0x80) != 0) {
          if (*(char *)(_DAT_800e7eb8 + 4) == '\0') {
            *(ushort *)(param_1 + 0x68) = uVar1 & 0xffbf;
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            if ((uVar1 & 0x40) == 0) {
              *(ushort *)(param_1 + 0x68) = uVar1 | 0x40;
              func_0x00074590(*(undefined1 *)(param_1 + 0x6a),0,
                              (int)(char)((ushort)*(undefined2 *)(param_1 + 0x6a) >> 8));
              halt_baddata();
            }
          }
        }
      }
      else {
        uVar4 = 0;
        if (((uint)_DAT_1f80017c & (int)*(short *)(param_1 + 0x68)) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  }
  return uVar4;
}

