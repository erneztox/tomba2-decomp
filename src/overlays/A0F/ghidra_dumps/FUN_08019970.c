// FUN_08019970

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019970(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  if (param_1[5] == '\0') {
    func_0x00110d4c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[5] != '\x01') {
    halt_baddata();
  }
  if (*(short *)(param_1 + 0x6a) != -1) {
    func_0x0006cbd0(0x800e8008,*(short *)(param_1 + 0x6a) * 0xc + -0x7fee5110);
    sVar2 = *(short *)(param_1 + 0x6a);
    iVar4 = *(short *)(param_1 + 0x6a) * 6;
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar4 + -0x7fee2890);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar4 + -0x7fee288e);
    uVar3 = *(undefined2 *)(iVar4 + -0x7fee288c);
    *(short *)(param_1 + 0x6a) = sVar2 + 1;
    *(undefined2 *)(param_1 + 0x36) = uVar3;
    if (*(short *)((short)(sVar2 + 1) * 0xc + -0x7fee5110) == 0) {
      *(undefined2 *)(param_1 + 0x6a) = 0xffff;
    }
  }
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1[1] = param_1[0x47];
        func_0x00041098(param_1);
        if ((char)param_1[0x70] < '\x01') {
          param_1[6] = param_1[6] + '\x01';
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *param_1 = 1;
        *(undefined4 *)(param_1 + 0x1c) = 0x801123f0;
        param_1[5] = 1;
        param_1[6] = 0;
        func_0x0006e1e4();
        func_0x00042310();
        *(undefined2 *)(param_1 + 0x58) = 0;
        DAT_800bfa1a = DAT_800bfa1a | 0x20;
      }
      goto LAB_08019ba0;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[1] = 1;
    _DAT_1f800254 = func_0x0003116c(0x1003,param_1 + 0x2c,0);
    param_1[6] = param_1[6] + '\x01';
  }
  iVar4 = _DAT_1f800254;
  *(undefined2 *)(_DAT_1f800254 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(param_1 + 0x32);
  *(undefined2 *)(iVar4 + 0x30) = *(undefined2 *)(param_1 + 0x36);
  param_1[1] = 1;
  uVar3 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
  *(undefined2 *)(param_1 + 0x56) = uVar3;
  if (*(short *)(param_1 + 0x6a) == -1) {
    param_1[0x47] = 1;
    param_1[0x70] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08019ba0:
  if (param_1[1] == '\0') {
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x0004190c(param_1);
    func_0x000518fc(param_1);
  }
  return;
}

