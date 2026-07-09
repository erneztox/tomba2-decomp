// FUN_8012d880

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012d880(int param_1)

{
  byte bVar1;
  char cVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s7;
  int unaff_s8;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (DAT_800bf9dd == '\r') {
      *(undefined4 *)(param_1 + 0x10) = _DAT_800bf860;
      _DAT_800bf860 = 0;
      if (unaff_s2 < unaff_s7) goto LAB_8013692c;
joined_r0x80136a20:
      while( true ) {
        if (unaff_s8 < unaff_s2) {
          return;
        }
        if ((-1 < unaff_s2) && (unaff_s2 < *(short *)(unaff_s4 + 10))) break;
        unaff_s2 = unaff_s2 + 1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x80074590(0x1a,0x1b,0);
        return;
      }
      cVar2 = '\x01';
LAB_80136944:
      do {
        if (cVar2 != '\0') {
          FUN_8013f988();
          return;
        }
        do {
          unaff_s2 = unaff_s2 + 1;
          if (unaff_s7 <= unaff_s2) goto joined_r0x80136a20;
LAB_8013692c:
        } while (unaff_s2 < 0);
        cVar2 = unaff_s2 < *(short *)(unaff_s4 + 10);
      } while( true );
    }
    cVar2 = '\x03';
    if (bVar1 == 2) {
      if (*(int *)(param_1 + 0x10) != 0) {
        *(ushort *)(*(int *)(param_1 + 0xc4) + 8) =
             (*(ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0x38) + 2) & 7) << 9;
        *(undefined2 *)(*(int *)(param_1 + 200) + 8) = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8)
        ;
      }
      if (DAT_800bf9dd == '\x0f') {
        func_0x80074590(0x8e,0,10);
        return;
      }
    }
    else {
      if (bVar1 != 3) goto LAB_80136944;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0xcc) + 8) = 0;
    }
  }
  return;
}

