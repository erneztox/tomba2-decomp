// FUN_08043f98

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08043f98(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar2 = func_0x00031220(0x918,0,0xffffffe2);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x10) = param_1;
    }
    func_0x00074590(7,0xf,0);
    func_0x00041718(param_1,2,4);
    iVar2 = (0x3335 - *(short *)(param_1 + 0x2e)) * 0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
    *(short *)(param_1 + 0x4e) = (short)(iVar2 >> 5);
    iVar2 = (-0x21bc - *(short *)(param_1 + 0x32)) * 0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
    *(short *)(param_1 + 0x50) = (short)(iVar2 >> 5);
    iVar2 = (0x1d15 - *(short *)(param_1 + 0x36)) * 0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
    *(short *)(param_1 + 0x52) = (short)(iVar2 >> 5);
    iVar2 = (0xd20 - *(short *)(param_1 + 0x56)) * 0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
    *(short *)(param_1 + 0x4c) = (short)(iVar2 >> 5);
    *(undefined2 *)(param_1 + 0x4a) = 0xd400;
    *(undefined2 *)(param_1 + 0x40) = 0x20;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  else if (*(char *)(param_1 + 0x78) != '\x01') {
    halt_baddata();
  }
  if (*(short *)(param_1 + 0x40) == 0) {
    func_0x00041718(param_1,0,4);
    *(undefined2 *)(param_1 + 0x2e) = 0x3335;
    *(undefined2 *)(param_1 + 0x32) = 0xde44;
    *(undefined2 *)(param_1 + 0x36) = 0x1d15;
    *(undefined2 *)(param_1 + 0x58) = 0xd20;
    func_0x00074590(7,2,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x4e) * 0x100;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x52) * 0x100;
  *(short *)(param_1 + 0x56) =
       *(short *)(param_1 + 0x56) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4c) >> 8);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x380;
  if (-0x21bc < *(short *)(param_1 + 0x32)) {
    *(undefined2 *)(param_1 + 0x32) = 0xde44;
  }
  if ((-1 < *(short *)(param_1 + 0x4a)) &&
     (sVar1 = *(short *)(param_1 + 0x58) + 0x18, *(short *)(param_1 + 0x58) = sVar1, 0x1000 < sVar1)
     ) {
    *(undefined2 *)(param_1 + 0x58) = 0x1000;
  }
  return 0;
}

