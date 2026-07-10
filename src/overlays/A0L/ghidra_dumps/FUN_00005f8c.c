// FUN_00005f8c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000060b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00005f8c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  
  bVar2 = *(byte *)(param_1 + 0x78);
  puVar6 = &DAT_800e7e80;
  if (bVar2 == 1) {
    sVar3 = *(short *)(param_1 + 0x4a);
    if (-1 < sVar3) {
      iVar4 = 0;
      if (DAT_800e7e89 != 0) {
        do {
          puVar1 = (undefined4 *)(puVar6 + 0xc0);
          puVar6 = puVar6 + 4;
          func_0x00051b04(*puVar1,0x2f,iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)DAT_800e7e89);
      }
      func_0x00054dac(&DAT_800e7e80,0x67,4);
      func_0x00111f3c(param_1,0);
      func_0x00111f3c(param_1,1);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
      goto LAB_00006184;
    }
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      DAT_800e7e80 = 0;
      DAT_800e7e85 = 0x21;
      DAT_800e7e86 = 0;
      *(short *)(param_1 + 0x48) = 0x1ef4 - _DAT_800e7eae;
      *(short *)(param_1 + 0x4c) = 0x367a - _DAT_800e7eb6;
      *(undefined2 *)(param_1 + 0x4a) = 0xd400;
      sVar3 = func_0x00084080((int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4c) +
                              (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x48));
      *(short *)(param_1 + 100) = (short)((int)sVar3 / 0x18);
      if (((int)sVar3 / 0x18 & 0xffffU) == 0) {
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
      func_0x00054dac(&DAT_800e7e80,0x66,2);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar2 != 2) {
      if (bVar2 != 3) {
        halt_baddata();
      }
      goto LAB_000061b4;
    }
LAB_00006184:
    sVar3 = *(short *)(param_1 + 0x4a);
  }
  if (0xdff < sVar3) {
    func_0x00054dac(&DAT_800e7e80,0x19,4);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
LAB_000061b4:
  iVar4 = (uint)*(ushort *)(param_1 + 0x44) - (uint)*(ushort *)(param_1 + 100);
  *(short *)(param_1 + 0x44) = (short)iVar4;
  if (iVar4 * 0x10000 < 1) {
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
  iVar4 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xfff;
  }
  _DAT_800e7eae = 0x1ef4 - (short)(iVar4 >> 0xc);
  iVar4 = (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xfff;
  }
  _DAT_800e7eb6 = 0x367a - (short)(iVar4 >> 0xc);
  _DAT_800e7eb0 = _DAT_800e7eb0 + *(short *)(param_1 + 0x4a) * 0x100;
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x180;
  if (-0x3d3 < _DAT_800e7eb2) {
    _DAT_800e7eb0 = CONCAT22(0xfc2e,_DAT_800e7eb0);
  }
  uVar5 = 0;
  if (*(short *)(param_1 + 0x44) == 0) {
    uVar5 = 1;
    if (_DAT_800e7eb2 != -0x3d2) {
      uVar5 = 0;
    }
  }
  return uVar5;
}

