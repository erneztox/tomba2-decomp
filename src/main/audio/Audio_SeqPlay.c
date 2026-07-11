/**
 * @brief Audio sequence player: checks DAT_1f80019a, plays SEQ
 * @note Original: func_80075824 at 0x80075824
 */
// Audio_SeqPlay



void FUN_80075824(uint *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  
  cVar2 = DAT_1f80027e;
  if (DAT_1f80019a != '\x02') {
    uVar6 = (undefined2)((short)param_1[10] * 0x47ff >> 0xf);
    goto LAB_800759fc;
  }
  if (DAT_1f800137 == '\x01') {
    uVar6 = 0x7fff;
    if ((DAT_800be0e4 & 2) == 0) {
      if ((DAT_800be0e4 & 8) == 0) {
        uVar6 = (undefined2)((short)param_1[10] * 0x7fff >> 0xf);
      }
      else {
        uVar6 = (undefined2)(((uint)DAT_800fb165 * 0x7fff) / 9);
      }
    }
    *param_1 = *param_1 | 3;
    goto LAB_800759fc;
  }
  iVar3 = (int)(short)param_1[0xb];
  iVar4 = (int)*(short *)((int)param_1 + 0x2a);
  iVar5 = 0x100;
  if (DAT_1f800137 == '\x02') {
    iVar5 = 0x400;
  }
  if (iVar3 < iVar4) {
    iVar3 = iVar3 + iVar5;
    bVar1 = iVar4 < iVar3;
LAB_80075934:
    if (bVar1) {
      iVar3 = iVar4;
    }
  }
  else if (iVar4 < iVar3) {
    iVar3 = iVar3 - iVar5;
    bVar1 = iVar3 < iVar4;
    goto LAB_80075934;
  }
  *(short *)(param_1 + 0xb) = (short)iVar3;
  iVar3 = (short)param_1[10] * iVar3 >> 0xf;
  if ((cVar2 != '\0') && (iVar3 = iVar3 * 5 >> 2, 0x7ffe < iVar3)) {
    iVar3 = 0x7fff;
  }
  if (((iVar3 < 0x11) && (*(char *)((int)param_1 + 0x33) != '\0')) && (DAT_1f80027a == '\0')) {
    FUN_80075cec(0x47ff);
    FUN_800750d8(DAT_1f80023b,1);
    *(undefined1 *)((int)param_1 + 0x33) = 0;
  }
  iVar4 = (uint)(ushort)param_1[0xc] +
          ((int)*(short *)((int)param_1 + 0x2e) - (int)(short)param_1[0xc] >> 3);
  *(short *)(param_1 + 0xc) = (short)iVar4;
  uVar6 = (undefined2)(iVar3 * (iVar4 * 0x10000 >> 0x10) >> 0xd);
LAB_800759fc:
  *(undefined2 *)((int)param_1 + 0x12) = uVar6;
  *(undefined2 *)(param_1 + 4) = uVar6;
  *(undefined2 *)((int)param_1 + 6) = 0x3fff;
  *(undefined2 *)(param_1 + 1) = 0x3fff;
  *param_1 = *param_1 | 0xc0;
  return;
}
