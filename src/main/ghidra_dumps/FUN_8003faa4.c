
void FUN_8003faa4(int param_1)

{
  int iVar1;
  
  iVar1 = 0x50;
  if ((*(byte *)(param_1 + 0xb) & 0x40) == 0) {
    if ((*(byte *)(param_1 + 0xb) & 0x80) == 0) {
      return;
    }
    iVar1 = (int)*(short *)(param_1 + 0x80);
  }
  FUN_8002ae0c(param_1,iVar1,0);
  return;
}

