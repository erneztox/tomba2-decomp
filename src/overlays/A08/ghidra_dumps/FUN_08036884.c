// FUN_08036884

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036884(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 == 3) {
        func_0x0007a624(param_1);
        return;
      }
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (DAT_800bf873 == '\0') {
      if (DAT_800bf871 < 9) {
        *(undefined1 *)(param_1 + 3) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((0xf < DAT_800bf871) && (DAT_800bf871 < 0x15)) {
        *(undefined1 *)(param_1 + 3) = 0;
        halt_baddata();
      }
    }
    *(undefined1 *)(param_1 + 3) = 2;
    uVar4 = func_0x0009a450();
    *(ushort *)(param_1 + 10) = uVar4 & 0xf;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    halt_baddata();
  }
  if ((((*(char *)(param_1 + 3) == '\x02') || (DAT_800bf809 != '\0')) || (DAT_1f800137 != '\0')) ||
     ((DAT_800bf816 == '\x01' || (DAT_800bf8e1 != -1)))) {
    return;
  }
  iVar7 = 4;
  if (*(char *)(param_1 + 5) == '\0') {
    iVar6 = param_1 + 0x10;
    do {
      *(undefined4 *)(iVar6 + 0xc) = 0;
      iVar7 = iVar7 + -1;
      iVar6 = iVar6 + -4;
    } while (-1 < iVar7);
    *(undefined2 *)(param_1 + 8) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    halt_baddata();
  }
  if (*(char *)(param_1 + 5) != '\x01') {
    halt_baddata();
  }
  uVar4 = *(short *)(param_1 + 8) - 1;
  *(ushort *)(param_1 + 8) = uVar4;
  if (0 < (int)((uint)uVar4 << 0x10)) {
    return;
  }
  if (*(char *)(param_1 + 3) == '\0') {
    if (DAT_1f800207 < 0x18) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if ((DAT_1f800207 < 0xb) && (bVar3 = false, DAT_1f800207 != 7)) goto LAB_08036a50;
  bVar3 = true;
LAB_08036a50:
  iVar7 = -1;
  if (bVar3) {
    if ((*(char *)(param_1 + 3) != '\0') && (0x2c60 < _DAT_1f800160)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar7 = 0;
    iVar6 = param_1;
    do {
      if (*(int *)(iVar6 + 0xc) == 0) goto LAB_08036ab0;
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar7 < 5);
    iVar7 = -1;
  }
LAB_08036ab0:
  if (-1 < iVar7) {
    iVar6 = func_0x00072ddc(param_1,1,2,0x5c);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0x1c) = 0x8012eec8;
      uVar2 = *(undefined1 *)(param_1 + 3);
      *(char *)(iVar6 + 0x5e) = (char)iVar7;
      *(undefined1 *)(iVar6 + 3) = uVar2;
    }
    *(int *)(param_1 + iVar7 * 4 + 0xc) = iVar6;
    if (iVar6 != 0) {
      *(undefined1 *)(iVar6 + 0x47) = *(undefined1 *)(*(short *)(param_1 + 10) + -0x7feb9df0);
      uVar5 = *(ushort *)(param_1 + 10) + 1 & 0xf;
      *(short *)(param_1 + 10) = (short)uVar5;
      if (*(char *)(iVar6 + 0x47) == *(char *)(uVar5 + 0x80146210)) {
        *(undefined2 *)(param_1 + 8) = 0x78;
        halt_baddata();
      }
      if (*(char *)(iVar6 + 0x47) == '\0') {
        *(undefined2 *)(param_1 + 8) = 0xf0;
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 8) = 0x5a;
      halt_baddata();
    }
  }
  *(undefined2 *)(param_1 + 8) = 0x96;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

