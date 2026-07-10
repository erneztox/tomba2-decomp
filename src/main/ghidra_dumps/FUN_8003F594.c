// FUN_8003F594

void FUN_8003f594(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  if (param_2 < param_3) {
    pbVar2 = (byte *)(param_2 + 7);
    do {
      switch(*pbVar2 & 0xfc) {
      case 0x20:
        pbVar2 = pbVar2 + 0x14;
        param_2 = param_2 + 0x14;
        break;
      case 0x24:
        param_2 = param_2 + 0x20;
        *(undefined4 *)(pbVar2 + -3) = uVar3;
        *pbVar2 = *pbVar2 | 2;
        pbVar2 = pbVar2 + 0x20;
        break;
      case 0x28:
        pbVar2 = pbVar2 + 0x18;
        param_2 = param_2 + 0x18;
        break;
      case 0x2c:
        bVar1 = *pbVar2;
        *(undefined4 *)(pbVar2 + -3) = uVar3;
        goto LAB_8003f648;
      case 0x30:
        pbVar2 = pbVar2 + 0x1c;
        param_2 = param_2 + 0x1c;
        break;
      case 0x34:
        bVar1 = *pbVar2;
        *(undefined4 *)(pbVar2 + -3) = uVar3;
        *(undefined4 *)(pbVar2 + 9) = uVar3;
        *(undefined4 *)(pbVar2 + 0x15) = uVar3;
LAB_8003f648:
        param_2 = param_2 + 0x28;
        *pbVar2 = bVar1 | 2;
        pbVar2 = pbVar2 + 0x28;
        break;
      case 0x38:
        pbVar2 = pbVar2 + 0x24;
        param_2 = param_2 + 0x24;
        break;
      case 0x3c:
        param_2 = param_2 + 0x34;
        *(undefined4 *)(pbVar2 + -3) = uVar3;
        *(undefined4 *)(pbVar2 + 9) = uVar3;
        *(undefined4 *)(pbVar2 + 0x15) = uVar3;
        *(undefined4 *)(pbVar2 + 0x21) = uVar3;
        *pbVar2 = *pbVar2 | 2;
        pbVar2 = pbVar2 + 0x34;
      }
    } while (param_2 < param_3);
  }
  return;
}

