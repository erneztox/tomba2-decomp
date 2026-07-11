// FUN_0802b690

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802b690(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 7);
  uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 8);
  if (bVar1 == 2) {
    uVar3 = *(short *)(param_1 + 0x48) + *(short *)(param_1 + 0x4e);
    iVar2 = uVar5 + ((int)((uint)uVar3 << 0x10) >> 0x14);
    sVar4 = (short)iVar2;
    *(ushort *)(param_1 + 0x48) = uVar3;
    if ((int)*(short *)(param_1 + 0x40) <= iVar2 * 0x10000 >> 0x10) {
      sVar4 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar4 + -1;
      if (sVar4 == 1) {
        *(undefined1 *)(param_1 + 7) = 0;
        halt_baddata();
      }
LAB_0802b858:
      *(short *)(param_1 + 0x48) = -*(short *)(param_1 + 0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 3) {
      if (bVar1 != 1) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 3) == '\0') {
        *(undefined2 *)(param_1 + 0x4e) = 0x20;
        *(undefined2 *)(param_1 + 0x42) = 2;
        *(undefined2 *)(param_1 + 0x48) = 0;
        *(undefined2 *)(param_1 + 0x40) = 0xb;
        func_0x00074590(0x87,0,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x4e) = 0x10;
      *(undefined2 *)(param_1 + 0x40) = 0xb;
      *(undefined2 *)(param_1 + 0x48) = 0;
      *(undefined2 *)(param_1 + 0x42) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 3) {
      if (*(char *)(param_1 + 3) != '\0') {
        *(undefined2 *)(param_1 + 0x48) = 0x10;
        *(undefined2 *)(param_1 + 0x4e) = 0xfff0;
        *(undefined2 *)(param_1 + 0x42) = 3;
        *(undefined2 *)(param_1 + 0x40) = 0;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x48) = 0x10;
      *(undefined2 *)(param_1 + 0x4e) = 0xffe0;
      *(undefined2 *)(param_1 + 0x42) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 4) {
      halt_baddata();
    }
    uVar3 = *(short *)(param_1 + 0x48) + *(short *)(param_1 + 0x4e);
    iVar2 = uVar5 + ((int)((uint)uVar3 << 0x10) >> 0x14);
    *(ushort *)(param_1 + 0x48) = uVar3;
    sVar4 = (short)iVar2;
    if (iVar2 * 0x10000 >> 0x10 <= (int)*(short *)(param_1 + 0x40)) {
      sVar4 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar4 + -1;
      if (sVar4 != 1) goto LAB_0802b858;
      *(undefined1 *)(param_1 + 7) = 0;
      sVar4 = *(short *)(param_1 + 0x40);
    }
  }
  if ((((*(char *)(param_1 + 0x29) != '\0') && (*(short *)(*(int *)(param_1 + 0xc0) + 8) < sVar4))
      && ((DAT_800e7fc5 & 1) == 0)) && (DAT_800e7fe4 == '\0')) {
    *(undefined2 *)(param_1 + 0x7c) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x7c) = 0;
  *(short *)(*(int *)(param_1 + 0xc0) + 8) = sVar4;
  *(short *)(*(int *)(param_1 + 0xc4) + 8) = sVar4;
  if (*(char *)(param_1 + 3) == '\x02') {
    *(short *)(*(int *)(param_1 + 200) + 8) = sVar4;
  }
  return;
}

