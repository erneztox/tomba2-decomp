// FUN_000015d8

/* WARNING: Control flow encountered bad instruction data */

void FUN_000015d8(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      func_0x0010a3f4(param_1);
      bVar1 = param_1[7];
      if (bVar1 == 1) {
        iVar5 = func_0x0007e038(0x6b,2);
        *(int *)(param_1 + 0x14) = iVar5;
        if (iVar5 != 0) {
          *(undefined2 *)(param_1 + 0xe) = 0x5a;
          param_1[7] = param_1[7] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (1 < bVar1) {
        if (bVar1 != 2) {
          halt_baddata();
        }
        sVar4 = *(short *)(param_1 + 0xe);
        *(short *)(param_1 + 0xe) = sVar4 + -1;
        if ((short)(sVar4 + -1) == -1) {
          if (*(byte *)(*(int *)(param_1 + 0x14) + 4) < 2) {
            *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
            *(undefined4 *)(param_1 + 0x14) = 0;
          }
          param_1[7] = 0;
        }
      }
    }
    iVar5 = func_0x0007778c(param_1);
    if (iVar5 != 0) {
      func_0x000517f8(param_1);
    }
    param_1[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar5 = func_0x00051b70(param_1,0xc,*(undefined1 *)((uint)(byte)param_1[3] * 2 + -0x7fef3a74));
    if (iVar5 == 0) {
      param_1[0xbf] = 1;
      *(undefined2 *)(param_1 + 0x50) = 0;
      param_1[4] = param_1[4] + '\x01';
      *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
      param_1[0x28] = param_1[0x28] | 0x80;
      cVar2 = *(char *)((uint)(byte)param_1[3] * 2 + -0x7fef3a73);
      if (cVar2 != '\0') {
        param_1[0x2a] = cVar2;
        uVar6 = (uint)(byte)param_1[3];
        *(short *)(param_1 + 0x60) =
             *(short *)((uint)(byte)param_1[3] * 0xc + -0x7fef3a70) - *(short *)(param_1 + 0x2e);
        *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(uVar6 * 0xc + -0x7fef3a6e);
        *(short *)(param_1 + 100) =
             *(short *)(uVar6 * 0xc + -0x7fef3a6c) - *(short *)(param_1 + 0x36);
        param_1[0x5f] = *(undefined1 *)(uVar6 * 0xc + -0x7fef3a6a);
        uVar3 = *(ushort *)(uVar6 * 0xc + -0x7fef3a68);
        *(ushort *)(param_1 + 0x82) = uVar3;
        iVar5 = (uint)uVar3 << 0x10;
        *(short *)(param_1 + 0x80) = (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
        uVar3 = *(ushort *)(uVar6 * 0xc + -0x7fef3a66);
        *param_1 = 1;
        *(ushort *)(param_1 + 0x86) = uVar3;
        iVar5 = (uint)uVar3 << 0x10;
        *(short *)(param_1 + 0x84) = (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
      }
      param_1[0x29] = 0;
      param_1[0x5e] = 0;
      if (param_1[3] == '\0') {
        param_1[0x46] = 0;
        *(undefined2 *)(param_1 + 0x50) = 0xfc00;
        func_0x00072efc(param_1);
        *param_1 = 2;
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

