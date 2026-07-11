// FUN_801145a4

undefined1 * FUN_801145a4(int param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  short sVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = *(int *)(param_1 + 0xcc);
  iVar6 = *(int *)(param_1 + 0x10);
  iVar9 = (int)((((uint)*(ushort *)(iVar5 + 0x2c) + (uint)*(ushort *)(param_1 + 0x60)) -
                (uint)*(ushort *)(iVar6 + 0x2e)) * 0x10000) >> 0x10;
  iVar8 = (int)((((uint)*(ushort *)(iVar5 + 0x30) + (uint)*(ushort *)(param_1 + 0x62)) -
                (uint)*(ushort *)(iVar6 + 0x32)) * 0x10000) >> 0x10;
  iVar7 = (int)((((uint)*(ushort *)(iVar5 + 0x34) + (uint)*(ushort *)(param_1 + 100)) -
                (uint)*(ushort *)(iVar6 + 0x36)) * 0x10000) >> 0x10;
  sVar3 = func_0x80084080(iVar9 * iVar9 + iVar8 * iVar8 + iVar7 * iVar7);
  iVar5 = (int)sVar3;
  puVar4 = (undefined1 *)0x1;
  if (0x32 < iVar5) {
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar9 << 3 == -0x80000000)) {
      trap(0x1800);
    }
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar8 << 3 == -0x80000000)) {
      trap(0x1800);
    }
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar7 << 3 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(iVar6 + 0x2e) = *(short *)(iVar6 + 0x2e) + (short)((iVar9 << 3) / iVar5);
    *(short *)(iVar6 + 0x32) = *(short *)(iVar6 + 0x32) + (short)((iVar8 << 3) / iVar5);
    *(short *)(iVar6 + 0x36) = *(short *)(iVar6 + 0x36) + (short)((iVar7 << 3) / iVar5);
    *(undefined2 *)(iVar6 + 0x58) = *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0xc);
    if ((*(byte *)(iVar6 + 3) & 0x80) != 0) {
      uVar2 = func_0x800517f8();
      *(undefined1 *)(iVar9 + 2) = uVar2;
      uVar2 = *(undefined1 *)(iVar7 + 3);
      *(char *)(iVar9 + 0x47) = (char)iVar6;
      *(undefined1 *)(iVar9 + 3) = uVar2;
      *(undefined1 *)(iVar9 + 0x2a) = *(undefined1 *)(iVar7 + 0x2a);
      iVar5 = func_0x8007a980();
      puVar4 = (undefined1 *)0x0;
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x1c) = 0x8012a454;
        *(undefined1 *)(iVar5 + 2) = 0x17;
        uVar2 = *(undefined1 *)(iVar7 + 3);
        *(undefined1 *)(iVar5 + 0x47) = 0;
        *(undefined1 *)(iVar5 + 3) = uVar2;
        *(undefined1 *)(iVar5 + 0x2a) = *(undefined1 *)(iVar7 + 0x2a);
        iVar8 = func_0x8007a980(1,4,0);
        puVar4 = (undefined1 *)0x0;
        if (iVar8 != 0) {
          *(undefined4 *)(iVar8 + 0x1c) = 0x8012a454;
          *(undefined1 *)(iVar8 + 2) = 0x17;
          uVar2 = *(undefined1 *)(iVar7 + 3);
          *(char *)(iVar8 + 0x47) = (char)iVar6;
          *(undefined1 *)(iVar8 + 3) = uVar2;
          *(undefined1 *)(iVar8 + 0x2a) = *(undefined1 *)(iVar7 + 0x2a);
          if ((*(char *)(iVar7 + 3) == '\0') || (*(char *)(iVar7 + 3) == '\x04')) {
            puVar4 = (undefined1 *)FUN_8012674c(1,4,0);
            return puVar4;
          }
          iVar6 = func_0x8007a980(1,3,1);
          puVar4 = &DAT_80130000;
          if (iVar6 != 0) {
            *(undefined4 *)(iVar6 + 0x1c) = 0x8012a454;
            *(undefined1 *)(iVar6 + 2) = 0x17;
            uVar2 = *(undefined1 *)(iVar7 + 3);
            *(undefined1 *)(iVar6 + 0x47) = 2;
            *(undefined1 *)(iVar6 + 3) = uVar2;
            puVar4 = (undefined1 *)(uint)*(byte *)(iVar7 + 0x2a);
            *(byte *)(iVar6 + 0x2a) = *(byte *)(iVar7 + 0x2a);
            *(int *)(iVar7 + 0x10) = iVar9;
            *(int *)(iVar9 + 0x10) = iVar7;
            *(int *)(iVar7 + 0x14) = iVar5;
            *(int *)(iVar9 + 0x14) = iVar8;
            *(int *)(iVar5 + 0x10) = iVar7;
            *(int *)(iVar8 + 0x10) = iVar9;
            *(int *)(iVar6 + 0x10) = iVar8;
            *(int *)(iVar6 + 0x14) = iVar5;
            *(int *)(iVar6 + 0x3c) = iVar9;
            *(int *)(iVar5 + 0x14) = iVar8;
            *(int *)(iVar5 + 0x3c) = iVar6;
            *(int *)(iVar8 + 0x14) = iVar5;
            *(int *)(iVar8 + 0x3c) = iVar6;
          }
        }
      }
      return puVar4;
    }
    func_0x800518fc(iVar6);
    uVar1 = *(ushort *)(iVar6 + 0xb8);
    puVar4 = (undefined1 *)0x0;
    if (0xa00 < uVar1) {
      *(ushort *)(iVar6 + 0xb8) = uVar1 - 0x80;
      if ((ushort)(uVar1 - 0x80) < 0xa00) {
        *(undefined2 *)(iVar6 + 0xb8) = 0xa00;
      }
      *(undefined2 *)(iVar6 + 0xba) = *(undefined2 *)(iVar6 + 0xb8);
      *(undefined2 *)(iVar6 + 0xbc) = *(undefined2 *)(iVar6 + 0xb8);
      puVar4 = (undefined1 *)0x0;
    }
  }
  return puVar4;
}

