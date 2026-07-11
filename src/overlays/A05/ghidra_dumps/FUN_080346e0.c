// FUN_080346e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080346e0(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar4 = func_0x0012dfa0(param_1);
    if (iVar4 != 0) {
      func_0x0007778c(param_1);
      func_0x00077b5c(param_1);
    }
    if (DAT_800bf873 != '\0') {
      return;
    }
    func_0x0012de08(param_1);
    func_0x0012d908(param_1);
    func_0x0012dba0(param_1);
    func_0x0012dd44(param_1);
    param_1[0x2b] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[4] = 1;
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
      if (DAT_800bf873 != '\0') {
        param_1[0x5e] = 0;
        func_0x00077b38(param_1,0x80140e40,0xc);
        param_1[0xb] = 0x10;
        *(undefined2 *)(param_1 + 0x84) = 0x28;
        param_1[0xd] = 0;
        *(undefined2 *)(param_1 + 0x86) = 0x50;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[0x5e] = 1;
      func_0x00077b38(param_1,0x80140e40,8);
      param_1[0xb] = 0x15;
      *(undefined2 *)(param_1 + 0x84) = 100;
      *(undefined2 *)(param_1 + 0x86) = 0x8c;
      *(undefined4 *)(param_1 + 0x78) = 0x8013f81c;
      param_1[0xd] = 1;
      *(undefined4 *)(param_1 + 0x7c) = 0x8013a5f0;
      *(undefined2 *)(param_1 + 0x80) = 0x28;
      *(undefined2 *)(param_1 + 0x82) = 0x50;
      param_1[8] = 0xf0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      param_1[0x47] = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
      func_0x00048750(param_1);
      uVar3 = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(param_1 + 0x56) = uVar3;
      sVar2 = *(short *)((uint)(byte)param_1[3] * 2 + -0x7fec0dd0);
      *(undefined2 *)(param_1 + 0x4c) = 0;
      *(undefined2 *)(param_1 + 0x48) = 0;
      *(undefined2 *)(param_1 + 0x52) = 0;
      *(short *)(param_1 + 0x66) = sVar2;
      *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x36);
      *(undefined2 *)(param_1 + 0x74) = 0xffff;
      *(undefined2 *)(param_1 + 0x76) = 0xffff;
      *(short *)(param_1 + 0x68) = sVar2;
      *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x32) - sVar2;
      func_0x001339a4();
    }
  }
  else if (bVar1 == 2) {
    func_0x0007778c(param_1);
    if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08034908 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef61cc))();
      return;
    }
    func_0x00077b5c(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

