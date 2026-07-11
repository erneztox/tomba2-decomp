// FUN_8012fb68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012fb68(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    iVar2 = func_0x80072f14(param_1);
    if (iVar2 == 0) {
      return;
    }
    *param_1 = 1;
    param_1[6] = param_1[6] + '\x01';
    DAT_800bf871 = '\0';
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (((param_1[0x29] != '\0') && (DAT_800e7ea9 != '\0')) && (DAT_800e7ffb == '\0')) {
          param_1[6] = 3;
          DAT_1f800137 = 2;
          func_0x80074590(0x17,0,0xf);
          return;
        }
      }
      else {
        if (bVar1 != 3) goto LAB_80138c58;
        iVar2 = func_0x80072e60(param_1);
        if (iVar2 != 0) {
          param_1[6] = param_1[6] + '\x01';
          DAT_1f800236 = 1;
          DAT_800bf839 = 1;
          DAT_800bf80f = 2;
          _DAT_800bf83a = 0x813;
        }
      }
      return;
    }
    if (bVar1 == 0) {
      if (DAT_800bf871 == '\n') {
        *param_1 = 2;
        param_1[6] = 1;
        *(undefined2 *)(param_1 + 0x50) = 0x400;
        func_0x80072efc();
      }
      else {
        param_1[6] = 2;
      }
    }
  }
LAB_80138c58:
  FUN_80141c00();
  return;
}

