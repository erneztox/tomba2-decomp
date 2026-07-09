// FUN_801288a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801288a4(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  
  local_38 = DAT_80109e48;
  local_34 = DAT_80109e4c;
  local_30 = DAT_80109e50;
  local_2c = DAT_80109e54;
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    if (DAT_800bf9e0 != 0x11) {
      if (*(short *)(param_1 + 0x40) == 0) {
        uStack_28 = DAT_80109e38;
        puStack_24 = (undefined *)DAT_80109e3c;
        sVar2 = *(short *)(&local_38 + *(short *)(param_1 + 0x42));
        uVar1 = *(undefined2 *)((int)&local_38 + *(short *)(param_1 + 0x42) * 4 + 2);
        iVar3 = sVar2 * 0x20 + -0x7feb5c5c;
        func_0x80081218(&uStack_28,iVar3);
        uStack_28 = CONCAT22(0xe5,(undefined2)uStack_28);
        func_0x80081218(&uStack_28,iVar3);
        uStack_28 = CONCAT22(0xde,(undefined2)uStack_28);
        func_0x80081218(&uStack_28,sVar2 * 0x20 + -0x7feb5bbc);
        sVar2 = *(short *)(param_1 + 0x42) + 1;
        *(short *)(param_1 + 0x42) = sVar2;
        if (3 < sVar2) {
          *(undefined2 *)(param_1 + 0x42) = 0;
        }
        *(undefined2 *)(param_1 + 0x40) = uVar1;
      }
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      if (DAT_800bf8b8 == -1) {
        uStack_20 = DAT_80109e40;
        puStack_1c = PTR_caseD_0_80109e44;
        if ((uint)_DAT_1f80017c % 5 == 0) {
          func_0x80081218(&uStack_20,*(short *)(param_1 + 0x4c) * 0x20 + -0x7feb5b3c);
          uStack_20 = 0xcd0330;
          func_0x80081218(&uStack_20,*(short *)(param_1 + 0x4c) * 0x20 + -0x7feb5a5c);
          sVar2 = *(short *)(param_1 + 0x4c) + 1;
          *(short *)(param_1 + 0x4c) = sVar2;
          if (5 < sVar2) {
            *(undefined2 *)(param_1 + 0x4c) = 3;
            return;
          }
        }
      }
      else if (DAT_800bf9e0 < 7) {
        uStack_20 = DAT_80109e40;
        puStack_1c = PTR_caseD_0_80109e44;
        if ((_DAT_1f80017c & 1) == 0) {
          func_0x80081218(&uStack_20,*(short *)(param_1 + 0x48) * 0x20 + -0x7feb5b3c);
          uStack_20 = 0xcd0330;
          func_0x80081218(&uStack_20,*(short *)(param_1 + 0x48) * 0x20 + -0x7feb5a5c);
          sVar2 = *(short *)(param_1 + 0x48) + 1;
          *(short *)(param_1 + 0x48) = sVar2;
          if (2 < sVar2) {
            *(undefined2 *)(param_1 + 0x48) = 0;
          }
        }
      }
      else {
        uStack_20 = DAT_80109e40;
        puStack_1c = PTR_caseD_0_80109e44;
        if ((_DAT_1f80017c & 1) == 0) {
          func_0x80081218(&uStack_20,*(short *)(param_1 + 0x4a) * 0x20 + -0x7feb5b3c);
          uStack_20 = 0xcd0330;
          func_0x80081218(&uStack_20,*(short *)(param_1 + 0x4a) * 0x20 + -0x7feb5a5c);
          sVar2 = *(short *)(param_1 + 0x4a) + 1;
          *(short *)(param_1 + 0x4a) = sVar2;
          if (2 < sVar2) {
            *(undefined2 *)(param_1 + 0x4a) = 1;
            return;
          }
        }
      }
      return;
    }
    uStack_28 = DAT_80109e38;
    puStack_24 = (undefined *)DAT_80109e3c;
    func_0x80081218(&uStack_28,0x8014a404);
    uStack_28 = CONCAT22(0xe5,(undefined2)uStack_28);
    func_0x80081218(&uStack_28,0x8014a424);
    uStack_28 = CONCAT22(0xde,(undefined2)uStack_28);
    func_0x80081218(&uStack_28,0x8014a4a4);
    uStack_28 = DAT_80109e40;
    puStack_24 = PTR_caseD_0_80109e44;
    func_0x80081218(&uStack_28,0x8014a584);
    uStack_28 = 0xcd0330;
    func_0x80081218(&uStack_28,0x8014a664);
    *(undefined1 *)(param_1 + 6) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  return;
}

