// FUN_8011d45c

/* WARNING: Control flow encountered bad instruction data */

void FUN_8011d45c(uint param_1)

{
  short sVar1;
  uint uVar2;
  uint extraout_v1;
  uint extraout_v1_00;
  short *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s6;
  int unaff_s8;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x5e);
  if (uVar2 == 1) {
    FUN_8012464c();
    uVar2 = extraout_v1_00;
  }
  else if (uVar2 < 2) {
    if (uVar2 == 0) {
      uVar2 = 3;
      if ((DAT_800bf9fd >> 2 & 3) == 3) {
        *(undefined1 *)(param_1 + 0x5e) = 1;
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
      }
      else {
        func_0x800735f4(param_1,0x4a);
        uVar2 = extraout_v1;
      }
    }
  }
  else if (uVar2 == 2) {
    if (*(char *)(param_1 + 5) == '\0') {
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x8a);
    }
    return;
  }
  do {
    if (param_1 < 0xfe) {
      *(char *)(unaff_s3 + 6) = (char)uVar2 + '\x01';
      *(short *)(unaff_s3 + param_1 * 2 + 0x10) = *unaff_s0;
    }
    do {
      unaff_s1 = unaff_s1 + 1;
      unaff_s0 = unaff_s0 + *(short *)(unaff_s3 + 10);
      if (unaff_s4 < unaff_s1) {
        do {
          unaff_s2 = unaff_s2 + 1;
          if (unaff_s6 <= unaff_s2) {
            if (unaff_s8 < unaff_s2) {
              return;
            }
            while ((unaff_s2 < 0 || (*(short *)(unaff_s3 + 10) <= unaff_s2))) {
              unaff_s2 = unaff_s2 + 1;
              if (unaff_s8 < unaff_s2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        } while ((unaff_s2 < 0) || (*(short *)(unaff_s3 + 10) <= unaff_s2));
        FUN_8012f468();
        return;
      }
    } while ((*unaff_s0 == -1) ||
            ((DAT_80139000 != '\0' && (sVar1 = FUN_8012f864(unaff_s1), sVar1 == 0))));
    uVar2 = (uint)*(byte *)(unaff_s3 + 6);
    param_1 = uVar2;
  } while( true );
}

