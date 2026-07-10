// FUN_80028E10

void FUN_80028e10(int param_1,uint param_2)

{
  undefined **ppuVar1;
  byte bVar2;
  
  bVar2 = (byte)param_2;
  switch((int)param_2 >> 8) {
  case 1:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8014bd54;
    break;
  case 2:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8013882c;
    break;
  case 3:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x801389e4;
    break;
  case 4:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8011bc4c;
    break;
  case 5:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x80143c1c;
    break;
  case 6:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8014034c;
    break;
  case 7:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8014c868;
    break;
  case 8:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x80132de0;
    break;
  case 9:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x80145138;
    break;
  case 10:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8010e578;
    break;
  case 0xb:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8011eb94;
    break;
  case 0xc:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8011c09c;
    break;
  case 0xd:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8011dcb8;
    break;
  case 0xe:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8011cbd8;
    break;
  case 0xf:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8011cf0c;
    break;
  case 0x10:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x801208d4;
    break;
  case 0x11:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8010d5d8;
    break;
  case 0x12:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8010c65c;
    break;
  case 0x13:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8010cacc;
    break;
  case 0x14:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8010d8ac;
    break;
  case 0x15:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x8011fc0c;
    break;
  case 0x16:
    *(byte *)(param_1 + 3) = bVar2 | 0x80;
    ppuVar1 = (undefined **)0x801158a0;
    break;
  default:
    *(byte *)(param_1 + 3) = bVar2;
    ppuVar1 = &PTR_FUN_800a20b4;
  }
  ppuVar1 = ppuVar1 + (param_2 & 0xff) * 3;
  *(undefined1 *)(param_1 + 0xb) = 0x20;
  *(undefined **)(param_1 + 0x1c) = *ppuVar1;
  *(undefined **)(param_1 + 0x18) = ppuVar1[1];
  if ((undefined2 *)ppuVar1[2] != (undefined2 *)0x0) {
    *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)ppuVar1[2];
    *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)(ppuVar1[2] + 2);
    *(undefined **)(param_1 + 0x38) = ppuVar1[2] + 4;
  }
  return;
}

