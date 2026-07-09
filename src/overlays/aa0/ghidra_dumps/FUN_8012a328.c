// FUN_8012a328

undefined4 FUN_8012a328(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int unaff_s1;
  
  if ((*(byte *)(param_1 + 3) & 0xc0) == 0) {
    iVar5 = *(int *)(param_1 + 0x10);
    if (*(short *)(iVar5 + 0x78) != 0) {
      *(undefined2 *)(param_1 + 0x68) = 1;
      *(undefined1 *)(unaff_s1 + 5) = 1;
      FUN_8013b70c();
      uVar2 = FUN_8013c3dc();
      return uVar2;
    }
    *(undefined2 *)(param_1 + 0x68) = 0;
    uVar4 = *(ushort *)(*(int *)(iVar5 + 0xc4) + 8);
    if (0x800 < (short)uVar4) {
      uVar4 = uVar4 | 0xf000;
    }
    iVar1 = (int)*(short *)(iVar5 + 100) + (int)*(short *)(iVar5 + 0x66);
    uVar3 = (int)(short)uVar4 < (iVar1 - (iVar1 >> 0x1f)) * 0x8000 >> 0x10 ^ 1;
    if (*(byte *)(param_1 + 3) != (*(byte *)(iVar5 + 0x62) & 0x7f)) {
      uVar3 = 1 - uVar3;
    }
    iVar5 = uVar3 << 0x10;
    if (*(byte *)(param_1 + 3) == 5) {
      uVar3 = 1 - uVar3;
      iVar5 = uVar3 * 0x10000;
    }
    if (iVar5 >> 0x10 != (int)*(short *)(param_1 + 0x62)) {
      *(undefined1 *)(param_1 + 5) = 2;
      if (iVar5 >> 0x10 == 0) {
        *(undefined1 *)(param_1 + 6) = 1;
        *(undefined2 *)(param_1 + 100) = 0xc00;
        *(undefined2 *)(param_1 + 0x66) = 0x999;
        *(undefined2 *)(param_1 + 0x4e) = 0xffd0;
        *(undefined2 *)(param_1 + 0x50) = 0xffb8;
        if (*(char *)(param_1 + 1) != '\0') {
          uVar2 = func_0x80074590(0x91,0,0);
          return uVar2;
        }
      }
      else {
        *(undefined2 *)(param_1 + 100) = 0x1000;
        *(undefined2 *)(param_1 + 0x66) = 0x1000;
        *(undefined2 *)(param_1 + 0x4e) = 0x30;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined2 *)(param_1 + 0x50) = 0x48;
        if (*(char *)(param_1 + 1) != '\0') {
          uVar2 = FUN_80133414(0x90);
          return uVar2;
        }
      }
      *(short *)(param_1 + 0x62) = (short)uVar3;
      *(undefined1 *)(uVar3 + 0x29) = 0;
      uVar2 = FUN_8013c3dc();
      return uVar2;
    }
  }
  return 0;
}

