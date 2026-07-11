// FUN_801175c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801175c8(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  ushort *unaff_s1;
  ushort *unaff_s3;
  int unaff_s4;
  
  if (param_1[0x71] == 0xff) {
    bVar1 = param_1[0x5e];
    if (bVar1 < 2) {
      param_1[0x82] = 1;
      param_1[0x83] = 0;
      *(ushort *)(param_1 + 0x84) = unaff_s1[9];
      bVar1 = param_1[0x47];
      uVar2 = (uint)bVar1;
      *(ushort *)(param_1 + 0x86) = unaff_s1[10];
      if (uVar2 == 2) {
        *(ushort *)(*(int *)(param_1 + 0xc0) + 2) =
             *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) >> 1;
        if (*(short *)(param_1 + 0x82) != 0) {
LAB_80120678:
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
          param_1[0x50] = 0;
          param_1[0x51] = 2;
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x16) =
               *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a);
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x12) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
          switch(param_1[3]) {
          case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          default:
            *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2);
            FUN_801291f4(param_1,0x800a3e38);
            return;
          }
        }
        *param_1 = bVar1;
      }
      else {
        if (uVar2 == 0) {
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
          uVar2 = 0;
          goto LAB_801295f4;
        }
        if (uVar2 != 1) {
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
          goto LAB_80120678;
        }
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
        *(ushort *)(param_1 + 0x70) = *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + unaff_s1[-5];
      }
      while (FUN_80130d9c(uVar2), unaff_s1 < unaff_s3) {
        uVar2 = (uint)*unaff_s1;
        unaff_s1 = unaff_s1 + 1;
LAB_801295f4:
        uVar2 = FUN_80130838(unaff_s4 + uVar2 * 4 + 4);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 4) {
      param_1[0x5e] = bVar1 - 2;
      func_0x80040d68(param_1,0x800a3e28);
    }
    param_1[0x70] = 1;
    param_1[5] = 0;
  }
  return;
}

