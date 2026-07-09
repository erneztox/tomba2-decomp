// FUN_80103a5c

void FUN_80103a5c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x160) = 0;
  if (param_3 == 0) {
    func_0x80054d14(param_1,0x29,4);
  }
  *(undefined1 *)(param_1 + 7) = 0;
  func_0x80076d68(param_1);
  iVar2 = (int)((*(ushort *)(param_1 + 0x56) + 0x800) * 0x10000) >> 0x10;
  iVar1 = func_0x80083f50(iVar2);
  *(short *)(param_1 + 0x2e) =
       *(short *)(param_2 + 0x2e) + (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
  iVar1 = func_0x80083e80(iVar2);
  *(short *)(param_1 + 0x36) =
       *(short *)(param_2 + 0x36) - (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
  *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x32) + *(short *)(param_1 + 0x156);
  if (*(char *)(param_2 + 0x5e) == '\x02') {
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined2 *)(param_1 + 0x40) = 8;
    func_0x80056d44(param_1,0);
  }
  return;
}

