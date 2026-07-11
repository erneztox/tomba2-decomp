/**
 * @brief Entity scene state variant 2: entity[0x78] dispatch
 * @note Original: func_800446A4 at 0x800446A4
 */
// Entity_State_Scene2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800446a4(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  switch(*(undefined1 *)(param_1 + 0x78)) {
  case 0:
    FUN_800440e4(&DAT_800e7e80,0xcf,2);
    uVar1 = *(ushort *)(param_1 + 0x72);
    if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0x1000) == 0) {
        _DAT_800bf844 = FUN_8006fb0c(param_1,uVar1 & 0x3ff);
      }
      else {
        _DAT_800bf844 = FUN_8006fde8(param_1,uVar1 & 0x3ff);
      }
    }
    else {
      _DAT_800bf844 = FUN_8006fc34(param_1,uVar1 & 0x3ff);
    }
    if (_DAT_800bf844 != 0) {
      if ((**(ushort **)(param_1 + 0x6c) & 0x2000) != 0) {
        *(undefined2 *)(_DAT_800bf844 + 0x60) = *(undefined2 *)(param_1 + 100);
      }
      *(undefined1 *)(_DAT_800bf844 + 0x5e) = 0;
    }
    if ((*(ushort *)(param_1 + 0x72) & 0x800) == 0) {
      FUN_8004ed0c(*(ushort *)(param_1 + 0x72) & 0x3ff,4);
      FUN_8004d650(*(ushort *)(param_1 + 0x72) & 0x3ff,1);
    }
    break;
  case 1:
    if (DAT_800bf80e == '\0') {
      return 0;
    }
    iVar2 = (int)*(short *)(param_1 + 0x74);
LAB_800448d4:
    FUN_80041718(param_1,iVar2,4);
    break;
  case 2:
    if (*(char *)(*(int *)(param_1 + 0x38) + 4) == '\0') {
      return 0;
    }
    if ((*(ushort *)(param_1 + 0x72) & 0x4000) == 0) {
      *(undefined1 *)(_DAT_800bf844 + 4) = 2;
    }
    else {
      *(undefined2 *)(_DAT_800bf844 + 0x60) = *(undefined2 *)(param_1 + 0x66);
      *(undefined2 *)(_DAT_800bf844 + 0x62) = *(undefined2 *)(param_1 + 0x6a);
      *(undefined1 *)(_DAT_800bf844 + 0x5e) = *(undefined1 *)(param_1 + 0x68);
    }
    FUN_800440e4(&DAT_800e7e80,2,4);
    break;
  case 3:
    if (*(char *)(param_1 + 0x79) != '\x01') {
      return 0;
    }
    if ((*(ushort *)(param_1 + 0x72) & 0x4000) != 0) {
      *(undefined2 *)(_DAT_800bf844 + 0x60) = *(undefined2 *)(param_1 + 0x66);
      *(char *)(_DAT_800bf844 + 0x5e) = (char)((ushort)*(undefined2 *)(param_1 + 0x68) >> 8);
    }
    iVar2 = (int)*(short *)(param_1 + 0x76);
    if (-1 < iVar2) goto LAB_800448d4;
    break;
  case 4:
    if ((DAT_800bf822 & 1) == 0) {
      return 1;
    }
  default:
    goto switchD_800446dc_default;
  }
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
switchD_800446dc_default:
  return 0;
}
