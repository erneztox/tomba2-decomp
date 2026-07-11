// FUN_0801ca68

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ca68(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  
  if ((DAT_800bf816 != '\0') || (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) != 0)) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    sVar3 = *(short *)(param_1 + 10) + -1;
    *(short *)(param_1 + 10) = sVar3;
    if (sVar3 != -1) {
      return;
    }
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf80f != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 7) = 1;
      uVar2 = func_0x0009a450();
      *(ushort *)(param_1 + 10) = uVar2 & 0x7f;
    }
  }
  else if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 7) = 3;
    iVar4 = func_0x0009a450();
    if ((iVar4 % 3 == 0) || (iVar4 % 3 == 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00074590(0x96,0xfffffffd,0);
    iVar4 = func_0x0009a450();
    *(short *)(param_1 + 10) = ((short)iVar4 + (short)(iVar4 / 3) * -3 + 2) * 0x96;
  }
  else if (bVar1 == 3) {
    sVar3 = *(short *)(param_1 + 10) + -1;
    *(short *)(param_1 + 10) = sVar3;
    if (sVar3 != -1) {
      return;
    }
    *(undefined1 *)(param_1 + 7) = 2;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

