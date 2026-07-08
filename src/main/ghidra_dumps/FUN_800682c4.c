
void FUN_800682c4(int param_1,int param_2)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0x6c) = DAT_800bf88c;
  *(undefined1 *)(param_1 + 0x176) = DAT_800bf88c;
  *(undefined1 *)(param_1 + 0x6d) = DAT_800bf88d;
  *(undefined1 *)(param_1 + 0x6f) = DAT_800bf88f;
  *(undefined1 *)(param_1 + 0x6e) = DAT_800bf88e;
  bVar1 = DAT_800bf881;
  *(byte *)(param_1 + 0x174) = DAT_800bf881;
  if ((bVar1 & 8) != 0) {
    *(undefined1 *)(param_1 + 0xd) = 0x42;
  }
  if ((*(byte *)(param_1 + 0x174) & 0x30) != 0) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 0x12;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_80067da8(param_1);
  FUN_80067ef4(param_1);
  if ((param_2 == 0) && (FUN_80067fe4(param_1), DAT_800bf9e5 == '\x06')) {
    func_0x8011740c(param_1,2);
  }
  return;
}

