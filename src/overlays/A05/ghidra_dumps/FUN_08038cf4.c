// FUN_08038cf4

/* WARNING: Control flow encountered bad instruction data */

void FUN_08038cf4(int param_1)

{
  ushort uVar1;
  short sVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x14;
    *(undefined2 *)(param_1 + 0x4a) = 64000;
    *(ushort *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) + 0x28 + (ushort)*(byte *)(param_1 + 0x5e) * -0x8c;
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x5e) * 0x80 + 0x280;
    uVar1 = func_0x0009a450();
    *(ushort *)(*(int *)(param_1 + 0xc0) + 4) =
         (*(short *)(*(int *)(param_1 + 0xc0) + 4) + -0xaa) - (uVar1 & 0x1f);
    uVar1 = func_0x0009a450();
    *(ushort *)(*(int *)(param_1 + 200) + 4) =
         *(short *)(*(int *)(param_1 + 200) + 4) + 0xaa + (uVar1 & 0x1f);
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + 0x38;
    *(short *)(*(int *)(param_1 + 0xc4) + 0xc) = *(short *)(*(int *)(param_1 + 0xc4) + 0xc) + -0x28;
    *(short *)(*(int *)(param_1 + 200) + 0xc) = *(short *)(*(int *)(param_1 + 200) + 0xc) + -0x40;
    *(short *)(*(int *)(param_1 + 0xc4) + 10) = *(short *)(*(int *)(param_1 + 0xc4) + 10) + -0x10;
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    func_0x000518fc(param_1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

