// FUN_8012111c

void FUN_8012111c(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if ((DAT_1f800207 < 0x20) && (0x18 < DAT_1f800207)) {
      FUN_80129e8c(param_1);
      *(undefined1 *)(param_1 + 1) = 1;
      FUN_8012a2c4();
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_8012a2c4();
        return;
      }
      *(undefined1 *)(param_1 + 0xb) = 0x20;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 9) = 0;
      *(undefined **)(param_1 + 0x18) = &DAT_8013ea64;
      if (*(byte *)(param_1 + 3) < 2) {
        iVar5 = 0;
        FUN_801360f4(param_1,*(undefined1 *)(param_1 + 3));
        do {
          thunk_FUN_80142a64(param_1,iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        FUN_8012a174(param_1,&DAT_80150000);
        return;
      }
      FUN_8013ac34(param_1,*(undefined1 *)(param_1 + 3));
      uVar4 = (uint)*(byte *)(param_1 + 3);
      *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(&DAT_80149ec6 + uVar4 * 10);
      *(undefined2 *)(param_1 + 0x82) = *(undefined2 *)(&DAT_80149eca + uVar4 * 10);
      *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)(uVar4 * 10 + -0x7feb6138);
      *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)(uVar4 * 10 + -0x7feb6134);
      *(short *)(param_1 + 0x2e) =
           (short)(((int)*(short *)(&DAT_80149ec6 + uVar4 * 10) +
                   (int)*(short *)(&DAT_80149eca + uVar4 * 10)) / 2);
      *(undefined2 *)(param_1 + 0x32) =
           *(undefined2 *)((uint)*(byte *)(param_1 + 3) * 10 + -0x7feb613c);
      iVar5 = (uint)*(byte *)(param_1 + 3) * 10;
      sVar2 = *(short *)(iVar5 + -0x7feb6138);
      sVar3 = *(short *)(iVar5 + -0x7feb6134);
      *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(param_1 + 0x2e);
      *(short *)(param_1 + 0x36) = (short)(((int)sVar2 + (int)sVar3) / 2);
      *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0x32);
      FUN_80129e8c();
      FUN_8012a2c4();
      return;
    }
    if (bVar1 < 4) {
      FUN_8012a2bc();
      return;
    }
  }
  return;
}

