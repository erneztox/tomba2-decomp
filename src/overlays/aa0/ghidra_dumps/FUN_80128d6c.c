// FUN_80128d6c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80128d6c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      FUN_80131840(param_1);
    }
    else if ((bVar1 < 2) && (bVar1 == 0)) {
      if (DAT_800bf8b8 == -1) {
        param_1[5] = 2;
        FUN_80131ec0();
        return;
      }
      param_1[5] = 1;
      FUN_80131ec0();
      return;
    }
    iVar4 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32))
                                         * 0x10000) >> 0x10);
    if (iVar4 == 0) {
      return;
    }
    *(ushort *)(*(int *)(param_1 + 0xc4) + 10) =
         *(short *)(*(int *)(param_1 + 0xc4) + 10) - 0x20U & 0xfff;
    func_0x800517f8(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return;
        }
        func_0x8007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      if (_DAT_800ed098 < 2) {
        param_1[4] = 3;
      }
      else {
        iVar4 = 0;
        param_1[8] = 2;
        param_1[9] = 2;
        *param_1 = 1;
        param_1[0xd] = 0;
        param_1[0xb] = 0;
        param_1[4] = param_1[4] + '\x01';
        puVar3 = param_1;
        do {
          iVar4 = iVar4 + 1;
          iVar2 = func_0x8007aae8();
          *(int *)(puVar3 + 0xc0) = iVar2;
          *(undefined2 *)(iVar2 + 6) = 0xffff;
          **(undefined4 **)(puVar3 + 0xc0) = 0;
          *(undefined2 *)(*(int *)(puVar3 + 0xc0) + 4) = 0;
          *(undefined4 *)(*(int *)(puVar3 + 0xc0) + 8) = 0;
          *(undefined4 *)(*(int *)(puVar3 + 0xc0) + 0xc) = 0;
          puVar3 = puVar3 + 4;
        } while (iVar4 < 2);
        func_0x80051b04(*(undefined4 *)(param_1 + 0xc0),0xc,2);
        func_0x80051b04(*(undefined4 *)(param_1 + 0xc4),0xc,3);
        **(undefined2 **)(param_1 + 0xc4) = 6;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0xfa88;
        *(undefined2 *)(param_1 + 0x80) = 0x32;
        *(undefined2 *)(param_1 + 0x82) = 100;
        *(undefined2 *)(param_1 + 0x84) = 0x530;
        *(undefined2 *)(param_1 + 0x86) = 0x530;
        *(undefined2 *)(param_1 + 0x4a) = 1;
        *(undefined2 *)(param_1 + 0x40) = 0;
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(undefined2 *)(param_1 + 0x48) = 0;
        *(undefined2 *)(param_1 + 0x4c) = 3;
      }
    }
  }
  return;
}

