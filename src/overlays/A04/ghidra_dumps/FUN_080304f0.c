// FUN_080304f0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080304f0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x7e) == 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = func_0x00083f50((int)*(short *)(*(int *)(param_1 + 0xcc) + 0xc));
  *(short *)(param_1 + 0x62) = (short)((uint)(iVar2 * -5) >> 8);
  iVar2 = func_0x00083e80((int)*(short *)(*(int *)(param_1 + 0xcc) + 0xc));
  *(short *)(param_1 + 0x60) = (short)((uint)(iVar2 * 5) >> 8);
  iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
  *(short *)(param_1 + 100) = (short)(-iVar2 * (int)*(short *)(param_1 + 0x60) >> 0xc);
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
  iVar2 = iVar2 * *(short *)(param_1 + 0x60) >> 0xc;
  *(short *)(param_1 + 0x60) = (short)iVar2;
  *(short *)(iVar3 + 0x2e) =
       *(short *)(*(int *)(param_1 + 0xcc) + 0x2c) + (short)((iVar2 << 0x10) >> 0xe);
  *(short *)(iVar3 + 0x32) =
       *(short *)(*(int *)(param_1 + 0xcc) + 0x30) + *(short *)(param_1 + 0x62) * 2;
  *(short *)(iVar3 + 0x36) =
       *(short *)(*(int *)(param_1 + 0xcc) + 0x34) + *(short *)(param_1 + 100) * 4;
  if (*(short *)(param_1 + 0x7e) != 2) {
    *(undefined2 *)(iVar3 + 0x58) = *(undefined2 *)(*(int *)(param_1 + 0xcc) + 0xc);
    if ((*(byte *)(iVar3 + 3) & 0x80) != 0) {
      func_0x000517f8(iVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x000518fc(iVar3);
  }
  uVar1 = *(ushort *)(iVar3 + 0xb8);
  if (0xc00 < uVar1) {
    *(ushort *)(iVar3 + 0xb8) = uVar1 - 0x40;
    if ((ushort)(uVar1 - 0x40) < 0xc00) {
      *(undefined2 *)(iVar3 + 0xb8) = 0xc00;
    }
    *(undefined2 *)(iVar3 + 0xba) = *(undefined2 *)(iVar3 + 0xb8);
    *(undefined2 *)(iVar3 + 0xbc) = *(undefined2 *)(iVar3 + 0xb8);
  }
  return;
}

