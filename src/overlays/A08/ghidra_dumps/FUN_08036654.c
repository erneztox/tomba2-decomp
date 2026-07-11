// FUN_08036654

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036654(undefined1 *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[6] == '\0') {
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x69);
    if (param_1[0xbe] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10;
    iVar2 = func_0x00077768((uint)(byte)param_1[0x2b] << 4,iVar3,0);
    if (iVar2 != 0) {
      iVar2 = func_0x00083f50(iVar3);
      *(short *)(param_1 + 0x48) = (short)(-iVar2 >> 4);
      func_0x00083e80(iVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x00083f50(iVar3);
    *(short *)(param_1 + 0x48) = (short)(iVar2 >> 4);
    iVar2 = func_0x00083e80(iVar3);
    *(short *)(param_1 + 0x4c) = (short)(-iVar2 >> 4);
    *(undefined2 *)(param_1 + 0x4a) = 0xfe00;
    *(undefined2 *)(param_1 + 0x44) = 0x1000;
    *(undefined2 *)(param_1 + 0x40) = 0x14;
    *param_1 = 2;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (param_1[6] == '\x01') {
    iVar2 = (int)*(short *)(param_1 + 0x44);
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x180;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar2;
    func_0x0004766c(param_1);
    if (*(short *)(param_1 + 0x40) != 0) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = func_0x000495dc(param_1,0x5a,0x5a);
    if (sVar1 == 0) {
      sVar1 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = sVar1 + 0x30;
      if (0x1000 < (short)(sVar1 + 0x30)) {
        *(undefined2 *)(param_1 + 0x4a) = 0x1000;
      }
      return;
    }
    if (((sVar1 != -1) || ((_DAT_1f8001a6 & 0xf00) != 0x700)) && (param_1[1] != '\0')) {
      func_0x00074590(0x1b,0,0);
      func_0x000315d4(param_1 + 0x2c);
    }
    param_1[4] = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

