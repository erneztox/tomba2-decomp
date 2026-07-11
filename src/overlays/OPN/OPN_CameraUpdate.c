// OPN_CameraUpdate (OPN_CameraUpdate) - Camera matrix update: GTE registers, sin/cos rotation, produces view matrix

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPN_CameraUpdate(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1->kind == '\0') {
    _DAT_801006f0 = 0;
    _DAT_801006f2 = 0;
    _DAT_801006f4 = 0;
    _DAT_801006f6 = 0;
    _DAT_801006f8 = 0;
    *(s32 *)(param_1 + 0x48) = 0;
    *(s32 *)(param_1 + 0x44) = 0;
    _DAT_80100702 = 0;
    _DAT_80100704 = 0;
    _DAT_80100706 = 0;
    _DAT_80100708 = 0;
    _DAT_8010070a = 0;
    _DAT_801006c4 = 0;
    param_1->sub_type = 0;
    param_1->kind = param_1->kind + '\x01';
    _g_GTE_Matrix00 = CONCAT22(_g_CameraPosX,_g_GTE_Matrix00);
    _g_GTE_Matrix02 = CONCAT22(_g_CameraPosY + -0x118,_g_GTE_Matrix02);
    _g_GTE_Matrix11 = CONCAT22(_g_CameraPosZ,_g_GTE_Matrix11);
    param_1->velocity_y = 0xc00;
    *(s16 *)(param_1 + 0x46) = 0;
    func_0x0018ab78(param_1,0x80100690);
    _DAT_801006fa = _DAT_801006f6;
    _DAT_801006fc = _DAT_801006f8;
    param_1->target_angle = 0x1e;
  }
  else if (param_1->kind == '\x01') {
    func_0x0018ac84(param_1,0x80100690);
    _DAT_801006f2 = _DAT_801006f2 + 0x103f;
    iVar1 = Math_Cos((int)_DAT_801006f2);
    _g_GTE_Matrix02 = _g_GTE_Matrix02 + iVar1 * 0x20;
    if (_DAT_801006f0 != 0) {
      _DAT_801006f4 = _DAT_801006f4 + 0x107f;
      iVar2 = Math_Cos((int)_DAT_801006f4);
      _DAT_801006c4 = iVar2 << 7;
      iVar1 = _DAT_801006c4;
      _DAT_801006c6 = (s16)((uint)(iVar2 << 7) >> 0x10);
      _g_GTE_RotZ = _DAT_801006c6;
      _DAT_801006c4 = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_801006f4 = 0;
    _g_GTE_RotZ = 0;
    if (7 < (uint)(int)_DAT_80100704) {
      iVar1 = Math_Cos((int)_DAT_801006fc);
      iVar4 = (int)_DAT_801006f0;
      iVar2 = Math_CosGTE((int)_DAT_801006fc);
      iVar5 = iVar2 * _DAT_801006f0 >> 0xc;
      iVar2 = Math_CosGTE((int)_DAT_801006fa);
      iVar3 = Math_Cos((int)_DAT_801006fa);
      _g_GTE_Matrix02 = _g_GTE_Matrix02 + (iVar1 * iVar4 >> 4);
      _g_GTE_Matrix11 = _g_GTE_Matrix11 + (iVar2 * iVar5 >> 4);
      _g_GTE_Matrix00 = _g_GTE_Matrix00 - (iVar3 * iVar5 >> 4);
      _g_GTE_RotY = param_1->velocity_y;
      _g_GTE_RotX = *(s16 *)(param_1 + 0x46);
      GTE_LoadIdentityMatrix(0x1f8000f8);
      Math_Sin2(&g_GTE_RotX,0x1f8000f8);
      _g_GTE_Vector0 = -_g_GTE_Matrix01;
      _g_GTE_Vector1 = -_g_GTE_Matrix10;
      _g_GTE_Vector2 = -_g_GTE_Matrix12;
      GTE_MulMatrixVec(0x1f8000f8,&g_GTE_Vector0,0x1f80010c);
      iVar1 = -(int)_g_GTE_TransZ;
      _g_GTE_TransX = _DAT_1f800106;
      _DAT_1f8000e8 = _DAT_1f800104;
      _g_GTE_TransY = _DAT_1f800108;
      _DAT_1f800114 = _DAT_1f800114 - _DAT_80100706;
      _DAT_1f800080 = _DAT_1f800104 * iVar1 >> 0xc;
      iVar2 = _DAT_1f800080;
      _DAT_1f800084 = _DAT_1f800106 * iVar1 >> 0xc;
      iVar3 = _DAT_1f800084;
      _g_GTE_ResultX = _g_GTE_Matrix01 + _DAT_1f800080;
      _DAT_1f800088 = _DAT_1f800108 * iVar1 >> 0xc;
      iVar1 = _DAT_1f800088;
      _g_GTE_ResultY = _g_GTE_Matrix10 + _DAT_1f800084;
      _g_GTE_ResultZ = _g_GTE_Matrix12 + _DAT_1f800088;
      _DAT_1f800080 = iVar2;
      _DAT_1f800084 = iVar3;
      _DAT_1f800088 = iVar1;
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x08011aac */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_80100704 * 4 + -0x7fe75f8c))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

