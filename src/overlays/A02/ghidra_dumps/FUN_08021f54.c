// FUN_08021f54

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08021f54(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_20 [4];
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    _DAT_800e7eae = _DAT_800e7eae + 0xc;
    if (0x2bf1 < _DAT_800e7eae) {
      _DAT_800e7eae = 0x2bf2;
    }
    uVar3 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(ushort *)(param_1 + 0x4a) = uVar3;
    iVar7 = _DAT_800e7eb0 + ((int)((uint)uVar3 << 0x10) >> 8);
    if (*(short *)(param_1 + 0x4a) < 0) {
      _DAT_800e7eb0 = iVar7;
      return;
    }
    _DAT_800e7eb2 = (short)((uint)iVar7 >> 0x10);
    if ((int)_DAT_800e7eb2 < -0xd52 - _DAT_800e7f04) {
      _DAT_800e7eb0 = iVar7;
      return;
    }
    local_20[0] = _DAT_801096dc;
    local_20[1] = _DAT_801096e0;
    local_20[2] = _DAT_801096e4;
    local_20[3] = _DAT_801096e8;
    _DAT_800e7eb0 = iVar7;
    func_0x00074590(3,0,0);
    _DAT_800e7eae = 0x2bf2;
    _DAT_800e7eb0 = CONCAT22(-0xd52 - _DAT_800e7f04,_DAT_800e7eb0);
    uVar5 = func_0x0009a450();
    func_0x00054dac(&DAT_800e7e80,local_20[uVar5 & 3],8);
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0xc0;
    *(ushort *)(*(int *)(param_1 + 0xc4) + 0xc) =
         *(ushort *)(*(int *)(param_1 + 0xc4) + 0xc) & 0xfff;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (12999 < *(short *)(param_1 + 0x2e)) {
          DAT_800bf839 = 1;
          _DAT_800bf83a = 0x400;
          DAT_1f800137 = bVar1;
          DAT_1f800236 = bVar1;
          DAT_800bf80f = bVar1;
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        }
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      sVar4 = *(short *)(param_1 + 0x48) + *(short *)(param_1 + 0x4e);
      *(short *)(param_1 + 0x48) = sVar4;
      if (0x3fff < sVar4) {
        *(undefined2 *)(param_1 + 0x48) = 0x4000;
      }
      iVar7 = (int)((uint)*(ushort *)(param_1 + 0x48) << 0x10) >> 0x16;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x100;
      if (iVar7 < 0x100) {
        iVar7 = 0x100;
      }
      iVar6 = 1;
      iVar2 = param_1;
      if (1 < *(byte *)(param_1 + 8)) {
        do {
          *(short *)(*(int *)(iVar2 + 0xc4) + 0xc) =
               *(short *)(*(int *)(iVar2 + 0xc4) + 0xc) + (short)iVar7;
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar6 < (int)(uint)*(byte *)(param_1 + 8));
      }
      iVar7 = *(int *)(param_1 + 0xc4);
      if (0xfff < *(short *)(iVar7 + 0xc)) {
        *(ushort *)(iVar7 + 0xc) = *(ushort *)(iVar7 + 0xc) & 0xfff;
        func_0x00074590(0x89,0,0);
      }
      _DAT_800e7eae = *(undefined2 *)(param_1 + 0x2e);
      return;
    }
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x70) == -1) {
        func_0x00054dac(&DAT_800e7e80,0x19,4);
        DAT_800e7e85 = 0x21;
        DAT_800e7e86 = 0;
        *(undefined2 *)(param_1 + 0x4a) = 0xce00;
        *(undefined2 *)(param_1 + 0x50) = 0x380;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      func_0x00041098(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

