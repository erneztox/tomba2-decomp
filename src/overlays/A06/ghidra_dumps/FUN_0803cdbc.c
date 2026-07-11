// FUN_0803cdbc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803cdbc(undefined1 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar2 = _DAT_1f800164;
  uVar1 = _DAT_1f800162;
  if (param_1[0x29] == '\x01') {
    *(undefined2 *)(param_1 + 0x2e) = _DAT_1f800160;
    *(undefined2 *)(param_1 + 0x32) = uVar1;
    *(undefined2 *)(param_1 + 0x36) = uVar2;
    func_0x0013b8f4(param_1,(int)*(short *)(param_1 + 100),0xffffffb0);
    param_1[6] = 0;
    param_1[5] = 5;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0xbf) = 1;
  }
  else {
    iVar3 = func_0x000495dc(param_1,0,0);
    if ((iVar3 == 0) && (param_1[0x5f] == '\0')) {
      func_0x0013b8f4(param_1,(int)*(short *)(param_1 + 100),
                      (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18);
      func_0x00041ac0(param_1);
      if (param_1[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x58) = 0x1400 - *(short *)(param_1 + 100);
      *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff;
      return 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x47) = 1;
    *param_1 = 2;
    param_1[6] = 0;
    param_1[5] = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

