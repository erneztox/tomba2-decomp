// FUN_0803b2f0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803b2f0(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar6;
  int iVar5;
  
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x40);
        *(ushort *)(param_1 + 0x40) = sVar2 - 1U;
        if (-1 < (int)((uint)(ushort)(sVar2 - 1U) << 0x10)) {
          return;
        }
        param_1[0x1b] = param_1[0x1b] & 0xbf;
        param_1[0x2b] = 0;
        *param_1 = 1;
        param_1[4] = 1;
        param_1[5] = 0;
        param_1[6] = 0;
        return;
      }
      goto LAB_0803b414;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (*(short *)(param_1 + 100) != -1) {
      *(undefined2 *)(param_1 + 100) = 0xffff;
      param_1[0xbe] = '\x01' - param_1[0xbe];
      func_0x0004130c(param_1,0);
    }
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    func_0x00074590(0x90,0,0);
    if ((param_1[0x1b] & 0x40) == 0) {
      func_0x000331d8(param_1,*(undefined4 *)(param_1 + 0xdc),0xffffff38,0);
      param_1[0x1b] = param_1[0x1b] | 0x40;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0x400;
    *(undefined2 *)(param_1 + 0x50) = 0x380;
    func_0x00041768(param_1,4,2);
    param_1[6] = param_1[6] + '\x01';
  }
  if (param_1[0x79] == '\x01') {
    func_0x00041768(param_1,5,2);
    param_1[6] = param_1[6] + '\x01';
  }
LAB_0803b414:
  sVar2 = *(short *)(param_1 + 0x4a);
  *(short *)(param_1 + 0x4a) = sVar2 + *(short *)(param_1 + 0x50);
  if (0x3fff < (short)(sVar2 + *(short *)(param_1 + 0x50))) {
    *(undefined2 *)(param_1 + 0x4a) = 0x4000;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  func_0x00048894(param_1);
  iVar5 = (uint)_DAT_1f8001a4 - (uint)*(ushort *)(param_1 + 0x32);
  uVar4 = (undefined2)iVar5;
  iVar6 = iVar5 * 0x10000 >> 0x10;
  if (iVar6 < 0x281) {
    iVar5 = iVar5 * 0x10000;
    if (iVar6 < 0x80) {
      uVar4 = 0x80;
      iVar5 = 0x800000;
    }
    if ((iVar5 >> 0x10 != 0x280) || (*(short *)(param_1 + 0x66) != 0x280)) {
      *(undefined2 *)(param_1 + 0x66) = uVar4;
      *(short *)(*(int *)(param_1 + 0x104) + 0x3a) = (short)((iVar5 >> 0x10) * 0x333 >> 7);
    }
    func_0x0004766c(param_1);
    if (param_1[0x29] == '\0') {
      cVar3 = func_0x00049250(param_1,0,0x80);
      param_1[0x29] = cVar3 << 1;
      if ((char)(cVar3 << 1) == '\0') {
        func_0x00049760(param_1);
        uVar4 = _DAT_1f8001a2;
        *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
        *(undefined2 *)(param_1 + 0x62) = uVar4;
        if (param_1[0x29] != '\0') {
          func_0x00041768(param_1,6,2);
          param_1[6] = 3;
          *(undefined2 *)(param_1 + 0x40) = 0x5a;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        return;
      }
    }
    func_0x00049674(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

