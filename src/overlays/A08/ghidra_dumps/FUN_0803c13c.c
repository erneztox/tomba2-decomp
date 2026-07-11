// FUN_0803c13c

void FUN_0803c13c(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xbf;
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x19,0xf);
    func_0x00135630(param_1,0x12,4);
    func_0x00026100(8);
    func_0x00074590(0x85,0,0);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  return;
}

