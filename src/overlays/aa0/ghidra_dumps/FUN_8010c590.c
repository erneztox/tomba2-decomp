// FUN_8010c590

void FUN_8010c590(undefined4 param_1,undefined2 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  int in_v0;
  int in_v1;
  int iVar3;
  uint uVar4;
  
  iVar3 = in_v1 + in_v0;
  do {
    bVar1 = iVar3 < 0;
    iVar3 = iVar3 + in_v0;
  } while (bVar1);
  iVar3 = iVar3 - in_v0;
  uVar4 = (uint)*(ushort *)(param_4 + 0x32);
  if ((int)uVar4 <= iVar3) {
    iVar3 = iVar3 - uVar4;
    do {
      bVar1 = (int)uVar4 <= iVar3;
      iVar3 = iVar3 - uVar4;
    } while (bVar1);
    iVar3 = iVar3 + uVar4;
  }
  bVar2 = *(char *)(param_4 + 0x38) - 1;
  *(byte *)(param_4 + 0x38) = bVar2;
  if ((int)((uint)bVar2 << 0x18) < 1) {
    *(undefined1 *)(param_4 + 3) = 1;
  }
  *(undefined2 *)(param_4 + 0x28) = param_2;
  *(short *)(param_4 + 0x2a) = (short)iVar3;
  return;
}

