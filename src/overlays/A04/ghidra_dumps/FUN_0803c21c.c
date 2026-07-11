// FUN_0803c21c

void FUN_0803c21c(int param_1,undefined4 param_2)

{
  ushort uVar1;
  
  func_0x00077c40(param_1,0x80145770,param_2);
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x38) + 4);
  if ((*(ushort *)(param_1 + 0x6a) & 0xf) != (uVar1 & 0xf)) {
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0x19);
  }
  if ((int)((uint)*(ushort *)(param_1 + 0x6a) << 0x10) >> 0x14 != (int)((uint)uVar1 << 0x10) >> 0x14
     ) {
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x19);
  }
  *(ushort *)(param_1 + 0x6a) = uVar1;
  return;
}

