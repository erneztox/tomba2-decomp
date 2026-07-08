
void FUN_8003fe00(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 == 1) {
    param_2 = 0x1e;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_2 = 0x1d;
    }
  }
  else if (bVar1 == 2) {
    param_2 = 0x1f;
  }
  else if (bVar1 == 3) {
    param_2 = 0x20;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  if ((&DAT_800bfab4)[param_2] == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    FUN_8004ed94(0x2b,0x41);
  }
  else {
    *(undefined1 *)(param_1 + 5) = 2;
  }
  if (*(char *)(param_1 + 0x5e) == '\x02') {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 0;
  }
  return;
}

