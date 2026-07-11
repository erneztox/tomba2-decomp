// FUN_80120a44

void FUN_80120a44(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int in_v0;
  short *psVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xc0);
  psVar1 = (short *)((uint)*(byte *)(param_2 + 3) * 4 + in_v0 + 0x796c);
  if ((int)*psVar1 <= (int)(uint)*(ushort *)(iVar2 + 0x3a)) {
    *(short *)(iVar2 + 0x3a) = *psVar1;
    *(undefined1 *)(param_2 + 0x5e) = 2;
    *(undefined1 *)(*(int *)(param_2 + 0x10) + 0x5e) = 0;
    *(undefined1 *)(*(int *)(param_2 + 0x14) + 0x5e) = 2;
    *(undefined1 *)(*(int *)(param_2 + 0x3c) + 0x5e) = 2;
    return;
  }
  *(ushort *)(iVar2 + 0x3a) =
       *(ushort *)(iVar2 + 0x3a) + (short)(char)((ushort)*(undefined2 *)(param_2 + 0x4a) >> 8);
  *(short *)(param_2 + 0x86) =
       *(short *)(*(int *)(param_2 + 0xc0) + 0x3a) + *(short *)(param_2 + 0x84);
  if ((((*(char *)(param_2 + 3) != '\x04') || (DAT_1f800137 == '\0')) ||
      (*(short *)(param_4 + 0x32) < -0x1194)) && (*(char *)(param_2 + 0x29) != '\0')) {
    *(short *)(param_4 + 0x156) =
         *(short *)(param_4 + 0x156) + (short)(char)((ushort)*(undefined2 *)(param_2 + 0x4a) >> 8);
    return;
  }
  return;
}

