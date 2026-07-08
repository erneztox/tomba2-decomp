
undefined4 FUN_8001db7c(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  puVar2 = DAT_80026d88;
  DAT_80026da0 = 0x200;
  DAT_80026d88[200] = 0;
  puVar2[0xc9] = 0;
  puVar2[0xca] = 0;
  puVar2[0xcb] = 0;
  puVar2[0xd8] = 0;
  puVar2[0xd9] = 0;
  puVar2[0xda] = 0;
  puVar2[0xdb] = 0;
  FUN_8001d4ac(&DAT_80026dc8,0x10);
  iVar3 = 0;
  puVar2 = DAT_80026d88;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0x3fff;
    puVar2[3] = 0x200;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar1 = DAT_80026d88;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 8;
  } while (iVar3 < 0x18);
  DAT_80026d88[0xc4] = 0xffff;
  puVar1[0xc5] = 0xff;
  FUN_8001dd04();
  FUN_8001dd04();
  FUN_8001dd04();
  FUN_8001dd04();
  puVar2 = DAT_80026d88;
  DAT_80026d88[0xc6] = 0xffff;
  puVar2[199] = 0xff;
  FUN_8001dd04();
  FUN_8001dd04();
  FUN_8001dd04();
  FUN_8001dd04();
  DAT_80026dbc = 1;
  DAT_80026d88[0xd5] = 0xc000;
  DAT_80026dc0 = 0;
  DAT_80026dc4 = 0;
  return 0;
}

