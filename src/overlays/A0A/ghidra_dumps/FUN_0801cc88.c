// FUN_0801cc88

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801cc88(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(param_1 + 0x29) == '\0') goto LAB_0801ce3c;
    *(undefined1 *)(param_1 + 5) = 1;
    uVar3 = *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) / 0x140;
    if (uVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = (undefined2)(uVar3 << 3);
    if (4 < uVar3) {
      uVar2 = 0x20;
    }
    bVar1 = *(byte *)(param_1 + 0x47);
    *(undefined2 *)(param_1 + 0x7c) = 0;
    *(undefined2 *)(param_1 + 0x7e) = uVar2;
    if (bVar1 == 1) {
      *(undefined1 *)(param_1 + 0x5e) = 1;
      *(undefined1 *)(param_1 + 0x46) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x5e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x46) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x5e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x46) = 1;
    }
    else if ((bVar1 < 2) && (bVar1 == 0)) {
      *(undefined1 *)(param_1 + 0x5e) = 1;
      *(undefined1 *)(param_1 + 0x46) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x5e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x46) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x5e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x46) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00074590(0x8d,0,0);
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    if (*(char *)(param_1 + 0x29) == '\0') {
      bVar1 = *(byte *)(param_1 + 0x47);
      *(undefined1 *)(param_1 + 5) = 0;
      if ((bVar1 == 1) || ((bVar1 < 2 && (bVar1 == 0)))) {
        *(undefined1 *)(param_1 + 0x5e) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x5e) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x5e) = 0;
      }
    }
LAB_0801ce3c:
    func_0x00115958(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

