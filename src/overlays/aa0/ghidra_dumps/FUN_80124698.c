// FUN_80124698

void FUN_80124698(undefined4 param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int in_v1;
  int iVar5;
  int unaff_s0;
  
  if (in_v1 == 0) {
    if ((DAT_800bf9df & 2) != 0) {
      *(undefined1 *)(unaff_s0 + 6) = 0;
      *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
    }
    if (0x16 < DAT_1f800207) {
      *(undefined1 *)(unaff_s0 + 1) = 1;
      FUN_8012d8f4();
      return;
    }
    return;
  }
  if (in_v1 != 1) {
    FUN_8012d8f4();
    return;
  }
  if (*(char *)(unaff_s0 + 6) == '\0') {
    sVar3 = *(short *)(unaff_s0 + 0x32) + 4;
    *(short *)(unaff_s0 + 0x32) = sVar3;
    if (-0x64f < sVar3) {
      *(undefined1 *)(unaff_s0 + 0x1a) = 0x7f;
      *(undefined1 *)(unaff_s0 + 0x19) = 0x7f;
      *(undefined1 *)(unaff_s0 + 0x18) = 0x7f;
      iVar5 = 2;
      *(undefined1 *)(unaff_s0 + 0xd) = 2;
      iVar4 = *(byte *)(unaff_s0 + 6) + 1;
      *(char *)(unaff_s0 + 6) = (char)iVar4;
LAB_8012d844:
      *(int *)(unaff_s0 + 0x18) = iVar4;
      *(int *)(unaff_s0 + 0x1c) = iVar5 + param_2;
      func_0x80084660();
      func_0x80084690();
      FUN_801365c4();
      return;
    }
  }
  else if (*(char *)(unaff_s0 + 6) == '\x01') {
    bVar2 = *(char *)(unaff_s0 + 0x18) - 3;
    *(byte *)(unaff_s0 + 0x1a) = bVar2;
    *(byte *)(unaff_s0 + 0x19) = bVar2;
    *(byte *)(unaff_s0 + 0x18) = bVar2;
    if ((int)((uint)bVar2 << 0x18) < 1) {
      if (*(char *)(unaff_s0 + 3) == '\0') {
        *(uint *)(unaff_s0 + 0x14) = DAT_800bf9df | 4;
        piVar1 = (int *)(param_2 + 0x40);
        iVar5 = *(int *)(unaff_s0 + 0x1c);
        param_2 = *(int *)(param_2 + 0x44);
        iVar4 = *(int *)(unaff_s0 + 0x18) + *piVar1;
        goto LAB_8012d844;
      }
      DAT_800bf9df = DAT_800bf9df | 8;
      *(undefined1 *)(unaff_s0 + 0x1a) = 0;
      *(undefined1 *)(unaff_s0 + 0x19) = 0;
      *(undefined1 *)(unaff_s0 + 0x18) = 0;
      *(undefined1 *)(unaff_s0 + 4) = 3;
    }
  }
  *(undefined1 *)(unaff_s0 + 1) = 1;
  func_0x800517f8();
  FUN_8012d8f4();
  return;
}

