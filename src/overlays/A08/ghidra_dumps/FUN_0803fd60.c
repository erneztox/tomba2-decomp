// FUN_0803fd60

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803fd60(int param_1)

{
  byte bVar1;
  short sVar2;
  
  if (*(short *)(param_1 + 0x6e) != -1) {
    func_0x00138e10();
  }
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00077c40(param_1,0x80149a50,8);
        *(undefined2 *)(param_1 + 0x44) = 0x1800;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
    else if (bVar1 == 2) goto LAB_0803fe48;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(param_1 + 0x44) + -0x80;
  *(short *)(param_1 + 0x44) = sVar2;
  if (-1 < sVar2) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x80;
    if ((int)*(short *)(param_1 + 0x32) < *(short *)(param_1 + 0x7a) + 0x140) goto LAB_0803fe48;
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x7a) + 0x140;
  }
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 6) = 2;
LAB_0803fe48:
  if (*(short *)(param_1 + 0x6a) == 1) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 3;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}

