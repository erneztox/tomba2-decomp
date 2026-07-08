
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003eec0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_800f2738;
joined_r0x8003eed8:
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar2 = *(int *)(iVar1 + 0x24);
    if (*(char *)(iVar1 + 1) == '\0') break;
    switch(*(undefined1 *)(iVar1 + 0xb)) {
    case 0:
    case 0xf:
      FUN_8003cca4(iVar1);
      iVar1 = iVar2;
      goto joined_r0x8003eed8;
    case 1:
      FUN_8003cca4(iVar1);
      break;
    default:
      goto switchD_8003ef18_caseD_2;
    case 0x10:
      FUN_8003c2d4(iVar1);
      if (*(char *)(iVar1 + 2) != '\x01') goto switchD_8003ef18_caseD_2;
      break;
    case 0x20:
      (**(code **)(iVar1 + 0x18))(iVar1);
      goto switchD_8003ef18_caseD_2;
    }
    FUN_8003b704(iVar1);
    iVar1 = iVar2;
  } while( true );
switchD_8003ef18_caseD_2:
  iVar1 = iVar2;
  goto joined_r0x8003eed8;
}

