// FUN_0801b7c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b7c4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  undefined2 local_22;
  undefined2 local_1e;
  
  uVar4 = 0;
  iVar3 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      iVar2 = *(int *)(iVar3 + 0xc0);
      bVar1 = *(byte *)(iVar2 + 0x3e);
      if (bVar1 == 1) {
        if (((*(char *)(param_1 + 0x29) != '\0') && ((int)*(short *)(param_1 + 0x60) == uVar4)) &&
           ((DAT_800e7fc5 & 1) == 0)) {
          _DAT_800e7eb2 = _DAT_800e7eb2 + *(short *)(iVar2 + 0x3a);
        }
        iVar2 = *(int *)(iVar3 + 0xc0);
        *(short *)(iVar2 + 2) = *(short *)(iVar2 + 2) + *(short *)(iVar2 + 0x3a);
        *(short *)(*(int *)(iVar3 + 0xc0) + 0x3a) = *(short *)(*(int *)(iVar3 + 0xc0) + 0x3a) + 1;
        iVar2 = *(int *)(iVar3 + 0xc0);
        if (0x21c < *(short *)(iVar2 + 2)) {
          *(char *)(iVar2 + 0x3e) = *(char *)(iVar2 + 0x3e) + '\x01';
          *(undefined4 *)(*(int *)(iVar3 + 0xc0) + 0x40) = 0;
          local_26 = *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x2c);
          local_22 = *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x30);
          local_1e = *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x34);
          func_0x0003116c(8,auStack_28,0xffffffe0);
          func_0x00074590(7,0,0);
        }
        if ((uVar4 & 1) == 0) {
          *(short *)(*(int *)(iVar3 + 0xc0) + 8) = *(short *)(*(int *)(iVar3 + 0xc0) + 8) + -8;
        }
        else {
          *(short *)(*(int *)(iVar3 + 0xc0) + 8) = *(short *)(*(int *)(iVar3 + 0xc0) + 8) + 8;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 2) {
        if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((*(char *)(param_1 + 0x29) != '\0') && ((int)*(short *)(param_1 + 0x60) == uVar4)) {
          *(undefined1 *)(iVar2 + 0x3e) = 1;
          *(ushort *)(*(int *)(param_1 + *(short *)(param_1 + 0x60) * 4 + 0xc0) + 0x3a) =
               (ushort)*(byte *)(param_1 + 0x29) << 2;
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 2) {
          halt_baddata();
        }
        *(short *)(iVar2 + 2) = *(short *)(iVar2 + 2) + *(short *)(iVar2 + 0x3a) + 10;
        iVar2 = *(int *)(iVar3 + 0xc0);
        if (0x28a < *(short *)(iVar2 + 2)) {
          *(char *)(iVar2 + 0x3e) = *(char *)(iVar2 + 0x3e) + '\x01';
          *(undefined1 *)(*(int *)(iVar3 + 0xc0) + 0x3f) = 1;
        }
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar4 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return;
}

