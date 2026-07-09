// FUN_801285ec

void FUN_801285ec(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int unaff_s0;
  int unaff_s2;
  
  uVar3 = *(byte *)(param_1 + 0x47) & 3;
  if ((*(byte *)(param_1 + 0x47) & 3) == 0) {
    if (param_2 == 2) goto LAB_80128638;
    sVar2 = *(short *)(param_1 + 0x48);
  }
  else {
    if (uVar3 != 2) {
      FUN_801315e4();
      return;
    }
    if (param_2 != 2) {
LAB_80128638:
      *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 0x2000;
      bVar1 = *(byte *)(param_1 + 0x2b);
      *(undefined1 *)(param_1 + 0x2b) = 0;
      *(undefined1 *)(param_1 + 6) = 1;
      *(ushort *)(param_1 + 0x6c) = (ushort)bVar1;
      return;
    }
    sVar2 = *(short *)(param_1 + 0x48);
  }
  if (sVar2 == 0x2000) {
    *(uint *)(unaff_s2 + 0x30) = uVar3 << 0x10;
    DAT_800bf9ee = DAT_800bf9ee | (byte)param_1;
    *(undefined1 *)(unaff_s2 + 0x5e) = 0;
    *(undefined1 *)(unaff_s2 + 0xbf) = 0;
    *(undefined2 *)(unaff_s0 + 0x42) = 0xf;
                    /* WARNING: Subroutine does not return */
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
    FUN_801402b8(param_1,param_2,4);
  }
  DAT_800bf9ee = DAT_800bf9ee & 0xfe;
  FUN_8013a60c();
  return;
}

