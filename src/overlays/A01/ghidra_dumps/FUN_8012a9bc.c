// FUN_8012a9bc

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012a9bc(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  bVar1 = param_1[4];
  piVar6 = (int *)(param_1 + 0x60);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x80) = 0x38;
    *(undefined2 *)(param_1 + 0x82) = 0x70;
    *(undefined2 *)(param_1 + 0x84) = 0x8c;
    *(undefined2 *)(param_1 + 0x86) = 0xf0;
    *param_1 = 1;
    param_1[0xb] = 0x20;
    if (param_1[3] == '\0') {
      *(undefined4 *)(param_1 + 0x18) = 0x8012e868;
      *(undefined4 *)(param_1 + 0x60) = 0;
      uVar4 = func_0x8009a450();
      iVar5 = (uVar4 & 7) + 0x80138b8c;
      *(int *)(param_1 + 0x68) = iVar5;
      *(int *)(param_1 + 100) = iVar5;
      *(undefined4 *)(param_1 + 0x6c) = 0x80138b6c;
      param_1[6] = 5;
      param_1[7] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[3] != '\x01') {
      param_1[4] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined **)(param_1 + 0x18) = &DAT_8012e974;
    *(undefined2 *)(param_1 + 0x44) = 0x800;
    *(undefined4 *)(param_1 + 0x68) = 0x80137be8;
    *(undefined4 *)(param_1 + 100) = 0x80137bec;
    *(undefined4 *)(param_1 + 0x60) = 0x80137bec;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    param_1[6] = 0x10;
    param_1[5] = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x140;
    *(undefined2 *)(param_1 + 0x42) = 0;
    param_1[4] = 1;
    param_1[5] = 0;
  }
  if (DAT_1f800137 == '\0') {
    cVar2 = param_1[6];
    param_1[6] = cVar2 + -1;
    if (cVar2 == '\0') {
      param_1[4] = 2;
    }
    else {
      if (param_1[3] == '\0') {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 0x68);
        if (*(int *)(param_1 + 0x68) == 0) {
          *(undefined4 *)(param_1 + 0x68) = 0x80138b8c;
          *(undefined4 *)(param_1 + 100) = 0x80138b8c;
        }
        *(ushort *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (ushort)(byte)param_1[6] * -8;
        *piVar6 = *piVar6 + 0x190019;
        param_1[7] = param_1[7] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[3] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x8004766c(param_1);
      iVar5 = func_0x8004951c(param_1,0,0xffffff74);
      if (iVar5 == 0) {
        *piVar6 = *(int *)(param_1 + 100);
        if (*(int *)(param_1 + 100) == 0) {
          *(int *)(param_1 + 100) = *(int *)(param_1 + 0x68) + 4;
          *piVar6 = *(int *)(param_1 + 0x68) + 4;
        }
        iVar5 = func_0x80083f50((int)*(short *)(param_1 + 0x42));
        *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x40) + (short)(iVar5 >> 6);
        iVar5 = func_0x80083e80((int)*(short *)(param_1 + 0x42));
        *(short *)(param_1 + 0x72) = *(short *)(param_1 + 0x40) + (short)(iVar5 >> 6);
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 0xc;
        uVar3 = func_0x8009a450();
        *(ushort *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + (uVar3 & 0xff);
        if (param_1[5] == '\0') {
          if ((byte)param_1[6] < 4) {
            *param_1 = 2;
            param_1[5] = 1;
            halt_baddata();
          }
        }
        else {
          if (param_1[5] != '\x01') {
            halt_baddata();
          }
          *(uint *)(param_1 + 0x6c) =
               *(int *)(param_1 + 0x6c) + (0x1000U - *(int *)(param_1 + 0x6c) >> 3);
        }
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x4e) * 0x100;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x52) * 0x100;
        func_0x8007778c();
      }
      else {
        *param_1 = 2;
        param_1[4] = 2;
      }
    }
  }
  else {
    func_0x8007778c(param_1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

