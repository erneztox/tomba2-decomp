
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003bb50(void)

{
  byte bVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  sVar2 = _DAT_1f800144;
  piVar7 = _DAT_1f80013c;
  if (DAT_1f800136 == '\0') {
    _DAT_1f800144 = 0;
    _DAT_1f80013c = (int *)&DAT_800f2410;
    _DAT_1f800146 = sVar2;
    _DAT_1f800140 = piVar7;
  }
  iVar6 = (int)_DAT_1f800146;
  piVar7 = _DAT_1f800140;
  do {
    if (iVar6 == 0) {
      return;
    }
    iVar5 = *piVar7;
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
    if (*(char *)(iVar5 + 1) == '\0') goto switchD_8003bbf8_caseD_2;
    switch(*(undefined1 *)(iVar5 + 0xb)) {
    case 0:
    case 0xf:
    case 0x40:
    case 0x4f:
    case 0x80:
    case 0x8f:
      FUN_8003cca4(iVar5);
      bVar1 = *(byte *)(iVar5 + 0xb);
      if ((bVar1 & 0x40) == 0) {
LAB_8003bc48:
        if ((bVar1 & 0x80) == 0) break;
        iVar4 = (int)*(short *)(iVar5 + 0x80);
      }
      else {
        iVar4 = 0x50;
      }
      goto LAB_8003bc5c;
    case 1:
    case 0x41:
    case 0x81:
      func_0x80122974(iVar5);
      bVar1 = *(byte *)(iVar5 + 0xb);
      if ((bVar1 & 0x40) == 0) goto LAB_8003bc48;
      iVar4 = 0x50;
LAB_8003bc5c:
      FUN_8002ae0c(iVar5,iVar4,0);
      break;
    case 0x10:
      FUN_8003c2d4(iVar5);
      break;
    case 0x11:
      FUN_8003c464(iVar5);
      break;
    case 0x12:
      FUN_8003c5f8(iVar5);
      break;
    case 0x13:
      FUN_8003c788(iVar5);
      break;
    case 0x15:
      FUN_8003c2d4(iVar5);
    case 0x16:
      pcVar3 = *(code **)(iVar5 + 0x7c);
code_r0x8003bcc8:
      (*pcVar3)(iVar5);
      break;
    case 0x20:
      pcVar3 = *(code **)(iVar5 + 0x18);
      goto code_r0x8003bcc8;
    }
switchD_8003bbf8_caseD_2:
  } while( true );
}

