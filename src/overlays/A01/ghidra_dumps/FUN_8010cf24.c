// FUN_8010cf24

void FUN_8010cf24(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = func_0x80051b70(param_1,0xc,0x44);
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 2);
    *(undefined1 *)(param_1 + 2) = 0x10;
    *(ushort *)(param_1 + 0x60) = (ushort)bVar1;
    func_0x800517f8();
  }
  return;
}

