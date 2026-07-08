
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003bcf4(void)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  sVar1 = _DAT_1f800150;
  piVar5 = _DAT_1f800148;
  if (DAT_1f800136 == '\0') {
    _DAT_1f800150 = 0;
    _DAT_1f800148 = (int *)0x800f26c8;
    _DAT_1f800152 = sVar1;
    _DAT_1f80014c = piVar5;
  }
  iVar4 = (int)_DAT_1f800152;
  piVar5 = _DAT_1f80014c;
  do {
    if (iVar4 == 0) {
      return;
    }
    iVar3 = *piVar5;
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
    if (*(char *)(iVar3 + 1) == '\0') goto switchD_8003bda4_caseD_4;
    switch(*(undefined1 *)(iVar3 + 0xb)) {
    case 0:
    case 0xf:
      FUN_8003cca4(iVar3);
      break;
    case 1:
      if (DAT_800bf870 == '\0') {
        func_0x801341e8(iVar3);
      }
      else if (DAT_800bf870 == '\x06') {
        func_0x80123c14(iVar3);
      }
      break;
    case 2:
      if (DAT_800bf870 == '\x01') {
        func_0x80129114(iVar3);
      }
      else if (DAT_800bf870 == '\x06') {
        func_0x80120d2c(iVar3);
      }
      else if (DAT_800bf870 == '\a') {
        func_0x8011ad44(iVar3);
      }
      else if (DAT_800bf870 == '\n') {
        func_0x80115338(iVar3);
      }
      else if (DAT_800bf870 == '\x0f') {
        func_0x80117984(iVar3);
      }
      break;
    case 3:
      func_0x80136748(iVar3);
      break;
    case 0x10:
      FUN_8003c2d4(iVar3);
      break;
    case 0x15:
      FUN_8003c2d4(iVar3);
    case 0x16:
      pcVar2 = *(code **)(iVar3 + 0x7c);
      goto code_r0x8003bed0;
    case 0x17:
      (**(code **)(iVar3 + 0x7c))(iVar3);
    case 0x11:
      FUN_8003c464(iVar3);
      break;
    case 0x20:
      pcVar2 = *(code **)(iVar3 + 0x18);
code_r0x8003bed0:
      (*pcVar2)(iVar3);
    }
switchD_8003bda4_caseD_4:
  } while( true );
}

