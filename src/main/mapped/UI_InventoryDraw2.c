/**
 * @brief UI inventory draw variant 2: entity[4]=1 state, draws items
 * @note Original: func_8004E928 at 0x8004E928
 */
// UI_InventoryDraw2



void FUN_8004e928(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 0xb) = 0x10;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      return;
    }
    if (bVar1 == 2) {
      *(undefined1 *)(param_1 + 4) = 3;
      DAT_1f800137 = 0;
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    FUN_8007a624(param_1);
    return;
  }
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = FUN_8004daec(param_1);
    if (iVar2 != 0) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    goto LAB_8004ea1c;
  }
  if (*(char *)(param_1 + 5) != '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  bVar1 = DAT_800bf87f;
  if (*(short *)(param_1 + 0x60) == 0x5d) {
LAB_8004ea08:
    FUN_80026100(bVar1);
  }
  else if (*(short *)(param_1 + 0x60) == 0x5e) {
    bVar1 = DAT_800bf87f >> 1;
    goto LAB_8004ea08;
  }
  *(undefined1 *)(param_1 + 4) = 2;
LAB_8004ea1c:
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}
