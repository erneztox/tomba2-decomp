// FUN_080295a8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080295a8(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (param_1[3] == '\x02') {
        iVar3 = func_0x00051b70(param_1,0xc,0x40);
        if (iVar3 == 0) {
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0;
          if (((int)(uint)DAT_800bfa32 >> ((byte)param_1[3] & 0x1f) & 1U) == 0) {
            *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
            *(undefined2 *)(param_1 + 0x80) = 0x50;
            *(undefined2 *)(param_1 + 0x82) = 0xa0;
            *param_1 = 1;
            *(undefined2 *)(param_1 + 0x84) = 0x68;
            *(undefined2 *)(param_1 + 0x86) = 0x68;
          }
          param_1[0xd] = param_1[0xd] | 4;
          *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (((int)(uint)DAT_800bfa32 >> ((byte)param_1[3] & 0x1f) & 1U) == 0) {
        iVar3 = func_0x00051b70(param_1,0xc,0x3e);
        if (iVar3 == 0) {
          *(undefined2 *)(param_1 + 0x80) = 200;
          *(undefined2 *)(param_1 + 0x82) = 400;
          *param_1 = 1;
          *(undefined2 *)(param_1 + 0x84) = 0x100;
          *(undefined2 *)(param_1 + 0x86) = 0x100;
          param_1[5] = 0;
          halt_baddata();
        }
      }
      else {
        iVar3 = func_0x00051b70(param_1,0xc,0x3f);
        if (iVar3 == 0) {
          param_1[5] = 1;
          param_1[0x29] = 0;
          param_1[0x2b] = 0;
          param_1[4] = param_1[4] + '\x01';
          halt_baddata();
        }
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
    return;
  }
  if (param_1[3] == '\x02') {
    iVar3 = *(int *)(param_1 + 0x10);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar3 + 0x2c);
    *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x30) + -0x6b;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar3 + 0x34);
    if ((((param_1[0x29] != '\0') && (DAT_800e7ea9 != '\0')) && ((DAT_800e7ff4 & 4) == 0)) &&
       (((_DAT_800bf89e & 0x200) == 0 && (iVar3 = func_0x0005308c(), iVar3 != 0)))) {
      param_1[0x2b] = 3;
      sVar2 = func_0x000782b0(&DAT_800e7eac,(int)*(short *)(param_1 + 0x2e),
                              (int)*(short *)(param_1 + 0x36));
      DAT_800e7fc7 = func_0x00077768((int)sVar2,(int)_DAT_800e7fc0,0);
      func_0x00055284();
    }
  }
  if ((param_1[5] == '\0') && (iVar3 = func_0x00122280(param_1), iVar3 != 0)) {
    param_1[5] = param_1[5] + '\x01';
  }
  if ((DAT_1f800207 != '\x06') && (DAT_1f800207 != '\x0f')) {
    func_0x0007778c(param_1);
    if (param_1[1] != '\0') {
      func_0x000517f8(param_1);
    }
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[1] = 1;
  func_0x00077ebc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

