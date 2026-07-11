// FUN_08040ebc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08040ebc(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 5) == '\0') {
    func_0x0007778c(param_1);
    if (DAT_800bfa42 == -0x80) {
      DAT_800bf841 = 0;
      _DAT_800e7eae = 0x3545;
      _DAT_800e7eb2 = 0xe974;
      _DAT_800e7eb6 = 0x1040;
      DAT_800e7eaa = 0x21;
      DAT_800e7e84 = 4;
      DAT_800e7e85 = 0x18;
      DAT_800e7e86 = 4;
      func_0x00040d68(param_1,0x801474ac);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 6) = 2;
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else {
      if (*(char *)(param_1 + 0x2b) != '\x03') goto LAB_0804106c;
      func_0x00042354(1,2);
      func_0x00040d68(param_1,0x800a3d70);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
LAB_0804106c:
      bVar1 = *(byte *)(param_1 + 0x5f);
      if (bVar1 == 1) {
        *(short *)(iVar5 + 0x2e) =
             (short)((*(int *)(*(int *)(param_1 + 0xd0) + 0x2c) +
                     *(int *)(*(int *)(param_1 + 0xdc) + 0x2c)) / 2);
        *(short *)(iVar5 + 0x32) =
             (short)((*(int *)(*(int *)(param_1 + 0xd0) + 0x30) +
                     *(int *)(*(int *)(param_1 + 0xdc) + 0x30)) / 2);
        *(short *)(iVar5 + 0x36) =
             (short)((*(int *)(*(int *)(param_1 + 0xd0) + 0x34) +
                     *(int *)(*(int *)(param_1 + 0xdc) + 0x34)) / 2);
        *(ushort *)(iVar5 + 0x56) = *(short *)(param_1 + 0x56) - 0x400U & 0xfff;
        iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
        *(short *)(iVar5 + 0x2e) = *(short *)(iVar5 + 0x2e) + (short)(iVar4 * 0x28 >> 0xc);
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
        *(short *)(iVar5 + 0x36) = *(short *)(iVar5 + 0x36) + (short)(iVar4 * -0x28 >> 0xc);
        uVar2 = func_0x0009a450();
        *(ushort *)(iVar5 + 0x2e) = (*(short *)(iVar5 + 0x2e) + 3) - (uVar2 & 7);
        uVar2 = func_0x0009a450();
        *(ushort *)(iVar5 + 0x32) = (*(short *)(iVar5 + 0x32) + 7) - (uVar2 & 0xf);
        uVar2 = func_0x0009a450();
        *(ushort *)(iVar5 + 0x36) = (*(short *)(iVar5 + 0x36) + 3) - (uVar2 & 7);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
          *(short *)(iVar5 + 0x32) = *(short *)(param_1 + 0x32) + 300;
          *(undefined2 *)(iVar5 + 0x36) = *(undefined2 *)(param_1 + 0x36);
        }
      }
      else if (bVar1 == 2) {
        *(undefined2 *)(iVar5 + 0x2e) = 0x3425;
        *(undefined2 *)(iVar5 + 0x36) = 0x1033;
        sVar3 = *(short *)(iVar5 + 0x32) + 0x10;
        *(short *)(iVar5 + 0x32) = sVar3;
        if (-0x15ff < sVar3) {
          func_0x00074590(0xe,0xfffffff0,0);
          DAT_800bfa42 = -0x7d;
          *(undefined2 *)(iVar5 + 0x32) = 0xea02;
          *(undefined1 *)(param_1 + 0x5f) = 3;
        }
        func_0x0004190c(param_1);
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (DAT_800bf8e1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x7a) = 1;
        func_0x00040d68(param_1,0x80147434);
        *(undefined1 *)(param_1 + 0x70) = 2;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
    else if (bVar1 == 2) {
      *(undefined1 *)(param_1 + 4) = 3;
      goto LAB_0804106c;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

