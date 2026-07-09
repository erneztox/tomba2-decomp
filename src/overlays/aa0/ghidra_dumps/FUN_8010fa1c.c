// FUN_8010fa1c

void FUN_8010fa1c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int unaff_s1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x47) == '\x02') {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(unaff_s1 + 0x78);
      func_0x80077c40(param_1,param_2 + -0x1b14,0);
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0x100;
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined1 *)(param_1 + 0x2b) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0x180;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      FUN_80121b30();
      return;
    }
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 4;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44) * 0x10;
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44) * 0x10;
    func_0x8004766c(param_1);
    iVar2 = func_0x80049250(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
    if (iVar2 != 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    *(undefined1 *)(param_1 + 6) = 1;
    if (*(char *)(param_1 + 0x47) == '\x02') {
      FUN_80118a04();
      return;
    }
    *(undefined2 *)(param_1 + 0x44) = 0xff00;
    *(undefined2 *)(param_1 + 0x4a) = 0x1000;
    *(undefined2 *)(param_1 + 0x50) = 0x200;
    func_0x8004766c(param_1);
    func_0x80049760(param_1);
    FUN_80118b00();
    return;
  }
  return;
}

