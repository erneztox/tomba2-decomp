// FUN_080301cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08030448) */
/* WARNING: Removing unreachable block (ram,0x0012941c) */
/* WARNING: Removing unreachable block (ram,0x08030478) */
/* WARNING: Removing unreachable block (ram,0x08030494) */
/* WARNING: Removing unreachable block (ram,0x080304ac) */
/* WARNING: Removing unreachable block (ram,0x080304b0) */
/* WARNING: Removing unreachable block (ram,0x001292cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080301cc(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = *(int *)(param_1 + 0xcc);
  iVar6 = (uint)*(ushort *)(iVar5 + 0x2c) + (uint)*(ushort *)(param_1 + 0x60);
  iVar7 = (uint)*(ushort *)(iVar5 + 0x30) + (uint)*(ushort *)(param_1 + 0x62);
  iVar8 = (uint)*(ushort *)(iVar5 + 0x34) + (uint)*(ushort *)(param_1 + 100);
  iVar5 = func_0x001299e8(param_1,iVar6 * 0x10000 >> 0x10,iVar7 * 0x10000 >> 0x10,
                          iVar8 * 0x10000 >> 0x10);
  iVar6 = iVar6 - (uint)_DAT_800e7eae;
  iVar2 = iVar6 * 0x10000 >> 0x10;
  iVar7 = iVar7 - (uint)_DAT_800e7eb2;
  iVar3 = iVar7 * 0x10000 >> 0x10;
  iVar8 = iVar8 - (uint)_DAT_800e7eb6;
  iVar4 = iVar8 * 0x10000 >> 0x10;
  sVar1 = func_0x00084080(iVar2 * iVar2 + iVar3 * iVar3 + iVar4 * iVar4);
  if (sVar1 < 0x2d1) {
    iVar2 = 8;
    if ((sVar1 < 0x211) && (iVar2 = 0x10, 0x150 < sVar1)) {
      iVar2 = 0xc;
    }
    if (iVar5 != 0) {
      *(short *)(iVar5 + 0x4e) = *(short *)(iVar5 + 0x4e) + 1 + (short)iVar2 * 2;
    }
    iVar5 = (int)sVar1;
    if (0x32 < iVar5) {
      iVar3 = (short)iVar6 * iVar2;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      iVar4 = (short)iVar7 * iVar2;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar4 == -0x80000000)) {
        trap(0x1800);
      }
      iVar2 = (short)iVar8 * iVar2;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar2 == -0x80000000)) {
        trap(0x1800);
      }
      _DAT_800e7eb6 = _DAT_800e7eb6 + (short)(iVar2 / iVar5);
      _DAT_800e7eb2 = _DAT_800e7eb2 + (short)(iVar4 / iVar5);
      _DAT_800e7eae = _DAT_800e7eae + (short)(iVar3 / iVar5);
      return 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

