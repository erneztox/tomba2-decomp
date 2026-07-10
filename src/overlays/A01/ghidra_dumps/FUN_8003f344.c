// FUN_8003f344

void FUN_8003f344(int param_1,uint param_2,uint param_3)

{
  while (param_2 < param_3) {
    switch(*(byte *)(param_2 + 7) & 0xfc) {
    case 0x20:
      param_2 = param_2 + 0x14;
      break;
    case 0x24:
      *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 0x5c);
      param_2 = param_2 + 0x20;
      break;
    case 0x28:
      param_2 = param_2 + 0x18;
      break;
    case 0x2c:
    case 0x34:
      *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 0x5c);
      param_2 = param_2 + 0x28;
      break;
    case 0x30:
      param_2 = param_2 + 0x1c;
      break;
    case 0x38:
      param_2 = param_2 + 0x24;
      break;
    case 0x3c:
      *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(param_1 + 0x5c);
      param_2 = param_2 + 0x34;
    }
  }
  return;
}

