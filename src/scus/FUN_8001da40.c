
undefined4 FUN_8001da40(uint *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  int unaff_s0;
  
  *param_1 = *param_1 | 0xb0000;
  puVar4 = DAT_80026d88;
  DAT_80026da4 = 0;
  DAT_80026da8 = 0;
  DAT_80026da0 = 0;
  DAT_80026d88[0xc0] = 0;
  puVar4[0xc1] = 0;
  puVar4[0xd5] = 0;
  FUN_8001dd04();
  puVar4 = DAT_80026d88;
  DAT_80026d88[0xc0] = 0;
  puVar4[0xc1] = 0;
  puVar1 = DAT_80026d88;
  if ((puVar4[0xd7] & 0x7ff) != 0) {
    uVar2 = 1;
    do {
      if (0xf00 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,&DAT_80010a54);
      }
      uVar2 = uVar2 + 1;
    } while ((DAT_80026d88[0xd7] & 0x7ff) != 0);
  }
  iVar3 = 0;
  puVar4 = (undefined2 *)&DAT_8003c308;
  DAT_80026dac = 2;
  DAT_80026db0 = 3;
  DAT_80026db4 = 8;
  DAT_80026db8 = 7;
  DAT_80026d88[0xd6] = 4;
  puVar1[0xc2] = 0;
  puVar1[0xc3] = 0;
  puVar1[0xc6] = 0xffff;
  puVar1[199] = 0xffff;
  puVar1[0xcc] = 0;
  puVar1[0xcd] = 0;
  do {
    *puVar4 = 0;
    puVar1 = DAT_80026d88;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 10);
  if (unaff_s0 == 0) {
    DAT_80026da0 = 0x200;
    DAT_80026d88[200] = 0;
    puVar1[0xc9] = 0;
    puVar1[0xca] = 0;
    puVar1[0xcb] = 0;
    puVar1[0xd8] = 0;
    puVar1[0xd9] = 0;
    puVar1[0xda] = 0;
    puVar1[0xdb] = 0;
    FUN_8001d4ac(&DAT_80026dc8,0x10);
    iVar3 = 0;
    puVar4 = DAT_80026d88;
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0x3fff;
      puVar4[3] = 0x200;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar1 = DAT_80026d88;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 8;
    } while (iVar3 < 0x18);
    DAT_80026d88[0xc4] = 0xffff;
    puVar1[0xc5] = 0xff;
    FUN_8001dd04();
    FUN_8001dd04();
    FUN_8001dd04();
    FUN_8001dd04();
    puVar4 = DAT_80026d88;
    DAT_80026d88[0xc6] = 0xffff;
    puVar4[199] = 0xff;
    FUN_8001dd04();
    FUN_8001dd04();
    FUN_8001dd04();
    FUN_8001dd04();
  }
  DAT_80026dbc = 1;
  DAT_80026d88[0xd5] = 0xc000;
  DAT_80026dc0 = 0;
  DAT_80026dc4 = 0;
  return 0;
}

