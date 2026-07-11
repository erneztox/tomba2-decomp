// FUN_08019a60

void FUN_08019a60(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = -0x7fee34c0;
  do {
    uVar2 = uVar2 + 1;
    func_0x00031220(0xe01,iVar1,(int)*(short *)(iVar1 + 6));
    iVar1 = iVar1 + 8;
  } while (uVar2 < 6);
  func_0x00111418();
  return;
}

