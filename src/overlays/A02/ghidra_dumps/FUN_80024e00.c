// FUN_80024e00

void FUN_80024e00(int param_1)

{
  byte bVar1;
  
  switch(DAT_800e7eef) {
  case 0x12:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x28);
    bVar1 = *(byte *)(param_1 + 0xd) | 0x80;
    break;
  case 0x13:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x27);
    bVar1 = *(byte *)(param_1 + 0xd) | 0x80;
    break;
  case 0x14:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x25);
    bVar1 = *(byte *)(param_1 + 0xd) | 0x80;
    break;
  case 0x15:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x179);
    bVar1 = *(byte *)(param_1 + 0xd) | 0x80;
    break;
  case 0x16:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x26);
    bVar1 = *(byte *)(param_1 + 0xd) | 0x80;
    break;
  default:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x24);
    bVar1 = *(byte *)(param_1 + 0xd) & 0x7f;
  }
  *(byte *)(param_1 + 0xd) = bVar1;
  return;
}

