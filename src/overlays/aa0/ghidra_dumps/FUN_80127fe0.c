// FUN_80127fe0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_80127fe0(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 in_v1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_t0;
  int in_t1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  *(undefined2 *)(param_1 + 0xc) = in_v1;
  iVar1 = *(int *)(param_2 + 0xc0);
  if (*(short *)(iVar1 + 0x38) == 0) {
    *(undefined2 *)(iVar1 + 0x38) = 5;
    *(char *)(*(int *)(param_2 + 0xc0) + 0x3e) = *(char *)(*(int *)(param_2 + 0xc0) + 0x3e) + '\x01'
    ;
  }
  else {
    *(undefined1 *)(iVar1 + 0x3e) = 0;
    iVar1 = (int)*(short *)(unaff_s0 + 0x72);
    uVar2 = (uint)*(ushort *)(*(int *)(param_2 + 0xc0) + 6);
    if ((param_3 == iVar1) || (unaff_s1 != 0)) {
      if (unaff_s1 == 0) {
        if (DAT_1f800137 == '\0') {
          *(undefined1 *)(unaff_s0 + 5) = 3;
          if (*(short *)(unaff_s0 + 0x78) != 0) {
            *(undefined1 *)(*(int *)(unaff_s0 + 0xc0) + 0x3e) = *(undefined1 *)(unaff_s0 + 6);
          }
          *(undefined1 *)(unaff_s0 + 6) = 0;
          *(undefined1 *)(unaff_s0 + 0x46) = 0;
          *(undefined1 *)(unaff_s0 + 0x47) = 0x40;
          *(ushort *)(unaff_s0 + 0x6c) = *(ushort *)(unaff_s0 + 0x7a) & 3;
        }
        iVar1 = unaff_s0 + ((int)(uVar2 << 0x10) >> 0xe);
        *(undefined2 *)(unaff_s0 + 0x72) = 0;
        *(short *)(unaff_s0 + 0x7a) = *(short *)(unaff_s0 + 0x7a) << 4;
        iVar3 = *(int *)(iVar1 + 0xc0);
        *(byte *)(iVar3 + 0x3e) = *(byte *)(iVar3 + 0x3e) | 1;
        iVar1 = *(int *)(iVar1 + 0xc0);
        *(byte *)(iVar1 + 0x3e) = *(byte *)(iVar1 + 0x3e) & 0xbf;
        if ((*(char *)(unaff_s0 + 1) != '\0') && (param_4 != 0)) {
          uVar2 = func_0x80074590(0x18,0,0x14);
          return uVar2;
        }
      }
      do {
        *(short *)(iVar1 + 0x14) = -*(short *)(iVar1 + 0x14);
        iVar3 = param_2;
        do {
          param_3 = param_3 + 1;
          param_2 = iVar3 + 4;
          if ((int)(uint)*(byte *)(param_4 + 8) <= param_3) {
            iVar1 = 5;
            if (5 < *(byte *)(param_4 + 8)) {
              iVar3 = param_4 + 0x14;
              do {
                iVar4 = *(int *)(iVar3 + 0xc0);
                *(short *)(iVar4 + 0xc) = *(short *)(iVar4 + 0xc) + *(short *)(iVar4 + 0x10);
                *(ushort *)(*(int *)(iVar3 + 0xc0) + 0xc) =
                     *(ushort *)(*(int *)(iVar3 + 0xc0) + 0xc) & 0xfff;
                iVar4 = *(int *)(iVar3 + 0xc0);
                if ((*(short *)(iVar4 + 0xc) == 0x10) || (*(short *)(iVar4 + 0xc) == 0xff0)) {
                  *(short *)(iVar4 + 0x10) = -*(short *)(iVar4 + 0x10);
                }
                iVar1 = iVar1 + 1;
                iVar3 = iVar3 + 4;
              } while (iVar1 < (int)(uint)*(byte *)(param_4 + 8));
            }
            return *(int *)(*(int *)(param_4 + (*(byte *)(param_4 + 8) - 1) * 4 + 0xc0) + 0x30) +
                   0x50 < (int)*(short *)(param_4 + 100) ^ 1;
          }
          iVar1 = *(int *)(iVar3 + 0xc4);
          *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + *(short *)(iVar1 + 0x14);
          *(ushort *)(*(int *)(iVar3 + 0xc4) + 10) =
               *(ushort *)(*(int *)(iVar3 + 0xc4) + 10) & 0xfff;
          iVar1 = *(int *)(iVar3 + 0xc4);
        } while ((*(short *)(iVar1 + 10) != in_t1) &&
                (iVar3 = param_2, *(short *)(iVar1 + 10) != in_t0));
      } while( true );
    }
    iVar1 = *(int *)(unaff_s0 + ((int)(uVar2 << 0x10) >> 0xe) + 0xc0);
    *(byte *)(iVar1 + 0x3e) = *(byte *)(iVar1 + 0x3e) & 0x7f;
    if ((*(char *)(unaff_s0 + 1) != '\0') && (param_4 != 0)) {
      uVar2 = func_0x80074590(0x18,3,0xfffffffc);
      return uVar2;
    }
  }
  while( true ) {
    unaff_s3 = unaff_s3 + 1;
    unaff_s2 = unaff_s2 + 1;
    if (3 < unaff_s3 * 0x10000 >> 0x10) break;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(*(int *)(unaff_s0 + (unaff_s2 * 0x10000 >> 0xe) + 0xc0) + 0x3e)) {
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}

