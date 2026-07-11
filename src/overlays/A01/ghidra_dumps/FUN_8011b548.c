// FUN_8011b548

/* WARNING: Control flow encountered bad instruction data */

void FUN_8011b548(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int in_v1;
  int unaff_s1;
  
  bVar1 = *(byte *)(param_1 + 0x5e);
  uVar2 = (uint)(bVar1 < 2);
  if (bVar1 == 1) {
    uVar2 = FUN_80124250(param_1);
    goto LAB_8012463c;
  }
  if (uVar2 != 0) {
    if (bVar1 == 0) {
      uVar2 = FUN_80123ff8(param_1);
    }
    goto LAB_8012463c;
  }
  uVar2 = 0x800e0000;
  if (bVar1 != 2) goto LAB_8012463c;
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 0x29) = 1;
    DAT_800bf81f = ('\x01' - *(char *)(param_1 + 0x5f)) * '\x10';
LAB_8011b648:
    iVar3 = func_0x80073328(param_1);
    if (iVar3 == 0) {
LAB_8011b688:
      if (DAT_800bf873 == '\0') {
        func_0x800735f4(param_1,0x48);
      }
      return;
    }
    in_v1 = *(byte *)(param_1 + 5) + 1;
    *(char *)(param_1 + 5) = (char)in_v1;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800e7eaa != *(char *)(param_1 + 0x2a)) || (DAT_800e7e85 != '\0')) goto LAB_8011b688;
      in_v1 = 0x1f800000;
      *(undefined1 *)(param_1 + 5) = 1;
      DAT_1f800137 = 2;
    }
  }
  else {
    if (bVar1 == 2) goto LAB_8011b648;
    if (bVar1 == 3) {
      if (DAT_800e7eaa != *(char *)(param_1 + 0x2a)) {
        *(undefined1 *)(param_1 + 5) = 0;
      }
      goto LAB_8011b688;
    }
  }
  *(byte *)(in_v1 + 0x28) = *(byte *)(in_v1 + 0x28) | 0x80;
  uVar2 = *(uint *)(unaff_s1 + 200);
LAB_8012463c:
  func_0x80027144(*(undefined4 *)(uVar2 + 0x40));
  func_0x80074590(0xc,0,0);
  func_0x80027144(*(undefined4 *)(*(int *)(unaff_s1 + 200) + 0x40),param_1,0x600,0x18);
  func_0x80074590(0xc,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

