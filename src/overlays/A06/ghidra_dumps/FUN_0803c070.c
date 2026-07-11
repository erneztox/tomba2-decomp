// FUN_0803c070

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803c070(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
      }
      *param_1 = 4;
      func_0x00074590(0x8e,0,0);
      param_1[0xb] = 0x11;
      *(undefined2 *)(param_1 + 0x7e) = 0x1000;
      *(undefined2 *)(param_1 + 0x7c) = 0x1000;
      *(undefined2 *)(param_1 + 0x7a) = 0x1000;
      *(undefined2 *)(param_1 + 0x40) = 0xc;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x50) = 0x380;
      func_0x00077b38(param_1,0x8014cef0,2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x7a);
      *(short *)(param_1 + 0x7a) = sVar2 + -0x180;
      if ((short)(sVar2 + -0x180) < 0x200) {
        *(undefined2 *)(param_1 + 0x7a) = 0x200;
        param_1[4] = 3;
      }
      iVar7 = *(short *)(param_1 + 0x7a) * 0x28;
      *(undefined2 *)(param_1 + 0x7e) = *(undefined2 *)(param_1 + 0x7a);
      *(undefined2 *)(param_1 + 0x7c) = *(undefined2 *)(param_1 + 0x7a);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xfff;
      }
      uVar6 = (undefined2)(iVar7 >> 0xc);
      *(undefined2 *)(param_1 + 0x84) = uVar6;
      *(undefined2 *)(param_1 + 0x80) = uVar6;
      uVar6 = (undefined2)((iVar7 >> 0xc) << 1);
      *(undefined2 *)(param_1 + 0x86) = uVar6;
      *(undefined2 *)(param_1 + 0x82) = uVar6;
      uVar3 = *(ushort *)(param_1 + 0x86);
      uVar4 = *(ushort *)(param_1 + 0x84);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
      func_0x0004766c(param_1);
      if (param_1[0x29] == '\0') {
        cVar5 = func_0x00049250(param_1,0,(int)(((uint)uVar3 - (uint)uVar4) * 0x10000) >> 0x10);
        param_1[0x29] = cVar5 << 1;
      }
      func_0x00049760(param_1);
      *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
      if (param_1[0x29] != '\x04') {
        return;
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -8;
      return;
    }
    sVar2 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x4a) = sVar2 + *(short *)(param_1 + 0x50);
    if (0x3fff < (short)(sVar2 + *(short *)(param_1 + 0x50))) {
      *(undefined2 *)(param_1 + 0x4a) = 0x4000;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    func_0x0004766c(param_1);
    if (param_1[0x29] == '\0') {
      cVar5 = func_0x00049250(param_1,0,0x50);
      param_1[0x29] = cVar5 << 1;
    }
    func_0x00049760(param_1);
    *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
    if (param_1[0x29] == '\0') {
      return;
    }
  }
  param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

