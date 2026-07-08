
void FUN_80053d90(int param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  switch(*(undefined1 *)(param_1 + 0x78)) {
  case 1:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    puVar3 = *(undefined1 **)(param_1 + 0x10);
    *puVar3 = 2;
    uVar1 = *(ushort *)(param_1 + 0x56);
    puVar3[4] = 2;
    puVar3[5] = 2;
    puVar3[6] = 0;
    puVar3[0x2b] = (char)(uVar1 >> 4);
    puVar3[0x28] = puVar3[0x28] | 0x80;
    goto switchD_80053dc4_default;
  case 2:
    puVar3 = *(undefined1 **)(param_1 + 0x10);
    puVar3[4] = 2;
    uVar2 = 3;
    break;
  case 3:
    puVar3 = *(undefined1 **)(param_1 + 0x10);
    *puVar3 = 2;
    puVar3[4] = 2;
    uVar2 = 1;
    break;
  default:
    goto switchD_80053dc4_default;
  }
  puVar3[5] = uVar2;
  puVar3[6] = 0;
switchD_80053dc4_default:
  *(undefined1 *)(param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x181) = 0;
  FUN_80053d0c();
  return;
}

