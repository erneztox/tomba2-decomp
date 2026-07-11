// FUN_0803d664

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803d664(undefined1 *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(iVar3 + 0x30);
  uVar5 = *(undefined4 *)(iVar3 + 0x34);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x50;
  if (param_1[6] == '\0') {
    *param_1 = 2;
    if (*(ushort *)(param_1 + 0x58) < 0x820) {
      *(undefined2 *)(param_1 + 100) = 0x820;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 0x58);
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
    *(undefined2 *)(param_1 + 0x40) = 0;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] != '\x01') {
    halt_baddata();
  }
  uVar1 = *(ushort *)(param_1 + 0xb8);
  if (0x1000 < uVar1) {
    *(ushort *)(param_1 + 0xb8) = uVar1 - 0x80;
    if ((ushort)(uVar1 - 0x80) < 0x1001) {
      *(undefined2 *)(param_1 + 0xb8) = 0x1000;
    }
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
    *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
  }
  iVar3 = func_0x0004139c(param_1 + 0x58,(int)*(short *)(param_1 + 100),0xe0);
  if (iVar3 != 0) {
    if (*(short *)(param_1 + 100) == 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      *(undefined2 *)(param_1 + 0xbc) = 0x1000;
      *(undefined2 *)(param_1 + 0xba) = 0x1000;
      *(undefined2 *)(param_1 + 0xb8) = 0x1000;
      param_1[6] = 0;
      param_1[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 100) = 0;
  }
  sVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar2 + 0x20;
  iVar3 = func_0x00083e80((int)(short)(sVar2 + 0x20));
  iVar3 = iVar3 >> 3;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  *(short *)(*(int *)(param_1 + 0xc0) + 8) = -0x100 - (short)iVar3;
  iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x40));
  iVar3 = iVar3 >> 3;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  *(short *)(*(int *)(param_1 + 0xc4) + 8) = (short)iVar3 + 0x100;
  if (param_1[1] != '\0') {
    func_0x000518fc(param_1);
  }
  return;
}

