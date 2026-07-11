// FUN_08015258

/* WARNING: Control flow encountered bad instruction data */

void FUN_08015258(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    func_0x00054d14(param_1,99,6);
    *(undefined2 *)(param_1 + 0x44) = 0x1400;
    *(undefined2 *)(param_1 + 0x4a) = 0xd200;
    *(undefined2 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x145) = 1;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00054d14(param_1,99,6);
      *(undefined2 *)(param_1 + 0x44) = 0xec00;
      *(undefined1 *)(param_1 + 6) = 2;
      *(undefined2 *)(param_1 + 0x4a) = 0xd200;
      *(undefined2 *)(param_1 + 0x7c) = 0x800;
      *(undefined1 *)(param_1 + 0x145) = 1;
    }
  }
  else if (bVar1 == 2) {
    func_0x00076d68(param_1);
    uVar2 = func_0x000776f8((int)*(short *)(param_1 + 0x7c),(int)*(short *)(param_1 + 0x56),0x80);
    *(undefined2 *)(param_1 + 0x56) = uVar2;
    uVar4 = *(short *)(param_1 + 0x4a) + 0x360;
    *(ushort *)(param_1 + 0x4a) = uVar4;
    if (0 < (int)((uint)uVar4 << 0x10)) {
      *(undefined1 *)(param_1 + 0x145) = 2;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x44) * 0x100;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  }
  else if (bVar1 == 3) {
    func_0x00076d68(param_1);
    uVar2 = func_0x000776f8((int)*(short *)(param_1 + 0x7c),(int)*(short *)(param_1 + 0x56),0x80);
    *(undefined2 *)(param_1 + 0x56) = uVar2;
    sVar5 = *(short *)(param_1 + 0x4a) + 0x360;
    *(short *)(param_1 + 0x4a) = sVar5;
    if (0x2e00 < sVar5) {
      *(undefined2 *)(param_1 + 0x4a) = 0x2e00;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x44) * 0x100;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    iVar3 = func_0x0010b634(param_1);
    if (iVar3 != 0) {
      func_0x00074590(3,0,0);
      *(undefined1 *)(param_1 + 0x145) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

