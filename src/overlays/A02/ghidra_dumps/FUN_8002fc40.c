// FUN_8002fc40

void FUN_8002fc40(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 0x10);
  puVar6 = (ushort *)(param_1 + 0x50);
  if (bVar1 == 1) {
LAB_8002fce0:
    uVar3 = *puVar6;
    *puVar6 = uVar3 - 6;
    if ((int)((uint)(ushort)(uVar3 - 6) << 0x10) < 1) {
      if ((6 < DAT_800e7e7c) && (iVar5 = FUN_8007a980(0,6,1), iVar5 != 0)) {
        if (param_1 != -0x2c) {
          *(undefined2 *)(iVar5 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
          *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(iVar5 + 0x30) = *(undefined2 *)(param_1 + 0x30);
        }
        *(undefined2 *)(iVar5 + 0x32) = 0xffe2;
        FUN_80028e10(iVar5,8);
      }
      FUN_8002343c(iVar7);
      *(undefined1 *)(param_1 + 4) = 2;
      *puVar6 = 0;
LAB_8002fd80:
      sVar4 = *(short *)(param_1 + 0x52) + 0x20;
      *(short *)(param_1 + 0x52) = sVar4;
      if (0x5f < sVar4) goto LAB_8002fdac;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar7 + 0x2e);
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar7 + 0x32);
      uVar2 = *(undefined2 *)(iVar7 + 0x36);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined2 *)(param_1 + 0x4c) = 0;
      *(undefined2 *)(param_1 + 0x50) = 0x3c;
      *(undefined2 *)(param_1 + 0x30) = uVar2;
      *(undefined2 *)(param_1 + 0x52) = 0;
      goto LAB_8002fce0;
    }
    if (bVar1 == 2) goto LAB_8002fd80;
    if (bVar1 != 3) {
      return;
    }
LAB_8002fdac:
    FUN_8007a624(param_1);
  }
  return;
}

