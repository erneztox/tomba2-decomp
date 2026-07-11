// FUN_08013d84

undefined4 FUN_08013d84(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x00069858(param_1,0,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (0 < *(short *)(param_1 + 0x44)) {
      param_1[0x44] = '\0';
      param_1[0x45] = '\0';
    }
    *param_1 = '\x02';
    param_1[0x2b] = '\x02';
    if (((byte)param_1[3] < 6) && (3 < (byte)param_1[3])) {
      func_0x00074590(0x2c,0,0);
      func_0x00074590(0x2d,0,0);
      func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x400,0x15);
      func_0x00074590(0xc,0,0);
    }
    func_0x00074590(0x2f,0,0);
    func_0x00031470(2,param_1 + 0x2c,0,param_1 + 0x68);
    if (param_1[3] != '\x03') {
      if (*param_1 != '\x02') {
        return 1;
      }
      param_1[0x2b] = '\x02';
      param_1[4] = '\x02';
    }
    uVar2 = 1;
  }
  return uVar2;
}

