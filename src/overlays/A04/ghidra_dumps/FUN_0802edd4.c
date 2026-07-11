// FUN_0802edd4

int FUN_0802edd4(int param_1,undefined1 param_2,char param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = func_0x00072ddc(0,3,2,0xd);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0x80124394;
    *(char *)(iVar2 + 3) = param_3 + -0x7f;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    uVar1 = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)(iVar2 + 0x46) = param_2;
    *(undefined1 *)(iVar2 + 0x2a) = uVar1;
  }
  return iVar2;
}

