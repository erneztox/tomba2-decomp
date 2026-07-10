// FUN_00003654

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003654(undefined1 *param_1)

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
      if (param_1[5] == '\0') {
        if (DAT_800e7eaa != param_1[0x2a]) {
          param_1[5] = 1;
          *param_1 = 1;
          func_0x00040c00(0x3b);
          param_1[7] = 1;
          halt_baddata();
        }
      }
      else {
        if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((DAT_800e7eaa == param_1[0x2a]) && (DAT_800e7e85 == '\0')) {
          param_1[5] = 2;
          DAT_1f800137 = 2;
          DAT_800bf80f = 2;
          _DAT_800bf83a = 0x80b;
          DAT_1f800236 = 1;
          DAT_800bf839 = 1;
        }
      }
      bVar1 = param_1[7];
      if (bVar1 == 1) {
        iVar5 = func_0x0007e038(0x6d,2);
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
    iVar5 = func_0x00051b70(param_1,0xc,*(undefined1 *)((uint)(byte)param_1[3] * 2 + -0x7fef27e4));
    if (iVar5 == 0) {
      param_1[0xbf] = 1;
      *(undefined2 *)(param_1 + 0x50) = 0;
      param_1[4] = param_1[4] + '\x01';
      *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
      param_1[0x28] = param_1[0x28] | 0x80;
      cVar2 = *(char *)((uint)(byte)param_1[3] * 2 + -0x7fef27e3);
      if (cVar2 != '\0') {
        param_1[0x2a] = cVar2;
        uVar6 = (uint)(byte)param_1[3];
        *(short *)(param_1 + 0x60) =
             *(short *)((uint)(byte)param_1[3] * 0xc + -0x7fef27e0) - *(short *)(param_1 + 0x2e);
        *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(uVar6 * 0xc + -0x7fef27de);
        *(short *)(param_1 + 100) =
             *(short *)(uVar6 * 0xc + -0x7fef27dc) - *(short *)(param_1 + 0x36);
        param_1[0x5f] = *(undefined1 *)(uVar6 * 0xc + -0x7fef27da);
        uVar3 = *(ushort *)(uVar6 * 0xc + -0x7fef27d8);
        *(ushort *)(param_1 + 0x82) = uVar3;
        iVar5 = (uint)uVar3 << 0x10;
        *(short *)(param_1 + 0x80) = (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
        uVar3 = *(ushort *)(uVar6 * 0xc + -0x7fef27d6);
        *param_1 = 1;
        *(ushort *)(param_1 + 0x86) = uVar3;
        iVar5 = (uint)uVar3 << 0x10;
        *(short *)(param_1 + 0x84) = (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
      }
      param_1[0x29] = 0;
      param_1[0x5e] = 0;
      if (param_1[3] == '\0') {
        *param_1 = 2;
        param_1[8] = 0;
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

