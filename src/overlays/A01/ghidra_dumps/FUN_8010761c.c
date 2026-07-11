// FUN_8010761c

void FUN_8010761c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = func_0x80022f04();
  if ((iVar1 != 0) &&
     ((int)((uint)*(ushort *)(param_1 + 0x84) +
            ((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) + 0x78 & 0xffff)
      <= *(short *)(param_1 + 0x86) + 0x78)) {
    uVar2 = func_0x8001dc9c(param_1,param_2,0,1);
    if ((uVar2 & 0x80) != 0) {
      *(undefined1 *)(param_1 + 0x2b) = 2;
    }
    DAT_1f800182 = 0;
  }
  return;
}

