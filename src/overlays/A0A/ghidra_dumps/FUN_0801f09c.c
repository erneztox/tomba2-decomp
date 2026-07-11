// FUN_0801f09c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801f09c(undefined1 *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  if (param_1[3] == '\0') {
    param_1[4] = 1;
    *(undefined2 *)(param_1 + 0x66) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0x2000;
    func_0x00041ac0();
    *(undefined2 *)(param_1 + 0x40) = 1;
    *(undefined2 *)(param_1 + 0x42) = 1;
    *(undefined2 *)(param_1 + 0x84) = 0x28;
    *(undefined2 *)(param_1 + 0x86) = 0x78;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (uint)(byte)param_1[3];
  sVar1 = (ushort)(byte)param_1[3] << 1;
  if (0x10 < uVar3) {
    uVar3 = 0x10;
    sVar1 = 0x20;
  }
  *(short *)(param_1 + 0x42) = sVar1;
  iVar2 = uVar3 * 8 + 0x28;
  *(short *)(param_1 + 0x80) = (short)iVar2;
  *(short *)(param_1 + 0x82) = (short)(iVar2 * 0x10000 >> 0xf);
  *(undefined2 *)(param_1 + 0x84) = 0x28;
  *(undefined2 *)(param_1 + 0x86) = 0x50;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *param_1 = 1;
  *(short *)(param_1 + 100) = (short)uVar3 * 0x20 + 0x28;
  uVar4 = (ushort)(byte)param_1[3] * 0x14 + 0x100;
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_1 + 0x84);
  if (0x200 < uVar4) {
    uVar4 = 0x200;
  }
  param_1[0xb] = 0x16;
  *(undefined4 *)(param_1 + 0x7c) = 0x80113b78;
  *(ushort *)(param_1 + 0x54) = uVar4;
  *(ushort *)(param_1 + 0x56) = uVar4;
  param_1[4] = 1;
  param_1[0xd] = 1;
  *(undefined4 *)(param_1 + 0x78) = 0x8011bfb4;
  return;
}

