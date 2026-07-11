// FUN_08013c98

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013c98(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if ((1 < bVar1) || (bVar1 != 0)) goto LAB_08013d38;
    *(undefined2 *)(param_1 + 0x58) = 0;
    DAT_800bf80e = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x00054d14(param_1,2,0);
  }
  uVar3 = (uint)_DAT_1f800192;
  sVar2 = func_0x000776f8(uVar3 & 0xfff,(int)*(short *)(param_1 + 0x56),0x100);
  *(short *)(param_1 + 0x56) = sVar2;
  if ((int)sVar2 == (uVar3 & 0xfff)) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    DAT_800bf80e = 1;
  }
LAB_08013d38:
  func_0x00076d68(param_1);
  func_0x0010c4c4(param_1);
  if (*(char *)(param_1 + 0x29) != '\0') {
    if (0x1400 < *(short *)(param_1 + 0x50)) {
      func_0x00074590(3,0,0);
    }
    *(undefined2 *)(param_1 + 0x50) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(param_1 + 0x50) + 0x360;
  *(short *)(param_1 + 0x50) = sVar2;
  if (0x3e00 < sVar2) {
    *(undefined2 *)(param_1 + 0x50) = 0x3e00;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
  return;
}

