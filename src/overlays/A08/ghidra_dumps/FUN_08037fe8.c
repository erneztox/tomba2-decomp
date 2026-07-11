// FUN_08037fe8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08037fe8(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined2 *)(param_1 + 0x40) = 0;
        _DAT_800e7eae = 0x2d3b;
        DAT_800e7e85 = 0;
        DAT_800e7e87 = 0;
        DAT_800e7e86 = 0;
        _DAT_800e7eb6 = 0x17f6;
        *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 == 3) {
        sVar2 = *(short *)(param_1 + 0x40) + 1;
        *(short *)(param_1 + 0x40) = sVar2;
        if (sVar2 < 9) {
          return 0;
        }
        func_0x00074590(7,0,0);
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x000440e4(&DAT_800e7e80,0xbe,4);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  if (*(char *)(_DAT_800e7eb8 + 4) != '\x02') {
    return 0;
  }
  func_0x00074810(3,0);
  func_0x00074590(0x2d,0xffffffee,0);
  DAT_800bfa3f = DAT_800bfa3f | 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

