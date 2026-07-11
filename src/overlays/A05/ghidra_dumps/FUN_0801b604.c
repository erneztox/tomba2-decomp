// FUN_0801b604

undefined4 FUN_0801b604(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + 0xc0);
    param_1 = param_1 + 4;
    iVar3 = iVar2 + 1;
    func_0x00051b04(*puVar1,0x21,iVar2);
    iVar2 = iVar3;
  } while (iVar3 < 0xd);
  return 1;
}

