// FUN_80131134

bool FUN_80131134(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int in_t1;
  
  iVar2 = param_4 + 0x14;
  do {
    iVar1 = *(int *)(iVar2 + 0xc0);
    *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + *(short *)(iVar1 + 0x10);
    *(ushort *)(*(int *)(iVar2 + 0xc0) + 0xc) = *(ushort *)(*(int *)(iVar2 + 0xc0) + 0xc) & 0xfff;
    iVar1 = *(int *)(iVar2 + 0xc0);
    if ((*(short *)(iVar1 + 0xc) == in_t1) || (*(short *)(iVar1 + 0xc) == 0xff0)) {
      *(short *)(iVar1 + 0x10) = -*(short *)(iVar1 + 0x10);
    }
    param_3 = param_3 + 1;
    iVar2 = iVar2 + 4;
  } while (param_3 < (int)(uint)*(byte *)(param_4 + 8));
  return (int)*(short *)(param_4 + 100) <=
         *(int *)(*(int *)(param_4 + (*(byte *)(param_4 + 8) - 1) * 4 + 0xc0) + 0x30) + 0x50;
}

