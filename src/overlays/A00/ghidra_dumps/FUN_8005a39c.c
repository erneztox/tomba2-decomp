// FUN_8005a39c

void FUN_8005a39c(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 2) == '\0') {
    *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) | 1;
  }
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
    break;
  case 1:
    goto switchD_8005a3fc_caseD_1;
  case 2:
    DAT_800e807e = ((&DAT_800a4613)[*(short *)(param_1 + 0x40) * 4] & 2) + 7;
  case 3:
    if ((param_2 == 1) &&
       (sVar1 = *(short *)(param_1 + 0x14c), *(short *)(param_1 + 0x14c) = sVar1 + -1, sVar1 == 1))
    {
      *(undefined1 *)(param_1 + 7) = 1;
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
    }
    uVar4 = (uint)(byte)(&DAT_800a4612)[*(short *)(param_1 + 0x40) * 4];
    if ((int)*(short *)(param_1 + 0x150) != uVar4) {
      uVar3 = 0;
      if (uVar4 == 1) {
        uVar3 = (uint)(*(char *)(param_1 + 0x147) != '\0');
      }
      iVar6 = uVar4 + uVar3 * 2;
      sVar1 = FUN_800776f8(iVar6 * 0x4000000 >> 0x10,(int)*(short *)(param_1 + 0x14e),0x80);
      *(short *)(param_1 + 0x14e) = sVar1;
      if ((int)sVar1 == iVar6 * 0x400) {
        *(ushort *)(param_1 + 0x150) = (ushort)(byte)(&DAT_800a4612)[*(short *)(param_1 + 0x40) * 4]
        ;
      }
    }
    if (((&DAT_800a4613)[*(short *)(param_1 + 0x40) * 4] & 4) == 0) {
      return;
    }
    if (*(short *)(*(int *)(param_1 + 0x38) + 2) == 0xe) {
      DAT_800e807e = ((&DAT_800a4613)[*(short *)(param_1 + 0x40) * 4] & 2) + 6;
      *(undefined1 *)(param_1 + 7) = 2;
    }
    if (*(short *)(*(int *)(param_1 + 0x38) + 2) != 0x11) {
      return;
    }
    goto LAB_8005a6bc;
  default:
    goto switchD_8005a3fc_caseD_4;
  case 7:
    cVar5 = *(char *)(param_1 + 7);
    *(undefined1 *)(param_1 + 6) = 3;
    goto LAB_8005a6d8;
  case 8:
    if (param_2 == 1) {
      *(undefined1 *)(param_1 + 7) = 0;
      FUN_80054d14(param_1,2,6);
    }
    goto switchD_8005a3fc_caseD_4;
  }
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x150) = 0;
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
switchD_8005a3fc_caseD_1:
  if (*(char *)(param_1 + 0x6e) == '\0') {
    if (*(char *)(param_1 + 2) == '\0') {
      uVar2 = *(ushort *)(param_1 + 0x6a) & 0xf00;
      if ((uVar2 == 0x100) || (uVar2 == 0x200)) {
        cVar5 = (&DAT_800a4610)[*(short *)(param_1 + 0x40) * 4];
        if ((cVar5 == -0x51) || (cVar5 == -0x4f)) goto LAB_8005a4f4;
        cVar5 = (&DAT_800a4610)[*(short *)(param_1 + 0x40) * 4];
      }
      else {
        cVar5 = (&DAT_800a4610)[*(short *)(param_1 + 0x40) * 4];
      }
    }
    else {
      cVar5 = (&DAT_800a4610)[*(short *)(param_1 + 0x40) * 4];
    }
LAB_8005a4ec:
    FUN_80054d14(param_1,cVar5,4);
  }
  else {
    cVar5 = (&DAT_800a4610)[*(short *)(param_1 + 0x40) * 4];
    if (cVar5 != -0x4f) goto LAB_8005a4ec;
  }
LAB_8005a4f4:
  iVar6 = *(short *)(param_1 + 0x40) * 4;
  *(ushort *)(param_1 + 0x14c) = (ushort)(byte)(&DAT_800a4611)[*(short *)(param_1 + 0x40) * 4];
  if ((&DAT_800a4611)[iVar6] == -1) {
    *(undefined1 *)(param_1 + 7) = 6;
  }
  else if (((&DAT_800a4613)[iVar6] & 1) == 0) {
LAB_8005a6bc:
    *(undefined1 *)(param_1 + 7) = 3;
  }
  else {
    DAT_800e807e = ((&DAT_800a4613)[iVar6] & 2) + 6;
    cVar5 = *(char *)(param_1 + 7);
LAB_8005a6d8:
    *(char *)(param_1 + 7) = cVar5 + '\x01';
  }
switchD_8005a3fc_caseD_4:
  return;
}

