// FUN_80122bdc

void FUN_80122bdc(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uint in_v0;
  int iVar2;
  int in_v1;
  short sVar3;
  int iVar4;
  int in_t2;
  int unaff_s0;
  int unaff_s2;
  int in_lo;
  
  *(undefined1 *)(unaff_s2 + 0x5f) = *(undefined1 *)((in_v0 & 7) + in_v1);
  iVar4 = (param_1 + *(short *)(param_4 + 0x84)) - (*(int *)(param_3 + 0x18) + (in_lo >> 0xc));
  if (in_t2 == 2) {
    if (-1 < iVar4) {
      sVar3 = *(short *)(param_3 + 0x18);
      *(undefined1 *)(param_4 + 0x29) = 1;
      *(undefined2 *)(param_4 + 0x4a) = 0;
      *(short *)(param_4 + 0x32) = sVar3 - *(short *)(param_4 + 0x84);
      iVar2 = *(int *)(param_4 + 0x30) + in_lo * 0x10;
      *(int *)(param_4 + 0x30) = iVar2;
      *(undefined1 *)(param_2 + 0x29) = 2;
      *(char *)(unaff_s0 + 7) = (char)iVar2;
      bVar1 = *(char *)(iVar4 + 4) + 1;
      *(byte *)(iVar4 + 4) = bVar1;
      if (5 < bVar1) {
        *(undefined1 *)(iVar4 + 4) = 0;
      }
      func_0x8002b278();
      *(undefined2 *)(unaff_s0 + 0x4a) = 0;
      FUN_8013dbd4();
      return;
    }
  }
  else if (iVar4 < 0) {
    if (((*(char *)(param_4 + 4) == '\x01') || (*(char *)(param_4 + 4) == '\x04')) &&
       (*(byte *)(param_4 + 5) < 2)) {
      FUN_80134bd8();
      return;
    }
  }
  else {
    *(short *)(param_4 + 0x32) = *(short *)(param_3 + 0x18) - *(short *)(param_4 + 0x84);
    *(undefined1 *)(param_4 + 0x29) = 1;
    *(undefined2 *)(param_4 + 0x4a) = 0;
    *(int *)(param_4 + 0x30) = *(int *)(param_4 + 0x30) + in_lo * 0x10;
    *(undefined1 *)(param_2 + 0x29) = 1;
  }
  if ((0x15f3 < *(short *)(param_4 + 0x36)) && ((*(byte *)(param_4 + 0x145) & 1) == 0)) {
    sVar3 = -0x924;
    if (*(short *)(param_4 + 0x17e) < 0) {
      sVar3 = -0x8fc;
    }
    if (sVar3 <= *(short *)(param_4 + 0x32)) {
      *(short *)(param_4 + 0x32) = sVar3;
      *(undefined1 *)(param_4 + 0x29) = 1;
      *(undefined2 *)(param_4 + 0x4a) = 0;
    }
  }
  return;
}

