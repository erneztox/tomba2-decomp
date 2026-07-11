// FUN_0803b278

void FUN_0803b278(void)

{
  ushort uVar1;
  int in_v0;
  int iVar2;
  int unaff_s0;
  
  if (0x1000 < in_v0) {
    *(undefined2 *)(unaff_s0 + 0x4a) = 0x1000;
  }
  iVar2 = func_0x000495dc();
  if ((iVar2 != 0) ||
     (uVar1 = *(short *)(unaff_s0 + 0x40) - 1, *(ushort *)(unaff_s0 + 0x40) = uVar1,
     (int)((uint)uVar1 << 0x10) < 1)) {
    if (*(char *)(unaff_s0 + 1) != '\0') {
      func_0x00074590(0x1b,0,0);
    }
    *(undefined1 *)(unaff_s0 + 4) = 3;
  }
  return;
}

