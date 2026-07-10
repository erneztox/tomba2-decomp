// FUN_0001dc9c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001dc9c(undefined1 param_1)

{
  char cVar1;
  short sVar2;
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  
  if (in_v0 != 0) {
    *(undefined1 *)(unaff_s1 + 5) = param_1;
    sVar2 = func_0x00085690(-((int)(((uint)*(ushort *)(unaff_s1 + 0x36) -
                                    (uint)*(ushort *)(unaff_s0 + 0x36)) * 0x10000) >> 0x10),
                            (int)(((uint)*(ushort *)(unaff_s1 + 0x2e) -
                                  (uint)*(ushort *)(unaff_s0 + 0x2e)) * 0x10000) >> 0x10);
    cVar1 = func_0x00077768((int)sVar2,(int)*(short *)(unaff_s1 + 0x60),0);
    *(char *)(unaff_s1 + 0x46) = cVar1;
    if (cVar1 == '\0') {
      *(undefined2 *)(unaff_s1 + 0x44) = 0x800;
    }
    else {
      *(undefined2 *)(unaff_s1 + 0x44) = 0xf800;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

