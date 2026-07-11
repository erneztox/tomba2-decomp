// FUN_08013748

/* WARNING: Control flow encountered bad instruction data */

void FUN_08013748(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  
  iVar5 = func_0x00076d68();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x40) == 0xc) {
      func_0x00074590(0x26,0,0);
    }
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
    uVar3 = func_0x000776f8((int)*(short *)(param_1 + 0x7c),(int)*(short *)(param_1 + 0x56),0x100);
    *(undefined2 *)(param_1 + 0x56) = uVar3;
    if (iVar5 != 1) {
LAB_080138b4:
      func_0x0010b634(param_1);
      if (*(char *)(param_1 + 0x29) == '\0') {
        sVar4 = *(short *)(param_1 + 0x50) + 0x800;
        *(short *)(param_1 + 0x50) = sVar4;
        if (0x3000 < sVar4) {
          *(undefined2 *)(param_1 + 0x50) = 0x3000;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
        return;
      }
      if (0x1e00 < *(short *)(param_1 + 0x50)) {
        func_0x00074590(3,0,0);
      }
      *(undefined2 *)(param_1 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00054d14(param_1,2,6);
    *(undefined2 *)(param_1 + 0x40) = 7;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_800bf80e = 0;
      func_0x00054d14(param_1,199,3);
      *(undefined2 *)(param_1 + 0x40) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      uVar2 = func_0x00085690(-((int)(((uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x36) -
                                      (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10),
                              (int)(((uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x2e) -
                                    (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10);
      *(ushort *)(param_1 + 0x7c) = uVar2 & 0xfff;
    }
  }
  else if (bVar1 == 2) {
    sVar4 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar4 + -1;
    if (sVar4 == 1) {
      if (DAT_1f800137 == '\x01') {
        DAT_800bf80e = DAT_1f800137;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 5) = 0x20;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    goto LAB_080138b4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

