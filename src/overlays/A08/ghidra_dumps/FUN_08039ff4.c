// FUN_08039ff4

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039ff4(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 6);
  bVar2 = 0;
  if (bVar1 == 1) {
    sVar4 = *(short *)(param_1 + 0x32) + 0x14;
    *(short *)(param_1 + 0x32) = sVar4;
    if ((int)sVar4 < *(short *)(param_1 + 0x7a) + 200) {
      return;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x7a) + 200;
    *(undefined2 *)(param_1 + 0x44) = 0x1800;
    *(undefined2 *)(param_1 + 0x42) = 0xf;
    func_0x00135630(param_1,4,6);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar5 = func_0x00135158(param_1);
      if (iVar5 == -1) {
        return;
      }
      func_0x00135630(param_1,0xd,6);
      *(undefined1 *)(param_1 + 0x5e) = 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x00134b2c(param_1,0,3);
    }
  }
  else if (bVar1 == 2) {
    func_0x00134904(param_1);
    if ((600 < *(short *)(param_1 + 0x70)) ||
       (uVar3 = *(short *)(param_1 + 0x42) - 1, *(ushort *)(param_1 + 0x42) = uVar3,
       0 < (int)((uint)uVar3 << 0x10))) {
      uVar3 = *(short *)(param_1 + 0x40) - 1;
      *(ushort *)(param_1 + 0x40) = uVar3;
      if ((int)((uint)uVar3 << 0x10) < 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((*(byte *)(param_1 + 0x5f) & 2) != 0) {
        bVar2 = *(byte *)(param_1 + 0xbe) ^ *(byte *)(param_1 + 0x5f) & 1 ^ 1;
      }
      sVar4 = func_0x001349cc(param_1);
      iVar5 = func_0x00135424(param_1,200,0,8);
      if (iVar5 == -1) {
        return;
      }
      func_0x001354f4(param_1);
      if (bVar2 == 0 && sVar4 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 9;
      *(undefined1 *)(param_1 + 6) = 0;
      return;
    }
    func_0x00135630(param_1,1,6);
    *(undefined2 *)(param_1 + 0x78) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 5) = 8;
    *(undefined1 *)(param_1 + 6) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

