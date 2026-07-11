// FUN_08042bfc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08042c34) */

void FUN_08042bfc(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      *(undefined4 *)(param_1 + 0x50) = 0x105010;
      *(undefined4 *)(param_1 + 0x3c) = 0x801433fc;
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      if ((bVar2 != 2) ||
         (sVar3 = *(short *)(param_1 + 0x54) + 0xcc, *(short *)(param_1 + 0x54) = sVar3,
         sVar3 < 0x1000)) {
        iVar4 = func_0x0002b278(param_1);
        if (iVar4 != 0) {
          uVar5 = (*(int *)(param_1 + 0x58) << 8) >> 0x10;
          *(uint *)(param_1 + 0x50) = uVar5 << 0x10 | uVar5 * 0x500 | uVar5;
          cVar1 = *(char *)(param_1 + 0x29);
          bVar2 = cVar1 + 4;
          *(byte *)(param_1 + 0x29) = bVar2;
          if (0x4f < bVar2) {
            *(char *)(param_1 + 0x29) = cVar1 + -0x4c;
            halt_baddata();
          }
        }
        return;
      }
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  else if (bVar2 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

