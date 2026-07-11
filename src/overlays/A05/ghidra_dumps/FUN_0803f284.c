// FUN_0803f284

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803f284(int param_1)

{
  undefined2 uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        bVar2 = *(char *)(param_1 + 5) + 1;
        *(byte *)(param_1 + 5) = bVar2;
        if (0x17 < bVar2) {
          *(undefined1 *)(param_1 + 4) = 3;
          halt_baddata();
        }
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x200;
        func_0x0002b278(param_1);
        halt_baddata();
      }
      if (bVar2 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if (bVar2 != 0) {
      halt_baddata();
    }
    bVar2 = func_0x0009a450();
    *(byte *)(param_1 + 3) = bVar2 & 3;
    *(undefined4 *)(param_1 + 0x3c) = 0x8013fe54;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0x101010;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar4 = (uint)*(byte *)(param_1 + 3) * 8;
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar4 + -0x7febfd88);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar4 + -0x7febfd86);
    uVar1 = *(undefined2 *)(iVar4 + -0x7febfd84);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0xff;
    *(undefined2 *)(param_1 + 0x30) = uVar1;
  }
  bVar2 = *(char *)(param_1 + 5) + 1;
  *(byte *)(param_1 + 5) = bVar2;
  if (0xf < bVar2) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  uVar3 = func_0x0009a450();
  *(ushort *)(param_1 + 0x60) = (uVar3 & 0x3f) - 0x20;
  uVar3 = func_0x0009a450();
  *(ushort *)(param_1 + 0x62) = (uVar3 & 0x3f) - 0x20;
  uVar3 = func_0x0009a450();
  *(ushort *)(param_1 + 100) = (uVar3 & 0x3f) - 0x20;
  uVar3 = func_0x0009a450();
  *(ushort *)(param_1 + 0x66) = (uVar3 & 0x3f) - 0x20;
  bVar2 = *(char *)(param_1 + 0x29) + 0x28;
  *(byte *)(param_1 + 0x29) = bVar2;
  if (0x78 < bVar2) {
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  func_0x0002b278(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

