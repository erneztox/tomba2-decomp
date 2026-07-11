// FUN_0802ef5c

/* WARNING: Control flow encountered bad instruction data */

bool FUN_0802ef5c(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00074590(0x20,0,0);
        func_0x000440e4(&DAT_800e7e80,0x50,4);
        *(undefined2 *)(param_1 + 0x72) = 0;
        *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (bVar1 == 2) goto LAB_0802f028;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(param_1 + 0x72) + 1;
  *(short *)(param_1 + 0x72) = sVar2;
  if (5 < sVar2) {
    func_0x00074590(0xe,0xfffffff5,0);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
LAB_0802f028:
  return DAT_800bf80e != '\0';
}

