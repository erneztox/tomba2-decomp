// FUN_08030f98

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08030f98(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      goto LAB_08031024;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x50) = 2;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  sVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x4a) = sVar2;
  if (0xf < sVar2) {
    *(undefined2 *)(param_1 + 0x4a) = 0x10;
    *(undefined1 *)(param_1 + 0x78) = 2;
  }
LAB_08031024:
  sVar2 = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x4a);
  *(short *)(param_1 + 0x32) = sVar2;
  if (-0xa75 < sVar2) {
    *(undefined2 *)(param_1 + 0x32) = 0xf58c;
    func_0x00074590(3,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

