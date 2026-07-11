// FUN_0803ca84

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803ca84(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(iVar7 + 0x30);
  uVar6 = *(undefined4 *)(iVar7 + 0x34);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar7 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x50;
  if (*(char *)(iVar7 + 4) == '\x02') {
    param_1[6] = 0;
    param_1[5] = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sVar2 = *(short *)(param_1 + 0xb8);
        *(ushort *)(param_1 + 0xb8) = sVar2 + 0x40U;
        if (0x157b < (ushort)(sVar2 + 0x40U)) {
          *(undefined2 *)(param_1 + 100) = 0x801;
          *(undefined2 *)(param_1 + 0xb8) = 0x157c;
          param_1[6] = param_1[6] + '\x01';
        }
        *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
        *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      uVar3 = func_0x0013b7dc(iVar7);
      if (uVar3 != *(byte *)(iVar7 + 0xbe)) {
        param_1[6] = 0;
        param_1[5] = 4;
        halt_baddata();
      }
      iVar4 = func_0x0004139c(param_1 + 0x58,(int)*(short *)(param_1 + 100),0x100);
      if (iVar4 != 0) {
        if (*(short *)(param_1 + 100) == 0x801) {
          sVar2 = func_0x0013b844(param_1,&DAT_800e7eac);
          *(short *)(param_1 + 100) = sVar2 + -0x400;
          if (*(char *)(iVar7 + 0xbe) != '\0') {
            *(short *)(param_1 + 100) = 0x1000 - (sVar2 + -0x400);
          }
          *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff;
          halt_baddata();
        }
        param_1[6] = 0;
        param_1[5] = 2;
      }
      goto LAB_0803cd28;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *param_1 = 2;
    param_1[0xbe] = *(undefined1 *)(iVar7 + 0xbe);
    func_0x00041ac0(param_1);
    **(undefined2 **)(param_1 + 0xc0) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x50;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0x68;
    **(undefined2 **)(param_1 + 0xc4) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0x50;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = 0xff98;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
    uVar5 = *(undefined4 *)(iVar7 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(undefined2 *)(param_1 + 100) = 0x820;
    *(undefined2 *)(param_1 + 0x40) = 0;
    param_1[6] = param_1[6] + '\x01';
  }
  iVar7 = func_0x0004139c(param_1 + 0x58,(int)*(short *)(param_1 + 100),0xa0);
  if (iVar7 != 0) {
    if (*(short *)(param_1 + 100) == 0x820) {
      *(undefined2 *)(param_1 + 100) = 0x680;
    }
    else {
      param_1[6] = param_1[6] + '\x01';
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0803cd28:
  sVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar2 + 0x20;
  iVar7 = func_0x00083e80((int)(short)(sVar2 + 0x20));
  iVar7 = iVar7 >> 3;
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  *(short *)(*(int *)(param_1 + 0xc0) + 8) = -0x100 - (short)iVar7;
  iVar7 = func_0x00083e80((int)*(short *)(param_1 + 0x40));
  iVar7 = iVar7 >> 3;
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  *(short *)(*(int *)(param_1 + 0xc4) + 8) = (short)iVar7 + 0x100;
  if (param_1[1] != '\0') {
    func_0x000518fc(param_1);
  }
  return;
}

