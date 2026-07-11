// FUN_080263d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080263d8(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  short sVar5;
  
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077e7c();
  func_0x00076d68(param_1);
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x4a);
        sVar5 = *(short *)(param_1 + 0x4a) + 0x380;
        *(short *)(param_1 + 0x4a) = sVar5;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
        *(int *)(param_1 + 0x2c) =
             *(int *)(param_1 + 0x2c) +
             (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
        *(int *)(param_1 + 0x34) =
             *(int *)(param_1 + 0x34) +
             (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
        if (0x1800 < sVar5) {
          *(undefined2 *)(param_1 + 0x4a) = 0x1800;
        }
        if (-0x2f8f < *(short *)(param_1 + 0x32)) {
          *(undefined2 *)(param_1 + 0x32) = 0xd072;
          uVar3 = func_0x0009a450();
          *(ushort *)(param_1 + 0x4a) = (uVar3 & 0x1fff) + 0xc800;
          func_0x00074590(0x8a,0,0xffffffec);
        }
        if (*(short *)(param_1 + 0x2e) < 0x2e9e) {
          func_0x001335a0(param_1,*(byte *)(param_1 + 3) + 0x34);
          DAT_800bf9eb = 8;
          *(undefined1 *)(param_1 + 4) = 3;
        }
        func_0x000518fc(param_1);
        return;
      }
      if (DAT_800bf9eb - 2 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080264bc */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((DAT_800bf9eb - 2) * 4 + -0x7fef6564))();
        return;
      }
      goto LAB_080266a8;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x56) = 0xa82;
    *(undefined2 *)(param_1 + 0x58) = 0;
    func_0x000440e4(&DAT_800e7e80,0x73,4);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  if (DAT_800bf80e != '\0') {
    DAT_800bf9eb = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_080266a8:
  func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
  iVar4 = func_0x00083f50((int)_DAT_800e7ed6);
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)(iVar4 >> 5);
  iVar4 = func_0x00083e80((int)_DAT_800e7ed6);
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(-iVar4 >> 5);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

