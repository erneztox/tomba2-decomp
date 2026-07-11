/**
 * @brief GPU primitive allocator: checks queue, returns free slot ptr
 * @note Original: func_80082504 at 0x80082504
 */
// GPU_PrimAlloc



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80082504(ushort *param_1,uint param_2)

{
  ushort uVar1;
  
  if ((short)param_1[2] < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_800a59a4 - 1;
    if ((int)(short)param_1[2] <= DAT_800a59a4 + -1) {
      uVar1 = param_1[2];
    }
  }
  param_1[2] = uVar1;
  if ((short)param_1[3] < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_800a59a6 - 1;
    if ((int)(short)param_1[3] <= DAT_800a59a6 + -1) {
      uVar1 = param_1[3];
    }
  }
  param_1[3] = uVar1;
  if (((*param_1 & 0x3f) == 0) && ((param_1[2] & 0x3f) == 0)) {
    _DAT_80100ae0 = 0x5ffffff;
    _DAT_80100ae4 = 0xe6000000;
    _DAT_80100aec = param_2 & 0xffffff | 0x2000000;
    _DAT_80100ae8 = *DAT_800a5aa8 & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
    _DAT_80100af0 = *(undefined4 *)param_1;
    _DAT_80100af4 = *(uint *)(param_1 + 2);
  }
  else {
    _DAT_80100ae0 = 0x8100b08;
    _DAT_80100af8 = param_2 & 0xffffff | 0x60000000;
    _DAT_80100af0 = 0xe6000000;
    _DAT_80100ae4 = 0xe3000000;
    _DAT_80100ae8 = 0xe4ffffff;
    _DAT_80100aec = 0xe5000000;
    _DAT_80100af4 = *DAT_800a5aa8 & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
    _DAT_80100afc = *(undefined4 *)param_1;
    _DAT_80100b00 = *(undefined4 *)(param_1 + 2);
    _DAT_80100b08 = 0x3ffffff;
    _DAT_80100b0c = FUN_80082cb0(3);
    _DAT_80100b0c = _DAT_80100b0c | 0xe3000000;
    _DAT_80100b10 = FUN_80082cb0(4);
    _DAT_80100b10 = _DAT_80100b10 | 0xe4000000;
    _DAT_80100b14 = FUN_80082cb0(5);
    _DAT_80100b14 = _DAT_80100b14 | 0xe5000000;
  }
  FUN_80082c68(&DAT_80100ae0);
  return 0;
}
