// FUN_0802cbf8

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802cbf8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  
  bVar1 = *(byte *)(param_1 + 7);
  uVar5 = 0;
  if (bVar1 == 1) {
LAB_0802ccc0:
    uVar2 = *(ushort *)(param_1 + 0x42);
    *(ushort *)(param_1 + 0x42) = uVar2 - 1;
    if (0 < (int)((uint)uVar2 << 0x10)) goto LAB_0802cd8c;
    if (*(char *)(param_1 + 4) == '\x02') {
      uVar3 = func_0x0009a450();
      cVar4 = '\x14';
      if ((uVar3 & 0x8000) != 0) {
        cVar4 = '\x11';
      }
      if (*(char *)(param_1 + 0x46) != cVar4) {
        *(char *)(param_1 + 0x46) = cVar4;
        func_0x00077cfc(param_1,0x80144f14,cVar4,8);
        *(undefined2 *)(param_1 + 0x80) = 0x50;
        *(undefined2 *)(param_1 + 0x82) = 0xa0;
        *(undefined2 *)(param_1 + 0x84) = 0x8c;
        *(undefined2 *)(param_1 + 0x86) = 0xf0;
        *(undefined2 *)(param_1 + 0x7c) = 0;
        *(undefined2 *)(param_1 + 0x7e) = 0;
        *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
      }
      *(undefined2 *)(param_1 + 0x42) = 0x5a;
      *(undefined1 *)(param_1 + 7) = 2;
      goto LAB_0802cd70;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 0x46) != '\x04') {
        *(undefined1 *)(param_1 + 0x46) = 4;
        func_0x00077cfc(param_1,0x80144f14,4,3);
        *(undefined2 *)(param_1 + 0x80) = 0x50;
        *(undefined2 *)(param_1 + 0x82) = 0xa0;
        *(undefined2 *)(param_1 + 0x84) = 0x8c;
        *(undefined2 *)(param_1 + 0x86) = 0xf0;
        *(undefined2 *)(param_1 + 0x7c) = 0;
        *(undefined2 *)(param_1 + 0x7e) = 0;
        *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
      }
      *(undefined2 *)(param_1 + 0x42) = 0x5a;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(param_1 + 7) = 1;
      goto LAB_0802ccc0;
    }
    if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_0802cd70:
    uVar2 = *(ushort *)(param_1 + 0x42);
    *(ushort *)(param_1 + 0x42) = uVar2 - 1;
    if (0 < (int)((uint)uVar2 << 0x10)) goto LAB_0802cd8c;
  }
  uVar5 = 1;
LAB_0802cd8c:
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x28;
  func_0x00124a08();
  return uVar5;
}

