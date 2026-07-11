// FUN_08013098

/* WARNING: Control flow encountered bad instruction data */

void FUN_08013098(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = func_0x00020db8(param_1,param_2,
                          *(undefined4 *)
                           (param_2 + (uint)*(byte *)(*(byte *)(param_2 + 3) + 0x801422b0) * 4 +
                           0xc0));
  if (-1 < iVar4) {
    if (*(char *)(param_1 + 0x5f) == '\x10') {
      bVar3 = *(byte *)(param_1 + 0x46) >> 1;
      if (bVar3 == 2) {
        if (iVar4 != 3) {
          iVar4 = func_0x00083f50(*(short *)(param_1 + 0x68) + 0x800);
          sVar1 = *(short *)(param_2 + 0x80);
          iVar5 = func_0x00083e80(*(short *)(param_1 + 0x68) + 0x800);
          sVar2 = *(short *)(param_2 + 0x80);
          *(short *)(param_1 + 0x2e) =
               *(short *)(*(int *)(param_2 + (uint)*(byte *)(*(byte *)(param_2 + 3) + 0x801422b0) *
                                             4 + 0xc0) + 0x2c) + (short)(iVar4 * sVar1 >> 0xc);
          *(short *)(param_1 + 0x36) =
               *(short *)(*(int *)(param_2 + (uint)*(byte *)(*(byte *)(param_2 + 3) + 0x801422b0) *
                                             4 + 0xc0) + 0x34) - (short)(iVar5 * sVar2 >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar3 < 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar3 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x84) +
           *(short *)(*(int *)(param_2 + (uint)*(byte *)(*(byte *)(param_2 + 3) + 0x801422b0) * 4 +
                              0xc0) + 0x30) +
           (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
    }
    uVar6 = func_0x0001e860(param_1,param_2,
                            *(undefined4 *)
                             (param_2 + (uint)*(byte *)(*(byte *)(param_2 + 3) + 0x801422b0) * 4 +
                             0xc0),0x200);
    if ((uVar6 & 0x80) == 0) {
      *(undefined1 *)(param_2 + 0x2b) = 1;
    }
    else if (*(char *)(param_2 + 0x29) == '\0') {
      *(undefined1 *)(param_2 + 0x29) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    DAT_1f800182 = 0;
  }
  return;
}

