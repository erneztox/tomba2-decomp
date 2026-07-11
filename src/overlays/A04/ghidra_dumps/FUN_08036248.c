// FUN_08036248

void FUN_08036248(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x00074590(0x91,0,0);
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xbf;
    func_0x0012f41c(param_1,3,0);
    uVar1 = 6;
    if (*(char *)(param_1 + 2) == '\x1c') {
      uVar1 = 0xc;
    }
    func_0x00026100(uVar1);
    func_0x0012f690(param_1,0xffffffff,0x14,0x3c);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  if (*(short *)(param_1 + 0x78) == 0) {
    func_0x00076d68(param_1);
  }
  return;
}

