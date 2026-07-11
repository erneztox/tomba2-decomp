// FUN_08037a90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08037a90(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  func_0x0004766c();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      if (*(char *)(iVar3 + 5) == '\0') {
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 5) = 1;
      }
      goto LAB_08037bd4;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x00041768(param_1,0,4);
    if (((int)_DAT_800e7ffe & 0x8200U) != 0) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(iVar3 + 6) = 0;
    *(undefined1 *)(iVar3 + 5) = 1;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  if (*(char *)(iVar3 + 4) == '\x01') {
    bVar1 = *(byte *)(iVar3 + 5);
    if (bVar1 < 5) {
      if ((2 < bVar1) || (bVar1 == 0)) {
        if (*(char *)(param_1 + 0x47) != '\0') {
          func_0x00041768(param_1,5,4);
        }
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(undefined1 *)(param_1 + 6) = 2;
      }
    }
    else if (bVar1 == 5) {
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 5) = 4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08037bd4:
  sVar2 = *(short *)(param_1 + 0x42) + 0x1f;
  *(short *)(param_1 + 0x42) = sVar2;
  iVar3 = func_0x00083e80((int)sVar2);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar3 >> 9);
  return;
}

