/**
 * @brief Camera committer: applies computed position to view matrix
 * @note Original: func_8006D02C at 0x8006D02C
 */
// Camera_Commit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Camera_Commit(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = (int)_DAT_1f8000de - (int)_DAT_1f8000d2;
  iVar5 = (int)_DAT_1f8000e6 - (int)_DAT_1f8000da;
  iVar4 = (int)_g_CameraZ - (int)_DAT_1f8000d6;
  iVar3 = iVar6 * iVar6 + iVar5 * iVar5;
  uVar1 = Math_Sqrt(iVar3 + iVar4 * iVar4);
  uVar1 = uVar1 & 0xffff;
  uVar2 = Math_Sqrt(iVar3);
  uVar2 = uVar2 & 0xffff;
  *(uint *)(param_1 + 0x5c) = uVar1;
  *(uint *)(param_1 + 0x60) = uVar2;
  if (uVar1 != 0) {
    GTE_LoadIdentityMatrix(&g_GTE_WorkF8);
    iVar3 = (iVar4 * 0x1000) / (int)uVar1;
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar1 == 0xffffffff) && (iVar4 * 0x1000 == -0x80000000)) {
      trap(0x1800);
    }
    uVar7 = (uVar2 << 0xc) / uVar1;
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar1 == 0xffffffff) && (uVar2 == 0x80000)) {
      trap(0x1800);
    }
    _DAT_1f8000f0 = Math_Atan2(iVar3,uVar7);
    _DAT_1f800106 = (s16)iVar3;
    _DAT_1f800102 = -_DAT_1f800106;
    _DAT_1f800100 = (s16)uVar7;
    _DAT_1f800108 = _DAT_1f800100;
    if (uVar2 != 0) {
      iVar3 = (iVar6 * -0x1000) / (int)uVar2;
      if (uVar2 == 0) {
        trap(0x1c00);
      }
      if ((uVar2 == 0xffffffff) && (iVar6 * -0x1000 == -0x80000000)) {
        trap(0x1800);
      }
      iVar4 = (iVar5 * 0x1000) / (int)uVar2;
      if (uVar2 == 0) {
        trap(0x1c00);
      }
      if ((uVar2 == 0xffffffff) && (iVar5 * 0x1000 == -0x80000000)) {
        trap(0x1800);
      }
      _DAT_1f8000f2 = Math_Atan2(iVar3,iVar4);
      GTE_LoadIdentityMatrix(0x1f800000);
      _g_GTE_Matrix[0] = (s16)iVar4;
      _g_GTE_Data4 = (s16)iVar3;
      _g_GTE_DataC = -_g_GTE_Data4;
      _g_GTE_Data10 = _g_GTE_Matrix[0];
      GTE_MulMatrix3(&g_GTE_WorkF8);
    }
  }
  _g_GTE_WorkC0 = -_DAT_1f8000d2;
  _DAT_1f8000ea = _DAT_1f800106;
  _DAT_1f8000e8 = _DAT_1f800104;
  _DAT_1f8000ec = _DAT_1f800108;
  _DAT_1f8000c2 = -_DAT_1f8000d6;
  _g_GTE_WorkC4 = -_DAT_1f8000da;
  GTE_MulMatrixVec(&g_GTE_WorkF8,&g_GTE_WorkC0,&g_GTE_Work10C);
  GTE_StoreMatrix(&g_GTE_WorkF8,0x1f800118);
  return;
}
