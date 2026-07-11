// FUN_080185d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801860c) */

void FUN_080185d8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      iVar2 = func_0x0009a450();
      *(int *)(param_1 + 0x54) = iVar2 >> 9;
      iVar2 = func_0x0009a450();
      *(int *)(param_1 + 0x58) = iVar2 >> 9;
      iVar2 = func_0x0009a450();
      *(int *)(param_1 + 0x5c) = iVar2 >> 9;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffff6;
      bVar1 = *(byte *)(param_1 + 4);
    }
    if (bVar1 == 1) {
      if (-1 < *(char *)(param_1 + 6)) {
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x10';
      }
      uVar3 = (uint)*(byte *)(param_1 + 5) + ((int)(0x60 - (uint)*(byte *)(param_1 + 5)) >> 4);
      *(char *)(param_1 + 5) = (char)uVar3;
      if (0x3f < (uVar3 & 0xff)) {
        *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      bVar1 = *(char *)(param_1 + 6) - 5;
      *(byte *)(param_1 + 6) = bVar1;
      *(byte *)(param_1 + 5) =
           *(byte *)(param_1 + 5) + (char)((int)(0x60 - (uint)*(byte *)(param_1 + 5)) >> 4);
      if (bVar1 < 10) {
        *(undefined1 *)(param_1 + 4) = 3;
        halt_baddata();
      }
    }
    *(undefined1 *)(param_1 + 1) = 1;
    *(short *)(param_1 + 0x48) =
         *(short *)(param_1 + 0x48) + (short)(*(uint *)(param_1 + 0x54) >> 3);
    *(short *)(param_1 + 0x4a) =
         *(short *)(param_1 + 0x4a) + (short)(*(uint *)(param_1 + 0x58) >> 3);
    *(short *)(param_1 + 0x4c) =
         *(short *)(param_1 + 0x4c) + (short)(*(uint *)(param_1 + 0x5c) >> 3);
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + *(short *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 3;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

