// FUN_0000163c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0000163c(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      func_0x0010a3ec(param_1);
    }
    iVar4 = func_0x0007778c(param_1);
    if (iVar4 != 0) {
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
    iVar4 = func_0x00051b70(param_1,0xc,*(undefined1 *)((uint)(byte)param_1[3] * 2 + -0x7fef1ea0));
    if (iVar4 == 0) {
      param_1[0xbf] = 1;
      *(undefined2 *)(param_1 + 0x50) = 0;
      param_1[4] = param_1[4] + '\x01';
      *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
      param_1[0x28] = param_1[0x28] | 0x80;
      cVar2 = *(char *)((uint)(byte)param_1[3] * 2 + -0x7fef1e9f);
      if (cVar2 != '\0') {
        param_1[0x2a] = cVar2;
        uVar5 = (uint)(byte)param_1[3];
        *(short *)(param_1 + 0x60) =
             *(short *)((uint)(byte)param_1[3] * 0xc + -0x7fef1e9c) - *(short *)(param_1 + 0x2e);
        *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(uVar5 * 0xc + -0x7fef1e9a);
        *(short *)(param_1 + 100) =
             *(short *)(uVar5 * 0xc + -0x7fef1e98) - *(short *)(param_1 + 0x36);
        param_1[0x5f] = *(undefined1 *)(uVar5 * 0xc + -0x7fef1e96);
        uVar3 = *(ushort *)(uVar5 * 0xc + -0x7fef1e94);
        *(ushort *)(param_1 + 0x82) = uVar3;
        iVar4 = (uint)uVar3 << 0x10;
        *(short *)(param_1 + 0x80) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
        uVar3 = *(ushort *)(uVar5 * 0xc + -0x7fef1e92);
        *param_1 = 1;
        *(ushort *)(param_1 + 0x86) = uVar3;
        iVar4 = (uint)uVar3 << 0x10;
        *(short *)(param_1 + 0x84) = (short)((iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1);
      }
      param_1[0x29] = 0;
      if (param_1[3] == '\0') {
        param_1[0x46] = 0;
        param_1[0xbf] = 1;
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

