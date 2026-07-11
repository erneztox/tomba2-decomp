// FUN_0802f184

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802f184(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((byte)param_1[5] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0802f3e4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef624c))();
      return;
    }
    if ((DAT_800bf816 != '\0') && ((ushort)DAT_800bf817 == *(ushort *)(param_1 + 0x6a))) {
      param_1[1] = 1;
      func_0x00077e7c(param_1);
      func_0x000517f8(param_1);
    }
    param_1[0x29] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      bVar1 = param_1[5];
      if (bVar1 == 1) {
        if ((DAT_800bfa1d & 4) == 0) {
          return;
        }
        param_1[5] = 2;
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          if ((DAT_800bfa1d & 4) == 0) {
            *(undefined2 *)(param_1 + 0x2e) = 0x3340;
            *(undefined2 *)(param_1 + 0x32) = 0xe2a0;
            param_1[5] = 1;
            param_1[0x5f] = 0;
            *(undefined2 *)(param_1 + 0x36) = 0x6d42;
          }
          else {
            param_1[5] = 2;
            *(undefined2 *)(param_1 + 0x2e) = 0x3340;
            *(undefined2 *)(param_1 + 0x32) = 0xe5c0;
            param_1[0x5f] = 1;
            *(undefined2 *)(param_1 + 0x36) = 0x6d42;
          }
        }
      }
      else if (bVar1 == 2) {
        iVar3 = func_0x00040410(param_1,param_1[3]);
        if (iVar3 == 0) {
          return;
        }
        if (param_1[0x5f] == '\0') {
          *(undefined2 *)(param_1 + 0x4a) = 0;
          *(undefined2 *)(param_1 + 0x50) = 0x200;
          param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[5] = 0;
        param_1[4] = param_1[4] + '\x01';
        *(undefined2 *)(param_1 + 0x80) = 0x40;
        *(undefined2 *)(param_1 + 0x82) = 0x80;
        *(undefined2 *)(param_1 + 0x84) = 0x96;
        *(undefined2 *)(param_1 + 0x86) = 0x96;
        *param_1 = 1;
        param_1[0x46] = 0;
        param_1[0x29] = 0;
        param_1[0x2b] = 0;
        param_1[0x5e] = 1;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0x400;
        *(undefined2 *)(param_1 + 0x58) = 0;
      }
      else if (bVar1 == 3) {
        sVar2 = *(short *)(param_1 + 0x4a);
        *(short *)(param_1 + 0x4a) = sVar2 + *(short *)(param_1 + 0x50);
        if (0x3800 < (short)(sVar2 + *(short *)(param_1 + 0x50))) {
          *(undefined2 *)(param_1 + 0x4a) = 0x3800;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        if (-0x1a41 < *(short *)(param_1 + 0x32)) {
          *(undefined2 *)(param_1 + 0x32) = 0xe5c0;
          param_1[4] = 1;
          param_1[5] = 0;
          iVar3 = func_0x0003116c(0,param_1 + 0x2c,0xffffffc0);
          *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
          func_0x00074590(0x32,0xfffffff2,0);
        }
        param_1[1] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else if (bVar1 == 2) {
    if ((byte)param_1[5] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0802f4a4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6234))();
      return;
    }
    if (DAT_800bf816 == '\0') {
      return;
    }
    if ((ushort)DAT_800bf817 != *(ushort *)(param_1 + 0x6a)) {
      return;
    }
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x000517f8(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

