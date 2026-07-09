// FUN_80113c34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80113c34(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int unaff_s1;
  
  uVar2 = _DAT_800ecfa4;
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      FUN_8011c674(param_1);
    }
    else if (param_1[3] == '\x01') {
      FUN_8011ca04(param_1);
      if (param_1[1] != '\0') {
        func_0x800518fc(param_1);
      }
      param_1[0x2b] = 0;
      puVar3 = (undefined1 *)FUN_8011cd14(param_1);
      goto LAB_8011cd04;
    }
    puVar3 = *(undefined1 **)(unaff_s1 + 0xc4);
  }
  else if (bVar1 < 2) {
    puVar3 = &LAB_800c0000;
    if (bVar1 == 0) {
      if (DAT_800bf89c < 4) {
        return;
      }
      param_1[0xb] = 0x40;
      *(undefined2 *)(param_1 + 0x80) = 100;
      *(undefined2 *)(param_1 + 0x82) = 200;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      puVar3 = (undefined1 *)0x150;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *param_1 = 1;
      param_1[0x2b] = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x150;
      param_1[5] = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else {
    puVar3 = (undefined1 *)0x3;
    if (bVar1 == 2) {
      param_1[4] = 3;
    }
    else if (bVar1 == 3) {
      func_0x8007a624(param_1);
      return;
    }
  }
LAB_8011cd04:
  func_0x80027144(*(undefined4 *)(puVar3 + 0x40));
  func_0x80074590(0xc,0,0);
  return;
}

