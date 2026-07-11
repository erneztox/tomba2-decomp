// FUN_08020f4c

void FUN_08020f4c(int param_1)

{
  if ((DAT_800bf8d3 != 0xff) && ((DAT_800bf8d3 & 4) != 0)) {
    DAT_800bf8d3 = DAT_800bf8d3 & 0xfb;
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x4d);
  }
  func_0x0007778c(param_1);
  return;
}

