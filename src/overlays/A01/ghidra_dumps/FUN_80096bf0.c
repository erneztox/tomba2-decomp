// FUN_80096bf0

undefined4 FUN_80096bf0(int param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  
  *DAT_800ac614 = *DAT_800ac614 | 0xb0000;
  puVar2 = DAT_800ac604;
  DAT_800ac620 = 0;
  DAT_800ac624 = 0;
  DAT_800ac61c = 0;
  DAT_800ac604[0xc0] = 0;
  puVar2[0xc1] = 0;
  puVar2[0xd5] = 0;
  FUN_800976c8();
  puVar2 = DAT_800ac604;
  DAT_800ac604[0xc0] = 0;
  puVar2[0xc1] = 0;
  if ((puVar2[0xd7] & 0x7ff) != 0) {
    uVar1 = 1;
    do {
      if (0xf00 < uVar1) {
        FUN_8009a730(s_SPU_T_O___s__8001c670,s_wait__reset__8001c680);
        break;
      }
      uVar1 = uVar1 + 1;
    } while ((DAT_800ac604[0xd7] & 0x7ff) != 0);
  }
  puVar2 = DAT_800ac604;
  iVar3 = 0;
  puVar4 = (undefined2 *)&DAT_80105ec8;
  DAT_800ac628 = 2;
  DAT_800ac62c = 3;
  DAT_800ac630 = 8;
  DAT_800ac634 = 7;
  DAT_800ac604[0xd6] = 4;
  puVar2[0xc2] = 0;
  puVar2[0xc3] = 0;
  puVar2[0xc6] = 0xffff;
  puVar2[199] = 0xffff;
  puVar2[0xcc] = 0;
  puVar2[0xcd] = 0;
  do {
    *puVar4 = 0;
    puVar2 = DAT_800ac604;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 10);
  if (param_1 == 0) {
    DAT_800ac61c = 0x200;
    DAT_800ac604[200] = 0;
    puVar2[0xc9] = 0;
    puVar2[0xca] = 0;
    puVar2[0xcb] = 0;
    puVar2[0xd8] = 0;
    puVar2[0xd9] = 0;
    puVar2[0xda] = 0;
    puVar2[0xdb] = 0;
    FUN_80096e70(&DAT_800ac644,0x10);
    iVar3 = 0;
    puVar2 = DAT_800ac604;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0x3fff;
      puVar2[3] = 0x200;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar4 = DAT_800ac604;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 8;
    } while (iVar3 < 0x18);
    DAT_800ac604[0xc4] = 0xffff;
    puVar4[0xc5] = 0xff;
    FUN_800976c8();
    FUN_800976c8();
    FUN_800976c8();
    FUN_800976c8();
    puVar2 = DAT_800ac604;
    DAT_800ac604[0xc6] = 0xffff;
    puVar2[199] = 0xff;
    FUN_800976c8();
    FUN_800976c8();
    FUN_800976c8();
    FUN_800976c8();
  }
  DAT_800ac638 = 1;
  DAT_800ac604[0xd5] = 0xc000;
  DAT_800ac63c = 0;
  DAT_800ac640 = 0;
  return 0;
}

