// FUN_8007c0d0

undefined4 FUN_8007c0d0(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(param_1 + 0x14);
  bVar1 = *pbVar5;
  while( true ) {
    if (bVar1 == 0xff) {
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined2 *)(param_1 + 0x42) = 0xffff;
      return 0;
    }
    if (0xbf < *pbVar5) break;
    if (param_2 == 1) {
      FUN_8007d0d0(param_1);
      iVar3 = *(int *)(param_1 + 0x14);
      cVar4 = *(char *)(param_1 + 0x2a);
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_8007c214;
    }
LAB_8007c24c:
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    pbVar5 = *(byte **)(param_1 + 0x14);
    *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2a) + '\x01';
    bVar1 = *pbVar5;
  }
  bVar1 = *pbVar5;
  if (0xf9 < bVar1) {
    if ((bVar1 == 0xfc) && (param_2 == 1)) {
      *(undefined2 *)(param_1 + 0x40) = 0xf;
      *(undefined1 *)(param_1 + 5) = 1;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      return 1;
    }
    goto LAB_8007c24c;
  }
  if (bVar1 < 0xf8) {
    if (((bVar1 < 0xd1) && (0xbf < bVar1)) && (param_2 == 1)) {
      FUN_8007d0d0(param_1);
      iVar3 = *(int *)(param_1 + 0x14);
      cVar4 = *(char *)(param_1 + 0x2a);
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_8007c214;
    }
    goto LAB_8007c24c;
  }
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    uVar2 = 2;
    *(undefined2 *)(param_1 + 0x42) = 0;
    break;
  case 1:
    *(undefined2 *)(param_1 + 0x42) = 0xffff;
    uVar2 = 3;
    break;
  case 2:
    *(undefined2 *)(param_1 + 0x42) = 0x3c;
    uVar2 = 4;
    break;
  case 3:
  case 4:
  case 5:
    *(undefined2 *)(param_1 + 0x42) = 0x3c;
    uVar2 = 5;
    break;
  default:
    goto switchD_8007c1c4_default;
  }
  *(undefined1 *)(param_1 + 5) = uVar2;
switchD_8007c1c4_default:
  iVar3 = *(int *)(param_1 + 0x14);
  cVar4 = *(char *)(param_1 + 0x2a);
LAB_8007c214:
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  *(char *)(param_1 + 0x2a) = cVar4 + '\x01';
  return 1;
}

