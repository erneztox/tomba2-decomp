// FUN_8012a4a8

void FUN_8012a4a8(int param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = (byte)*(ushort *)(param_1 + 0x62) & 0x7f;
  if ((*(ushort *)(param_1 + 0x62) & 0xff) != 0xff) {
    iVar1 = func_0x80072ddc(param_1,1,4,3);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 3) = bVar2;
      *(undefined4 *)(iVar1 + 0x1c) = 0x8013259c;
    }
    if (((*(uint *)(param_1 + 0x60) & 0x800002) == 2) &&
       (iVar1 = func_0x80072ddc(param_1,1,4,3), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0x1c) = 0x8013259c;
      *(byte *)(iVar1 + 3) = bVar2 + 1;
    }
  }
  return;
}

