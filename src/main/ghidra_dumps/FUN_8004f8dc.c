
void FUN_8004f8dc(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x16) == '\x02') {
    FUN_8004ee88();
  }
  if (2 < *(short *)(param_1 + 8)) {
    FUN_8004ee88(param_1);
  }
  FUN_8004f378(param_1);
  iVar7 = param_1 + 0xc;
  iVar5 = 0;
  uVar2 = *(ushort *)(param_1 + 8) - 1;
  iVar6 = ((int)(uVar2 * 0x10000) >> 0x10) * 0x12 + 0x9e;
  if (0 < (int)((uint)*(ushort *)(param_1 + 8) << 0x10)) {
    iVar4 = param_1 + 0x1c;
    do {
      sVar3 = (short)(uVar2 & 0xff);
      *(short *)(iVar4 + -0xe) = (short)iVar6;
      *(char *)(iVar4 + -8) = (char)uVar2;
      if ((uint)*(byte *)(iVar4 + -7) <= (uVar2 & 0xff)) {
        sVar3 = *(byte *)(iVar4 + -7) - 1;
      }
      *(undefined1 *)(iVar4 + -6) = 0;
      *(undefined1 *)(iVar4 + -5) = 0;
      *(undefined1 *)(iVar4 + 0x2d) = 0xff;
      if (*(int *)(iVar4 + 0x5c) == 0) {
        FUN_8004f058(iVar4,iVar7 + 0x70,(int)sVar3);
      }
      else {
        uVar1 = FUN_8004ef8c(*(int *)(iVar4 + 0x5c),(int)sVar3);
        FUN_8004ef54(iVar4,uVar1);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x8c;
      iVar7 = iVar7 + 0x8c;
      uVar2 = uVar2 - 1;
      iVar6 = iVar6 + -0x12;
    } while (iVar5 < *(short *)(param_1 + 8));
  }
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  return;
}

