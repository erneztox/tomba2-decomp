// FUN_0802d358

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802d358(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 7) == 0) || (3 < *(byte *)(param_1 + 7))) {
    uVar4 = func_0x0009a450();
    cVar1 = *(char *)((uVar4 & 0xf) + 0x801418f4);
    *(char *)(param_1 + 7) = cVar1;
    uVar2 = 0x1e;
    if (cVar1 == '\x02') {
      uVar2 = 0x1d;
    }
    *(undefined1 *)(param_1 + 0x71) = uVar2;
    *(undefined2 *)(param_1 + 0x40) = 0x2d;
    if (*(char *)(param_1 + 0x46) != '\x1e') {
      *(undefined1 *)(param_1 + 0x46) = 0x1e;
      func_0x00077cfc(param_1,0x80144f14,0x1e,8);
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = 0;
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
    }
    *(undefined2 *)(param_1 + 0x4e) = 0;
  }
  sVar3 = *(short *)(param_1 + 0x40) + -1;
  *(short *)(param_1 + 0x40) = sVar3;
  if (sVar3 == -1) {
    if (*(char *)(param_1 + 7) == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar1 = *(char *)(param_1 + 0x71);
    if (*(char *)(param_1 + 0x46) != cVar1) {
      *(char *)(param_1 + 0x46) = cVar1;
      func_0x00077cfc(param_1,0x80144f14,cVar1,8);
      if (cVar1 == '\x13') {
        *(undefined2 *)(param_1 + 0x80) = 0x5a;
        *(undefined2 *)(param_1 + 0x82) = 0xb4;
        *(undefined2 *)(param_1 + 0x84) = 0x8c;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = 0;
      if (cVar1 == '\t') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
    }
    *(undefined2 *)(param_1 + 0x40) = 0x2d;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x28;
  func_0x00124a08();
  return 0;
}

