// FUN_0802e800

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802e800(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x79) == '\x01') {
      func_0x000440e4(&DAT_800e7e80,0xcf,2);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x0006fb0c(param_1,0x91);
    _DAT_800bf844 = iVar2;
    if (iVar2 != 0) {
      *(undefined2 *)(iVar2 + 0x60) = 0xffe0;
      *(undefined2 *)(iVar2 + 0x62) = 0x30;
      *(undefined1 *)(iVar2 + 0x5e) = 1;
      *(byte *)(iVar2 + 0x5f) = *(byte *)(iVar2 + 0x5f) | 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    if (DAT_800bf80e != '\0') {
      func_0x00025934(0x800ed058,0,0);
      func_0x000440e4(&DAT_800e7e80,2,4);
      iVar2 = _DAT_800bf844;
      *(undefined1 *)(_DAT_800bf844 + 4) = 2;
      *(undefined1 *)(iVar2 + 5) = 0;
      *(undefined1 *)(iVar2 + 6) = 0;
      func_0x00041718(param_1,0x10,4);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x00025934(0x800ed058,0,0);
    if ((DAT_800bf822 & 1) == 0) {
      return 1;
    }
  }
  return 0;
}

