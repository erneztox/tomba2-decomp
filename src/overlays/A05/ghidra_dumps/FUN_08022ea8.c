// FUN_08022ea8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08022ea8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    func_0x0011bfa4(param_1,0);
    if (*(short *)(param_1 + 0x6a) != 1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0xbf) = 1;
    uVar2 = func_0x0009a450();
    *(ushort *)(param_1 + 0x44) = uVar2 & 0x780;
    if ((uVar2 & 0x780) < 0x280) {
      *(undefined2 *)(param_1 + 0x44) = 0x280;
    }
    if (*(char *)(param_1 + 0xbe) != '\0') {
      *(short *)(param_1 + 0x44) = -*(short *)(param_1 + 0x44);
    }
    uVar4 = func_0x0009a450();
    uVar3 = 0xd800;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0xe000;
    }
    *(undefined2 *)(param_1 + 0x4a) = uVar3;
    *(undefined2 *)(param_1 + 0x50) = 0x180;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00077cfc(param_1,0x80141e14,6,6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 == 2) {
      iVar5 = func_0x0011ccbc(param_1);
      if (iVar5 != 0) {
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      }
    }
    else if (bVar1 != 3) {
      halt_baddata();
    }
    iVar5 = func_0x0011bfa4(param_1,0);
    if (iVar5 == 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0xbf) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

