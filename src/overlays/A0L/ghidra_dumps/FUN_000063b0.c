// FUN_000063b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000063b0(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf871 == '\x04') {
      if (1 < DAT_800bfa55) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      if ((*(char *)(param_1 + 5) == '\0') &&
         (func_0x00041098(param_1), *(char *)(param_1 + 0x70) == -1)) {
        DAT_800bf80f = 2;
        DAT_800bf839 = 3;
        _DAT_800bf83a = 0x1505;
        *(undefined1 *)(param_1 + 4) = 3;
      }
      if (*(char *)(param_1 + 1) == '\0') {
        return;
      }
      func_0x00077e7c(param_1);
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
    }
    else if (DAT_800bf871 == '\x05') {
      func_0x0010f250(param_1);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar3 = func_0x000519e0(param_1,0x11,_DAT_800ecfa8,0x801173b0);
      if (iVar3 != 0) {
        return;
      }
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      func_0x00040cdc(param_1,0x8011ac80,0x800a3d18);
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfe8;
      func_0x00041718(param_1,0,0);
      *(undefined2 *)(param_1 + 0x80) = 0x60;
      *(undefined2 *)(param_1 + 0x82) = 0xc0;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0x150;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
      if (DAT_800bf871 == '\x04') {
        _DAT_800e7ed6 = 0x800;
        func_0x00040d68(param_1,0x801163f8);
        *(undefined1 *)(param_1 + 0x70) = 2;
      }
      uVar2 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
      *(undefined2 *)(param_1 + 0x56) = uVar2;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

