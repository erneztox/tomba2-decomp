// FUN_08023304

/* WARNING: Control flow encountered bad instruction data */

void FUN_08023304(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (DAT_800bf9fa == '\n') {
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      halt_baddata();
    }
LAB_08023570:
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 6);
      if (bVar1 == 1) {
        iVar3 = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x100;
        *(int *)(param_1 + 0x2c) = iVar3;
        if (iVar3 < 0x24b9) {
          *(undefined2 *)(param_1 + 0x2e) = 0x24b8;
        }
        iVar3 = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x100;
        *(int *)(param_1 + 0x34) = iVar3;
        if (iVar3 < 0x2135) {
          *(undefined2 *)(param_1 + 0x36) = 0x2134;
        }
      }
      else {
        if (bVar1 < 2) {
          if (bVar1 != 0) {
            halt_baddata();
          }
          if (DAT_800bf9fe == '\x03') {
            *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x3f;
            func_0x00041768(param_1,0x14,4);
            iVar3 = 0x24b8 - *(short *)(param_1 + 0x2e);
            *(undefined2 *)(param_1 + 0x4a) = 0xd800;
            iVar4 = 0x2134 - *(short *)(param_1 + 0x36);
            *(undefined2 *)(param_1 + 0x50) = 0x380;
            *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
            *(short *)(param_1 + 0x48) = (short)iVar3 + (short)(iVar3 / 0x18) * 0xe8;
            *(short *)(param_1 + 0x4c) = (short)iVar4 + (short)(iVar4 / 0x18) * 0xe8;
            halt_baddata();
          }
          goto LAB_08023570;
        }
        if (bVar1 != 2) {
          if (bVar1 != 3) {
            halt_baddata();
          }
          DAT_800bf9fa = 7;
          *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      uVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + ((int)((uint)uVar2 << 0x10) >> 8);
      *(ushort *)(param_1 + 0x4a) = uVar2;
      if (*(short *)(param_1 + 0x32) < -0x744) goto LAB_08023570;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x40;
      func_0x00041768(param_1,0x58,4);
      *(undefined2 *)(param_1 + 0x32) = 0xf8bc;
      *(undefined2 *)(param_1 + 0x4a) = 0xd800;
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) * 3;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 0x70) == -1) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    goto LAB_08023570;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

