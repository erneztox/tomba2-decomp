// FUN_80132b44

void FUN_80132b44(undefined1 param_1)

{
  char cVar1;
  short sVar2;
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  
  if (in_v1 != 0) {
    FUN_8013bcb4();
    return;
  }
  if (*(char *)(unaff_s1 + 0x29) != '\0') {
    *(undefined1 *)(unaff_s1 + 5) = param_1;
    sVar2 = func_0x80085690(-((int)(((uint)*(ushort *)(unaff_s1 + 0x36) -
                                    (uint)*(ushort *)(unaff_s0 + 0x36)) * 0x10000) >> 0x10),
                            (int)(((uint)*(ushort *)(unaff_s1 + 0x2e) -
                                  (uint)*(ushort *)(unaff_s0 + 0x2e)) * 0x10000) >> 0x10);
    cVar1 = func_0x80077768((int)sVar2,(int)*(short *)(unaff_s1 + 0x60),0);
    *(char *)(unaff_s1 + 0x46) = cVar1;
    if (cVar1 == '\0') {
      *(undefined2 *)(unaff_s1 + 0x44) = 0x800;
      FUN_8013bcb4();
      return;
    }
    *(undefined2 *)(unaff_s1 + 0x44) = 0xf800;
    FUN_8013bcb4();
    return;
  }
  return;
}

