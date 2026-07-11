// FUN_0803980c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803980c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x00135354(param_1);
    if (param_1[0x2b] != '\0') {
      param_1[0x2b] = param_1[0x2b] + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf809 != '\0') {
      return;
    }
    if (DAT_1f800137 != '\0') {
      return;
    }
    uVar3 = func_0x00076d68(param_1);
    *(undefined2 *)(param_1 + 0x6a) = uVar3;
    if ((byte)param_1[5] < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x080399fc */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5e30))();
      return;
    }
    if (param_1[1] != '\0') {
      func_0x000518fc(param_1);
    }
    param_1[0x29] = 0;
    param_1[0x5f] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = func_0x000519e0(param_1,0xf,_DAT_800ecfbc,0x801416e4);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfc0;
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x19,0x10);
        func_0x00135630(param_1,0,0);
        *(undefined2 *)(param_1 + 0x6e) = 0xffff;
        param_1[4] = param_1[4] + '\x01';
        *param_1 = 1;
        param_1[0x2b] = 0;
        param_1[0x29] = 0;
        param_1[0x5f] = 0;
        param_1[0x5e] = 0;
        param_1[0xbf] = 0;
        param_1[0x46] = 0;
        param_1[0x47] = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x74) = 0;
        *(undefined2 *)(param_1 + 0x78) = 0;
        param_1[0x2a] = *(undefined1 *)((byte)param_1[3] + 0x80146ddc);
        func_0x0004766c(param_1);
        func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
        sVar2 = _DAT_1f8001a4;
        *(short *)(param_1 + 0x32) = _DAT_1f8001a4 + 0x28;
        *(short *)(param_1 + 0x7a) = sVar2;
        *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)(param_1 + 0x36);
        func_0x00049674(param_1);
        sVar2 = _DAT_1f8001a0;
        param_1[0xbe] = 0;
        *(short *)(param_1 + 0x60) = sVar2;
        *(short *)(param_1 + 0x56) = sVar2;
        iVar4 = func_0x001352cc(param_1);
        if (iVar4 != 0) {
          *(ushort *)(param_1 + 0x56) = _DAT_1f8001a0 + 0x800U & 0xfff;
          param_1[0xbe] = param_1[0xbe] ^ 1;
          halt_baddata();
        }
      }
      return;
    }
  }
  else if (bVar1 == 2) {
    if ((byte)param_1[5] < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x08039af8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5e00))();
      return;
    }
    param_1[0x29] = 0;
    param_1[0x5f] = 0;
    if (param_1[1] == '\0') {
      return;
    }
    func_0x000518fc(param_1);
  }
  else if (bVar1 == 3) {
    if ((param_1[0x1b] & 0x40) == 0) {
      func_0x0007a624(param_1);
      return;
    }
    param_1[0x1b] = param_1[0x1b] & 0xbf;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

