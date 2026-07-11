// FUN_08027c2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08027c2c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((byte)param_1[5] < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08027e94 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef62e4))();
      return;
    }
    param_1[0x2b] = 0;
    func_0x000517f8(param_1);
    param_1[1] = 1;
    func_0x00077ebc();
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
      bVar1 = param_1[5];
      if (bVar1 == 1) {
        if (DAT_800bfa4e < 0xf) {
          return;
        }
        param_1[5] = 2;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        *(undefined2 *)(param_1 + 0x50) = 0x200;
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          iVar3 = func_0x00051b70(param_1,0xc,0x29);
          if (iVar3 != 0) {
            return;
          }
          *(undefined2 *)(param_1 + 0x80) = 0x8c;
          *(undefined2 *)(param_1 + 0x82) = 0x118;
          *(undefined2 *)(param_1 + 0x84) = 0xed;
          *(undefined2 *)(param_1 + 0x86) = 0xed;
          *(undefined2 *)(param_1 + 0x54) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0;
          *(undefined2 *)(param_1 + 0x58) = 0;
          param_1[0x2b] = 0;
          if (DAT_800bf938 == -1) {
            param_1[4] = 1;
            *param_1 = 1;
          }
          else {
            param_1[5] = param_1[5] + '\x01';
            *(short *)(param_1 + 0x8a) = *(short *)(param_1 + 0x32);
            *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x200;
          }
        }
      }
      else {
        if (bVar1 == 2) {
          sVar2 = *(short *)(param_1 + 0x4a);
          *(short *)(param_1 + 0x4a) = sVar2 + *(short *)(param_1 + 0x50);
          if (0x2000 < (short)(sVar2 + *(short *)(param_1 + 0x50))) {
            *(undefined2 *)(param_1 + 0x4a) = 0x2000;
          }
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
          if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x32)) {
            *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x8a);
            iVar3 = func_0x0003116c(0,param_1 + 0x2c,0xffffffce);
            *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
            func_0x00074590(0x32,0xfffffff2,0);
            *(undefined2 *)(param_1 + 0x40) = 0xf;
            param_1[5] = param_1[5] + '\x01';
            DAT_800e807e = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if (bVar1 != 3) {
            halt_baddata();
          }
          sVar2 = *(short *)(param_1 + 0x40);
          *(short *)(param_1 + 0x40) = sVar2 + -1;
          if ((short)(sVar2 + -1) == -1) {
            param_1[4] = 1;
            param_1[5] = 0;
            *param_1 = 1;
            DAT_800bfa4e = 0x14;
            DAT_800e807e = 0;
          }
        }
        func_0x000517f8(param_1);
        param_1[1] = 1;
        func_0x00077ebc(param_1);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

