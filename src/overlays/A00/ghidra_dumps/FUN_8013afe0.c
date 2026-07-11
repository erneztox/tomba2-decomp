// FUN_8013afe0

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013afe0(void)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  short in_v0;
  int unaff_s0;
  
  if (in_v0 != 0) {
    *(undefined2 *)(unaff_s0 + 6) = 4;
  }
  cVar1 = *(char *)(unaff_s0 + 0x5f);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    if (cVar1 != '\x03') {
      uVar2 = *(ushort *)(unaff_s0 + 0x62);
    }
    else {
      uVar2 = *(ushort *)(unaff_s0 + 0x62);
    }
    bVar3 = cVar1 == '\x03';
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (bVar3) {
    *(undefined4 *)(unaff_s0 + 4) = 0xa01;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

