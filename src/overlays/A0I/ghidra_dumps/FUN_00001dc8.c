// FUN_00001dc8

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001dc8(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    param_1[1] = 1;
    func_0x00077ebc(param_1);
    if (param_1[3] == '\0') {
      return;
    }
    sVar2 = *(short *)(param_1 + 0x44);
    sVar3 = *(short *)(param_1 + 0x44);
    *(short *)(param_1 + 0x44) = sVar3 + -0x40;
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)sVar2;
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)sVar2;
    if ((short)(sVar3 + -0x40) < 0xc1) {
      *(undefined2 *)(param_1 + 0x44) = 0xc0;
    }
    sVar2 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x4a) = sVar2 + 0x100;
    if (0x2fff < (short)(sVar2 + 0x100)) {
      *(undefined2 *)(param_1 + 0x4a) = 0x3000;
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
         *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + *(short *)(param_1 + 0x52);
    if (-0x3241 < *(short *)(param_1 + 0x32)) {
      param_1[4] = 3;
    }
    func_0x00051844(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((param_1[3] != '\0') || (DAT_800bfa59 == '\0')) {
        iVar5 = func_0x00051b70(param_1,0xc,(byte)param_1[3] + 1);
        if (iVar5 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0xb8) = 0x1000;
        *(undefined2 *)(param_1 + 0xba) = 0x1000;
        *(undefined2 *)(param_1 + 0xbc) = 0x1000;
        param_1[4] = param_1[4] + '\x01';
        if (param_1[3] == '\0') {
          *param_1 = 1;
          *(undefined2 *)(param_1 + 0x80) = 400;
          *(undefined2 *)(param_1 + 0x82) = 0x44c;
          *(undefined2 *)(param_1 + 0x84) = 0x140;
          *(undefined2 *)(param_1 + 0x86) = 0x280;
          param_1[0x29] = 0;
          param_1[0x2b] = 0;
        }
        else {
          *(undefined2 *)(param_1 + 0x40) = 0x28;
          uVar4 = func_0x0009a450();
          *(ushort *)(param_1 + 0x54) = uVar4 & 0xfff;
          uVar4 = func_0x0009a450();
          *(ushort *)(param_1 + 0x58) = uVar4 & 0xfff;
          uVar4 = func_0x0009a450();
          *(ushort *)(param_1 + 0x52) = (uVar4 & 0x7f) - 0x3f;
          *(undefined2 *)(param_1 + 0x44) = 0x400;
          *(undefined2 *)(param_1 + 0x4a) = 0;
          iVar5 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
          *(short *)(param_1 + 0x48) = (short)(iVar5 >> 4);
          iVar5 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
          *(short *)(param_1 + 0x4c) = (short)(-iVar5 >> 4);
          *(short *)(*(int *)(param_1 + 0xc0) + 2) = *(short *)(*(int *)(param_1 + 0xc0) + 2) + 0x4b
          ;
          uVar4 = func_0x0009a450();
          *(ushort *)(*(int *)(param_1 + 0xc0) + 4) =
               (*(short *)(*(int *)(param_1 + 0xc0) + 4) + -0xaa) - (uVar4 & 0x1f);
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = 0x3000;
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x3000;
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) = 0x3000;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[4] = 3;
    }
  }
  else if (bVar1 == 2) {
    param_1[1] = 1;
    func_0x00077ebc(param_1);
    param_1[4] = 3;
    *param_1 = 2;
    DAT_800bfa59 = '\x01';
    func_0x0010b06c();
    func_0x00074590(0x2d,0xffffffe5,0);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

