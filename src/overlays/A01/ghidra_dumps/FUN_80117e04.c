// FUN_80117e04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80117e04(int param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_s0;
  ulonglong uVar7;
  
  if (*(char *)(param_1 + 0xbf) != '\0') {
    iVar6 = 0;
    if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
      iVar6 = (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
      iVar3 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
      unaff_s0 = (uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32);
      iVar4 = unaff_s0 * 0x10000 >> 0x10;
      uVar2 = func_0x80084080(iVar6 * iVar6 + iVar3 * iVar3 + iVar4 * iVar4);
      if ((2000 < uVar2) || (0x44c < (unaff_s0 + 800U & 0xffff))) {
        FUN_80120e84();
        return;
      }
      iVar6 = 2;
      if (1000 < uVar2) {
        iVar6 = 1;
      }
    }
    if (iVar6 != 0) {
      uVar7 = func_0x8009a450();
      uVar1 = 5;
      if (((uVar7 & 1) != 0) && (uVar1 = 5, *(char *)(param_1 + 0xbf) == '\0')) {
        if ((DAT_800bf9fd & 1) == 0) {
          iVar6 = func_0x8005308c();
          if (iVar6 != 0) {
            func_0x80042354(1,1);
            func_0x80040b48(0xb);
            FUN_8012a00c();
            return;
          }
        }
        else {
          if (((int)(uVar7 >> 0x20) != 8) || ((DAT_800bf9fd & 2) != 0)) {
            FUN_8012a00c();
            return;
          }
          iVar6 = func_0x8005308c();
          if (iVar6 != 0) {
            func_0x80042354(1,1);
            func_0x80040b48(0xb);
            FUN_8012a00c();
            return;
          }
        }
        if (*(short *)(unaff_s0 + 0x4a) != 0) {
          FUN_8012997c(unaff_s0);
        }
        return;
      }
      goto code_r0x80117f3c;
    }
  }
  uVar5 = func_0x8009a450();
  uVar1 = *(undefined1 *)((uVar5 & 1) + 0x8013722c);
code_r0x80117f3c:
  *(undefined1 *)(param_1 + 5) = uVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_801208b4();
  return;
}

