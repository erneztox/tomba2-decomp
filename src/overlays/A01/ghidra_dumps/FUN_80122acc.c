// FUN_80122acc

void FUN_80122acc(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int in_v0;
  int iVar4;
  
  if (in_v0 == 0) {
    if (param_1[5] == '\x06') {
      bVar1 = param_1[6];
      if (bVar1 != 1) {
        if (1 < bVar1) {
          if (bVar1 == 2) {
            if (*(short *)(param_1 + 0x40) == 0) {
              param_1[6] = 3;
              FUN_8012bb54();
              return;
            }
            *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
            FUN_8012bb54();
            return;
          }
          if (bVar1 != 3) {
            FUN_8012bb54();
            return;
          }
          sVar2 = *(short *)(param_1 + 0xba);
          *(ushort *)(param_1 + 0xba) = sVar2 + 0x200U;
          if (0xfff < (ushort)(sVar2 + 0x200U)) {
            *(undefined2 *)(param_1 + 0xba) = 0x1000;
            param_1[4] = 1;
          }
          iVar4 = (int)*(short *)(param_1 + 0x60) * (uint)*(ushort *)(param_1 + 0xba);
          if (iVar4 < 0) {
            iVar4 = iVar4 + 0xfff;
          }
          uVar3 = (undefined2)(iVar4 >> 0xc);
          *(undefined2 *)(param_1 + 0x86) = uVar3;
          *(undefined2 *)(param_1 + 0x84) = uVar3;
          func_0x80051844();
          FUN_8012bb94();
          return;
        }
        if (bVar1 != 0) {
          FUN_8012bb54();
          return;
        }
        param_1[6] = 1;
        *param_1 = 1;
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 0xbf) = 1;
      }
      if (*(ushort *)(param_1 + 0xba) < 0x200) {
        *(undefined2 *)(param_1 + 0x40) = 0x10;
        param_1[6] = param_1[6] + '\x01';
        FUN_8012bb54();
        return;
      }
      *(ushort *)(param_1 + 0xba) = *(ushort *)(param_1 + 0xba) - 0x200;
      FUN_8012bb54();
      return;
    }
    *param_1 = 1;
    param_1[4] = 1;
  }
  return;
}

