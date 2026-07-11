// FUN_08029600

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08029600(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(undefined2 *)(param_1 + 0x40) = 0x40;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      func_0x0003116c(0x50e,param_1 + 0x2c,0xffffffce);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_08029784:
    if ((*(ushort *)(param_1 + 0x42) & 0xf) == 0) {
      func_0x00074590(0x38,0,0);
    }
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (*(char *)(param_1 + 0xbf) != '\0') {
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      *(undefined1 *)(param_1 + 7) = 1;
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      local_1a = *(short *)(param_1 + 0x32) + -200;
      local_16 = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(0x50d,auStack_20,0xffffffce);
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x30);
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0xc,0x31);
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x80;
      DAT_800bf9b4 = DAT_800bf9b4 | 0x20;
      *(undefined2 *)(param_1 + 0x42) = 0;
      *(undefined1 *)(param_1 + 0xbf) = 0;
      halt_baddata();
    }
  }
  else {
    if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x40) + -1;
      *(short *)(param_1 + 0x40) = sVar2;
      if (sVar2 == -1) {
        func_0x00040c00(0x6f);
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        halt_baddata();
      }
      *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
           *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + 0x100;
      goto LAB_08029784;
    }
    if (bVar1 != 3) {
      halt_baddata();
    }
    iVar3 = func_0x00042728();
    if (iVar3 != 0) {
      DAT_1f800137 = 0;
      *(undefined2 *)(param_1 + 0x80) = 0x30;
      *(undefined2 *)(param_1 + 0x82) = 0x30;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined2 *)(param_1 + 0x84) = 0xfc0;
      *(undefined2 *)(param_1 + 0x86) = 0xfc0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(short *)(*(int *)(param_1 + 0xc4) + 2) =
       (short)((int)((uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) * -0x1fc) >> 0xc);
  return 0;
}

